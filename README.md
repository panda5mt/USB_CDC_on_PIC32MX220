##USB CDC echo-back test on PIC32MX220



###USB CDC echo-back test
Some fix from "Device - CDC - Serial Emulator" on Microchip's USB Framework for PIC32MX220 and PIC32MX250
 

###Working Environment
* MPLABX(v1.8 or later) + Microchip Libraries for Applications (http://www.microchip.com/stellent/idcplg?IdcService=SS_GET_PAGE&nodeId=2680&dDocName=en547784)

###Note
* You must add include PATH (/microchip_solutions_vYYYY-MM-DD/Microchip/Include) to your MPLABX project 
* To add include PATH, please refer to "Use external header files in MPLAB X IDE" http://stackoverflow.com/questions/10674297/use-external-header-files-in-mplab-x-ide 

* This project contains 'extraordinary' settings on to generate 48MHz Clock. Please make short-circuit between "RPA4" pin and "CLKI" pin. Or remove this settings(in USB_CDC.c). 

###Reference
MCHPFSUSB Library Help (see also http://www.microchip.com/stellent/idcplg?IdcService=SS_GET_PAGE&nodeId=2680&dDocName=en547784)
