#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void my_ngram(char* str) {
    char unique_arr[] = {};
    int counted = 0;
    printf("i'm here\n");
    for(int i = 0; i < strlen(str); ++i) {
        bool been_counted = false;
        for(int j = 0; j < counted; ++j){
        if(str[i] == unique_arr[j]) {
            been_counted = true;
        }
        else {
            for(int t = 0; t < strlen(str); ++t) {
            if(str[i] == str[t]){
                ++counted;
            }
            }
            int count;
            printf("%c:%d\n", str[i], count);
        }

        }
    }
}

int main() {
  char *str = "abcabca";
  my_ngram(str);
  return 0;
}


#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct key_value {
  int letter;
  int count;
};
/*
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

/*
void my_ngram(char* str) {
  char unique_arr[] = {};
  int counted = 0;
  for(int i = 0; i < strlen(str); ++i) {
    bool been_counted = false;
    for(int j = 0; j < counted; ++j){
      if(str[i] == unique_arr[j]) {
        been_counted = true;
      }
      else {
        for(int t = 0; t < strlen(str); ++t) {
          if(str[i] == str[t]){
            ++counted;
          }
        }
        printf("%c:%d\n", str[i], count);
      }

    }
  }
}

int main() {
  char *str = "        ";
  my_ngram2(str);
  return 0;
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
}*/