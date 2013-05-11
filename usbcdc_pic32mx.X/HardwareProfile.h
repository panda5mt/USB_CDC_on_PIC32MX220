#ifndef HARDWARE_PROFILE_UBW32_H
#define HARDWARE_PROFILE_UBW32_H

    /*******************************************************************/
    /******** USB stack hardware selection options *********************/
    /*******************************************************************/
    //This section is the set of definitions required by the MCHPFSUSB
    //  framework.  These definitions tell the firmware what mode it is
    //  running in, and where it can find the results to some information
    //  that the stack needs.
    //These definitions are required by every application developed with
    //  this revision of the MCHPFSUSB framework.  Please review each
    //  option carefully and determine which options are desired/required
    //  for your application.

    //#define USE_SELF_POWER_SENSE_IO
    //#define tris_self_power     TRISAbits.TRISA2    // Input
    #define self_power          1

    //#define USE_USB_BUS_SENSE_IO
    //#define tris_usb_bus_sense  TRISBbits.TRISB7    // Input
    #define USB_BUS_SENSE       1

    /*******************************************************************/
    /*******************************************************************/
    /*******************************************************************/
    /******** Application specific definitions *************************/
    /*******************************************************************/
    /*******************************************************************/
    /*******************************************************************/

   
    /** LED ************************************************************/
    
//    #define mLED_1              LATBbits.LATB15
//    #define mLED_2              LATBbits.LATB14
//    #define mLED_3              LATBbits.LATB1
//    #define mLED_4              LATBbits.LATB0
//
//    #define mGetLED_1()         mLED_1
//    #define mGetLED_2()         mLED_2
//    #define mGetLED_3()         mLED_3
//    #define mGetLED_4()         mLED_4
//
//    #define mLED_1_On()         mLED_1 = 1;
//    #define mLED_2_On()         mLED_2 = 1;
//    #define mLED_3_On()         mLED_3 = 1;
//    #define mLED_4_On()         mLED_4 = 1;
//
//    #define mLED_1_Off()        mLED_1 = 0;
//    #define mLED_2_Off()        mLED_2 = 0;
//    #define mLED_3_Off()        mLED_3 = 0;
//    #define mLED_4_Off()        mLED_4 = 0;
//
//    #define mLED_1_Toggle()     mLED_1 = !mLED_1;
//    #define mLED_2_Toggle()     mLED_2 = !mLED_2;
//    #define mLED_3_Toggle()     mLED_3 = !mLED_3;
//    #define mLED_4_Toggle()     mLED_4 = !mLED_4;
//
//    #define mInitAllLEDs()      TRISBbits.TRISB15=0;TRISBbits.TRISB14=0;mLED_1_Off();mLED_2_Off();
//    /** SWITCH *********************************************************/
//    #define mInitSwitch2()      TRISBbits.TRISB7=1;
//    #define mInitSwitch3()      TRISBbits.TRISB3=1;
//    #define mInitAllSwitches()  mInitSwitch2();
//    #define sw2                 PORTBbits.RB7
//    #define sw3                 PORTBbits.RB6
#endif  //HARDWARE_PROFILE_UBW32_H

