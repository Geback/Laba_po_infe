#include <iostream>
#include <clocale>
using namespace std;
int n;

int ch(int x)
{
	if ((x == 1) or (x == 0))
	{
		return 1;
	}

	if ((x % 2) == 0)
	{
		cout << x / 2 << endl;
		return ch(x / 2);
	}
	else
	{
		cout << 3 * x + 1 << endl;
		return ch(3 * x + 1);
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите количество цветов:";
	cin >> n;
	cout << ch(n);
	return 0;
}