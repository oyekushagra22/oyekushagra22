# 1. Introduction to C++

C++ is a **general-purpose, high-performance programming language** that supports multiple programming paradigms, mainly:

* Procedural programming
* Object-Oriented Programming (OOP)
* Generic programming
* Functional programming (partially)

It was designed to give **low-level hardware control (like C)** while also providing **high-level abstractions (like classes and objects)**.

C++ is widely used in:

* Systems programming
* Game engines
* High-frequency trading
* Operating systems
* Embedded systems
* Performance-critical software

---

# 2. History of C++

## 1️⃣ C Language (1972)

Developed by **Dennis Ritchie** at Bell Labs.

Used to build the **Unix operating system**.

Features:

* Provided low-level control of memory and hardware.
* Very efficient for system programming.

However, large projects became difficult because **C lacked abstraction and modularity**.

---

## 2️⃣ Birth of C++ (1979–1985)

C++ was created by **Bjarne Stroustrup** at Bell Laboratories.

Original name:

**“C with Classes”**

Goals:

* Extend C with **Object-Oriented Programming**
* Maintain **high performance**
* Keep **compatibility with C**

First commercial release: **1985**

---

## 3️⃣ Standardization of C++

Over time C++ evolved through multiple standards.

| Standard | Year | Important Features                           |
| -------- | ---- | -------------------------------------------- |
| C++98    | 1998 | First official standard                      |
| C++03    | 2003 | Bug fixes                                    |
| C++11    | 2011 | Major upgrade (auto, lambda, smart pointers) |
| C++14    | 2014 | Improvements                                 |
| C++17    | 2017 | Filesystem, parallel algorithms              |
| C++20    | 2020 | Concepts, modules, ranges                    |
| C++23    | 2023 | Performance and library updates              |

---

# 3. Why C++ is Used

C++ is still one of the **most powerful programming languages** because of several advantages.

---

## 1️⃣ High Performance

C++ programs compile directly to **machine code**, making them extremely fast.

Examples where speed is critical:

* Game engines
* Trading systems
* Operating systems

---

## 2️⃣ Memory Control

C++ allows **manual memory management**.

Example:

```cpp
int *ptr = new int;
delete ptr;
```

This gives developers **full control over RAM**, unlike languages like Java or Python.

---

## 3️⃣ Object-Oriented Programming

C++ supports:

* Classes
* Objects
* Inheritance
* Polymorphism
* Encapsulation
* Abstraction

Example:

```cpp
class Car {
public:
    void start() {
        cout << "Car started";
    }
};
```

This helps build **large scalable software systems**.

---

## 4️⃣ Backward Compatibility with C

Most **C programs can run in C++**.

Example:

```cpp
printf("Hello");
```

C++ allows mixing **C style + modern OOP style**.

---

## 5️⃣ Standard Template Library (STL)

C++ provides powerful built-in **data structures and algorithms**.

Examples:

* vector
* map
* set
* stack
* queue

Algorithms:

* sort()
* binary_search()

Example:

```cpp
vector<int> v = {1,2,3,4};
```

---

## 6️⃣ Used in Competitive Programming

Reasons:

* Fast execution
* Powerful STL
* Memory control

Most competitive programmers use **C++ for coding interviews and contests**.

---

# 4. C vs C++

| Feature            | C          | C++            |
| ------------------ | ---------- | -------------- |
| Programming Type   | Procedural | Multi-paradigm |
| OOP Support        | ❌ No       | ✅ Yes          |
| Classes            | ❌ No       | ✅ Yes          |
| Encapsulation      | ❌ No       | ✅ Yes          |
| Polymorphism       | ❌ No       | ✅ Yes          |
| Templates          | ❌ No       | ✅ Yes          |
| STL                | ❌ No       | ✅ Yes          |
| Exception Handling | ❌ No       | ✅ Yes          |

---

## Example Difference

### C Program

```c
#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}
```

### C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```

### Key Concept Difference

C focuses on:

* Functions
* Procedures

C++ focuses on:

* Objects
* Classes

---

# 5. Applications of C++

C++ is used in many **high-performance industries**.

---

## 1️⃣ Operating Systems

Major OS components are written in **C/C++**.

Examples:

* Windows
* Linux kernel parts
* macOS components

---

## 2️⃣ Game Development

Most **game engines** use C++.

Examples:

* Unreal Engine
* Unity core components
* CryEngine

Reason:

* Direct GPU access
* Maximum performance

---

## 3️⃣ High Frequency Trading (HFT)

Banks and trading companies use C++ because **milliseconds matter**.

Used in:

* Stock exchanges
* Trading algorithms

---

## 4️⃣ Embedded Systems

C++ runs on:

* Cars
* Medical devices
* IoT systems
* Robots

Example:

Autonomous driving software.

---

## 5️⃣ Software Applications

Many famous software programs use C++.

Examples:

* Chrome browser
* Adobe Photoshop
* Microsoft Office
* MySQL database

---

## 6️⃣ Game Consoles

Consoles use C++ for performance.

Examples:

* PlayStation
* Xbox
* Nintendo engines

---

## 7️⃣ AI and Machine Learning Libraries

Many ML libraries are written in **C++ for speed**.

Examples:

* TensorFlow backend
* PyTorch backend
* OpenCV

---

# 6. Key Features of C++

Important properties:

1️⃣ Object-Oriented Programming
2️⃣ High performance
3️⃣ Low-level memory access
4️⃣ Portable across platforms
5️⃣ Rich standard library
6️⃣ Multi-paradigm programming

---

# 7. Simple C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to C++";
    return 0;
}
```

Output

```
Welcome to C++
```

---

# 8. Summary

| Topic    | Key Idea                             |
| -------- | ------------------------------------ |
| History  | Developed by Bjarne Stroustrup       |
| Purpose  | Combine power of C + OOP             |
| Strength | High performance                     |
| Paradigm | Multi-paradigm language              |
| Uses     | Games, OS, trading, embedded systems |

---

⬅️ [Back to Main README](../../README.md)
