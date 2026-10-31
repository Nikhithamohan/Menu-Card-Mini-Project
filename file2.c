/* 
    Name :- Nikhitha Mohan
    Date and Day :- 31/10/2026
    Description : Two player chocolate chilly game
    Sample input :- chocolates remaining = 2
                    player 2 turn 
                    Pick chocolates (0-3): 2
    Sample output :-Only Chilly remains
                    Player 1 gets chilly
                    Player 1 LOST
                    Player 2 WON   
*/

#include <stdio.h>

int main()

{
    printf("Chocolates remaining = 13\n");       //display number of chocolates
    int res = 13;       //initialize number of chocolates


    while(res > 0)        //continue the game until chocolates are zero
    {
        int n, n1;       //declaring variables for storing player 1 and 2 inputs
        label:       //To repeat when invalid input is entered
        printf("\nPlayer 1 turn\n");
        printf("\nPick chocolates (0 to 3): \n");
        scanf("%d", &n);       //To get the number of chocolates from the player 1


        if(n <= 0 || n > 3 || n > res)       //check whether the input entered by the player 1 is valid
        {
            printf("INVALID INPUT\n");
            printf("\nChocolates remaining = %d\n", res);
            goto label;       //To repeat when invalid input is entered
        }
        else
        {
            res = res - n;       //subtracting the number of chocolates as per the input given by the user
        }


        if( res == 0)
        {
            printf("Only Chilly remains\nPlayer 2 gets chilly\nPlayer 2 LOST\nPlayer 1 WON\n");
            break;
        }

        printf("\nChocolates remaining = %d\n", res);


        label1:       //To repeat when invalid input is entered
        printf("\nPlayer 2 turn\n");
        printf("\nPick chocolates (0 to 3): \n");
        scanf("%d", &n1);       //To get the number of chocolates from the player 2


        if(n1 <= 0 || n1 > 3 || n1 > res)       //check whether the input entered by the player 2 is valid
        {
            printf("INVALID INPUT\n");
            printf("\nChocolates remaining = %d\n", res);
            goto label1;       //To repeat when invalid input is entered
        }
        else
        {
            res = res - n1;       //subtracting the number of chocolates as per the input given by the user
        }

        if( res == 0)
        {
            printf("Only Chilly remains\nPlayer 1 gets chilly\nPlayer 1 LOST\nPlayer 2 WON\n");
            break;
        }

        printf("\nChocolates remaining = %d\n", res);
    }

    return 0;

}
   
    
