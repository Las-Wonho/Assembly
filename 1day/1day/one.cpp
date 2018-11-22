#include <stdio.h>
void print() {
	printf("Las Wonho");
}
const char* name= "wonho";
_declspec(naked) void main(void) {
	_asm {
		call print;

		stay:
		jmp stay;
	}
}
