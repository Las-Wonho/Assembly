#include"numeric.h"
int Numeric::AddTowNumber(int a, int b) {
	__asm {
		mov eax, a;
		mov ebx, b;
		add eax, ebx;
	}
}