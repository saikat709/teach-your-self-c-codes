#include <stdio.h>
int main( ) {
    char mess[80];
    printf("Enter message (less than 80 charecters)\n");

    for( int i=0; i<80;i++){
        mess[i]=getchar();
        if(mess[i]=='\n') break;
    }
    printf("\n");
    for ( int i=0; mess[i] != '\n'; i++){
        printf("%c",mess[i] + 1);
    }


    return 0;
}