#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// ===== KHAI BAO HAM =====
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();

int main(){
    int choice;
    do{
        printf("|=====================MENU=====================|\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN va BCNN cua 2 so\n");
        printf("3. Tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Thoat\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6:
                printf("Thoat chuong trinh!\n");
                exit(0);
            default:
                printf("Lua chon khong hop le!\n");
        }
        printf("\n");
        system("pause");
        system("cls");
    } while(choice != 6);

    return 0;
}

// ====== CHUC NANG 1 ======
void chucNang1(){
    int x, i, prime = 1;
    printf("Nhap so nguyen: ");
    scanf("%d",&x);

    if(x < 2) prime = 0;
    for(i=2;i<=sqrt(x);i++){
        if(x % i == 0){
            prime = 0;
            break;
        }
    }

    if(prime) printf("%d la so nguyen to\n",x);
    else printf("%d khong phai la so nguyen to\n",x);

    int s = sqrt(x);
    if(s*s == x) printf("%d la so chinh phuong\n",x);
    else printf("%d khong phai so chinh phuong\n",x);
}

// ====== CHUC NANG 2 ======
void chucNang2(){
    int a,b,i,ucln=1,bcnn;
    printf("Nhap a: "); scanf("%d",&a);
    printf("Nhap b: "); scanf("%d",&b);

    for(i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0) ucln = i;
    }
    bcnn = a*b/ucln;

    printf("UCLN = %d\n",ucln);
    printf("BCNN = %d\n",bcnn);
}

// ====== CHUC NANG 3 ======
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

    printf("Tien karaoke phai tra: %.0f VND\n", total);
}

// ======
