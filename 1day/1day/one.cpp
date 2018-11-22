#include <stdio.h>

int print_(int d) {
	printf("%d\n", d);
	return d;
}

char* print(char* string) {
	printf(string);
	return string;
}
const char* name= "wonho\n";
_declspec(naked) void main(void) {
	_asm {
		
		mov ebx, 5;
		mov eax, name;
		add ebx, name;

		stay:

		push eax;
		call print;
		add eax, 1;

		cmp eax, ebx
		je a
		jmp stay

		a:
		jmp a
	}
}
