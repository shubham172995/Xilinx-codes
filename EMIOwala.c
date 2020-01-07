#include "xparameters.h"
#include "xgpiops.h"
#include "xstatus.h"
	int Status;
	XGpioPs Gpio;	/* The driver instance for GPIO Device. */
	XGpioPs_Config *ConfigPtr;
#define PIN_OFFSET 79
int main()
{

	uint8_t val_0,val_1,val_2,val_3,val_4,val_5,val_6,val_7;
	/* Initialize the GPIO driver. */
	ConfigPtr = XGpioPs_LookupConfig(XPAR_XGPIOPS_0_DEVICE_ID);
	Status = XGpioPs_CfgInitialize(&Gpio, ConfigPtr,
					ConfigPtr->BaseAddr);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}
 // buttons

    XGpioPs_SetDirectionPin(&Gpio, 22, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, 22, 0);

    //led
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET, 1);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET, 1);

    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+1, 1);
       XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+1, 1);

       XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+2, 1);
          XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+2, 1);

          XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+3, 1);
             XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+3, 1);

             XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+4, 1);
                XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+4, 1);

                XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+5, 1);
                   XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+5, 1);

                   XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+6, 1);
                      XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+6, 1);

                      XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+7, 1);
                         XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+7, 1);
    while (1){
    	val_0 = 0,val_1 = 0,val_2 = 0,val_3 = 0,val_4 = 0,val_5 = 0,val_6 = 0,val_7 = 0;

    	val_0 = XGpioPs_ReadPin(&Gpio, 22);    //button BTNC
    	XGpioPs_WritePin(&Gpio, PIN_OFFSET, val_0); //LD0

    	val_1 = XGpioPs_ReadPin(&Gpio, 22);    //button BTNC
    	    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+1, val_1); //LD0

    	    	val_2 = XGpioPs_ReadPin(&Gpio, 22);    //button BTNC
    	    	    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+2, val_2); //LD0

    	    	    	val_3 = XGpioPs_ReadPin(&Gpio, 22);    //button BTNC
    	    	    	    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+3, val_3); //LD0

    	    	    	    	val_4 = XGpioPs_ReadPin(&Gpio, 22);    //button BTNC
    	    	    	    	    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+4, val_4); //LD0

    	    	    	    	    	val_5 = XGpioPs_ReadPin(&Gpio, 22);    //button BTNC
    	    	    	    	    	    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+5, val_5); //LD0

    	    	    	    	    	    	val_6 = XGpioPs_ReadPin(&Gpio, 22);    //button BTNC
    	    	    	    	    	    	    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+6, val_6); //LD0

    	    	    	    	    	    	    	val_7 = XGpioPs_ReadPin(&Gpio, 22);    //button BTNC
    	    	    	    	    	    	    	    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+7, val_7); //LD0



    }
    return 0;
}
