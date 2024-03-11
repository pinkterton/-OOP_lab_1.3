#pragma once
#include <string>

class Money
{
	long first;
	char second;
public:
	long GetFirst() const { return first; }
	int GetSecond() const { return (int)second; }
	void SetFirst(long value) { first = value; }
	void SetSecond(int value) { second = (int)value; }

	bool Init(long, char);
	void Read();
	void Display();
	std::string toString() const;


	static Money Minus(Money l, Money r);
	double Multiple(double number);
	bool operator== (Money l)
	{
		return (this->first == l.first);
	};
	bool operator!= (Money l)
	{
		return (this->first != l.first);
	};
	bool operator> (Money l)
	{
		return (this->first > l.first);
	};
	bool operator< (Money l)
	{
		return (this->first < l.first);
	};
	bool operator>= (Money l)
	{
		return (this->first >= l.first);
	};
	bool operator<= (Money l)
	{
		return (this->first <= l.first);
	};
};

