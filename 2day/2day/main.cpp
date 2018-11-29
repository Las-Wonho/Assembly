#include <stdio.h>
#include<iostream>
using namespace std;
int Add(int a, int b) {
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