/*
 * Copyright 2016, Sandesh J. Ghimire
 * All Rights Reserved.
 */

/** @file
 * accessingFixedMemory.c
 * This Exmaple shows various ways to create infinite loop in c 

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

  // loop using while

  while (1)
  {
  }

  // loop using for

  for (;;)
  {
  }

// loop using go to

LOOP:
  goto LOOP;

  return 0;
}
