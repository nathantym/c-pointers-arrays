# c-pointers-arrays
Playing around with shell scripts and basic C pointers, memory, and arrays.

<b>Build Script</b>

Compiles and runs a problem/file:
```
./build.sh 1 
```

<b>Problem 1 (one.c)</b>
```
Define an int* pointer variable, and create an array of 10 integers using malloc().  
Then, assign values to that array, print their values, and free() the integers.
```

<b>Problem 2 (two.c)</b>
```
Using malloc, create a char** pointer that contains 10 char*'s, then in a loop, 
initialize each of the 10 char*'s in a loop to a char array of size 15, and initialize 
each to a word of your choice (don't forget the null terminator \0) -- and print them to 
screen.
```

<b>Problem 3 (three.c)</b>
```
Write a function sort() that takes in an int* a and int size, and sorts the array using 
pointer arithmetic.
```

<b>Problem 4 - unfinished (four.c)</b>
```
Modify this program to take in a linked list of structs that you create (with a int data 
element, and a struct ListNode*). Note that you should swap the actual nodes and not just 
the values within those nodes. next pointer), and sort the linked list instead.
```
