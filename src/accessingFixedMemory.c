/*
 * Copyright 2016, Sandesh J. Ghimire
 * All Rights Reserved.
 */

/** @file
 * accessingFixedMemory.c
 * This Exmaple shows you how to access fixed memory form a given location 
   Store a value of 0xA5A5 at a location 0x45676 
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

    int *ptr;             // create a pointer
    ptr = (int *)0x45676; // refrence to a lcoation i.e. 0x45676
    *ptr = 0xA5A5;        // store value 0xA5A5

    // you can also do this in one step
    *(int *const)0x45676 = 0xA5A5;

    return 0;
}
