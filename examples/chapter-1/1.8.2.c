#include <stdio.h>

void funcl(void);

int main (void){
    func1();
    return 0;
}

void funcl(void){
    printf("This is printed.");
    return; /* return with no value */
    printf("This is never printed.");
}