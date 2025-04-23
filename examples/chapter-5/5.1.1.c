#include <stdio.h>
int main( ){
    int temp[31],i,min, max, avg;
    int days;

    printf("How many days in the month?\n");
    scanf("%d ",&days);

    for(i=0 ; i<days ; i++){
        printf("Enter nonday temperature for day %d\n", i+1);
        scanf("%d",&temp[i]);
    }

    // find avarage
    avg=0;
    for (i=0;i<days;i++){
        avg=avg+temp[i];
    }
    printf("Average temperature : %d\n",avg/days);
    //find min max
    min=__INT_MAX__;
    max= 0;
    for( i=0;i<days ;i++){
        if(min>temp[i]) min = temp[i];
        if(max<temp[i]) max=temp[i];
    }

    printf("Minimum temperature : %d\n",min);
    printf("Maximum temperature : %d\n",max);
    
    return 0;
}