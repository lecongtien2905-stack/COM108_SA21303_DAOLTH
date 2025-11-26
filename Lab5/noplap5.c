//Bài 1:XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT, NHỎ NHẤT TRONG 3 SỐ
#include <stdio.h>
/*int main() {
    double a, b, c;
    printf("Nhập 3 giá trị: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    double min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("Giá trị lớn nhất là: max = %lf\n", max);
    printf("Giá trị nhỏ nhất là: min = %lf\n", min);
    return 0;
}
//Bài 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN
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
    printf("Nhập năm: ");
    scanf("%d", &year);
    if (isLeapYear(year)) {
        printf("%d là năm nhuận.\n", year);
    } else {
        printf("%d không phải là năm nhuận.\n", year);
    }
    return 0;
}*/
//Bài 3: Xây dựng chương trình kiểm tra các số trong [1,1000] mà các số chia hết cho 5 và chia hết cho 9 không
#include <stdio.h>
int main() {
    printf("Các số trong khoảng [1, 1000] chia hết cho 5 và 9 là:\n");
    for (int i = 1; i <= 1000; i++) {
        if (i % 5 == 0 && i % 9 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}