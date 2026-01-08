Void Pointers in C

void pointer is a special type of pointer that can point to any data type. 
It is declared as void * and can store the address of any variable, regardless of its type. 
This makes it a very flexible pointer, useful in scenarios like generic functions, memory allocation, and handling multiple types of data.

A void pointer doesn't know the type of the data it points to, so it cannot be dereferenced directly without first casting it to the appropriate data type. However, it can be assigned to any pointer type (e.g., int *, float *, char *, etc.), making it useful for functions that need to work with multiple types of data.
