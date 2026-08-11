#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));

  int randomNumber = (rand() % 100) + 1;
  int no_of_guesses = 0;
  int userInput;

  printf("Random Number: %d\n", randomNumber);

  while (true) {

    printf("Guess the number: ");
    scanf("%d", &userInput);
    no_of_guesses++;

    if (userInput <= 0) {
      printf("\nPlease enter positive numbers.\n");
      continue;
    }
    else if (userInput > randomNumber) {
      printf("\nToo High...\n\n");
      continue;
    }
    else if (userInput < randomNumber) {
      printf("\nToo Low...\n\n");
      continue;
    }
    else if (userInput == randomNumber) {
      printf("\nCongratulations...\nYou guessed the correct number.\nIt was "
             "%d\nYou guessed it in %d attempts.",
             randomNumber, no_of_guesses);
      break;
    }
  }

  return 0;
}