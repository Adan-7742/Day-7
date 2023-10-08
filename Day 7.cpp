

// conditional programing ...............

// i use if 
//i use if else 
// if  else if 

#include<iostream>
#include<cmath>
using namespace std;



int dis() {
	// get value fro, user to find the dscriminent of given equation then we will have 

	cout << "===============================================" << endl;
	double a, b, c, disc, r1, r2;
	cout << "Input coefficiant of x square = ";
	cin >> a;
	cout << "Input coefficiant of x = ";
	cin >> b;
	cout << "Input the value of constant = ";
	cin >> c;

	disc = b * b - 4 * a * c;
	if (disc > 0) {
		r1 = (-b + sqrt(disc)) / 2 * a;
		r2 = (-b - sqrt(disc)) / 2 * a;

		cout << "Root 1 = " << r1 << endl;
		cout << "Root 2 = " << r2 << endl;
	}
	else if (disc == 0) {
		r1 = -b / 2 * a;
		cout << "Root 1 & 2 = " << r1 << endl;
	}
	else {
		double realPart = -b / (2 * a);
		double imaginaryPart = sqrt(-disc) / 2 * a;
		cout << "Root 1 = " << realPart << "+" << imaginaryPart << endl;
		cout << "Root 2 = " << realPart << "-" << imaginaryPart << endl;
	}
	return 0;
}
int play_value() {

	// comparing two values for bool type using if ellse

	cout << "===============================================" << endl;
	int a{ 10 };
	int b{ 15 };

	bool result = (a < b);
	cout << boolalpha << " result : " << result << endl;
	//we can also use it as nested if stetement
	//and we can also use rational operators

	if (result == true) {
		cout << a << "is less then " << b << endl;


	}
	else {
		cout << a << "is greater then " << b << endl;
	}
	return 0;
}

int program() {
	// get input from user to display the name of in stock varaity using if else condition
	cout << "===============================================" << endl;
	char B;
	cout << "S For Straberry" << endl;
	cout << "A For Apple" << endl;
	cout << "G For Guava" << endl;
	cout << "What to buy= ";
	cin >> B;


	if (B == 'S' || B == 's') {

		cout << "You select Satabery" << endl;
	}
	if (B == 'A' || B == 'a') {

		cout << "You select Apple" << endl;
	}
	if (B == 'G' || B == 'g') {

		cout << "You select Gava" << endl;
	}
	else
	{
		cout << "Not in Stock ........" << endl;
	}
		
		return 0;

}

int if_opt() {

	//run a program with if statement
	cout << "===============================================" << endl;

    bool red{false};
    bool green{true};
    bool yellow{false};
    bool police_stop{true};

    if (red) {
        cout << "Stop" << endl;

    }
    if (yellow) {
        cout << "Slow down" << endl;

    }
    if (green) {
        cout << "Go" << endl;

    }
	return 0;
}

int main()
{
	dis();
	play_value();
	program();
	if_opt();
}

