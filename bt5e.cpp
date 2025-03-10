#include <iostream>
using namespace std;

int main() {
    int a, b;
    char phepToan;

    // Nhập dữ liệu
    cout << "Nhap 2 so nguyen a, b: ";
    cin >> a >> b;
    cout << "Nhap phep toan (+, -, *, /): ";
    cin >> phepToan;

    // Thực hiện phép toán và xuất kết quả
    switch (phepToan) {
        case '+':
            cout << a << " + " << b << " = " << (a + b) << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << (a - b) << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << (a * b) << endl;
            break;
        case '/':
            if (b != 0) {
                cout << a << " / " << b << " = " << (a / b) << endl;
            }
            else {
                cout << "Loi: Khong the chia cho 0!" << endl;
            }
            break;
        default:
            cout << "Phep toan khong hop le!" << endl;
    }

    return 0;
}