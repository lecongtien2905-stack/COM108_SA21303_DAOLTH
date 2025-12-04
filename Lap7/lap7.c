#include<stdio.h>
#include<string.h>
int main(){
    //Bài 1:xây dựng chương trinh đếm nguyên âm và phụ âm của 1 chuỗi
    char s[100];
    printf("Xin moi nhap vao chuoi:");
    gets(s);
    int i=0;
    int count_n=0; //dem so nguyen am
    int count_p=0; //dem so phu am
    while(s[i] != '\0'){

        if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='u' || s[i]=='o' ){
            count_n++;
        }else{
            count_p++;
        }
        i++;
    }
    printf("Chuoi '%s'co chua:%d nguyen am va %d phu am\n", s,count_n,count_p);

    //Bài 2:xây dụng chương trình đăng nhập bằng usesed name và password

   // tài khoản đúng (gán sẵn)
    char name_true[50] = "admin";
    char password_true[50] = "123456";

    // tài khoản người dùng nhập
    char name[50];
    char password[50];

    // đăng nhập
    printf("== DANG NHAP TAI KHOAN ==\n\n");
    printf("Nhap username: ");
    scanf("%s", name);

    printf("Nhap password: ");
    scanf("%s", password);

    // kiểm tra đúng sai
    if(strcmp(name, name_true) == 0 && strcmp(password, password_true) == 0){
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Sai ten tai khoan hoac mat khau!\n");
    }
    return 0;
}