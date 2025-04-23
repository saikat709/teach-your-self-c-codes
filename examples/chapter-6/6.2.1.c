#include <stdio.h>
int main( ) {
    char *cp,ch;
    int *ip,i;
    float *fp, f;
    double *dp, d;
    ch='a'; i=10;
    f=10.33; d=10.0000333;

    cp= &ch;
    ip= &i;
    fp= &f;
    dp= &d;


    printf(" %p %p %p %p \n ", cp,ip,fp,dp);

    cp++; ip++;fp++;dp++;
    printf(" %p %p %p %p \n\n ", cp,ip,fp,dp);

    printf("%c %d %f %f \n",ch,i,f,d);
    (*cp)++;
    (*ip)++;
    (*fp)++;
    (*dp)++;
    printf("%c %d %f %f \n",ch,i,f,d);


    return 0;
}