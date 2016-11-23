#include <stdio.h>


/*
    This Exmaple shows you how to clear a bit from a unigned int vlaue
*/

unsigned int clear_bit(unsigned int value, unsigned char bit);


int main(int argc, char* argv)
{
    
    return 0;
}



unsigned int clear_bit(unsigned int value, unsigned char bit)
{
    value &= ~value;
}