//Bài 1 xây dựng chương trình +- 2 số
// chú thích khối lệnh /*...*/ hoặc //...
#include <stdio.h>
int main() {
    int a, b, sum, hieu;
    printf("\nNhap 2 so nguyen");
    scanf("%d%d", &a, &b);
    sum = a + b;
    hieu = a - b;
    printf("\nTong cua 2 so nguyen la %d", sum);
    printf("\nHieu cua 2 so nguyen la %d", hieu);
    return 0;
}
//Bài 2 XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
#include <stdio.h>
int main() {
    int dai, rong, chuvi, dientich;
    printf("\nNhap chieu dai va chieu rong hinh chu nhat: ");
    scanf("%d%d", &dai, &rong);
    chuvi = (dai + rong) * 2;
    dientich = dai * rong;
    printf("\nChu vi hinh chu nhat la: %d", chuvi);
    printf("\nDien tich hinh chu nhat la: %d", dientich);
    return 0;
}
//Bài 3 XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
#include <stdio.h>
int main() {
  int r;
    float chuvi, dientich, pi = 3.14;
    const float pi = 3.14;
    printf("\nNhap ban kinh hinh tron: ");
    scanf("%f", &r);
    chuvi = 2 * pi * r;
    dientich = pi * r * r;
    printf("\nChu vi hinh tron la: %f", chuvi);
    printf("\nDien tich hinh tron la: %f", dientich);
    return 0;
}
//Bài 4 XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH CỦA 3 MÔN HỌC
#include <stdio.h>
int main() {
    float toan, ly, hoa, dtb;
    const float he_sotoan=3.0;
    const float he_soly=2.0;
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);
    dtb = (toan + ly + hoa) / 3;
    printf("Diem trung binh cua 3 mon la: %.2f\n", dtb);
    return 0;
}
//Bài 5 XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI HÌNH VUÔNG
#include <stdio.h>
#include <math.h>
int main() {
    float canh;
    printf("Nhap do dai canh hinh tam giac vuong: ");
    scanf("%f", &canh);
    float chuvi= 2*canh+sqrt(2)*canh;
    float dientich=(canh*canh)/2;
    printf("Chu vi hinh tam giac vuong la: %f\n", chuvi);
    printf("Dien tich hinh tam giac vuong la: %f\n", dientich);
    return 0;
}