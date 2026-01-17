/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN
//  Sử dụng lệnh switch-case để xây dựng menu cho 3 chương trình

#include <stdio.h>
#include <math.h>

int main() {

    int choice;
    printf("===== MENU CHUONG TRINH =====\n");
    printf("1. Giai phuong trinh bac 1 (ax + b = 0)\n");
    printf("2. Giai phuong trinh bac 2 (ax^2 + bx + c = 0)\n");
    printf("3. Tinh tien dien hang thang\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);

    switch (choice) {

    // ============================
    // BAI 1: PT BẬC 1
    // ============================
    case 1: {
        double a, b;
        printf("Nhap a, b: ");
        scanf("%lf %lf", &a, &b);

        if (a == 0) {
            if (b == 0) printf("Phuong trinh vo so nghiem\n");
            else printf("Phuong trinh vo nghiem\n");
        } else {
            printf("Nghiem x = %.6lf\n", -b/a);
        }
        break;
    }

    // ============================
    // BAI 2: PT BẬC 2
    // ============================
    case 2: {
        double a, b, c, delta;
        printf("Nhap a, b, c: ");
        scanf("%lf %lf %lf", &a, &b, &c);

        if (a == 0) {
            // quay lại PT bậc 1
            if (b == 0) {
                if (c == 0) printf("Phuong trinh vo so nghiem\n");
                else printf("Phuong trinh vo nghiem\n");
            } else {
                printf("Nghiem x = %.6lf\n", -c/b);
            }
        } else {
            delta = b*b - 4*a*c;
            if (delta < 0) printf("Phuong trinh vo nghiem\n");
            else if (delta == 0)
                printf("Nghiem kep x = %.6lf\n", -b/(2*a));
            else {
                printf("x1 = %.6lf\n", (-b + sqrt(delta)) / (2*a));
                printf("x2 = %.6lf\n", (-b - sqrt(delta)) / (2*a));
            }
        }
        break;
    }

    // ============================
    // BAI 3: TIỀN ĐIỆN
    // ============================
    case 3: {
        int kwh;
        double tien = 0;

        int bac[]    = {50, 50, 100, 100, 100, 999999};
        int dongia[] = {1678, 1734, 2014, 2536, 2834, 2927};

        printf("Nhap so dien tieu thu: ");
        scanf("%d", &kwh);

        int i = 0, remaining = kwh;
        while (remaining > 0) {
            int used = remaining > bac[i] ? bac[i] : remaining;
            tien += used * dongia[i];
            remaining -= used;
            i++;
        }

        printf("So tien dien phai dong: %.0lf VND\n", tien);
        break;
    }

    default:
        printf("Lua chon khong hop le!\n");
    }

    return 0;
}
