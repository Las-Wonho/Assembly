#include <stdio.h>
void print(char* string) {
	printf(string);
}
const char* name= "wonho";
_declspec(naked) void main(void) {
	_asm {
		push 0;
		popf
		
		push name;

		call print;

		stay:
		jmp stay;
	}
}
