class Numeric {
public:
	Numeric() {
		__asm {
			push 0
			call SetNumber
		}
	}
	Numeric(int number) {
		int* p_number = &(this->number);
		__asm {
			mov esi, p_number;
			mov eax, number;
			mov [esi], eax
		}
	}
	int AddTowNumber(int a, int b);
	int GetNumber();
	void SetNumber(int number);
	void Excute();
private:
	int number = 0;
};