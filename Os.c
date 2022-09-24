#include "Os.h"
#include "Os_Cfg.h"

void Init_Os()
{
    Init_Hw();
    Init_App();
}

void Start_Os()
{
    #ifdef DEBUG_MODE
        
        App_Main();

    #else

        while(1)
        {
            App_Main();
        }

    #endif
}