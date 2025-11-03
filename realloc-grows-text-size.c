#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *text = NULL, buffer[100];
    int totalLength = 0;

    text = (char*) malloc(1);
    text[0] = '\0'; // start with empty string

    printf("Enter lines of text (type END to stop):\n");

    while (1) {
        printf("> ");
        fgets(buffer, sizeof(buffer), stdin);

        if (strncmp(buffer, "END", 3) == 0)
            break;

        totalLength += strlen(buffer);
        text = (char*) realloc(text, totalLength + 1);
        strcat(text, buffer);
    }

    printf("\nYou entered:\n%s", text);

    free(text);
    return 0;
}
