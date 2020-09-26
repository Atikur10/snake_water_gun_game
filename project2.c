#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Compgame(char you, char comp){

    // for draw condition
    if (you == comp)
    {
        return 0;
    }

    // Non Draw conditions

    if(you == 's' && comp == 'w'){

        return 1;
    }
    else if(you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }

    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
        return -1;
    }
    
    
    
}
 
int main() {
    
    char you , comp;
    srand(time(0));
    int number = rand()%100 + 1;
    //printf("The number is %d\n",number);

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter s for snake , w for water and g for gun\n");
    scanf("%c",&you);

    int result = Compgame(you,comp);

    printf("Computer chooses %c and you chose %c\n",comp,you);

    if (result == 0)
    {
        printf("Game Draws!");
    }
    else if (result == 1)
    {
        printf("You Won!");
    }
    else
    {
        printf("You Lose!");
    }
    
    
    
    
    
    
    
    


    return 0;
}