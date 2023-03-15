#include <iostream>
using namespace std;

bool isPrime(int p) {
	//判斷p是否為質數
	if (p <= 1) return false;
	for (int i = 2; i < p; i++) {
		if (p % i == 0) return false;
	}
	return true;
}

int main()
{
	int n;
	cout << "輸入一個數值n: "; //ITSA不會過
	cin >> n;

	//輸出
	if (isprime)
		cout << "YES" << endl;

	else
		cout << "NO" << endl;

	return 0;
}
