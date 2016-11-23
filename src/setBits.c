/*
 * Copyright 2016, Sandesh J. Ghimire
 * All Rights Reserved.
 */

/** @file
 * clearBits.c
 * This Exmaple shows how to set a bit on a unigned int 
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

unsigned int set_bit(unsigned int value, unsigned char bit);

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
 * Main entry point for setBits 
 */
int main(int argc, char* argv)
{
    unsigned int data = 0xA5;
    unsigned char bit = 6;
    printf("Orginal vlaue is %X \n", data);
    printf("vlaue after bit %X set is  is %X \n", bit, set_bit(data, bit));

    return 0;
}


/**
 * Set a bit from a unigned int vlaue
 *
 * @param value[in]      : The unsigned int to be converted
 * @param bit[in]        : The bit index
 *
 * @note: This is not a generic function and does not support all architecture 
 * @bugs: No protection for bits greater than 32  
 *
 * @return the bit cleard value 
 *
 */
unsigned int set_bit(unsigned int value, unsigned char bit)
{
    value |= (1 << bit) ;
    return value;
}