#include<stdio.h>
int xor(int a, int b);
int main ( ) {

    int p,q;
    printf("Enter P (0 or 1) :");
    scanf("%d",&p);
    printf("Enter Q (0 or 1) :");
    scanf("%d",&q);
    printf("P AND Q is :%d\n",p && q);
    printf("P OR Q is :%d\n",p || q);
    printf("P XOR Q is :%d\n",xor(p,q));

    return 0;

}
int xor(int a, int b){
    return (a || b) && !(a && b);
}