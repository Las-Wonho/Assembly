#include <stdio.h>
#include<iostream>
using namespace std;
void main() {
	auto t=0;

	_asm{
		mov t, 40;
	};
	cout << t;
	for (;;);
}