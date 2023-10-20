#include <stdio.h>
#include <string.h>

int main() {
  int n;
  char strings[10][100];
  int max_length = 0;
  int max_length_index = 0;

  // Input integer n (0 < n <= 10) and n string from the keyboard
  do{
  		printf("With 0 < number <= 10:\n");
  	  	printf("Enter the number of strings: ");
		scanf("%d", &n);
  }while(n<=0 || n>10);

  for (int i = 0; i < n; i++) {
    printf("\nEnter string %d: ", i + 1);
    scanf("%s", strings[i]);
  }
  fflush(stdin);
  // Display each string in a new line
  printf("\nAll strings:\n");
  for (int i = 0; i < n; i++) {
    printf("%s\n", strings[i]);
  }
  fflush(stdin);
  // Find and display to the screen the string has max length
  for (int i = 0; i < n; i++) {
    if (strlen(strings[i]) > max_length) {
      max_length = strlen(strings[i]);
      max_length_index = i;
    }
  }

  printf("\nThe string with the maximum length is: %s\n", strings[max_length_index]);
  fflush(stdin);
  // Display all strings have even length
  printf("\nAll strings with even length:\n");
  for (int i = 0; i < n; i++) {
    if (strlen(strings[i]) % 2 == 0) {
      printf("%s\n", strings[i]);
    }
  }

  return 0;
}
