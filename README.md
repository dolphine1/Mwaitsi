# Mwaitsi 
_lessons along the way_

---

# Day 001 / ∞ — Learning Software Engineering (Core Building)

## Why This Repo Exists

After consuming content across **YouTube, X (Twitter), TikTok**, and blogs, I came to a difficult realization:

> Everyone learns differently.

The internet has made information abundant—but unfiltered. Learning software engineering online often feels chaotic, overcrowded, and directionless. This repository exists to **bring structure, clarity, and accountability** to my learning journey.

Mentorship matters. So does intentional learning.
This repo documents my attempt to strip learning down to **what works for me**.

Recommendations are welcome.

---

## Learning Methodology

Inspired by **@ColinGalen**, I’m following a **module-based approach**:

* Learn by **modules**, not randomness
* Build strong fundamentals before breadth
* Pedagogy:

  **Theory → Practice → Theory**

### Accountability

* **GitHub** → daily logs & notes (this repo)
* **X (Twitter)** → reflections & progress
* **LinkedIn** → major milestone projects

---

## The Bigger Picture: Software Engineering

Software Engineering is an ecosystem composed of multiple modules:

* Programming
* Data Structures & Algorithms
* Software Design & Principles
* Architecture
* Operating Systems & Networks
* Cybersecurity
* QA & Testing
* DevOps
* Cloud Computing
* IoT & Embedded Systems
* AI & Machine Learning
* Web & App Development
* Mathematical Computation
* Databases
* SDLC
* UI/UX

---

## Step 1: Computer Programming

**Language Chosen:** **C++**

Programming is the foundation upon which all other modules depend. C++ was chosen for its ability to expose both **low-level mechanics** and **high-level abstractions**.

---

## Introduction to C++

* **Creator:** Bjarne Stroustrup (1979)
* **Evolution:** Successor to C
* **Original Name:** *C with Classes*
* **Paradigms:**

  * Procedural
  * Object-Oriented
  * Abstraction
* **Type:** General-purpose language
* **Level:** Low-level (with high-level capabilities)

C++ encourages strong mental models around **memory, performance, and system design**—skills transferable across many domains.

---

## Goal

To build **deep, durable software engineering fundamentals** that scale across:

* Systems programming
* Algorithms & performance-critical software
* Backend & infrastructure
* Advanced computer science concepts

---

## Progress

*  **Day 001 / ∞ — Started**
*  Current Module: **Computer Programming (C++)**

---

## Notes

This repository prioritizes **clarity over speed**, **depth over hype**, and **consistency over motivation**.

Learning is not linear—and that’s okay.

---

# Day 002 / ∞ — Learning Cycle (C++)

## Overview

Today I focused on **reinforcement and understanding**, not speed.
Instead of jumping ahead, I revisited yesterday’s concepts using **active recall**, consulted experienced friends on effective learning strategies, and grounded my progress with a short assessment.

---

## Learning Approach

* Practiced **active recall** of C++ basics (no notes, no tutorials)
* Sought guidance on *how to learn C++ properly*
* Identified a core reference book used by many professionals

### Recommended Resource

 **Programming: Principles and Practice Using C++** — *Bjarne Stroustrup*

* Intended version: **5th Edition**
* Currently using: **3rd Edition** (principles remain solid)

---

## First C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```
**using namespace alternative:**
```using namespace alternative:
  #include <iostream>

 int main() {
   std::cout << "Hello World";
   return 0;
}
```
### Code Explanation

* **`#include <iostream>`**
  Imports the standard input/output stream library, enabling input and output operations.

* **`using namespace std;`**
  Allows access to standard library features (like `cout`) without prefixing them with `std::`.

* **`int main()`**
  The entry point of every C++ program. Execution starts here.

* **`cout << "Hello World";`**
  Outputs text to the console using the insertion (`<<`) operator.

* **`return 0;`**
  Signals successful execution to the operating system.

---

## Knowledge Check

 **W3Schools — C++ Introduction Test**

* **Score:** **64%**

This highlighted:

* Solid grasp of basic syntax
* Gaps in foundational concepts
* Clear direction for improvement

---

## Key Takeaways

* Active recall reveals gaps faster than passive learning
* Simple programs carry deep foundational concepts
* Early testing prevents false confidence
* Progress is real, even when imperfect

---

# Day 3/∞ — From Code to Execution (and Curiosity)

I started with execution and ended with curiosity taking over.

I focused on compiling and running C++ code directly from the VS Code terminal. Instead of relying on editor shortcuts, I wanted to understand what actually happens between writing code and seeing output.

I compiled my program using `g++`, explicitly naming the executable:

```bash
g++ filename.cpp -o executablename
```

Then I ran it with:

```bash
./executablename
```

Seeing the program run this way made the process feel concrete. Source code became an executable. The abstraction faded.

While reviewing the same “Hello World” program, curiosity got the better of me. I started reading explanations on GeeksforGeeks about how a C++ program actually works. That sent me down a rabbit hole.

One question led to another.

That’s how I ended up learning about preprocessors, header files, and what really happens before compilation. I finally understood why `#include` isn’t just a line of code, but a directive handled before the compiler even starts its real work.

This also led me to understand the difference between `iostream` and `stdio`. One belongs to C++ streams, the other to C-style input and output. Same goal, very different design philosophies.

Along the way, I was introduced to macros, their purpose, and why they should be used carefully. I didn’t master them, but I now understand why they exist.

Instead of skimming, I decided to go line by line through the program:-from the header file at the top to the final closing curly bracket. For the first time, I wasn’t just memorizing syntax. I was asking why each line exists.(an appreciation to geeks for geeks on their resources)
_Ps i just now know that the alt for the ```using namespace std```is the best practice not as what i had in mind initially_

That shift felt important and the feeling was great.

I also came across an immense amount of high-quality learning material on Substack. One resource that stood out was a C/C++ bootcamp series that provides a roadmap curated with youtube videos on core concepts together with tools and resources necessary:

[https://open.substack.com/pub/jprahman/p/cc-bootcamp?utm_campaign=post-expanded-share&utm_medium=web](https://open.substack.com/pub/jprahman/p/cc-bootcamp?utm_campaign=post-expanded-share&utm_medium=web)

## Takeaways

Running code manually builds confidence.
Curiosity leads to deeper understanding than structured plans alone.
Knowing the “why” behind each line changes how code feels.
Fundamentals reveal more the longer you sit with them.

Today reminded me that learning isn’t always linear. Sometimes the best progress happens when you follow a question all the way down.

Day 3 done.
_get readyto be pissed by my knowledge_
---

# Day 004 / ∞ — Data Types in C++

## Overview

Day 4 focused on understanding **data types in C++**.
Instead of just memorizing syntax, I explored how data types are categorized, why they exist, and how they affect memory and program behavior.

The primary reference for today was **GeeksforGeeks**, which provided a clear structural breakdown and additional links for deeper reading.

---

## C++ Data Types

C++ data types are broadly grouped into **three categories**:

### 1. Fundamental (Built-in) Data Types

These are the basic data types provided directly by the language.

Examples include:

* `int`
* `float`
* `double`
* `char`
* `bool`
* `void`

They form the foundation of all other data representations in C++.

---

### 2. Derived Data Types

These are derived from fundamental data types and allow more complex data handling.

Examples include:

* Arrays
* Pointers
* References
* Functions

This category started revealing how C++ gives programmers low-level control over memory and behavior.

---

### 3. User-Defined Data Types

These allow programmers to create custom data structures tailored to specific problems.

Examples include:

* `struct`
* `union`
* `enum`
* `typedef`

This category hinted at how abstraction is built on top of basic types.

---

## Learning Experience

While GeeksforGeeks explained the main categories clearly, the **additional links in the notes led to more advanced and unfamiliar concepts**.
Topics such as memory layout, type modifiers, and internal representations came up earlier than expected.

This led to some confusion, but also clarity about where my current understanding ends.

Instead of forcing comprehension, I noted the concepts and moved on, knowing they will make more sense with time and practice.

---

## Key Takeaways

* Data types define how data is stored, interpreted, and manipulated
* C++ offers strong control over memory through its type system
* Not everything needs to be understood immediately

---

## References

* GeeksforGeeks — C++ Data Types
  [https://www.geeksforgeeks.org/cpp-data-types/](https://www.geeksforgeeks.org/cpp-data-types/)

---

## Status

Day 4 done & merry Christmas lads

---
# Day 005 / ∞ — Active Recall, Functions, and `endl` vs `\n`

## Overview

Day 5 has been anchored in **active recall and code review**, with curiosity driving the learning forward. While revisiting identifiers, I encountered functions and classes in example code, which led me down a deeper path—particularly around functions, `void`, and output formatting.

This wasn’t a detour. It was a necessary pause to understand *why* things work the way they do.

---

## `endl` vs `\n`

While reviewing function examples, I noticed the use of `std::endl` and wondered how it differed from `\n`.

* `\n` inserts a newline character.
* `std::endl` inserts a newline **and flushes the output buffer**.

Because flushing is an expensive operation, `\n` is generally faster and preferred unless an immediate flush is required (e.g., debugging or real-time output).

This explained why `endl` exists—and why it should be used sparingly. There's a whole lot comparison 

checkout:[https://www.geeksforgeeks.org/cpp/endl-vs-n-in-cpp/]

---

## Understanding Functions

I came across a definition that stuck with me:

> Functions are actions or verbs in code used to solve problems.by Mr David Mahlan cs50

Technically, functions are **reusable blocks of code** designed to perform a specific task. They:

* Improve modularity
* Reduce repetition
* Narrow and organize logic

My current understanding is still shallow, but it’s forming.

### Simple Function Example

```cpp
#include <iostream>

void hi() {
    std::cout << "greetings beloved" << std::endl;
}

int main() {
    hi();
    return 0;
}
```

Here, `hi()` performs an action without returning a value. That led me to explore `void` in depth.

---

## Deep Dive: `void` in C++

### 1. Void Functions — “Action Functions”

A `void` function performs an action but does not return a value.
its basically nothing or empty

```cpp
#include <iostream>
using namespace std;

void sayHi() {
    cout << "Hello there!" << endl;
}

int main() {
    sayHi();
    return 0;
}
```

Use `void` when the goal is *doing something* (printing, saving, triggering behavior) rather than calculating a result.

---

### 2. Void Pointers — The “Mystery Box”

A `void*` can hold the address of any data type, but it doesn’t know what that type is until explicitly told.

```cpp
#include <iostream>
using namespace std;

int main() {
    int secretCode = 1234;
    void* ptr = &secretCode;

    // Must cast before dereferencing
    int* intPtr = (int*)ptr;
    cout << *intPtr << endl;

    return 0;
}
```

Void pointers are powerful but dangerous if misused. They’re common in low-level or generic programming.

---

### 3. Silencing Unused Parameter Warnings

`void` can also signal intentional non-use of a variable.

```cpp
#include <iostream>
using namespace std;

void myFunction(int importantData, int uselessData)
{
    (void)uselessData;
    cout << importantData << endl;
}
int main() {
    myFunction(100, 0); // Calling function with two numbers
    return 0;
}
```

This tells the compiler the variable was ignored on purpose.

---

## Additional Learning

I also enrolled in a course on **Saylor Academy**, which will take roughly **40 hours** and begins tomorrow. I’m hoping this next phase will bring more structure and depth to my learning.

---

## Key Takeaways

* `\n` is faster than `endl` because it avoids flushing
* Functions improve modularity and clarity
* `void` is used when no return value or no specific type exists
* Curiosity is not distraction—it’s direction

---

## Status

Day 5 logged
Preparing for a structured 40-hour course next

---

