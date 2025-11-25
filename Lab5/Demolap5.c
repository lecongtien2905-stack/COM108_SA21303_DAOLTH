// Tìm Min Max
#include <stdio.h>
#include <math.h>
int main () {
    int a, b ,c ;
    float mun , max , min ;
    printf ("nhập số a b c : ");
    scanf("%d%d%d" , &a , &b, &c );
    if (a>b && a>c){
        max = a ;
        if (b>c){
            min = c ;
            mun = b ;
        }
        else {
            min = b ;
            mun = c ;
        }
    }
    else if (b>a && b>c){
        max = b ;
        if (a>c){
            min = c ;
            mun = a ;
        }
        else {
            min = a ;
            mun = c ;
        }
    }
    else {
        max = c ;
        if (a>b){
            min = b ;
            mun = a ;
        }
        else {
            min = a ;
            mun = b ;
        }
    }
    printf ("gia tri lon nhat = %.2f\n" , max );
    printf ("gia tri tuyet doi = %.2f\n" , mun );
    printf ("gia tri nho nhat = %.2f\n" , min );
    return 0 ;

    


}

 

