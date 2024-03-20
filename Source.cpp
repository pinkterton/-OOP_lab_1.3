#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	Money a, b, c, d;
	a.Read();
	a.Display();

	b.SetFirst(1414);
	b.SetSecond(6);
	b.Display();
	cout << endl;


	c = Money::Minus(b, a);
	cout << "Minus operation: \n";
	cout << c.GetFirst() << "," << c.GetSecond() << endl;
	cout << endl;

	if (b.operator>(a))
	{ 
		d = Money::Multiply(2, b);
		cout << "B multiplied by 2 \n";
		cout << d.GetFirst() << "," << d.GetSecond() << endl;
	}
	else
	{
		d = Money::Multiply(2, a);
		cout << "A multiplied by 2 \n";
		cout << d.GetFirst() << "," << d.GetSecond() << endl;
	}

	return 0;
}