/*
 * Copyright 2016, Sandesh J. Ghimire
 * All Rights Reserved.
 */

/** @file
 * clearBits.c
 * This Exmaple shows diffrent types of const in c 
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

    const int aPtrx = 0xA5A5;  // constant variable a value cannot be changed, vlaue is stored in ROM
    int const aa = 0xA5A5; // same as above  aa value cannot be changed, vlaue is stored in ROM

    int *FreePtr = (int *)0x888888;
    FreePtr = 0x888845;
    *FreePtr = 0x888845;

    const int *aPtr = (const int *)0x8888; // pointer pointing to a constant vlaue, value cannot be changed but pointer can
    aPtr = (int *)0x8888;                  // pass - since the pointer can point to another location
    // *aPtr = 0x8888;                          // fails - the constant value cannot change

    int *const apointerConstant = (int *)0x8888; // a constatn pointer pointing to a location, where the content can be changed
    // apointerConstant =  0x8889; // fail - pointer cannot be changed
    *apointerConstant = 0x8889; // pass - the content can be changed

    int const *const constPointerconstlocation = (int *)0x000004;
    //constPointerconstlocation = 0x99999; // fail - po inter cannot be changed
    //*constPointerconstlocation = 0x99999; // fail - content cannot be changed

    return 0;
}
