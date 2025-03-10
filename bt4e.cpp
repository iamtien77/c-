#include <iostream>
#include <string>
using namespace std;

int main() {
    string hoTen1, hoTen2;
    int namSinh1, namSinh2;
    int namHienTai = 2025; // Giả sử năm hiện tại là 2025 (theo ngày hiện tại bạn cung cấp)

    // Nhập thông tin người 1
    cout << "Nhap ho ten nguoi thu 1: ";
    cin.ignore(1); // Bỏ qua ký tự xuống dòng từ trước
    getline(cin, hoTen1);
    cout << "Nhap nam sinh nguoi thu 1: ";
    cin >> namSinh1;

    // Nhập thông tin người 2
    cout << "Nhap ho ten nguoi thu 2: ";
    cin.ignore(1);
    getline(cin, hoTen2);
    cout << "Nhap nam sinh nguoi thu 2: ";
    cin >> namSinh2;

    // Tính tuổi
    int tuoi1 = namHienTai - namSinh1;
    int tuoi2 = namHienTai - namSinh2;

    // Xuất thông tin
    cout << "Thong tin nguoi thu 1: " << hoTen1 << ", " << tuoi1 << " tuoi" << endl;
    cout << "Thong tin nguoi thu 2: " << hoTen2 << ", " << tuoi2 << " tuoi" << endl;

    return 0;
}