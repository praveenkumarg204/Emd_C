<h1>Activity_2</h1>

<h1>ADC</h1>
    
<h2>Action</h2>
    
|ADC|
|:--:|
|![ADC](ADC.PNG)|

<h2>Code</h2>

   void initADC(){
    
    ADMUX = (1<<REFS0);//aref connected to AVCC
    ADCSRA = (1<<ADEN) | (1<<ADPS0) | (1<<ADPS1) | (1<<ADPS2);// ADEN=1 => enable ADC; division factor=128
   }
   uint16_t readADC(uint8_t channel){
    
    ADMUX &= 0xf8;
    channel &= 0b00000111;//channel 0 i.e. PORTC0
    ADMUX |= channel;//select a particula ADC channel(i.e. 0 in this case)
    ADCSRA |= (1<<ADSC);//start Analog to Digital conversion
    while(!(ADCSRA & (1<<ADIF)));//wait until the conversion is done
    return (ADC);//return the result
   }




