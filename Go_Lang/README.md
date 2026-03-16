<h1 align="center">Go (Golang) Mastery Notes</h1>

<p align="center">
Learning and documenting <b>Go from fundamentals to advanced backend and distributed systems concepts</b> for software engineering interviews and deep programming knowledge.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-Go-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Focus-Backend%20Systems-green?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Topics-Beginner%20to%20Expert-orange?style=for-the-badge"/>
</p>

---

# 📚 About This Repository

This repository documents my **Go (Golang) learning journey**, where I write notes, explore concepts, and implement examples.

The goal of this repository is to:

* Build strong **Go fundamentals**
* Understand **Go concurrency deeply**
* Learn **backend development with Go**
* Explore **distributed systems**
* Understand **Go runtime and memory model**
* Prepare for **software engineering interviews**

Instead of memorizing syntax, the focus is on **understanding how Go works internally**.

---

# 🧠 What is Go?

Go (Golang) is an **open-source statically typed compiled programming language** developed at Google.

It was designed to build **simple, scalable, and high-performance software**.

Go is widely used in systems where **concurrency, reliability, and performance are critical**.

Examples include:

* Cloud infrastructure
* Backend services
* Microservices
* Distributed systems
* DevOps tools

Technologies built with Go include:

* Docker
* Kubernetes
* Terraform
* Prometheus
* CockroachDB

---

# 🛣️ Learning Roadmap (Beginner → Expert)

This repository follows a structured roadmap covering **core Go concepts step by step**.

---

# 🟢 Level 1 — Go Foundations

Focus on understanding the **basic building blocks of Go**.

Topics covered:

* What is Go
* History of Go
* Why Go was created
* Go vs C++ vs Java vs Python
* Advantages of Go
* Where Go is used
* Companies using Go

Companies using Go:

* Google
* Uber
* Dropbox
* Netflix
* Docker

Environment setup:

* Installing Go
* GOPATH
* GOROOT
* Go workspace
* Go module system

Example program:

```go
package main

import "fmt"

func main() {
    fmt.Println("Hello World")
}
```

Concepts explored:

* package
* main package
* imports
* functions
* compilation
* go run vs go build

---

# 🧩 Level 2 — Go Language Basics

Variables:

* var keyword
* short declaration `:=`
* zero values
* multiple variable declaration

Data Types

Basic types:

* int
* float
* bool
* string

Numeric types:

* int8
* int16
* int32
* int64
* uint
* uintptr

Constants

* const keyword
* iota

Example:

```go
const (
    Monday = iota
    Tuesday
    Wednesday
)
```

---

# 🔁 Level 3 — Control Flow

Conditional statements:

* if
* if else
* nested if

Switch:

* switch without condition
* switch with condition
* type switch

Loops:

Go has only one loop:

* for

Types:

* classic loop
* while style loop
* infinite loop
* range loop

---

# ⚙ Level 4 — Functions

Function basics:

```go
func add(a int, b int) int {
    return a + b
}
```

Concepts explored:

* multiple return values
* named return values
* variadic functions
* recursion
* anonymous functions
* higher order functions
* closures

Example:

```go
func add(a int, b int) (int, int) {
    return a+b, a-b
}
```

---

# 📦 Level 5 — Arrays, Slices, and Maps

Arrays:

```go
var arr [5]int
```

Concepts:

* fixed size
* memory layout
* pass by value

Slices:

```go
nums := []int{1,2,3}
```

Deep concepts:

* slice internals
* slice header
* length vs capacity
* append
* slice resizing
* slice backing array

Maps:

```go
m := map[string]int{
    "apple": 10,
}
```

Concepts:

* hash table implementation
* map lookup
* map delete
* map iteration
* concurrency issues with maps

---

# 🧱 Level 6 — Structs

Example:

```go
type Person struct {
    Name string
    Age  int
}
```

Concepts:

* struct initialization
* embedded structs
* struct tags
* JSON tags

Example:

```go
type User struct {
    Name string `json:"name"`
}
```

---

# 👉 Level 7 — Pointers in Go

Example:

```go
var x int = 10
var p *int = &x
```

Concepts:

* pointers
* dereferencing
* passing pointers to functions
* pointers vs values

Important difference from C++:

Go **does not support pointer arithmetic**.

---

# 🧩 Level 8 — Methods

Example:

```go
type Rectangle struct {
    width int
    height int
}

func (r Rectangle) area() int {
    return r.width * r.height
}
```

Concepts:

* receiver
* value receiver
* pointer receiver

---

# 🎭 Level 9 — Interfaces

Example:

```go
type Shape interface {
    Area() float64
}
```

Concepts:

* implicit interfaces
* interface implementation
* empty interface
* interface{}

Type assertions:

```
value.(int)
```

Type switches.

---

# ⚠ Level 10 — Error Handling

Go uses **error values instead of exceptions**.

Example:

```go
func divide(a,b int) (int,error)
```

Concepts:

* errors.New
* custom errors
* panic
* recover
* best practices

---

# 📦 Level 11 — Packages and Modules

Packages:

* creating packages
* exporting identifiers
* visibility rules

Rule:

* Capital letter → public
* small letter → private

Modules:

* go mod init
* go mod tidy
* go mod download

Concepts:

* dependency management
* versioning

---

# 📂 Level 12 — File Handling

Reading files:

```
os.Open()
```

Writing files:

```
os.Create()
```

Concepts:

* buffers
* file permissions

---

# ⚡ Level 13 — Concurrency

Goroutines:

```
go function()
```

Concepts:

* lightweight threads
* scheduler
* stack growth

Channels:

```
ch := make(chan int)
```

Example:

```
ch <- 5
x := <-ch
```

Concepts:

* blocking channels
* buffered channels
* directional channels

Select statement:

```
select {
case msg := <-ch1:
case msg := <-ch2:
}
```

Concepts:

* multiplexing channels
* non-blocking operations

---

# 🔒 Level 14 — Synchronization

Tools:

* sync.Mutex
* sync.RWMutex
* sync.WaitGroup
* sync/atomic

---

# ⚙ Level 15 — Go Runtime Internals

Go Scheduler model:

* G → goroutine
* M → machine (OS thread)
* P → processor

Concepts:

* work stealing
* scheduling

Garbage collector:

* mark and sweep
* tri-color marking
* concurrent GC

---

# 🧠 Level 16 — Memory Model

Concepts:

* stack vs heap
* escape analysis
* memory allocation
* pointer escape

Example:

```
go build -gcflags="-m"
```

---

# 🪞 Level 17 — Reflection

Package:

* reflect

Concepts:

* dynamic type inspection
* struct field access

---

# 🔷 Level 18 — Generics

Example:

```go
func Print[T any](value T)
```

Concepts:

* type parameters
* constraints
* comparable

Example:

```go
func max[T comparable](a,b T) T
```

---

# 🧪 Level 19 — Testing

Built-in testing tool:

```
go test
```

Concepts:

* unit tests
* benchmarks
* table driven tests
* mocks

---

# 🌐 Level 20 — Web Development

HTTP server:

```
net/http
```

Example:

```go
http.HandleFunc("/", handler)
```

Concepts:

* routing
* middleware
* request lifecycle

Frameworks:

* Gin
* Fiber
* Echo

---

# 🗄 Level 21 — Databases

SQL:

```
database/sql
```

Drivers:

* PostgreSQL
* MySQL
* SQLite

ORM:

* GORM
* Ent

---

# 🧩 Level 22 — Microservices

Concepts:

* REST APIs
* gRPC
* service discovery
* load balancing

Technologies:

* Docker
* Kubernetes

---

# 🌍 Level 23 — Distributed Systems

Concepts:

* message queues
* event driven architecture
* retries
* circuit breaker

Technologies:

* Kafka
* Redis

---

# 🚀 Level 24 — Performance Optimization

Concepts:

* profiling
* pprof
* CPU profiling
* memory profiling
* goroutine leaks
* benchmarking

---

# 🧠 Level 25 — Advanced Go

Concepts:

* design patterns in Go
* dependency injection
* functional options pattern
* builder pattern
* clean architecture
* domain driven design

---

# 🛠 Level 26 — Go Tooling

Tools:

* go fmt
* go vet
* go test
* go build
* go mod

---

# 🚀 Level 27 — Real Projects

Projects to build:

* REST API server
* URL shortener
* distributed task queue
* chat server
* load balancer
* rate limiter
* web crawler
* distributed cache

---

# 🎯 Goals

✔ Master Go programming deeply  
✔ Build scalable backend systems  
✔ Understand concurrency and distributed systems  
✔ Prepare for software engineering interviews  

---

# 👨‍💻 Author

Kushagra Raghav

---

# ⭐ If you find this repository helpful

Consider giving it a **star ⭐**.

It motivates me to continue documenting more concepts and examples.
