Wild Pointer in C

A wild pointer is a pointer that has not been initialized to a valid memory location. 
It may point to any arbitrary location in memory. Accessing or dereferencing a wild pointer leads to 
undefined behavior because it could point to any part of memory, potentially corrupting data or causing a program crash.

Wild pointers are dangerous because:

They do not point to valid memory.
They can point anywhere in memory, including unallocated or restricted memory areas.
Dereferencing a wild pointer results in undefined behavior, which can lead to program crashes, data corruption, or security vulnerabilities.

Wild pointers can arise in the following situations:

Uninitialized pointers: A pointer is declared but not initialized to a valid memory location or NULL.
Dangling pointers: A pointer that points to memory that has been deallocated, but hasn't been set to NULL.
Memory corruption: If the pointer is inadvertently modified or corrupted.

Wild Pointer vs Dangling Pointer

Wild Pointer: A pointer that has not been initialized. It could point to any random memory address.

Dangling Pointer: A pointer that points to memory that has been freed or is no longer valid.



