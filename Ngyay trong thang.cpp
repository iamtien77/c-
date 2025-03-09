#include<iostream>
using namespace std;
int main()
{
	int thang, nam, sntt;
	cout << "Nhap thang: ";
	cin >> thang;
	cout << "Nhap nam: ";
	cin >> nam;
	bool nhuan;
	nhuan = (nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100 != 0));
	switch (thang)
	{
	case 1: case 3:case 5:case 7:case 8:case 10:case 12:
		sntt = 31;
		break;
	case 4: case 6:case 9:case 11:
		sntt = 30;
		break;
	case 2: 
		if (nhuan == true)
			sntt = 29;
		else
			sntt = 28;
	}
	cout << "So ngay trong thang " << thang << " nam " << nam << "la: " << sntt;
	cout << endl;
	return 0;
}