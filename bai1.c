/******************************************************************************
 * Họ và tên: [Đặng Đình Đức]
 * MSSV:      [PS48675]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main() {
    float diem;

    printf("Nhap diem cua sinh vien (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!\n");
    }
    else if (diem >= 9) {
        printf("Hoc luc xuat sac\n");
    }
    else if (diem >= 8) {
        printf("Hoc luc gioi\n");
    }
    else if (diem >= 6.5) {
        printf("Hoc luc kha\n");
    }
    else if (diem >= 5) {
        printf("Hoc luc trung binh\n");
    }
    else if (diem >= 3.5) {
        printf("Hoc luc yeu\n");
    }
    else {
        printf("Hoc luc kem\n");
    }

    return 0;
}