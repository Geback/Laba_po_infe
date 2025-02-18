#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int n;

int fib(int n, int a = 0, int b = 1)
{
	if (n == 0)
	{
		return 1;
	}

	cout << b << endl;
	return fib(n - 1, b, a + b);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Ввод:";
	cin >> n;
	while (n<=0)
	{
		cout << "Введите положительное число:";
		cin >> n;
	}
	fib(n);
	return 0;
}