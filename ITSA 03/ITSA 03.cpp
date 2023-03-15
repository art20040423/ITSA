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
	int primes[100] = { 0 }; //輸入單一數，不需要
	//int a[3] = { 1,2,3 };
	//int b[2][3] =
	//{
	//	{1,2,3},
	//	{4,5,6}
	//};
	cout << "輸入一個數值n: "; //ITSA不會過
	cin >> n;

	//從1開始判斷是不是質數
	int j = 0;
	for (int i = 1; i <= n; i++) {
		if (isPrime(i)) {
			primes[j] = i;
			j++;
		}
	}

	// foreach loop：輸出
	cout << "小於等於" << n << "的質數有:" << endl;
	for (int p : primes) {
		if (p != 0) cout << p << endl;
	}
}