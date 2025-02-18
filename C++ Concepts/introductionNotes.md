# C++ Notes

## Introduction
C++ is a high-level, general-purpose programming language that supports both **procedural** and **object-oriented programming (OOP)**. It is widely used for **game development, system programming, and high-performance applications** due to its **speed, flexibility, and rich Standard Library (STL)**.

---

## Key Features

### 1. Platform Dependence
- C++ is a **platform-dependent** language.
- The compiled binary works only on the system it was compiled for.
- Unlike Java, which runs on the JVM, C++ requires system-specific compilation.

### 2. Object-Oriented Programming (OOP)
- C++ follows **OOP principles**, which means it supports:
  - **Encapsulation** – Wrapping data and methods together to protect them from external interference.
  - **Abstraction** – Hiding implementation details and exposing only necessary functionality.
  - **Inheritance** – Allowing a new class to inherit properties and behavior from an existing class.
  - **Polymorphism** – Allowing the same function to behave differently based on input types.

### 3. Statically Typed Language
- C++ requires variable types to be **defined at compile time**.
- Example:
  ```cpp
  int number = 10; // The type (int) is explicitly mentioned.
  ```

### 4. Speed & Performance
- C++ is **faster** than many high-level languages like Python or Java.
- It is **closer to the system hardware**, making it highly efficient.
- Example of a simple **fast execution** program:
  ```cpp
  #include <iostream>
  using namespace std;

  int main() {
      cout << "Hello, C++!" << endl;
      return 0;
  }
  ```

### 5. Memory Management
- Unlike Java and Python, **C++ gives full control over memory**.
- You can manually allocate and deallocate memory using `new` and `delete`.
- Example:
  ```cpp
  int* ptr = new int(5); // Dynamic allocation
  delete ptr; // Free allocated memory
  ```
- **Garbage Collection**: Unlike Java, C++ does not have automatic garbage collection. However, **smart pointers** (introduced in C++11) help manage memory efficiently.

---

## Evolution of C++
C++ has evolved over the years with new features and improvements:

| C++ Version | Key Features |
|-------------|-------------|
| **C++98**  | Standardized the language |
| **C++03**  | Minor bug fixes and improvements |
| **C++11**  | Introduced `auto`, `lambda functions`, smart pointers (`unique_ptr`, `shared_ptr`) |
| **C++14**  | Improved features of C++11 |
| **C++17**  | Added STL enhancements, new data types |
| **C++20**  | Introduced concepts, coroutines, modules, and ranges |

---

## Why Learn C++?
C++ is widely used in various fields due to its **efficiency and versatility**:
- **Game Development** – Used in Unreal Engine for high-performance gaming.
- **Operating Systems** – Many parts of Windows, Linux, and MacOS are written in C++.
- **Embedded Systems** – C++ is used in cars, medical devices, and IoT products.
- **Finance & Trading** – High-frequency trading platforms rely on C++ for speed.
- **Competitive Programming** – The **Standard Template Library (STL)** provides powerful data structures and algorithms.

---

## Where to Write & Compile C++ Code?
C++ is a **compiled language**, meaning it needs to be compiled before execution.

- You write C++ code in `.cpp` files.
- It is compiled using a compiler like **G++ (GNU Compiler Collection)**.
- Example:
  ```sh
  g++ program.cpp -o output
  ./output
  ```
- Popular C++ IDEs and Compilers:
  - **GCC (Linux, Windows via MinGW)**
  - **MSVC (Microsoft Visual C++)**
  - **Clang**
  - **CodeBlocks, Dev-C++, and Visual Studio Code** (for easy development)

---

## Creator of C++
C++ was created by **Bjarne Stroustrup** in **1979** at Bell Labs.  
He designed it as an extension of C to provide **object-oriented programming features** while maintaining the efficiency of C.

---

## Final Notes
- **Don't learn C++ just for LeetCode or coding challenges**.  
- **Understand its real-world applications** in system design, performance-critical applications, and large-scale software development.  
- **C++ is powerful but requires proper memory management**. Mastering it will help in roles related to system programming, embedded systems, and game development.
