/*
 * File:   mainXC16.c
 * Author: Phil Glazzard
 *
 * Created on August 27, 2022, 2:43 PM
 */


#include "xc.h"
#include "pic24type.h"
#include "config.h"
#include <stdint.h>
int main(void) 
{
    
    
    uint32_t i = 0;
    TRISBbits.TRISB1 = 0;
    while(1)
    {
        for (i = 0; i < 0xfff2; i++)
        {
            LATBbits.LATB1 = 1;
        }
        for (i = 0; i < 0xfff2; i++)
        {
            LATBbits.LATB1 = 0;
        }
    }
   
}
    
   
