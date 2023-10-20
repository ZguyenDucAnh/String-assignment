#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Function to input a string from the keyboard
void inputString(char *str) {
  fgets(str, 50, stdin);
  str[strlen(str) - 1] = '\0'; // Remove the newline character
}

// Function to display a string to the screen
void displayString(char *str) {
  printf("%s\n", str);
}

// Function to count the number of strings that contain a given character
int countStringsWithCharacter(char **strings, int n, char c) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < strlen(strings[i]); j++) {
      if (strings[i][j] == c) {
        count++;
        break;
      }
    }
  }
  return count;
}

int main() {
  int n; // Number of strings
  char **strings; // Array of strings
  char c; // Character to search for

  // Input number of strings
  printf("Enter the number of strings: ");
  scanf("%d", &n);
  fflush(stdin);
  // Validate number of strings
  if (n <= 0 || n > 30) {
    printf("Invalid number of strings. Please enter a number between 1 and 30.\n");
    return 1;
  }
  fflush(stdin);
  // Allocate memory for the array of strings
  strings = malloc(n * sizeof(char *));
  for (int i = 0; i < n; i++) {
    strings[i] = malloc(50 * sizeof(char));
  }

  // Input strings from the keyboard
  for (int i = 0; i < n; i++) {
    printf("Enter string %d: ", i + 1);
    inputString(strings[i]);
  }

  // Display all strings to the screen
  printf("All strings you have entered:\n");
  for (int i = 0; i < n; i++) {
    displayString(strings[i]);
  }
  fflush(stdin);
  // Input a character from the keyboard
  printf("Enter a character to search for: ");
  scanf(" %c", &c);

  // Count the number of strings that contain the given character
  int count = countStringsWithCharacter(strings, n, c);

  // Display the result to the screen
  printf("The number of strings that contain the character '%c' is %d.\n", c, count);
  fflush(stdin);
  // Free the memory allocated for the array of strings
  for (int i = 0; i < n; i++) {
    free(strings[i]);
  }
  free(strings);

  return 0;
}


