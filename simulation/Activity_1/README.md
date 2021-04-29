# Activity_1
# LED Blinking for Two Sensing Input

|ON|OFF|
|:--:|:--:|
|![ON](ON.PNG)|![OFF](OFF.PNG)|
## Code 
```
	while(1)
	{
        if( !(PIND&(1<<PD0)) && !(PIND&(1<<PD1)) ) {
			PORTB |= (1<<PB1);
		}
		else{
			PORTB &= ~(1<<PB1);
		}
	}
```
