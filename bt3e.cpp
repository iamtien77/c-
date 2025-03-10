#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Nhap 4 so a, b, c, d: ";
    cin >> a >> b >> c >> d;

    // Tìm hiệu lớn nhất giữa các cặp số
    int max_diff = abs(a - b);
    int num1 = a, num2 = b;

    // So sánh với các cặp khác
    if (abs(a - c) > max_diff) {
        max_diff = abs(a - c);
        num1 = a;
        num2 = c;
    }
    if (abs(a - d) > max_diff) {
        max_diff = abs(a - d);
        num1 = a;
        num2 = d;
    }
    if (abs(b - c) > max_diff) {
        max_diff = abs(b - c);
        num1 = b;
        num2 = c;
    }
    if (abs(b - d) > max_diff) {
        max_diff = abs(b - d);
        num1 = b;
        num2 = d;
    }
    if (abs(c - d) > max_diff) {
        max_diff = abs(c - d);
        num1 = c;
        num2 = d;
    }

    cout << "Cap so co hieu lon nhat la: (" << num1 << ", " << num2 << ") voi hieu = " << max_diff << endl;

    return 0;
}