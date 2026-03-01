#include <stdio.h>

int main() {

    // array ng pointers sa char (strings)
    char *message[3] = {"Hello", "C", "Programming"};

    // loop para i-print lahat
    for(int i = 0; i < 3; i++) {
        printf("%s\n", message[i]); // access bawat string
    }

    return 0;
}