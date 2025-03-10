#include <iostream>
#include <cstdlib> // Để dùng abs()
using namespace std;

int main() {
    int n, a, b, c;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Nhap 3 so a, b, c: ";
    cin >> a >> b >> c;

    // Tính khoảng cách từ n đến a, b, c
    int dist_a = abs(n - a);
    int dist_b = abs(n - b);
    int dist_c = abs(n - c);

    // Tìm số có khoảng cách nhỏ nhất
    if (dist_a <= dist_b && dist_a <= dist_c) {
        cout << "So gan nhat voi " << n << " la: " << a << endl;
    }
    else if (dist_b <= dist_a && dist_b <= dist_c) {
        cout << "So gan nhat voi " << n << " la: " << b << endl;
    }
    else {
        cout << "So gan nhat voi " << n << " la: " << c << endl;
    }

    return 0;
}