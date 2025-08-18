#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Creating Random Numbers
int main(){

    srand(time(0));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n",number1);
    printf("%d\n",number2);
    printf("%d\n",number3);
}

//Number Guessing Game
int main(){

    const int MAX = 100;
    const int MIN = 1;

    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));

    answer = (rand() % 100) + 1;

    do{
        scanf("Your guess: %d",&guess);
        guesses+=1;
    }while( )
}