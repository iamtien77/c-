#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap 3 so a, b, c: ";
    cin >> a >> b >> c;

    // Kiểm tra số nào nằm giữa
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        cout << "So nam giua la: " << a << endl;
    }
    else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        cout << "So nam giua la: " << b << endl;
    }
    else {
        cout << "So nam giua la: " << c << endl;
    }

    return 0;
}