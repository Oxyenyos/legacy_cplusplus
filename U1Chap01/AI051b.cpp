// Filename: \\U1Chap01\AI051b.CPP
#include<iostream>
#include<string>
#include<ctype.h>
void Change(char Msg[], int Len)
{
	for (int Count=0; Count<Len; Count++)
	{
		if (islower(Msg[Count]))
			Msg[Count] = toupper(Msg[Count]);
		else if (isupper(Msg[Count]))
			Msg[Count] = tolower(Msg[Count]);
		else if (isdigit(Msg[Count]))
			Msg[Count] = Msg[Count] + 1;
		else Msg[Count] = '*';
	}
}
int main()
{
	char Message[] = "2005 Tests ahead";
	int Size = strlen(Message);
	Change(Message, Size);
	cout << Message << endl;
	for (int C = 0, R = Size-1; C <= Size/2; C++, R--)
	{
		char Temp = Message[C];
		Message[C] = Message[R];
		Message[R] = Temp;
	}
				cout<<Message<<endl;
}
