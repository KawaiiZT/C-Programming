#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[301];
    char charac;

    scanf("%300[^\n]", str);
    scanf(" %c", &charac); 

    charac = tolower(charac);

    int count = 0;
    int positions[301];
    int posIndex = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == charac) { 
            positions[posIndex++] = i + 1; 
            count++;
        }
    }

    if (count > 0) {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, charac);

        printf("Position: ");
        for (int i = 0; i < posIndex; i++) {
            if (i > 0) {
                printf(", ");
            }
            printf("%d", positions[i]);
        }
        printf("\n");
    } else {
        printf("Not found.\n");
    }

    return 0;
}
