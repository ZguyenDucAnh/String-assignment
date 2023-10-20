#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  char sentence[100];

  // Input the sentence from the keyboard
  printf("nhap chuoi: ");
  scanf("%[^\n]s", sentence);

  // Capitalize the first letter of each word
  for (int i = 0; i < strlen(sentence); i++) {
    if (i == 0 || sentence[i - 1] == ' ') {
      sentence[i] = toupper(sentence[i]);
    }
  }

  // Display the sentence to the screen
  printf("chu cai dau in hoa trong moi tu la: \"%s\"\n", sentence);

  return 0;
}
