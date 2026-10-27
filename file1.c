#include <stdio.h>

int main()

{
    int option;
    printf(" **************WELCOME TO EMERTXE CAFE************** \n\n");

    int a=0,b=0,c=0,d=0,e=0,f=0;
    int Total_cost1=0;
    int Total_cost2=0;
    int Total_cost3=0;
    int Total_cost4=0;
    int Total_cost5=0;
    int Total_cost6=0;
    int total = 0;
    float GST, final_cost;

    do
    {
        printf(" \n\n1) Burger = 250\n 2) Pasta = 180\n 3) Veg Noodles = 130\n 4) Chicken Noodles = 160\n 5) Pizza = 200\n 6) Passion fruit Mojito = 120");
        printf("\n\nPress 0 to view final Bill and Exit\n");

        label:
        printf("\nEnter your choice:"); 
        scanf("%d", &option);
        
        int Burger = 250;
        int Pasta = 180;
        int Veg_Noodles = 130;
        int Chicken_Noodles = 160;
        int Pizza = 200;
        int Passion_Fruit = 120;


        switch(option)
        {
            case 1:
            printf("Quantity = ");
            scanf("%d", &a);
            Total_cost1 = Total_cost1 +(a * Burger);
            printf("Burger was added in your cart\n");
            printf("%d     Burger = %d\n", a,Total_cost1);
            break;

            case 2:
            printf("Quantity = ");
            scanf("%d", &b);
            Total_cost2 = Total_cost2 + (b * Pasta);
            printf("Pasta was added in your cart\n");
            printf("%d     Pasta = %d\n", b,Total_cost2);
            break;

            case 3:        
            printf("Quantity = ");
            scanf("%d", &c);
            Total_cost3 = Total_cost3 + (c * Veg_Noodles);
            printf("Veg Noodles was added in your cart\n");
            printf("%d     Veg Noodles = %d\n", c,Total_cost3);
            break;


            case 4:
            printf("Quantity = ");
            scanf("%d", &d);
            Total_cost4 = Total_cost4 + (d * Chicken_Noodles);
            printf("Chicken Noodles was added in your cart\n");
            printf("%d     Chicken Noodles = %d\n", d, Total_cost4);
            break;


            case 5:
            printf("Quantity = ");
            scanf("%d", &e);
            Total_cost5 = Total_cost5 + (e * Pizza);
            printf("Pizza was added in your cart\n");
            printf("%d     Pizza = %d\n", e, Total_cost5);
            break;


            case 6:
            printf("Quantity = ");
            scanf("%d", &f);
            Total_cost6 = Total_cost6 + (f * Passion_Fruit);
            printf("Passion fruit Mojito was added in your cart\n");
            printf("%d     Passion fruit Mojito = %d\n", f, Total_cost6);
            break;


            case 0:
            printf("\n***************FINAL BILL***************\n");
            
            if(a>0)
               printf("     %d     Burger = %d/-\n", a,Total_cost1);
            if(b>0)
               printf("     %d     Pasta = %d/-\n", b,Total_cost2);
            if(c>0)
               printf("     %d     Veg Noodles = %d/-\n", c,Total_cost3);
            if(d>0)
               printf("     %d     Chicken Noodles = %d/-\n", d, Total_cost4);
            if(e>0)
               printf("     %d     Pizza = %d/-\n", e, Total_cost5);
            if(f>0)
               printf(     "%d     Passion fruit Mojito = %d/-\n", f, Total_cost6);

            printf("\n*****************************************\n");

            total = total +(Total_cost1 + Total_cost2 + Total_cost3 + Total_cost4 + Total_cost5 + Total_cost6);
            printf("\ntotal                           %d/-\n", total);
            GST = (float)(total*5)/100;
            printf("\nGST                                %g\n", GST);
            final_cost = total + GST;
            printf("\n*****************************************\n");
            printf("\nFINAL COST ------------------------>%g/-", final_cost);
            break;

            default:
            printf("sorry :(\nNo item found\nPlease choose an item from 1 to 6\n");
            goto label;
            break;

        }
    
    }while(option >= 1 && option <=6);

    printf("\nThankyou, visit again\n");

    return 0;
}