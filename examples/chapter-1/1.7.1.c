/* I A program with two functions */
#include <stdio.h>

void funcl(void); /* prototype for func1() */

int main(void){
    printf("I ");
    func1();
    printf(" C.");
    
    return 0;
}

void func1(void){
    printf("Like");
}