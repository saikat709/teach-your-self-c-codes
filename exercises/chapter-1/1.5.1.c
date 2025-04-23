#include <stdio.h>

int main(){
    int length;
    printf("Enter length: ");
    scanf("%d", &length);

    printf("Volume is: %d\n", length*length*length);
    
    return 0;
}