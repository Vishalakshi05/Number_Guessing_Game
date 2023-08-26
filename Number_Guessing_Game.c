#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    do{
        printf("Guess the number between (1-100)\n");
        scanf("%d",&guess);
        if(number>guess){
            printf("Higher number please\n");
        }
        else if(number<guess){
            printf("Lower number please\n");
        }
        else{
            printf("***CONGRATULATIONS***\n You guessed in %d attempts\n",nguesses);
        }
        nguesses++;
    }while (guess!=number);
   
    return 0;
}