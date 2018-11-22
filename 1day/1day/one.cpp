#include <stdio.h>
void print(char* string) {
	printf(string);
}
const char* name= "wonho\n";
_declspec(naked) void main(void) {
	_asm {
		
		mov edx, name;
		mov ebx, edx;
		add edx, 5

		stay:

		push ebx;
		call print;

		add ebx, 1

		cmp edx, ebx;
		jne stay

		a:
		jmp a;
	}
}
