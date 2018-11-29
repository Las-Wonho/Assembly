#include <stdio.h>
#include<iostream>
using namespace std;
int Add(float a, float b) {
	__asm {
		mov eax, a;
		add eax, b;
	}
	//return eax
}
void main() {
	int t = Add(1, 2);
	cout << t;
	for (;;);
}