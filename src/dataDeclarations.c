/*
 * Copyright 2016, Sandesh J. Ghimire
 * All Rights Reserved.
 */

/** @file
 * clearBits.c
 * This Exmaple shows data declarations 
 */

/******************************************************
 *                      Include Files
 ******************************************************/

#include <stdio.h>

/******************************************************
 *                      Macros
 ******************************************************/

/******************************************************
 *                    Constants
 ******************************************************/

/******************************************************
 *                   Enumerations
 ******************************************************/

/******************************************************
 *                 Type Definitions
 ******************************************************/

/******************************************************
 *                    Structures
 ******************************************************/

/******************************************************
 *               Function Declarations
 ******************************************************/

/******************************************************
 *            Interrupt Handlers Mapping
 ******************************************************/

/******************************************************
 *               Variables Definitions
 ******************************************************/

/******************************************************
 *               Function Definitions
 ******************************************************/

/**
 * Main entry point 
 */
int main(int argc, char *argv)
{
    // An integer

    int integer = 0;

    // A pointer to an integer

    int *integerPtr = (int *)(0x5000);

    // A pointer to a pointer to an integer

    int **integerPtrPtr;

    // An array of ten integers

    int integerArray[10];

    // An array of ten pointers to integers

    int *integerPtrArray[10];

    // A pointer to an array of ten integers

    int(*integerArrayPtr)[10];

    // A pointer to a function that takes an integer as an argument and returns an integer

    void (*integerPtrFunction)(int);

    //    An array of ten pointers to functions that take an integer argument and return an integer.

    int (*integerPtrFunctionArray[10])(int);

    return 0;
}
