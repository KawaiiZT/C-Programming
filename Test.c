#include <stdio.h>
#include <ctype.h>

char decode(char text) {
    char data[] = {'K', 'L', 'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z', 'G', 'W', 'I', 'A', 'B', 'X', 'Y', 'P', 'Q', 'R', 'M', 'N', 'C', 'E', 'D'};
    int size_data = sizeof(data) / sizeof(data[0]);

    if (isalpha(text)) {
        char upper_text = toupper(text);

        for (int i = 0; i < size_data; i++) {
            if (upper_text == data[i]) {
                int index = (i + 5) % size_data;
                return islower(text) ? tolower(data[index]) : data[index];
            }
        }
    }
    return text;
}

int main() {
    char text[200];
    scanf("%[^\n]", text);

    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", decode(text[i]));
    }

    return 0;
}