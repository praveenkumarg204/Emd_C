# Blinky Project In Action

|ON|OFF|
|:--:|:--:|
|\image html ON.png|\image html OFF.png|
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
