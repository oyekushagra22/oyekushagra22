# Structure of a C++ Program

## Basic Structure of a C++ Program

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";
    return 0;
}
```

This small program contains the **core building blocks of C++**.

We will break it down **line by line**.

---

# 1. Header Files (`#include`)

```cpp
#include <iostream>
```

## What is a Header File?

A **header file** contains declarations of functions, classes, and objects that can be used in your program.

Think of header files like **toolboxes**.

| Header File   | Purpose                |
| ------------- | ---------------------- |
| `<iostream>`  | Input / Output         |
| `<vector>`    | Dynamic array          |
| `<algorithm>` | Sorting and algorithms |
| `<cmath>`     | Math functions         |
| `<string>`    | String operations      |

Example:

```cpp
#include <iostream>
```

This allows you to use:

* `cout`
* `cin`
* `endl`

Example:

```cpp
cout << "Hello";
```

Without including `<iostream>` this will give a **compile error**.

---

# 2. Preprocessor Directive

`#include` is called a **preprocessor directive**.

## What is a Preprocessor?

Before compilation, C++ runs a **preprocessor step** that handles:

* `#include`
* `#define`
* `#ifdef`
* `#ifndef`

Example:

```cpp
#define PI 3.14
```

The preprocessor replaces `PI` with `3.14`.

---

# 3. Namespace

```cpp
using namespace std;
```

## What is Namespace?

A **namespace** is used to avoid **name conflicts**.

Many libraries can have functions with the same name.

Example:

Two libraries both have:

```
print()
```

Namespaces prevent conflicts.

---

## Standard Namespace

`std` stands for **standard namespace**.

Example **without namespace**:

```cpp
std::cout << "Hello";
```

Example **with namespace**:

```cpp
using namespace std;

cout << "Hello";
```

---

## Better Practice (Advanced)

Instead of writing:

```cpp
using namespace std;
```

Large projects use:

```cpp
std::cout << "Hello";
```

because it avoids conflicts.

---

# 4. Main Function

```cpp
int main()
{
}
```

## What is `main()`?

`main()` is the **entry point of every C++ program**.

Execution **always starts from `main()`**.

### Syntax

```cpp
int main()
{
    // code
}
```

### Why `int`?

`int` means the function returns an **integer value to the operating system**.

---

## Return Statement

```cpp
return 0;
```

Meaning:

Program executed **successfully**.

Example:

```cpp
int main()
{
    return 0;
}
```

---

# 5. Curly Braces `{ }`

Curly braces define a **block of code**.

Example:

```cpp
int main()
{
    cout << "Hello";
}
```

Everything inside `{}` belongs to the function.

---

# 6. Output Statement

```cpp
cout << "Hello World";
```

## What is `cout`?

`cout` is used to **print output to the console**.

It belongs to the **iostream library**.

---

## `<<` Operator

`<<` is called the **insertion operator**.

It inserts data into the **output stream**.

Example:

```cpp
cout << "Hello";
```

---

## Multiple Output

```cpp
cout << "Hello " << "World";
```

Output:

```
Hello World
```

---

# 7. Semicolon `;`

Every C++ statement ends with a **semicolon**.

Example:

```cpp
cout << "Hello";
```

Without semicolon:

Compilation error.

---

# 8. Comments

Comments are used to **explain code**.

They are **ignored by the compiler**.

### Single Line Comment

```cpp
// This is a comment
```

### Multi-line Comment

```cpp
/*
This is
multiple
line comment
*/
```

---

# Full Example with Explanation

```cpp
#include <iostream>   // header file

using namespace std;  // namespace

int main()            // main function
{
    cout << "Welcome to C++";   // output

    return 0;         // program success
}
```

Output

```
Welcome to C++
```

---

# Execution Flow of a C++ Program

Understanding this is **very important**.

```
Write Code
   ↓
Preprocessor
   ↓
Compiler
   ↓
Object File
   ↓
Linker
   ↓
Executable File
   ↓
Program Runs
```

---

# Step-by-Step

## 1️⃣ Write Code

You write code in a `.cpp` file.

Example:

```
hello.cpp
```

---

## 2️⃣ Preprocessing

Handles:

* `#include`
* `#define`

---

## 3️⃣ Compilation

Compiler converts code into **object code**.

Example compilers:

* `g++`
* `clang`

Command:

```
g++ hello.cpp
```

---

## 4️⃣ Linking

Combines:

* object file
* libraries

to create an **executable file**.

---

## 5️⃣ Execution

Program runs.

Example:

```
./a.out
```

---

# Real C++ Program Structure (Large Projects)

In real projects, structure looks like:

```
project/
 ├── main.cpp
 ├── utils.cpp
 ├── utils.h
 ├── classes.cpp
 └── classes.h
```

Example:

### Header File

`car.h`

```cpp
class Car {
public:
    void start();
};
```

### Implementation File

`car.cpp`

```cpp
#include "car.h"

void Car::start() {
}
```

### Main File

`main.cpp`

```cpp
#include "car.h"

int main() {
}
```

---

# Common Beginner Mistakes

### 1. Forgetting `;`

Wrong:

```cpp
cout << "Hello"
```

---

### 2. Forgetting `#include`

Wrong:

```cpp
cout << "Hello";
```

Error occurs.

---

### 3. Forgetting `return 0`

Not mandatory in modern C++, but **good practice**.

---

# Interview Questions from This Topic

Very common questions.

### 1. What is `main()` in C++?

Entry point of **program execution**.

### 2. What is `namespace std`?

Standard library namespace.

### 3. What does `#include` do?

Includes header files during **preprocessing**.

### 4. Difference between compiler and linker?

Compiler → converts code to **object file**
Linker → combines **libraries with object files**.

---

# Summary

| Concept    | Meaning                 |
| ---------- | ----------------------- |
| `#include` | Adds libraries          |
| Namespace  | Avoids naming conflicts |
| `main()`   | Program starting point  |
| `cout`     | Output stream           |
| `;`        | Statement terminator    |

---

# How `#include <iostream>` Works Internally

When you write:

```cpp
#include <iostream>
```

the **preprocessor inserts the contents of the iostream header** into your program.

But internally several mechanisms make this safe and efficient.

---

# Step 1: Preprocessor Finds the Header File

Because you used:

```
#include <iostream>
```

the compiler searches **system include directories**.

Typical paths:

Linux / Mac

```
/usr/include/c++
/usr/include
```

Windows (Visual Studio)

```
C:\Program Files\Microsoft Visual Studio\...\include
```

Inside that directory there is a file called:

```
iostream
```

(not `.h` because modern C++ headers do not use `.h`).

---

# Step 2: Header File Is Inserted

Your program:

```
#include <iostream>

int main() {
}
```

After preprocessing becomes something like:

```
// contents of iostream
// thousands of lines

int main() {
}
```

But `iostream` itself includes many other headers.

Simplified structure:

```
iostream
   ↓
ostream
   ↓
ios
   ↓
streambuf
   ↓
basic_ios
```

So one include may expand to **tens of thousands of lines**.

---

# Step 3: Header Guards Prevent Multiple Inclusion

If a header file is included multiple times, it can cause **redefinition errors**.

Example problem:

```
#include <iostream>
#include <iostream>
```

Headers solve this using **header guards**.

Example:

```cpp
#ifndef IOSTREAM_H
#define IOSTREAM_H

// header content

#endif
```

How it works:

First inclusion
`IOSTREAM_H` not defined → include content

Second inclusion
`IOSTREAM_H` defined → skip content

---

## Modern Alternative

```
#pragma once
```

This means:

```
include this file only once
```

---

# Step 4: What `iostream` Actually Contains

The `iostream` header defines **standard input/output objects**.

| Object      | Purpose         |
| ----------- | --------------- |
| `std::cout` | Standard output |
| `std::cin`  | Standard input  |
| `std::cerr` | Error output    |
| `std::clog` | Logging         |

Example:

```cpp
std::cout << "Hello";
```

---

# Step 5: `cout` Is Actually an Object

`cout` is **not a function**.

It is an **object of class `ostream`**.

Conceptually:

```cpp
class ostream {
public:
    ostream& operator<<(const char*);
};
```

Then the standard library creates:

```
extern ostream cout;
```

So when you write:

```
cout << "Hello";
```

you call:

```
ostream::operator<<()
```

---

# Step 6: Operator Overloading

The `<<` operator is **overloaded**.

Meaning it works for many types.

Examples:

```
cout << 10;
cout << 3.14;
cout << "Hello";
```

Conceptually:

```
operator<<(ostream, int)
operator<<(ostream, double)
operator<<(ostream, const char*)
```

---

# Step 7: Output Buffering

`cout` does not immediately print to the screen.

It first writes to a **buffer**.

Flow:

```
program
 ↓
cout buffer
 ↓
OS output
 ↓
terminal
```

Buffer flushes when:

* `endl` used
* program ends
* buffer full

Example:

```
cout << "Hello" << endl;
```

`endl` forces a flush.

---

# Step 8: Linking With Standard Library

Even after compilation the program still needs:

* `iostream` implementation
* `ostream` functions
* stream buffers

These exist in the **C++ standard library**.

During linking the linker connects your program to:

```
libstdc++
```

Without linking you would get:

```
undefined reference to std::cout
```

---

# Complete Flow of `#include <iostream>`

```
Write code
     ↓
Preprocessor
     ↓
Insert iostream header
     ↓
Compiler
     ↓
Object file
     ↓
Linker links std library
     ↓
Executable created
```

---

# Why `<iostream>` Slows Compilation

Because including it expands **huge amounts of code**.

Rough estimate:

```
iostream include → 20,000+ lines
```

Large projects avoid including it unnecessarily.

---

# Professional Practice

Instead of including heavy headers everywhere developers use **forward declarations**.

Example:

```cpp
class ostream;
```

This reduces compile time.

---

# Very Important Interview Fact

`#include` is **not a function**.

It is **text substitution performed by the preprocessor**.

Meaning:

```
copy contents of header file
```

Nothing more.

---

# Simple Mental Model

Think of `#include` as:

```
COPY → PASTE header file here
```

Then the compiler compiles the result.

---

⬅️ [Back to Main README](../../README.md)
