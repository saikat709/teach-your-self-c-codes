#include <stdio.h>
int main( ) {
    int a1[10], a2[10];

    for( int i=0; i<10; i++){
        a1[i]=i;
    }
    for( int i=0; i<10; i++){
        a2[i]=a1[i];
    }
    for( int i=0; i<10; i++){
        printf("%d ",a2[i]);
    }
    printf("\n");


    return 0;
}