#include<iostream>
#include<math.h>//cmath
using namespace std;
int main()
{
	int a, b, c, d;
	int x, y, z;
	float kc;
	cout << "Nhap he so: ";
	cin >> a >> b >> c >> d;
	cout << "Nhap toa do M: ";
	cin >> x >> y >> z;
	kc = abs(a*x + b*y + c*z + d) / sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
	cout << "KC la: " << kc;
	cout << endl;
	return 0;
}