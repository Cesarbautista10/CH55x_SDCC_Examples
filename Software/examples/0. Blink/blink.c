/** @file blink.c (SOURCE)
 *
 *  @brief Minimal blink implementation for the 8051 microcontroller version 1.0
 *  
 * @details This program is a blink, minimal implementation for blinking an LED.
 * 
 *  @author Cesar Bautista 
 *
 *  @bug bugs, bugs and more bugs. 

 */
/******************************************************************************
 * INCLUDES
 *****************************************************************************/

#include "src/config.h"                   // user configurations
#include "src/system.h"                   // system functions
#include "src/gpio.h"                     // for GPIO
#include "src/delay.h"                    // for delays


/******************************************************************************
 * MACROS AND DEFINES
 *****************************************************************************/
/******************************************************************************
 * PRIVATE VARIABLES
 *****************************************************************************/

/******************************************************************************
 * PRIVATE FUNCTION PROTOTYPES
 *****************************************************************************/

/******************************************************************************
 * PRIVATE FUNCTIONS
 ******************************************************************************/

/******************************************************************************
 * PUBLIC FUNCTIONS
 *****************************************************************************/
// Prototypes for used interrupts

// =====================================================================

void main(void) {
    CLK_config();  
    DLY_ms(5);
    PIN_output(PIN_LED);

    while (1) 
    {
        while (1) 
        {
            PIN_toggle(PIN_LED);
            DLY_ms(50);
        }
    }
}