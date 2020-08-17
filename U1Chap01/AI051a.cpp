// Filename: \\U1Chap01\AI051a.CPP
#include <iostream>
const int Divider = 5;
int main()
{
	int Number = 15;
	for (int Count = 1; Count<=5; Count++, Number-=3)
	if (Number%Divider==0)
	{
		cout << Number / Divider;
		cout << endl;
	}
	else
		cout << Number + Divider << endl;
}
