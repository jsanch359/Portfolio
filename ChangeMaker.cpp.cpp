// ChangeMaker.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string ans;
    int quarters, dimes, nickels;
    double change;
    char ch;
    int whole_num;
    double decimal;
    double price;
    int nckl = 25;
    int dm = 25;
    int quart = 25;
    int one = 0;
    int fve = 0;
    cout << "Welcome to the vending machine change maker program" << endl;
    cout << "Change maker initialized." << endl;
    cout << "Stock contains:" << endl;
    cout << "\t25 nickels" << endl;
    cout << "\t25 dimes" << endl;
    cout << "\t25 quarters" << endl;
    cout << "\t0 ones" << endl;
    cout << "\t0 fives" << endl;

    cout << "Do you want to deposit your money?: ";
    cin >> ans;
    cout << "Enter pruchase price (xx.xx): ";
    cin >> price;
    price *= 100;

    while (fmod(price, 5.0) != 0 || price < 0)
    {
        cout << "Illegal price: Must be a non-negative mulitple of 5 cents." << endl;
        cout << "Enter pruchase price(xx.xx) : ";
        cin >> price;
        price *= 100;
    }
    price /= 100;
    whole_num = int(price);
    decimal = price - whole_num;
    //Menu
    cout << "Menu for deposits:" << endl;
    cout << "\t'n' - deposit a nickel" << endl;
    cout << "\t'd' - deposit a dime" << endl;
    cout << "\t'q' - deposit a quarter" << endl;
    cout << "\t'o' - deposit a one dollar bill" << endl;
    cout << "\t'f' - deposit a five dollar bill" << endl;
    cout << "\t'c' - cancel the purchase" << endl;

    while (ans != "no" && ans != "No")
    {

        cout << "Payment due: " << whole_num << " dollars and " << decimal << " cents" << endl;
        cout << "Indicate your deposit: ";
        cin >> ch;


        if (ch == 'n')
        {
            price -= 0.05;
            whole_num = int(price);
            decimal = price - whole_num;
            nckl += 1;
            if (decimal == 0)
            {

                whole_num = int(price);
                decimal = price - whole_num;
                nckl += 1;
                cout << "Do you want to continue: ";
                cin >> ans;
            }
            else
            {

                nckl += 1;
                whole_num = int(price);
                decimal = price - whole_num;
                cout << "Do you want to continue: ";
                cin >> ans;
            }
        }
        else if (ch == 'd')
        {
            price -= 0.1;
            whole_num = int(price);
            decimal = price - whole_num;
            dm += 1;
            if (decimal == 0)
            {
                whole_num = int(price);
                decimal = price - whole_num;
                dm += 1;
                cout << "Do you want to continue: ";
                cin >> ans;
            }
            else
            {
                dm += 1;
                whole_num = int(price);
                decimal = price - whole_num;
                cout << "Do you want to continue: ";
                cin >> ans;
            }
        }
        else if (ch == 'q')
        {
            price += 0.25;
            whole_num = int(price);
            decimal = price - whole_num;
            quart += 1;
            if (decimal == 0)
            {

                whole_num = int(price);
                decimal = price - whole_num;
                quart += 1;
                cout << "Do you want to continue: ";
                cin >> ans;
            }
            else
            {

                quart += 1;
                whole_num = int(price);
                decimal = price - whole_num;
                cout << "Do you want to continue: ";
                cin >> ans;
            }

        }

        else if (ch == 'o')
        {
            price -= 1;
            whole_num = int(price);
            decimal = price - whole_num;
            one += 1;

            if (price < 1)
            {
                if (price < 0)
                {
                    price += 1;

                    cout << "Please take change below:" << endl;
                    int y, w, x, z;
                    change = 1 - price;

                    y = change * 100;


                    cout << int(y / 25) << " quarters ";

                    x = y % 25;

                    cout << int(x / 10) << " dimes and ";
                    z = x % 10;


                    cout << int(z / 5) << " nickels" << endl;
                    w = z % 5;



                    cout << "Stock contains:" << endl;
                    cout << "\t" << nckl - int(z / 5) << " nickels" << endl;
                    cout << "\t" << dm - int(x / 10) << " dimes" << endl;
                    cout << "\t" << quart - int(y / 25) << " quarters" << endl;
                    cout << "\t" << one << " ones" << endl;
                    cout << "\t" << fve << " fives" << endl;

                    cout << "Do you want to continue: ";
                    cin >> ans;

                }
                else
                {
                    cout << "Please take change below:" << endl;
                    int y, w, x, z;
                    change = 1 - price;



                    y = change * 100;


                    cout << int(y / 25) << " quarters ";

                    x = y % 25;

                    cout << int(x / 10) << " dimes and ";
                    z = x % 10;


                    cout << int(z / 5) << " nickels" << endl;
                    w = z % 5;



                    cout << "Stock contains:" << endl;
                    cout << "\t" << nckl - int(z / 5) << " nickels" << endl;
                    cout << "\t" << dm - int(x / 10) << " dimes" << endl;
                    cout << "\t" << quart - int(y / 25) << " quarters" << endl;
                    cout << "\t" << one << " ones" << endl;
                    cout << "\t" << fve << " fives" << endl;

                    cout << "Do you want to continue: ";
                    cin >> ans;
                }
            }
            else
            {
                cout << "Do you want to continue: ";
                cin >> ans;
            }
        }
        else if (ch == 'f')
        {
            price -= 5;
            whole_num = int(price);
            decimal = price - whole_num;
            fve += 1;

            if (price < 5)
            {
                if (price < 0)
                {
                    price += 5;

                    cout << "Please take change below:" << endl;
                    int y, w, x, z;
                    change = 5 - price;

                    y = change * 100;


                    cout << int(y / 25) << " quarters ";

                    x = y % 25;

                    cout << int(x / 10) << " dimes and ";
                    z = x % 10;


                    cout << int(z / 5) << " nickels" << endl;
                    w = z % 5;



                    cout << "Stock contains:" << endl;
                    cout << "\t" << nckl - int(z / 5) << " nickels" << endl;
                    cout << "\t" << dm - int(x / 10) << " dimes" << endl;
                    cout << "\t" << quart - int(y / 25) << " quarters" << endl;
                    cout << "\t" << one << " ones" << endl;
                    cout << "\t" << fve << " fives" << endl;

                    cout << "Do you want to continue: ";
                    cin >> ans;

                }
                else
                {
                    cout << "Please take change below:" << endl;
                    int y, w, x, z;
                    change = 5 - price;

                    y = change * 100;


                    cout << int(y / 25) << " quarters ";

                    x = y % 25;

                    cout << int(x / 10) << " dimes and ";
                    z = x % 10;


                    cout << int(z / 5) << " nickels" << endl;
                    w = z % 5;



                    cout << "Stock contains:" << endl;
                    cout << "\t" << nckl - int(z / 5) << " nickels" << endl;
                    cout << "\t" << dm - int(x / 10) << " dimes" << endl;
                    cout << "\t" << quart - int(y / 25) << " quarters" << endl;
                    cout << "\t" << one << " ones" << endl;
                    cout << "\t" << fve << " fives" << endl;

                    cout << "Do you want to continue: ";
                    cin >> ans;
                }

            }
            else
            {
                cout << "Do you want to continue: ";
                cin >> ans;
            }
        }
        else
        {
            cout << "Please take your change below." << endl;
            
                int y, w, x, z;
                x = price * 100;
                cout << int(x / 25) << " quarters ";

                y = x % 25;

                cout << int(y / 10) << " dimes and ";
                z = x % 10;


                cout << int(z / 5) << " nickels" << endl;
                w = z % 5;



                cout << "Stock contains:" << endl;
                cout << "\t" << nckl - int(z / 5) << " nickels" << endl;
                cout << "\t" << dm - int(y / 10) << " dimes" << endl;
                cout << "\t" << quart - int(x / 25) << " quarters" << endl;
                cout << "\t" << one << " ones" << endl;
                cout << "\t" << fve << " fives" << endl;
                return 0;

                if (dm < 0)
                {
                    cout << "Machine is out of change." << endl;
                    cout << "See store manager for remaining refund." << endl;
                    cout << "Amount due is: " << price << endl;
                }
        }
       
    }
}

   