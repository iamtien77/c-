#include<iostream>
using namespace std;
int main()
{
	float toan, ly, hoa;
	do
	{
		cout << "Nhap toan: ";
		cin >> toan;
		if (toan<0 || toan>10)
			cout << "Moi nhap lai!" << endl;
	} while (toan<0 || toan>10);
	do
	{
		cout << "Nhap ly: ";
		cin >> ly;
		if (ly<0 || ly>10)
			cout << "Moi nhap lai!" << endl;
	} while (ly<0 || ly>10);
	do
	{
		cout << "Nhap hoa: ";
		cin >> hoa;
		if (hoa<0 || hoa>10)
			cout << "Moi nhap lai!" << endl;
	} while (hoa<0 || hoa>10);
	float tb = (toan + ly + hoa) / 3;
	if (tb < 5)
		cout << "Kem";
	else
	{
		if (tb < 7)
			cout << "tbinh";
		else
		{
			if (tb < 8)
				cout << "Kha";
			else
			{
				if (tb < 10)
					cout << "Gioi";
				else
					cout << "Xuat sac";
			}
		}
	}
	cout << endl;
	return 0;
}