#include "user_utils.h"
#include "ADC.h"
#include "control.h"
#include "timerpwm.h"


unsigned volatile overflow;

int main(void){
     control();
    initADC();
    uint16_t temperature;
    Timer_PWM();
    while(1){
        if( !(PIND&(1<<PD0)) && !(PIND&(1<<PD1))  ){
              PORTB |=(1<<PB0);
            }
            else{
                PORTB &=~(1<<PB0);
            }

        temperature =readADC(0);
        _delay_ms(200);
         OCR1A=10;
        _delay_ms(200);
        OCR1A=50;
        _delay_ms(200);
        OCR1A=100;
        _delay_ms(200);
        OCR1A=150;
        _delay_ms(200);
        OCR1A=200;
        _delay_ms(200);
        OCR1A=250;
        _delay_ms(200);
    }
   return 0;
}