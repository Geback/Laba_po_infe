#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int n;

int fib(int n, int a = 0, int b = 1)
{
	if ((n == 1) or (n == 2))
	{
		return 1;
	}
	
	cout << a;
	return fib(n - 1, b, a + b);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n;
	cout << endl << fib(n);
	cout << "0" << endl;
	return 0;
}