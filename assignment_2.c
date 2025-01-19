#include <stdio.h>

int main( void ) {
    int n, x;
    
    scanf("%d", &n);

    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){

            x = ( i <= n ) ? i : n-(i-n);
            if( j<=n-x || j>=n+x ) printf("#");
            else printf("*");

        }
        printf("\n");
    }

    return 0;
}