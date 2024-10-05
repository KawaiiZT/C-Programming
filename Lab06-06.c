#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_NAMES 20
#define MAX_LENGTH 100
void toProperCase(char *str) {
    int newWord = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newWord = 0;
        } else {
            str[i] = tolower(str[i]);
        }
        if (str[i] == ' ') {
            newWord = 1;
        }
    }
}

void swap(char str1[], char str2[]) {
    char temp[MAX_LENGTH];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void sortNames(char names[MAX_NAMES][MAX_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                swap(names[i], names[j]);
            }
        }
    }
}

int main() {
    char firstName[MAX_LENGTH], lastName[MAX_LENGTH];
    char names[MAX_NAMES][MAX_LENGTH];
    int n = MAX_NAMES;

    for (int i = 0; i < n; i++) {
        scanf("%s %s", firstName, lastName);
        sprintf(names[i], "%s %s", firstName, lastName);
    }

    for (int i = 0; i < n; i++) {
        toProperCase(names[i]);
    }

    sortNames(names, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}