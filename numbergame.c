#include<stdio.h>

int main()
{
    int num, guess, tries = 0;

    int counter = 0;

    srand(time(NULL)); /*seed random number generator */

    num = rand()%100 + 1;   /* random number between 1 and 100 */

    printf("###################GUESS THE NUMBER GAME USING ARRAY#########################\n");

    do
    {

       printf("GUESS THE NUMBER BETWEEN  1 AND 100:");

        scanf("%d", &guess); 

        tries++;

        if (guess > num)
        {
            printf("TOO HIGH!-GUESS LOW \n\n");
            
        }
        else if (guess < num)
        {
            printf("T00 LOW!-GUESS HIGH\n\n");
            
        }
      /*  else if(tries==counter(10))
        {

            printf("YOU LOST THE GAME YOUR 10 ATTEMPTS HAS FINISHED\n");
        }  */
       
        else
        {
            printf("-----------------------YOU WON THE GAME-------------------------------\n");

            printf("\nCORRECT! You got it in %d guesses!\n", tries);

        }
		
    }while (guess != num);

    return 0;
}

