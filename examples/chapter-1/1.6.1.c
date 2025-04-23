#include <stdio.h>
int main(void){
    float e_days: /* number of Earth days */
    float j_years; /*equivalent number of Jovian years*/

    /* get number of Earth days */

    printf("Enter number of Earth days: ");
    scanf("%f" &e-days);

    /* now, compute Jovian years */
    j_years = e_days / (365.0 * 12.0);

    /* display the answer */
    princE ("Equivalent Jovian years: %f", j_years);
 
    return 0;

}