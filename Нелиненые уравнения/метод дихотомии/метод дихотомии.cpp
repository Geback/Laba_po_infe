#include <iostream>
#include <cmath>
using namespace std;
double E, a, b, c;

double ff(double x)
{
	return (acos(x) - sqrt(1 - 0.3 *pow(x, 3)));
}

int main()
{
	a = 0;
	b = 1;
	E = 0.0001;

	while (abs(a - b) >= E)
	{
		c = (b + a) / 2;

		if (ff(a) * ff(c) > 0)
		{
			a = c;
		}
		else
		{
			b = c;
		}
		
	}
	cout << c;
	return 0;
}