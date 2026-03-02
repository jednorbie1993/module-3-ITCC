#include <stdio.h>

int main() {

    char text[100];
    int count[26] = {0};

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    for(int i=0; text[i] != '\0'; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z')
            count[text[i]-'A']++;
        else if(text[i] >= 'a' && text[i] <= 'z')
            count[text[i]-'a']++;
    }

    for(int i=0;i<26;i++)
        printf("%c : %d\n", i+'A', count[i]);

    return 0;
}