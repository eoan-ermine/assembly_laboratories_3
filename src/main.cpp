#include <iostream>

using namespace std;

extern "C" int CalcResult1_(int val1, int val2, int* quo, int* rem);

static void PrintResult(const char* msg, int lhs, int rhs, int quo, int rem, int result) {
	cout << msg << '\n';

	cout << "val1 = " << lhs << '\n';
	cout << "val2 = " << rhs << '\n';
	cout << "quo = " << quo << '\n';
	cout << "rem = " << rem << '\n';

	cout << "prod = " << result << "\n\n";
}

int main() {
	{
		int val1 = 42, val2 = 9, quo, rem;
		int prod = CalcResult1_(val1, val2, &quo, &rem);
		PrintResult("Пример 1", val1, val2, quo, rem, prod);
	}
	{
		int val1 = 121, val2 = 17, quo, rem;
		int prod = CalcResult1_(val1, val2, &quo, &rem);
		PrintResult("Пример 2", val1, val2, quo, rem, prod);
	}
}