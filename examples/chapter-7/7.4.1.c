#include <stdio.h>
#include <stdlib.h>
int main ( int argc, char *argv[]) { // it's a command line argument

    int i;
    double d;
    long l;
    i= atoi(argv[1]);
    d= atol(argv[2]);
    l= atof(argv[3]);
    printf("argument %d\n",argc);

    printf("%d %ld %f",i,l,d);

    return 0;
}