#include <stdio.h>
#include <math.h>

int main() {
    int choice;

    do {
        printf("\n|==================== MENU ====================|\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN va BCNN\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai vay ngan hang\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep tang dan\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("11. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {

            // ===== CN1 =====
            case 1: {
                int x, i, check = 1, sq;
                printf("Nhap so x: ");
                scanf("%d", &x);

                if (x < 2) check = 0;
                for (i = 2; i <= sqrt(x); i++) {
                    if (x % i == 0) { check = 0; break; }
                }

                if (check) printf("La so nguyen to\n");
                else printf("Khong phai so nguyen to\n");

                sq = sqrt(x);
                if (sq * sq == x) printf("La so chinh phuong\n");
                else printf("Khong phai so chinh phuong\n");
                break;
            }

            // ===== CN2 =====
            case 2: {
                int a, b, x, y, r, ucln, bcnn;
                printf("Nhap a: "); scanf("%d", &a);
                printf("Nhap b: "); scanf("%d", &b);

                x = a; y = b;
                while (y != 0) {
                    r = x % y;
                    x = y;
                    y = r;
                }

                ucln = x;
                bcnn = (a * b) / ucln;

                printf("UCLN = %d\n", ucln);
                printf("BCNN = %d\n", bcnn);
                break;
            }

            // ===== CN3 =====
            case 3: {
                int start, end, gio;
                float tien;

                printf("Nhap gio bat dau: "); scanf("%d", &start);
                printf("Nhap gio ket thuc: "); scanf("%d", &end);

                if (start < 12 || end > 23 || start >= end) {
                    printf("Thoi gian khong hop le!\n");
                    break;
                }

                gio = end - start;

                if (gio <= 3)
                    tien = gio * 150000;
                else
                    tien = 3 * 150000 + (gio - 3) * 150000 * 0.7;

                if (start >= 14 && start <= 17)
                    tien *= 0.9;

                printf("Tien phai tra: %.0f VND\n", tien);
                break;
            }

            // ===== CN4 =====
            case 4: {
                int kwh;
                float tien = 0;

                printf("Nhap so dien tieu thu (kWh): ");
                scanf("%d", &kwh);

                if (kwh <= 50)
                    tien = kwh * 1678;
                else if (kwh <= 100)
                    tien = 50 * 1678 + (kwh - 50) * 1734;
                else if (kwh <= 200)
                    tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
                else if (kwh <= 300)
                    tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
                else
                    tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;

                printf("Tien dien phai tra: %.0f VND\n", tien);
                break;
            }

            // ===== CN5 =====
            case 5: {
                int tien;
                printf("Nhap so tien can doi: ");
                scanf("%d", &tien);

                int menhgia[] = {500000,200000,100000,50000,20000,10000,5000,2000,1000};
                int i, sl;

                for (i = 0; i < 9; i++) {
                    sl = tien / menhgia[i];
                    if (sl > 0) {
                        printf("%d x %d VND\n", sl, menhgia[i]);
                        tien %= menhgia[i];
                    }
                }
                break;
            }

            // ===== CN6 =====
            case 6: {
                float tienVay, lai;
                int thang;

                printf("Nhap so tien vay: ");
                scanf("%f", &tienVay);
                printf("Nhap lai suat (%%/nam): ");
                scanf("%f", &lai);
                printf("Nhap so thang vay: ");
                scanf("%d", &thang);

                float gocHangThang = tienVay / thang;
                float duNo = tienVay;
                float tienLai, tong = 0;

                for (int i = 1; i <= thang; i++) {
                    tienLai = duNo * (lai/100/12);
                    float phaiTra = gocHangThang + tienLai;
                    tong += phaiTra;
                    duNo -= gocHangThang;
                }

                printf("Tong tien phai tra: %.0f VND\n", tong);
                break;
            }

            // ===== CN7 =====
            case 7: {
                float giaXe, traTruoc, tienVay;
                float lai = 0.02;
                int thang = 24;

                printf("Nhap gia xe: ");
                scanf("%f", &giaXe);

                traTruoc = giaXe * 0.2;
                tienVay = giaXe - traTruoc;

                float gocHangThang = tienVay / thang;
                float duNo = tienVay;
                float tong = 0;

                for (int i = 1; i <= thang; i++) {
                    float tienLai = duNo * lai;
                    float phaiTra = gocHangThang + tienLai;
                    tong += phaiTra;
                    duNo -= gocHangThang;
                }

                printf("Tong tien phai tra: %.0f VND\n", tong);
                break;
            }

            // ===== CN8 - SAP XEP =====
            case 8: {
                int n, i, j, a[100];

                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);

                for (i = 0; i < n; i++) {
                    printf("a[%d] = ", i);
                    scanf("%d", &a[i]);
                }

                for (i = 0; i < n - 1; i++) {
                    for (j = i + 1; j < n; j++) {
                        if (a[i] > a[j]) {
                            int temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                }

                printf("Mang sau khi sap xep tang dan:\n");
                for (i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;
            }
        }

    } while (choice != 11);

    return 0;
}

    