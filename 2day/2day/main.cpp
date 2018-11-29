#include <stdio.h>
#include<iostream>
using namespace std;
void main() {
	auto t=0;

	_asm{
		mov t, 6464;
	};
	cout << t;
	for (;;);
}