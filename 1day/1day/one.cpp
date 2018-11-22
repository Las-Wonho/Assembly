#include <stdio.h>

int print_(int d) {
	printf("%d\n", d);
	return d+2;
}

char* print(char* string) {
	printf(string);
	return string;
}//1, 1, 2, 3, 5, 8;
const char* name= "wonho\n";
_declspec(naked) void main(void) {
	_asm {
		mov eax, 0;
		mov ebx, 0;
		mov ecx, 1;
		mov edx, 5;

		add eax, ebx
		add eax, ecx

		push eax
		call print_

		mov ebx, ecx
		mov ecx, eax 

		push eax
		call print_

		add eax, ebx
		add eax, ecx

		push eax
		call print_

		a:
		jmp a
	}
}
