// WaterBill.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int q1, q2, q3, q4;
	float avg;
	cout << "Please input your water BILL for quarter 1: ";
	cin >> q1;
	cout << "Please input your water BILL for quarter 2: ";
	cin >> q2;
	cout << "Please input your water BILL for quarter 3: ";
	cin >> q3;
	cout << "Please input your water BILL for quarter 4: ";
	cin >> q4;

	avg = (q1 + q2 + q3 + q4) / 4;

	if (avg > 75)
	{
		cout << "Your average monthly BILL is " << avg << ". You are excessive amount of water." << endl;
	}
	if (avg <= 75 and avg >= 25)
	{
		cout << "Your average monthly BILL is " << avg << ". You are using typical amount of water." << endl;
	}
	if (avg < 25)
	{
		cout << "Your average monthly BILL is " << avg << ". You are conserving water. Good job!!" << endl;
	}
}

/*
Results:

Please input your water BILL for quarter 1: 200
Please input your water BILL for quarter 2: 200
Please input your water BILL for quarter 3: 200
Please input your water BILL for quarter 4: 200
Your average monthly BILL is 200. You are excessive amount of water.
*/