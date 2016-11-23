/*
 * Copyright 2016, Sandesh J. Ghimire
 * All Rights Reserved.
 */

/** @file
 * accessingFixedMemory.c
 * This Exmaple shows use of keyword static 
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

static int add_two_values(int a, int b);

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
  int alpha = 40;
  int beata = 70;

  printf("adding vlaues %d and %d is %d \n", alpha, beata, add_two_values(alpha, beata));

  printf("adding vlaues %d and %d is %d \n", alpha, beata, add_two_values(alpha, beata));

  printf("adding vlaues %d and %d is %d \n", alpha, beata, add_two_values(alpha, beata));
  
  printf("adding vlaues %d and %d is %d \n", alpha, beata, add_two_values(alpha, beata));

  return 0;
}
// static function becomes local to c file
// static variables keep the value alive

static int add_two_values(int a, int b)
{
  static int i = 0;
  return (a + b + i++);
}
