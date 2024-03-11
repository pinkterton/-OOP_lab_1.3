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

	c = Money::Minus(b, a);
	cout << c.GetFirst() << " " << c.GetSecond() << endl;
	cout << endl;

	if (b.operator>(a))
	{ 
		double result = b.Multiple(2);
		cout << "B multiplied by 2 \n" << "Money = " << result << endl;
	}
	else
	{
		double result = a.Multiple(2);
		cout << "B multiplied by 2 \n" << "Money = " << result << endl;
	}

	return 0;
}