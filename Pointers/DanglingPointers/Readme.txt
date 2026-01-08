Dangling Pointer in C

A dangling pointer in C is a pointer that points to memory that has been freed or deallocated. 
In other words, the pointer still holds the address of a memory location, but that memory is no longer valid. 
Accessing or dereferencing a dangling pointer can lead to undefined behavior and is often a source of bugs and crashes in programs.

Why Do Dangling Pointers Occur?

Dangling pointers can occur in the following scenarios:

1. After freeing memory: When a pointer to dynamically allocated memory is freed using free(), the pointer still holds the address of that memory. 
If it is dereferenced later, iit results in undefined behavior.

2. After going out of scope: If a local pointer in a function goes out of scope, it may still point to a memory location that was previously valid 
but is no longer accessible.

3. When memory is reallocated: If a pointer is reassigned to a new memory location without first freeing the previous memory, the original pointer may 
become a dangling pointer.

Consequences of Dangling Pointers:

Undefined behavior: Accessing memory that has been freed may result in unpredictable outcomes, such as crashing the program or corrupting data.

Security vulnerabilities: Malicious code may exploit dangling pointers to gain control over memory.

