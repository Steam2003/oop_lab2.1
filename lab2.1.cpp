#include <Windows.h>
#include "Bill.h"

Bill makeBill(int callDuration, int pricePerMinute)
{
	Bill bb(callDuration, pricePerMinute);
	return bb;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Bill b = makeBill(2,3);
	Bill b2;
	Bill b3(5, 5);
	Bill b4;
	cin >> b4;
	b2 = b3;
	cout << "call*price= " << b.cost() << endl;
	cout << b;
	cout << b2;
	cout << b3;
	cout << b4;
	--b;
	b3++;
	cout << b;
}