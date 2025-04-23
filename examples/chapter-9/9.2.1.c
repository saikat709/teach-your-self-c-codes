#include <stdio.h>
#include <stdlib.h>

int main ( ){
    char str[80]="This is a file system test";
    FILE *fp;
    char *p;
    int i;

    // open my file for output
    if( (fp = fopen("myfile","w")) == NULL){
        printf("Cannot open file \n");
        exit(1);
    }

    // write str to disk
    p = str;
    while (*p)
    {
        if( fputc(*p,fp)==EOF){
            printf("Error writing file; \n");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    // open file for input
    if( (fp = fopen("myfile","r")) == NULL){
        printf("Cannot open file \n");
        exit(1);
    }
    
    // read back to the file
    for( ; ; ){
        i= fgetc(fp);
        if(i== EOF) break;
        putchar(i);
    }

    fclose(fp);


    return 0;
}