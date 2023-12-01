#include<stdio.h>
int main() {
    int n;
    printf("nhap n ");
    scanf("%d",&n);
    printf("cach 1:\n");
    printf("gia tri %d\n",n);
    printf("dia chi %d\n",&n);
    int *n1 = &n;
    printf("cach 2:\n");
    printf("gia tri %d\n",*n1);
    printf("dia chi %d\n",n1);
}