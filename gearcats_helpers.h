#ifndef GEARCATS_HELPERS
#define GEARCATS_HELPERS

#define A_BTN 3
#define B_BTN 2
#define X_BTN 4
#define Y_BTN 1


int left_drive_motor;
int right_drive_motor;

void arcade_drive(int forward, int turn)
{
	motor[left_drive_motor] = forward + turn;
	motor[right_drive_motor] = forward - turn;
}

void tank_drive(int left, int right) {
	motor[left_drive_motor] = left;
	motor[right_drive_motor] = right;
}

void drive_forwards(int n_msec) {
	arcade_drive(50, 0);
	wait1Msec(n_msec);
}

void drive_backwards(int n_msec) {
	arcade_drive(-50, 0);
	wait1Msec(n_msec);
}

void turn_left(int n_msec) {
	arcade_drive(50, -50);
	wait1Msec(n_msec);
}

void turn_right(int n_msec) {
	arcade_drive(50, 50);
	wait1Msec(n_msec);
}

#endif
