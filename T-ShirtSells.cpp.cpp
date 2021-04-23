// T-ShirtSells.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// A code that will ask how many shirt you would like and will give you the cost per shit and the total per shirt.

#include <iostream>
using namespace std;

int main()
{
	int num_shirts;
	double shirts = 12.0;
	double cost_shirts, total_shirts;

	cout << "How many shirts would you like?: " << endl;
	cin >> num_shirts;

	switch (num_shirts)
	{
	case 0:
		cost_shirts = shirts;
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 1:
		cost_shirts = shirts;
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 2:
		cost_shirts = shirts;
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 3:
		cost_shirts = shirts - (shirts * .1);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 4:
		cost_shirts = shirts - (shirts * .1);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 5:
		cost_shirts = shirts - (shirts * .1);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 6:
		cost_shirts = shirts - (shirts * .15);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 7:
		cost_shirts = shirts - (shirts * .15); 
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 8:
		cost_shirts = shirts - (shirts * .15);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 9:
		cost_shirts = shirts - (shirts * .2);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 10:
		cost_shirts = shirts - (shirts * .2);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 11:
		cost_shirts = shirts - (shirts * .2);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	case 12:
		cost_shirts = shirts - (shirts * .20);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	default:
		cost_shirts = shirts - (shirts * .25);
		total_shirts = num_shirts * cost_shirts;
		cout << "The cost per shirt is $" << cost_shirts << " and the total cost is $" << total_shirts << endl;
		break;
	}
}

