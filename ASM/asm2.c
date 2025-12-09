#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// ===== Khai báo hàm =====
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
void chucNang6();

int main(){
    int choice;
    do{
        printf("|=====================MENU=====================|\n");
        printf("1. kiem tra so nguyen\n");
        printf("2. tim uoc so chung va boi so chung cua 2 so nguyen\n");
        printf("3. tinh tien cho quan karaoke\n");
        printf("4. tinh tien dien\n");
        printf("5. chuc nang doi tien\n");
        printf("6. tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. vay tien mua xe\n");
        printf("8. sap xep thong tin sinh vien\n");
        printf("9. xay dung game FPOLY-LOTT\n");
        printf("10. tinh toan phan so\n");
        printf("11. thoat!!!\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6: chucNang6(); break;
            case 11:
                printf("Thoat chuong trinh!\n");
                exit(0);
            default:
                printf("Lua chon khong hop le!\n");
        }

        printf("\n");
        system("pause");
        system("cls");

    }while(choice != 11);

    return 0;
}

// =====  1 =====
void chucNang1(){
    int x, i, prime = 1;
    printf("Nhap so nguyen x: ");
    scanf("%d",&x);

    if(x < 2) prime = 0;
    for(i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            prime = 0;
            break;
        }
    }

    if(prime) printf("%d la so nguyen to\n", x);
    else printf("%d khong phai so nguyen to\n", x);

    int can = sqrt(x);
    if(can * can == x)
        printf("%d la so chinh phuong\n", x);
    else
        printf("%d khong phai so chinh phuong\n", x);
}

// =====  2 =====
void chucNang2(){
    int a,b,i,ucln=1,bcnn;
    printf("Nhap a: "); scanf("%d",&a);
    printf("Nhap b: "); scanf("%d",&b);

    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0)
            ucln=i;
    }
    bcnn = a*b/ucln;

    printf("UCLN = %d\n",ucln);
    printf("BCNN = %d\n",bcnn);
}

// =====  3 =====
void chucNang3(){
    int start, end, hours;
    float total = 0;
    printf("Nhap gio bat dau: ");
    scanf("%d",&start);
    printf("Nhap gio ket thuc: ");
    scanf("%d",&end);

    hours = end - start;
    if(hours <= 3)
        total = hours * 50000;
    else
        total = 3*50000 + (hours-3)*35000;

    if(start >= 14 && start <= 17)
        total *= 0.9;

    printf("Tien karaoke: %.0f VND\n", total);
}

// =====  4 =====
void chucNang4(){
    int kwh;
    float total = 0;
    printf("Nhap so kWh: ");
    scanf("%d",&kwh);

    if(kwh<=50) total = kwh*1678;
    else if(kwh<=100) total = 50*1678 + (kwh-50)*1734;
    else if(kwh<=200) total = 50*1678 + 50*1734 + (kwh-100)*2014;
    else if(kwh<=300) total = 50*1678 + 50*1734 + 100*2014 + (kwh-200)*2536;
    else total = kwh*2927;

    printf("Tien dien: %.0f VND\n", total);
}

// =====  5 =====
void chucNang5(){
    int money, m[] = {500,200,100,50,20,10,5,2,1};
    printf("Nhap so tien: ");
    scanf("%d",&money);

    for(int i=0;i<9;i++){
        printf("%d to %d\n", money/m[i], m[i]);
        money %= m[i];
    }
}

// =====  6 =====
void chucNang6(){
    double tienVay, tongTien;
    printf("Nhap so tien muon vay: ");
    scanf("%lf",&tienVay);

    tongTien = tienVay + tienVay * 0.05 * 12;

    printf("Tong tien phai tra: %.0lf VND\n", tongTien);
    printf("Moi thang phai tra: %.0lf VND\n", tongTien/12);
}
