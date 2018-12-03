#include <stdio.h>
#include<iostream>
#include"numeric.h"
using namespace std;
void addNumberToPointer(int* pointer, int number) {
	__asm {
		mov eax, number;
		mov esi, pointer
		mov [esi], eax;
	}
}
class Point
{
public:
	int x;
	int y;
	void print() {
		cout << "X is " << x << " And Y is " << y << endl;
	}
private:

};
void main() {
	Point point;
	Point* p = &point;

	__asm {
		mov eax, p;
		mov [eax]Point.x, 3;
		mov [eax]Point.y, 5;

		mov ecx, p
		call [Point::print]
	}
	for (;;);
}
