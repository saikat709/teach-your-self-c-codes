#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    
    // see if file name is specified
    if(argc != 2)
    {
        printf("File name missing.\n");
        exit(1);
    }
    
    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    
    // show it once
    while(!feof(fp))
    {
        putchar(getc(fp));
    }
    
    rewind(fp);
    
    // show it twice
    while(!feof(fp))
    {
        putchar(getc(fp));
    }
    
    fclose(fp);


    return 0;
}