// WatermelonDrop.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>
using namespace std;

//Prototyp Functions
int main();
void Multi(double,double);


void Multi(double t, double h)
{
	double const g = 9.8;
	double d;

	cout << "Time Falling (seconds)   Distance Fallen (meters)" << endl;
	cout << "*************************************************" << endl;

	for(double num = 0; num <= t; num++)
	{
		d = 0.5 * g * pow(num,2);
		cout << num << "\t\t" << d << endl;
		if (d > h)
		{
			cout << "Warning!! Bad data: The distance fallen exceeds the height of the bridge" << endl;
		}
	}
}
int main()
{

	double t, h;

	cout << "Please enter the time of fall in seconds: " << endl;
	cin >> t;

	cout << "Please input the height of the bridge in meters: " << endl;
	cin >> h;

	Multi(t, h);
}

/*Results
Run 1:
Please enter the time of fall in seconds:
2
Please input the height of the bridge in meters:
100
Time Falling (seconds)   Distance Fallen (meters)
*************************************************
0               0
1               4.9
2               19.6

Run 2:
Please enter the time of fall in seconds:
4
Please input the height of the bridge in meters:
50
Time Falling (seconds)   Distance Fallen (meters)
*************************************************
0               0
1               4.9
2               19.6
3               44.1
4               78.4
Warning!! Bad data: The distance fallen exceeds the height of the bridge
*/
