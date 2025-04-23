#include <stdio.h>

//define getnun() prior to it's first use
float getnum( ){
    float x;
    printf(" Enter a number : \n");
    scanf("%f",&x);
    return x;

}
int main( ){
    float i;
    i=getnum();
    printf("Enter number is : %f", i);
    return 0;
}