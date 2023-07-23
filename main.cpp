/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

DigitalOut led1(LED1); //digital out to control LED1

DigitalOut led2(LED2); // digital out to control LED2

DigitalIn bluebutton(PC_13);   //digital input from Blue button

int main()
{
    
    while (true)
    {
        if (bluebutton==1)
            {
            led2=0;  // When blue button is not pressed Turn off led 2
            led1=1;   // Turn on led 1 for 2 seconds
            thread_sleep_for(2000);
            led1=0;   // Turn off led 1 for 2 seconds
            thread_sleep_for(2000);
            }

        else   // when blue button is pressed
        
            {  
                led1=0;    // Turn off led 1
                led2=1;    // Turn on led 2 for 5 seconds
                thread_sleep_for(5000);
                led2=0; // Turn off led 2 for 5 seconds
                thread_sleep_for(5000);
            }
            
        }

    }

