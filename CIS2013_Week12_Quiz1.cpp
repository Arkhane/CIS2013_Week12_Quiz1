#include <iostream>
#include <cstring>
using namespace std;




class House
{
private:
	string color = "white";
	int doors = 4;
	int windows = 6;
	int carports = 1;
	int year = 2018;

public:
	//print	
	void PrintSelction()
	{
		cout << "Select an action..." << endl;
		cout << "-----------------------------" << endl;
		cout << "set color (c)" << endl;
		cout << "set carports (p)" << endl;
		cout << "set windows (w)" << endl;
		cout << "set doors (d)" << endl;
		cout << "set year (y)" << endl;
		cout << "print (p)" << endl;
		cout << "-----------------------------" << endl;
		cout << "What would you like to do?" << endl;
	}

	void PrintStatus()
	{
		cout << "Your house was made in year " << year << ", color " << color << " with " << carports << " carports, " << windows << " windows, " << doors << " doors." << endl;
	}

	// default Input
	

	void Input(char x)
	{
		if (x == 'c')
		{
			cout << "set color..." << endl;
			cin >> color;
		}

		if (x == 'p')
		{
			cout << "set Carports..." << endl;
			cin >> carports;
		}

		if (x == 'w')
		{
			cout << "set windows..." << endl;
			cin >> windows;
		}

		if (x == 'd')
		{
			cout << "set doors..." << endl;
			cin >> doors;
		}

		if (x == 'y')
		{
			cout << "set year..." << endl;
			cin >> year;
		}
	}
};




int main()
{
	char userInput;
	char option;

	House myHouse;

	while (1)
	{
		myHouse.PrintStatus();
		myHouse.PrintSelction();
		cin >> userInput;
		myHouse.Input(userInput);
		myHouse.PrintStatus();

		cout << "do you want to keep on customize (y/n)..." << endl;
		cin >> option;
		if (option == 'n')
		{
			break;
		}
	}

	return 0;
}