// GradeCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> 
using namespace std;

void Grade_Counter(vector<char> grades, int size )
{
	char grade;
	int a = 0, b = 0, c = 0, d = 0, f = 0;
	for (int i = 0; i < size; i++)
	{
		grade = grades[i];
		if (grade == 'A')
		{
			a += 1;
		}
		else if (grade == 'B')
		{
			b += 1;
		}
		else if (grade == 'C')
		{
			c += 1;
		}
		else if (grade == 'D')
		{
			d += 1;
		}
		else if (grade == 'F')
		{
			f += 1;
		}
	}
	cout << "Number of A = " << a << endl;
	cout << "Number of B = " << b << endl;
	cout << "Number of C = " << c << endl;
	cout << "Number of D = " << d << endl;
	cout << "Number of F = " << f << endl;

}
   

int main()
{
	char grade;
	int num_grades;
	cout << "Please input the number of grades to be read in (1-50)" << endl;
	cin >> num_grades;

	vector<char>scores(num_grades);

	for (int i = 0; i < num_grades; i++)
	{
		cout << "Input a grade:" << endl;
		cin >> grade;
		scores.push_back(grade);
	}
	Grade_Counter(scores, scores.size());
}
/*
* Results
* Run 1:
* Please input the number of grades to be read in (1-50)
6
Input a grade:
A
Input a grade:
A
Input a grade:
B
Input a grade:
B
Input a grade:
C
Input a grade:
D
Number of A = 2
Number of B = 2
Number of C = 1
Number of D = 1
Number of F = 0
*/



	


