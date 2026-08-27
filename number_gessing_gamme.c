#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  printf(" \n \na random number has been generated between (1 to 100)\n these are the rules:\n \n");
  printf("1.guess any number you desire \n2.the program will tell you weather the generated number is higher or lower then your number \n");
  printf("3.once the number is correct,the system will congratulate you.\n4.try to guess the number with minimum attempts \n \n");

  // Initialize random number generator
  srand(time(0));

  // Generate random number between 1 and 100
  int randomNumber = (rand() % 100) + 1;
  int gessed_number;
  int number_of_gesses = 1;
  int best_score;

  

  printf("guess the number :");
  scanf("%d", &gessed_number);

  do
  {

    if (gessed_number > randomNumber)

    {
      printf("guess lower number :");
      scanf("%d", &gessed_number);
    }
    else if (gessed_number < randomNumber)
    {
      printf("guess higher number :");
      scanf("%d", &gessed_number);
    }

    number_of_gesses++;

  } while (randomNumber != gessed_number);

  printf("congrats! you have gessed the number in %d attempts \n", number_of_gesses);
  printf("the random number is %d \n", randomNumber);

  // best score function
  if (number_of_gesses < best_score)
  {
    best_score = number_of_gesses;
  }
  printf("best score : %d attempts", best_score);

  return 0;
}
