#include <stdbool.h>
#include <stdio.h>
#include <string.h>


int my_strlen(char* str);
int letter_occurrence(char* str, char letter);
void my_ngram(char* str);
char* sort_alphabeticaly(char* str, int length);

int main(int argc, char **argv) {
    if (argc == 1) {
        return 0;
    }
    if (argc > 2) {
        int i = 2;
        while(i <= argc) {
            strcat(argv[1], argv[i]);
            ++i;
        }
    }
    my_ngram(argv[1]);
}

/*
struct key_value {
  int letter;
  int count;
};

void my_ngram2(char *str) {
#define n strlen(str)

  struct key_value kvs[n];

  int letters_counted = 0;
  for (int i = 0; i < n; ++i) {
    char letter = str[i];
    bool letter_found = false;
    for (int j = 0; j < i; j++) {
      if (kvs[j].letter == letter) {
        printf("incrementing letter, %c\n", letter);
        kvs[j].count++;
        letter_found = true;
      }
    }
    if (!letter_found) {
      printf("original letter, %c\n", letter);
      kvs[i].letter = letter;
      kvs[i].count = 1;
      letters_counted++;
    }
  }

  for (int i = 0; i < letters_counted; ++i) {
    printf("%c:%d\n", kvs[i].letter, kvs[i].count);
  }
}

int main(int argc, char **argv) {
  if (argc == 3) {
    strcat(argv[1], argv[2]);
    my_ngram2(argv[1]);
  }
  if (argc == 2) {
    my_ngram2(argv[1]);
  }
  
  return 0;
}
*/

