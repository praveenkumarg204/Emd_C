<h1>Activity_1</h1>

<h1>LED Blinking for Two Sensing Input</h1>

|ON|OFF|
|:--:|:--:|
|![ON](ON.PNG)|![OFF](OFF.PNG)|

<h2>Code</h2>


	while(1)
	{
        if( !(PIND&(1<<PD0)) && !(PIND&(1<<PD1)) ) {
			PORTB |= (1<<PB1);
		}
		else{
			PORTB &= ~(1<<PB1);
		}
	}

