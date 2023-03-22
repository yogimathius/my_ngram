#include <stdbool.h>
#include <stdio.h>
#include <string.h>
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
int my_strlen(char* str) {
    int i = 0;
    while(str[i] != '\0') {
        ++i;
    }
    return i;
}

int letter_occurrence(char* str, char letter) {
    int count = 0;
    for(int i = 0; i < my_strlen(str); ++i){
        if(str[i] == letter) {
            ++count;
        }
    }
    return count;
}

void my_ngram(char* str) {
    int length = my_strlen(str);
    char unique_arr[length];
    int unique_count = 0;
    int counted = 0;
    bool been_counted;
    for(int i = 0; i < length; ++i) {
        for(int j = 0; j < counted; ++j) {
            if(str[i] == unique_arr[j]) {
                been_counted = true;
                break;
            } 
            else {
                been_counted = false;
                unique_arr[unique_count] = str[i];
            }
        }
        if (been_counted == false) {
            printf("%c:%d\n", str[i], letter_occurrence(str, str[i]));
        }
            
    }
}

int main(int argc, char **argv) {
  if (argc == 3) {
    strcat(argv[1], argv[2]);
    my_ngram(argv[1]);
  }
  if (argc == 2) {
    my_ngram(argv[1]);
  }
  
  return 0;
}
