#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong so nguyen n: ";
    cin >> n;

    int soAm = 0, soDuong = 0;
    int so;

    // Nhập n số và đếm
    for (int i = 0; i < n; i++) {
        cout << "Nhap so thu " << (i + 1) << ": ";
        cin >> so;
        if (so > 0) {
            soDuong++;
        }
        else if (so < 0) {
            soAm++;
        }
    }

    // Xuất kết quả
    cout << "So luong so nguyen am: " << soAm << endl;
    cout << "So luong so nguyen duong: " << soDuong << endl;

    return 0;
}