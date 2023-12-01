#include<stdio.h>
void reverse(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a,b;
    printf("nhap a,b");
    scanf("%d%d",&a,&b);
    printf("hieu truoc khi doi:");
    printf("%d - %d = %d\n",a,b,a-b);
    reverse(&a,&b);
    printf("hieu sau khi doi:");
    printf("%d - %d = %d\n",a,b,a-b);
}