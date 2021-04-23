// DentistBill.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This code will asked about your dental plan from two options and asked specific charges based on the plan your are in.

#include <iostream>
using namespace std;

void Non_Member()
{
	

	double serv_chrg, test_chrg, med_chrg, total;

	cout << "Please input service charge" << endl;
	cin >> serv_chrg;

	cout << "Please input the test charge" << endl;
	cin >> test_chrg;

	cout << "Please input the medicine charge" << endl;
	cin >> med_chrg;

	total = test_chrg + serv_chrg + med_chrg;

	cout << "The total bill is " << total << endl;


		 
}
void Member()
{
	double serv_chrg, test_chrg, total;

	cout << "Please input service charge" << endl;
	cin >> serv_chrg;

	cout << "Please input the test charge" << endl;
	cin >> test_chrg;

	total = test_chrg + serv_chrg;

	cout << "The total bill is " << total << endl;
}
 

int main()
{
	int x;
	cout << "Please input one if you are a member of the dental plan" << endl;
	cout << "Input any other number if you are not" << endl;

	cin >> x;
	if (x == 1)
	{
		Member();
	}

	else
	{
		Non_Member();
	}
}


/*
Results
Sample 1:
Please input one if you are a member of the dental plan
Input any other number if you are not
1
Please input service charge
6.43
Please input the test charge
56.32
The total bill is 62.75

Sample 2:
Please input one if you are a member of the dental plan
Input any other number if you are not
2
Please input service charge
4.55
Please input the test charge
89
Please input the medicine charge
34.44
The total bill is 127.99
*/
