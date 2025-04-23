#include <stdio.h>
int main(){
    float  *fp, **mfp, val;

    fp= &val;
    mfp= &fp;
    **mfp=123.6666;

    printf(" %f  %f\n",val, **mfp);
    printf(" %p %p \n",fp,mfp);
    printf(" %p",*mfp);


    return 0;
}