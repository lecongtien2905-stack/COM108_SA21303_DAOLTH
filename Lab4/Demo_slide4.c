#include <stdio.h>
#include <math.h>

int main (){
int n, s = 0;
printf("nhap n: ");
scanf("%d", &n);
for (int i = 0; i <= n; i++){
    if (i % 2!=0) {
        s += i;
    }
}
printf(" tong so le: %d", s);
return 0;
}
