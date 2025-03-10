#include <iostream>
using namespace std;

int main() {
    int n = 9; // Kích thu?c c?a hình vuông (9 x 9)
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Ki?m tra di?u ki?n d? in d?u sao
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || i + j == n - 1) {
                cout << "* ";
            } else {
                cout << "  "; // In kho?ng tr?ng
            }
        }
        cout << endl; // Xu?ng dòng sau m?i hàng
    }

    return 0;
}