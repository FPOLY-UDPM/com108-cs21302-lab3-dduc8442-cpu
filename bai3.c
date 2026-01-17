/******************************************************************************
 * Họ và tên: [Đặng Đình Đức]
 * MSSV:      [PS48675]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main() {
    int kwh;
    double tien = 0;

    // Bậc thang và đơn giá
    int bac[]     = {50, 50, 100, 100, 100, 999999};  
    int dongia[]  = {1678, 1734, 2014, 2536, 2834, 2927};

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &kwh);

    int i = 0;
    int remaining = kwh;

    while (remaining > 0) {
        int used = remaining > bac[i] ? bac[i] : remaining;
        tien += used * dongia[i];
        remaining -= used;
        i++;
    }

    printf("So tien dien phai dong: %.0lf VND\n", tien);
    return 0;
}
