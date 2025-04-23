#include <stdio.h>

void myputs(char *p);

int main (){
    char str[80]="This is a test";
    

   myputs(str);

    return 0;
}

void myputs(char *p){
    while (*p)
    {
       printf("%c",*p);
       p++;
    }
    printf("\n");
    
}