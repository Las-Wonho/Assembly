#include<stdio.h>
#include<Windows.h>

int main() {
	HMODULE const dll = LoadLibraryExW(L"tent.dll",nullptr,0);
	using Function = char const* (__cdecl)();
	Function const Las = reinterpret_cast<Function>(GetProcAddress(dll, "LasWonho"));
	puts(Las());
	FreeLibrary(dll);
}