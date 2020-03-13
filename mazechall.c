#pragma config(Sensor, S1,     Gyrosense,      sensorEV3_Gyro)
#pragma config(Motor,  motorA,          LeftMot,       tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorB,           ,             tmotorEV3_Large, openLoop)
#pragma config(Motor,  motorC,           ,             tmotorEV3_Large, openLoop)
#pragma config(Motor,  motorD,          RightMot,      tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	float radius;
	radius = 3.175;
	//Wheel maths//
	float circum;
	circum = 19.949;
	//First half of course//
	resetGyro(Gyrosense); //Makes sure gyro starts at 0//

	forward(43.25/circum, rotations, 50); //first forward//

	while(getGyroDegrees(Gyrosense)<= 90) //first turn, right//
    {
 			turnRight(2.5, degrees, 25);
    }
  resetGyro(Gyrosense);

	forward(30.5/circum, rotations, 50);//second forward//

	while(getGyroDegrees(Gyrosense)<= 80) //second turn, right//
    {
 			turnRight(2.5, degrees, 25);
    }
  resetGyro(Gyrosense);

  forward(38/circum, rotations, 50);//third forward//

  	while(getGyroDegrees(Gyrosense)>= -90) //third turn, left//
    {
 			turnRight(2.5, degrees, 25);
    }
  resetGyro(Gyrosense);
}
