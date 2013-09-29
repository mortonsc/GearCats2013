//Takes an int indicating a joystick (1 or 2) and a button (1 - 8) and returns whether that button is pressed.
bool button_pressed(int joystick, int button) {
	int bitmap;
	if (joystick == 1){
		bitmap = joystick.joy1_Buttons;
	} else if (joystick == 2) {
		bitmap = joystick.joy2_Buttons;
	}
	//the state of the joystick buttons is represented by a bitmap: each bit represents one button.
	//button 1 is 1, 2 is 2, 3 is 4, etc.
	int button_bit = 1 << (button - 1);
	//if the button is not pressed, bitmap & button_bit will equal 0.
	return (bitmap & button_bit) != 0;
}
