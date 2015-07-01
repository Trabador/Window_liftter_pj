/*============================================================================*/
/*                        SV C BC SOFTWARE GROUP                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:        %window_lifter.h%
* Instance:         RPL_1
* %version:         1 %
* %created_by:      Alexis Garcia %
* %date_created:     %
*=============================================================================*/
/* DESCRIPTION : Header file for the window lifter                            */
/*============================================================================*/
/* FUNCTION COMMENT : contains only symbols which are exported to internal    */
/* platform modules. This will not be delivered with the library              */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | DD/MM/YYYY  | SAR/SIF/SCN_xxx               | Alexis Garcia    */
/* Integration under Continuus CM                                             */
/*============================================================================*/


#ifndef _Window_H        /*prevent duplicated includes*/
#define _Window_H

/*-- Includes ----------------------------------------------------------------*/

/** Core modules */
/** Variable types and common definitions */

#include "typedefs.h"

/*-- Variables ---------------------------------------------------------------*/

extern T_UBYTE rub_goUp;
/*-- Types Definitions -------------------------------------------------------*/

/*-- Defines -----------------------------------------------------------------*/
#define 	LED_G_OFF SIU.GPDO[led_g].R = 0 
#define 	LED_G_ON SIU.GPDO[led_g].R = 1 
#define 	LED1_OFF SIU.GPDO[led1].R = 0 
#define 	LED1_ON	SIU.GPDO[led1].R = 1 
#define 	LED2_OFF SIU.GPDO[led2].R = 0 
#define 	LED2_ON	SIU.GPDO[led2].R = 1 
#define 	LED3_OFF SIU.GPDO[led3].R = 0 
#define 	LED3_ON	SIU.GPDO[led3].R = 1 
#define 	LED4_OFF SIU.GPDO[led4].R = 0 
#define 	LED4_ON	SIU.GPDO[led4].R = 1 
#define 	LED5_OFF SIU.GPDO[led5].R = 0 
#define 	LED5_ON	SIU.GPDO[led5].R = 1 
#define 	LED6_OFF SIU.GPDO[led6].R = 0 
#define 	LED6_ON	SIU.GPDO[led6].R = 1 
#define 	LED7_OFF SIU.GPDO[led7].R = 0 
#define 	LED7_ON	SIU.GPDO[led7].R = 1 
#define 	LED8_OFF SIU.GPDO[led8].R = 0 
#define 	LED8_ON	SIU.GPDO[led8].R = 1 
#define 	LED9_OFF SIU.GPDO[led9].R = 0 
#define 	LED9_ON	SIU.GPDO[led9].R = 1 
#define 	LED10_OFF SIU.GPDO[led10].R = 0 
#define 	LED10_ON	SIU.GPDO[led10].R = 1 
#define 	LED_B_OFF SIU.GPDO[led_b].R = 0 
#define 	LED_B_ON SIU.GPDO[led_b].R = 1 
#define 	pinch 64
#define 	up 65
#define 	down 66
#define		min_valid_value 9
#define 	five_hundred_ms 500
#define 	exit_condition 	510
#define 	UP_PRESS SIU.GPDI[up].R == 0
#define 	DOWN_PRESS SIU.GPDI[down].R == 0
#define 	PINCH_PRESS SIU.GPDI[pinch].R == 0


/*-- Function Prototypes -----------------------------------------------------*/

extern void initGPIO(void);
extern void initTimer(void);
void delay_ms(T_UWORD luw_time);
extern void initLeds(void);
extern void downPressed(void);
void autoDown(void);
void manualDown(T_UBYTE *lpub_ptr);
extern void upPressed(void);
void autoUp(void);
void manualUp(T_UBYTE *lpub_ptr);
void pinchInterruption(void);

#endif /* _Window_H */

/*******************************************************************************/
