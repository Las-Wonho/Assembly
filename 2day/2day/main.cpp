#include <stdio.h>
#include<iostream>
using namespace std;
void main() {
	const int t=2;
	int result = 0;
	_asm{
		mov eax, t;
		add eax, 10;
		add result, eax;
	};
	cout << result;
	for (;;);
}