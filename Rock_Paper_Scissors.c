#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "ascii_art.c"

void ascii_art(char choice);

int game(char player, char computer)
{
  if (player == computer)
  {
    return (0);
  }
  if (player == 'r' && computer == 's' || player == 's' && computer == 'p' || player == 'p' && computer == 'r')
  {
    return (1);
  }
  else
  {
    return (-1);
  }
}

int main(void)
{
  char  you;
  char  question;
  char  computer;
  char  result;
  int n;
  
  srand(time(NULL));
  
  n = rand() % 100;
  
  if (n < 33)
  {
    computer = 'r';
  }
  if (n > 33 && n < 66)
  {
    computer = 'p';
  }
  if (n > 66)
  {
    computer = 's';
  }
  printf("Welcome to play ROCK PAPER SCISSORS!!\n");
  sleep(1);
  printf("Please choose 'r' for ROCK, 'p' for PAPER or 's' for SCISSORS\n");
  scanf(" %c", &you);
  if (you != 'p' && you != 'r' && you != 's')
  {
      printf("ARE YOU TRYING TO CHEAT?? THAT IS NOT WHAT I ASKED!!");
      return (0);
  }
  printf("You chose...\n");
  sleep(1);
  if (you == 'r')
  {
      printf("ROCK!\n");
  }
  else if (you == 'p')
  {
      printf("PAPER!\n");
  }
  else if (you == 's')
  {
      printf("SCISSORS!\n");
  }
  ascii_art(you);
  sleep(1);
  printf("Your opponent chose...\n");
  sleep(1);
  if (computer == 'r')
  {
      printf("ROCK!\n");
  }
  else if (computer == 'p')
  {
      printf("PAPER!\n");
  }
  else if (computer == 's')
  {
      printf("SCISSORS!\n");
  }
  ascii_art(computer);
  sleep(1);
  result = game(you, computer);
  if (result == -1)
  {
    printf("YOU IDIOT, YOU LOST!!!");
  }
  else if (result == 0)
  {
    printf("IT'S A DRAW, TRY AGAIN YOU TROGDOLITE!!");
  }
  else if (result == 1)
  {
    printf("HOLY SHIT, YOU DID IT! YOU WON!!");
  }
  printf("\n");
  sleep(1);
  printf("Would you like to play again? Type 'y' for YES or 'n' for NO\n");
  scanf(" %c", &question);
  if (question == 'y')
  {
      printf("As you wish\n");
      sleep(1);
      main();
  }
  else if (question == 'n')
  {
      printf("... coward\n");
  }
  else
  {
      printf("Jesus christ, you can't even do ONE thing right... god damn toilet plunger...\n");
  }
  sleep(1);
  return (0);
}
