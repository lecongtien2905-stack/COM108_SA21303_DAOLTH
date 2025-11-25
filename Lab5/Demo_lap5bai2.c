// BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN
#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Năm nhuận
    } else {
        return 0; // Năm không nhuận
    }
}

int main() {
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d la nam nhuan\n", year);
    else
        printf("%d khong phai nam nhuan\n", year);

    return 0;
}
