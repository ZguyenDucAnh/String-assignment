#include <stdio.h>
#include <string.h>
int main() {
  char sentence[100];
  int vowel_count = 0;
  int consonant_count = 0;

  // Input the sentence from the keyboard
  printf("Enter a sentence: ");
  scanf("%[^\n]s", sentence);

  // Display the sentence to the screen
  printf("The sentence you entered is: \"%s\"\n", sentence);

  // Count the consonants and vowels in the sentence
  for (int i = 0; i < strlen(sentence); i++) {
    char c = sentence[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      vowel_count++;
    } else if (c >= 'a' && c <= 'z') {
      consonant_count++;
    }
  }

  // Display the result to the screen
  printf("The number of vowels in the sentence is: %d\n", vowel_count);
  printf("The number of consonants in the sentence is: %d\n", consonant_count);

  return 0;
}
