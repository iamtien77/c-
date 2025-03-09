#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	int max;//bien linh canh
	cout << "Nhap a, b,c,d: ";
	cin >> a >> b >> c >> d;
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	cout << "GTLN la: " << max;
	cout << endl;
	return 0;
}