#include "user_utils.h"
#include "ADC.h"
int main(void){

    /* Activity 2*/
    initADC();
    uint16_t temperature;
    while(1){
        temperature =readADC(0);
        _delay_ms(200);
    }
    return 0;
}