#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    // set limit and chance
    int limit = 100;
    int chance = 7;
    // genarate random number
    srand(time(NULL)); // use current time as seed for random generator
    int reward = rand()%limit + 1;
    printf("reward: %d\n", reward);

    // take a input from the keyboard
    printf("please enter your guess:");
    int guess;
    int i ;
    for (i = 0; i < chance; i++)
    {
        /* code */    
        scanf("%d", &guess);

        printf(" your [%d] guess: %d\n",i, guess);

        if (guess == reward)
        {
            printf("guess = reward, you win! \n");
            return 0;
        } else if (guess > reward)
        {
            printf("guess > reward\n");
        } else {
            printf("guess < reward\n");
        }
    
    }
    

    printf("sorry you loose the reward number is : %d\n", reward);
    

    return 0;
}