#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *text = NULL, word[50];
    int size = 0, wordCount = 0;

    printf("Enter text (type STOP to end):\n");
    text = (char*) malloc(1);
    text[0] = '\0';

    while (1) {
        scanf("%s", word);
        if (strcmp(word, "STOP") == 0)
            break;

        size += strlen(word) + 1;
        text = (char*) realloc(text, size);
        strcat(text, word);
        strcat(text, " ");
        wordCount++;
    }

    printf("\nYou entered %d words.\n", wordCount);
    printf("Full text: %s\n", text);

    free(text);
    return 0;
}
