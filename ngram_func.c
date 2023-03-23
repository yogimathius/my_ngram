#include <stdbool.h>
#include <stdio.h>
#include <string.h>

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

char* sort_alphabeticaly(char* str, int length) {
    char temp_letter;
    for(int i = 0; i < length - 1; i++) {
        for(int j = i + 1; j < length; j++) {
            if(str[i] > str[j]) {
                temp_letter = str[i];
                str[i] = str[j];
                str[j] = temp_letter;
            }
        }
    }
    return str;
}

void my_ngram(char* str) {
    int length = my_strlen(str);
    str = sort_alphabeticaly(str, length);
    char unique_arr[length];
    int unique_count = 0;
    bool been_counted;
    for(int i = 0; i < length; ++i) {
        int j = 0;
        while(j < unique_count){
            if(str[i] == unique_arr[j]){
                been_counted = true;
                break;
            }
            else {
                been_counted = false;
            }
            ++j;
        }
        if (been_counted == false) {
            unique_arr[unique_count] = str[i];
            ++unique_count;
            printf("%c:%d\n", str[i], letter_occurrence(str, str[i]));
        }
            
    }
}