#include <iostream>
using namespace std;

int main() {
    // Khai báo các mệnh giá tiền (từ lớn đến bé)
    int denominations[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int numDenominations = sizeof(denominations) / sizeof(denominations[0]); // Số lượng mệnh giá

    // Nhập số tiền cần rút
    long long money;
    cout << "Nhap so tien can rut (don vi: VND): ";
    cin >> money;

    // Kiểm tra điều kiện hợp lệ của số tiền
    if (money < 20000 || money > 5000000) {
        cout << "So tien khong hop le! So tien phai nam trong khoang tu 20,000 den 5,000,000 VND.\n";
        return 1;
    }
    if (money % 1000 != 0) {
        cout << "So tien khong hop le! So tien phai chia het cho 1,000.\n";
        return 1;
    }

    // In ra tiêu đề kết quả
    cout << "Giai phap toi uu de thanh toan " << money << " VND:\n";

    // Duyệt qua từng mệnh giá để thanh toán
    for (int i = 0; i < numDenominations; i++) {
        // Tính số lượng tờ tiền của mệnh giá hiện tại
        int count = money / denominations[i];
        // Nếu số lượng tờ tiền > 0, in ra kết quả
        if (count > 0) {
            cout << "- " << count << " to " << denominations[i] << " VND\n";
        }
        // Trừ đi số tiền đã thanh toán
        money = money % denominations[i];
    }

    return 0;
}