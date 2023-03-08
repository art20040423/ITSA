#include <iostream>
using namespace std;
int main()
{
	int x, y;
	int r = 100; //圓半徑
	int x1 = 0, y1 = 0; //圓心座標
	cout << "請輸入座標："; //重要：測試時沒這行
	cin >> x >> y;
	if ((x - x1) * (x - x1) + (y - y1) * (y - y1) <= r * r)
		cout << "inside" << endl;
	else
		cout << "outside" << endl;

	return 0;
}
