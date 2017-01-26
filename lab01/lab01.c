#include <stdio.h>
#include <math.h>

#ifndef M_PI
#                define     M_PI acos(-1.0)
#endif


int main() {
        /* varibale definition: */
        double L, W, WI, LS, LD, DS, DD, WTH, DTH, PV, THV, PG, THG, TG, TC;
        char y=' ';

        /* Initialization: */


        /* GET/SET */
                /*LEGNTH*/
                        /*L*/
do {
                        do {
                                printf("Please enter the LENGTH of the pool 35.0-60.0.\n");
                                scanf("%lf", &L);
                                        if (L < 35.0 || L > 60.0) {
                                        printf("Please enter in between 35.0-60.0.\n");    
                                        }
                        } while (L < 35.0 || L > 60.0);
                        printf("The length of length is:  %f", L);
                        printf("\n");

                        /*WIDTH*/
                        do {
                                printf("Please enter the WIDTH of the pool 15.0-30.0.\n");
                                scanf("%lf", &W);
                                        if (W < 15.0 || W > 30.0) {
                                        printf("Please enter in between 15.0-30.0.\n");    
                                        }
                        } while (W < 15.0 || W > 30.0);
                        printf("The WIDTH of POOL is:  %f", W);
                        printf("\n");

                        /*WI*/
                        do {
                                printf("Please enter the LENGTH of the WALKIN 5.0-%f.\n", L/3);
                                scanf("%lf", &WI);
                                        if (WI < 5.0 || WI > L/3) {
                                        printf("Please enter in between 5.0-%f.\n", L/3);    
                                        }
                        } while (WI < 5.0 || WI > L/3);
                        printf("The length of walkin is:  %f", WI);
                        printf("\n");

                        /*DS*/
                        do {
                                printf("Please enter the DEPTH of the SHALLOW 2.0-5.0.\n");
                                scanf("%lf", &DS);
                                        if (DS < 2.0 || DS > 5.0) {
                                        printf("Please enter in between 2.0-5.0.\n");    
                                        }
                        } while (DS < 2.0 || DS > 5.0);
                        printf("The DEPTH of SHALLOW END is:  %f", DS);
                        printf("\n");

                        /*LS*/
                        do {
                                printf("Please enter the LENGTH of the SHALLOW END 10.0-%f.\n", L/3);
                                scanf("%lf", &LS);
                                        if (LS < 10.0 || LS > L/3) {
                                        printf("Please enter in between 10.0-%f.\n", L/3);    
                                        }
                        } while (LS < 10.0 || LS > L/3);
                        printf("The length of shallow end is:  %f", LS);
                        printf("\n");

                        /*DD*/
                        do {
                                printf("Please enter the DEPTH of the DEEP END 6.0-12.0.\n");
                                scanf("%lf", &DD);
                                        if (DD < 6.0 || DD > 12.0) {
                                        printf("Please enter in between 6.0-12.0.\n");    
                                        }
                        } while (DD < 6.0 || DD > 12.0);
                        printf("The DEPTH of DEEP END is:  %f", DD);
                        printf("\n");

                        /*LD*/
                        do {
                                printf("Please enter the LENGTH of the DEEP END 12.0-%f.\n", L/2);
                                scanf("%lf", &LD);
                                        if (LD < 12.0 || LD > L/2) {
                                        printf("Please enter in between 12.0-%f.\n", L/2);    
                                        }
                        } while (LD < 15.0 || LD > 30.0);
                        printf("The length of deep end is:  %f", LD);
                        printf("\n");


                /*Hot tub*/
                        /*WTH*/
                        do {
                                printf("Please enter the WTH 8.0-14.0.\n");
                                scanf("%lf", &WTH);
                                        if (WTH < 8.0 || WTH > 14.0) {
                                        printf("Please enter in between 8.0-14.0.\n");    
                                        }
                        } while (WTH < 8.0 || WTH > 14.0);
                        printf("The WIDTH of HOT TUB is:  %f", WTH);
                        printf("\n");

                        /*DTH*/
                        do {
                                printf("Please enter the DTH 3.0-5.0.\n");
                                scanf("%lf", &DTH);
                                        if (DTH < 3.0 || DTH > 5.0) {
                                        printf("Please enter in between 3.0-5.0.\n");    
                                        }
                        } while (DTH < 3.0 || DTH > 5.0);
                        printf("The DEPTH of HOT TUB is:  %f", DTH);
                        printf("\n");

        /*CALCULATION*/
                /*POOL VOLUMN + COST*/
                        PV = W*L*(DD-.5)-(.5*(L-LD+LS+WI)*(DD-DS)*W)-(.5*WI*(DS-.5)*W);
                        PG = 7.481 * PV;
                        
                /*HOT TUB*/
                        THV = (.5*WTH)*(.5*WTH)*M_PI*(DTH-.5);
                        THG = 7.481 * THV;

                /*TOTAL*/
                        TG = PG + THG;
                        TC = TG * .1;
        /*FINAL PRINT*/
                printf("Length of the pool: %f \n Width of the pool: %f \nLength of the pool walk-in: %f \n Depth of the pool shallow end: %f \n Length of the pool shallow end: %f \n Depth of the pool deep end: %f \n Length of the pool deep end: %f \n Width of the hot tub: %f \n Depth of the hot tub: %f \n # The Pool \n Total volume of the pool: %f \n  Gallons of water to fill the pool: %f \n Total volume of the hot tub: %f \n  Gallons of water to fill the hot tub: %f \n Total gallons for both: %f \n Total cost for both: %f \n ", L, W, WI, DS, LS, DD, LD, WTH, DTH, PV, PG, THV, THG, TG, TC);
    printf("\nDo you want to start over with another dimension (y/n)? ");
  scanf(" %c", &y);
  
} while (y != 'n');
 printf("Thank you for using, Good Bye!");
return 0;
}
