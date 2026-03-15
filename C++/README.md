<h1 align="center">C++ Mastery Notes</h1>

<p align="center">
Learning and documenting <b>C++ from fundamentals to advanced systems-level concepts</b> for software engineering interviews and deep programming knowledge.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Focus-System%20Programming-green?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Topics-Beginner%20to%20Expert-orange?style=for-the-badge"/>
</p>

---

# 📚 About This Repository

This repository documents my **C++ learning journey**, where I write notes, explore concepts, and implement examples.

The goal of this repository is to:

* Build strong **C++ fundamentals**
* Understand **memory and pointers deeply**
* Master **Object Oriented Programming**
* Learn **STL and algorithms**
* Explore **Modern C++ features**
* Prepare for **software engineering interviews**

Instead of memorizing syntax, the focus is on **understanding how C++ works internally**.

---

# 🧠 What is C++?

C++ is a **general-purpose, high-performance programming language** developed as an extension of the C programming language.

It supports multiple paradigms:

* Procedural programming
* Object-oriented programming
* Generic programming
* Functional programming

C++ is widely used in systems where **performance and memory control are critical**.

Examples include:

* Operating systems
* Game engines
* High-frequency trading systems
* Embedded systems
* Databases
* Browsers

---

# 🛣️ Learning Roadmap (Beginner → Expert)

This repository follows a structured roadmap covering **core C++ concepts step by step**.

---

# 🟢 Level 1 — C++ Fundamentals

Focus on understanding the **basic building blocks of C++**.

Topics covered:

* [Introduction to C++](Fundamentals/introduction-cpp//README.md)
* [Structure of a C++ program](Fundamentals/C++_Program_Structure/README.md)
* [How #include <iostream> Works Internally](Fundamentals/Iostream_Works_Internally/README.md)
* [What Happens Internally When You Write cout << "Hello";](Fundamentals/Cout_internally_process/README.md)
* [How "Hello" Is Stored in Memory](Fundamentals/Hello_stored_internally/README.md)
* Variables and data types
* Operators
* Control statements
* Functions
* Recursion
* Inline functions

Example program:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```

---

# 🧠 Level 2 — Memory and Pointers

Pointers are one of the **most powerful and important features of C++**.

Topics covered:

* Memory model
* Stack memory
* Heap memory
* Pointer basics
* Pointer arithmetic
* Pointer to pointer
* Pointer to arrays
* Dynamic memory allocation

Example:

```cpp
int x = 10;
int* p = &x;
```

Dynamic memory example:

```cpp
int* arr = new int[10];
delete[] arr;
```

Concepts explored:

* Memory leaks
* Dangling pointers
* Null pointers

---

# 🏗 Level 3 — Object Oriented Programming

C++ supports powerful **object oriented programming concepts**.

Topics covered:

* Classes and objects
* Access modifiers
* Constructors
* Destructors
* Encapsulation
* Inheritance
* Polymorphism

Two types of polymorphism exist.

Compile-time polymorphism:

* Function overloading
* Operator overloading

Runtime polymorphism:

* Virtual functions
* Function overriding

---

# ⚙ Level 4 — Advanced C++ Core

After mastering OOP, the next step is understanding **advanced language features**.

Topics covered:

* Operator overloading
* Templates
* Exception handling
* File handling

Example:

```cpp
try {
    throw 10;
}
catch(int e) {
    cout << "Exception caught";
}
```

File handling streams:

* ifstream
* ofstream
* fstream

---

# 📦 Level 5 — STL (Standard Template Library)

The Standard Template Library provides powerful **data structures and algorithms**.

Containers include:

Sequence containers:

* vector
* list
* deque

Container adapters:

* stack
* queue
* priority_queue

Associative containers:

* set
* map
* multiset
* multimap

Unordered containers:

* unordered_map
* unordered_set

Important algorithms:

* sort
* find
* binary_search
* lower_bound
* upper_bound
* next_permutation

---

# 🔥 Level 6 — Modern C++ (Expert Level)

Modern C++ introduces powerful features that improve **performance, safety, and abstraction**.

Topics covered:

* Move semantics
* Smart pointers
* Lambda functions
* Multithreading
* RAII
* Rule of 3 / Rule of 5
* Template metaprogramming

Example lambda:

```cpp
auto add = [](int a, int b){
    return a + b;
};
```

Smart pointers:

* unique_ptr
* shared_ptr
* weak_ptr

Multithreading tools:

* thread
* mutex
* lock_guard
* atomic
* future

---

# 🧠 Advanced C++ Internals

These topics explore **how C++ works internally**.

Topics include:

* vtable
* object memory layout
* alignment and padding
* compilation model
* SFINAE
* constexpr
* template specialization
* concepts (C++20)
* coroutines

Understanding these topics leads to **expert-level C++ mastery**.

---

# 🎯 Goals

✔ Master C++ programming deeply
✔ Understand low-level memory concepts
✔ Build strong system programming skills
✔ Prepare for software engineering interviews

---

# 👨‍💻 Author

Kushagra Raghav

---

# ⭐ If you find this repository helpful

Consider giving it a **star ⭐**.

It motivates me to continue documenting more concepts and examples.
