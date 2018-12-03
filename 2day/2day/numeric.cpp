#include"numeric.h"
#include<iostream>
int Numeric::AddTowNumber(int a, int b) {
	__asm {
		mov eax, a;
		mov ebx, b;
		add eax, ebx;
	}
}
void Numeric::Excute() {
	__asm {
		push 3;
		call SetNumber;
	}
}
int Numeric::GetNumber() {
	return number;
}
void Numeric::SetNumber(int number) {
	this->number = number;
}