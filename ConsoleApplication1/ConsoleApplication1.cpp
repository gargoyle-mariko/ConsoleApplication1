// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <chapter2task1.cpp>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0, "");
	char ch;
	int a, b, sum=0;
	cout << "������� kol 4fsov i oplatu truda, ��� ��������� ����� ������� �. \n";
	do { 
		cout<< ":";
		cin >> ch;
		if (ch != 'x')
		{  
			a = int(ch) - 48;
			cin >>  b;
		    sum+=a*b;
			cout << sum;
		}
	} while (ch != 'x');
	cout << sum;
	e();
	_getche();
	return 0;
}

