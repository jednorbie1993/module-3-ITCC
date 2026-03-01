#include <stdio.h>

// function na tatanggap ng array of pointers
void printWords(char *p[], int size) {

    for(int i = 0; i < size; i++) {
        printf("%s ", p[i]);
    }
}

int main() {

    char *words[4] = {"I", "Love", "Learning", "C"};

    // pasa array sa function
    printWords(words, 4);

    return 0;
}