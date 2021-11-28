// Introduction to C Pointers

/* A Pointer in C language is a variable which holds the address of another variable of same data type.

Pointers are used to access memory and manipulate the address.

Pointers are one of the most distinct and exciting features of C language. It provides power and flexibility to the language. Although pointers may appear a little confusing and complicated in the beginning, but trust me, once you understand the concept, you will be able to do so much more with C language.

Before we start understanding what pointers are and what they can do, let's start by understanding what does "Address of a memory location" means?

Address in C
Whenever a variable is defined in C language, a memory location is assigned for it, in which it's value will be stored. We can easily check this memory address, using the & symbol.

If var is the name of the variable, then &var will give it's address.

Let's write a small program to see memory address of any variable that we define in our program. */

#include <stdio.h>

void main()
{
    int var = 7;
    printf("Value of the variable var is: %d\n", var);
    printf("Memory address of the variable var is: %x\n", &var);
}

/* The output will be .. */

Value of the variable var is: 7
Memory address of the variable var is: bcc7a00 

/* You must have also seen in the function scanf(), we mention &var to take user input for any variable var. */

scanf("%d", &var);

/* This is used to store the user inputted value to the address of the variable var. */
  
  

