#include <iostream>
using namespace std;
int main()
{
	long double r, sum;
	long int n, p;
	cin >> r;
	cin >> n;
	cin >> p;

	sum = 0;
	/*while (n > 0)
	{
		sum += p;
		sum *= (1.0 + r);
		n--;
	}*/
	for (n; n > 0; n--) {
		sum += p;
		sum *= (1.0 + r);
	}

	cout << (long long)sum << endl;

	return 0;
}
