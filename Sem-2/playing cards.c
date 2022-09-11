#include<stdio.h>
#include <time.h> //time function
#include <stdlib.h> //random number generator functions
#include <string.h>
#define COLS 3 //number of columns to display in output
struct card{
  char *rank;
  char suit[9];
};
typedef struct card Card;

char *ranks[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
			  "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

char suits[4][9] = {"Clubs", "Diamonds", "Hearts", "Spades"};

void initialize(Card []);
void shuffle(Card []);
void display(const Card[]);

int main(){
  int s,loop=1;
  Card deck[52] = {"",""};
  while(loop == 1){
    printf("1)Initialize or sort 2)display 3)Shuffle 4)exit ::");
  scanf("%d",&s);
  switch(s)
  {
  case 1:
        initialize(deck);
        printf("\nsort done\n");
        break;
  case 2:
        display(deck);
        break;
  case 3:
        shuffle(deck);
        printf("\nShuffling done\n");
        break;
  case 4:
        loop = 0;
        break;
  default:
        printf("\nEnter the correct number\n");
  }
}
  return 0;
}
void initialize(Card deck[]){
  int i = 0;
  for(i=0;i<52;i++){
    deck[i].rank = ranks[i%13];
    strncpy(deck[i].suit, suits[i/13], 9);
  }
}
void shuffle(Card deck[]){
  int swapper = 0;
  int i = 0;
  Card temp = {"", ""}; //temp holding place for swap
  srand(time(NULL)); //seed the random numbers with current time
  for(i=0;i<52;i++){
    swapper = rand() % 52;
    temp = deck[i];
    deck[i] = deck[swapper];
    deck[swapper] = temp;
  }
}
void display(const Card deck[]){
  int i = 0;
  for(i=0;i<52;i++){
    printf("%5s of %-12s", deck[i].rank, deck[i].suit);
    if(0==((i+1)%COLS)){
    printf("\n");
    }
    if(12==i || 25==i || 39==i || 51==i){
    printf("\n");
    }
    }
  }

