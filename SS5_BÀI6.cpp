#include <stdio.h>

int main() {
    double num1, num2; 
    int choice;        

 
    printf("Nhap so thu nhat: ");
    scanf("%lf", &num1);
    printf("Nhap so thu hai: ");
    scanf("%lf", &num2);

    do {
      
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Tong: %.2lf\n", num1 + num2);
                break;
            case 2:
                printf("Hieu: %.2lf\n", num1 - num2);
                break;
            case 3:
                printf("Tich: %.2lf\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong: %.2lf\n", num1 / num2);
                } else {
                    printf("Loi: Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai!\n");
        }
    } while (choice != 5);

    return 0;
}

