# What Happens Internally When You Write `cout << "Hello";`

Let’s go one level deeper and see **what the compiler roughly generates** when you write:

```cpp
cout << "Hello";
```

We will follow the path from:

```
C++ → Assembly → CPU → Screen
```

---

# 1. Original C++ Code

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello";
}
```

Your code is **high-level**.

The compiler must convert it into **machine instructions that the CPU understands**.

---

# 2. What the Compiler Sees Internally

After preprocessing and resolving namespaces, the compiler roughly interprets the code like this:

```cpp
std::operator<<(std::cout, "Hello");
```

or

```cpp
std::cout.operator<<("Hello");
```

So the compiler generates a **function call to the overloaded operator**.

---

# 3. Simplified Assembly Generated

Compilers generate **assembly instructions**.

A simplified example (x86-64 style) might look like:

```asm
main:
    mov rdi, offset std::cout
    mov rsi, offset "Hello"
    call std::operator<<
    ret
```

### Explanation

| Instruction          | Meaning                       |
| -------------------- | ----------------------------- |
| `mov rdi, std::cout` | Put cout object into register |
| `mov rsi, "Hello"`   | Load string address           |
| `call operator<<`    | Call output function          |
| `ret`                | Return from main              |

Registers like **RDI and RSI** are used to pass function arguments.

---

# 4. Inside `operator<<`

Inside the standard library something like this happens conceptually:

```cpp
ostream& operator<<(ostream& os, const char* str)
{
    while(*str)
    {
        os.rdbuf()->sputc(*str);
        str++;
    }

    return os;
}
```

### Explanation

1. Read characters from the string
2. Send them to the **stream buffer**
3. Return the stream object

---

# 5. Stream Buffer Writes Data

The stream buffer eventually calls a **low-level system write**.

Conceptual flow:

```
ostream
   ↓
streambuf
   ↓
write() system call
   ↓
operating system
```

---

# 6. OS System Call

On Linux the OS function may look like:

```c
write(1, "Hello", 5);
```

### Explanation

| Parameter | Meaning                |
| --------- | ---------------------- |
| `1`       | stdout file descriptor |
| `"Hello"` | memory address of data |
| `5`       | number of bytes        |

---

# 7. Operating System Handles Output

The OS sends characters to the **terminal device driver**.

```
Program
   ↓
libstdc++
   ↓
C standard library
   ↓
OS kernel
   ↓
terminal driver
   ↓
screen
```

---

# 8. CPU Executes Instructions

Finally the **CPU executes instructions** like:

```
LOAD address
MOVE data
CALL function
WRITE to device
```

The CPU **does not know C++**.

It only executes **machine instructions**.

---

# Complete End-to-End Flow

```
C++ Code
cout << "Hello"
      ↓
Compiler
      ↓
Assembly
      ↓
Machine Code
      ↓
CPU executes instructions
      ↓
ostream operator<<
      ↓
stream buffer
      ↓
OS write() syscall
      ↓
Terminal
      ↓
Hello appears on screen
```

---

# Interesting Fact

Even a tiny program like:

```cpp
cout << "Hello";
```

pulls in **thousands of lines of C++ standard library code** because of:

* streams
* templates
* buffering
* formatting

That is why **compiled binaries can be much larger than the source code**.

---

# Quick Visualization

```
C++ Program
      ↓
Compiler
      ↓
Assembly
      ↓
Machine Code
      ↓
CPU
      ↓
Standard Library
      ↓
Operating System
      ↓
Terminal Output
```

---

# Key Insight

That simple line:

```cpp
cout << "Hello";
```

actually involves:

* operator overloading
* stream classes
* buffers
* system calls
* CPU instructions

A lot happens **behind a single line of code**.
