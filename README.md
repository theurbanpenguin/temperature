# Temperature

## Simple C program to show use of header file and source files

This prograsm is a simple demo of how to make your own header files. The header file contgains the declaration of the function and the source file the definition. Both the main.c and the convert.c file need to be compiled:

> gcc -c main.c
> gcc -c convert.c

This compiles the code but does not link. This is done with:

> gcc main.o convert.o -o temperature

The name of the header and source file do not need to match, for covenience we do so
