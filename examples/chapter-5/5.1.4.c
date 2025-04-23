#include <stdio.h>
#include <stdlib.h>
int main( ) {

    int item[100];
    int count;

    //red in numbers
    printf("How many numbers?\n");
    scanf("%d",&count);
    for ( int i=0; i<count ;i++){
        scanf("%d", &item[i]);
    }

    int a,b,t;

    // sort them using bubble sort
    for ( a=0; a<count ;a++){
        for( b=count ; b>=a; b--){
            if(item[b-1] > item[b]){
                // swap
                t= item[b-1];
                item[b-1]=item[b];
                item[b]=t;
            }
        }
    }
    // display sort list
    for (int i=0; i<count ;i++){
        printf("%d",item[i]);
    }



    return 0;
}