#include <stdio.h>
#include <ctype.h>

#define MAX_CHARS 256

int main() {
    int num_chars;
    char ch;
    int count[MAX_CHARS] = {0};
    char order[MAX_CHARS];
    int order_index = 0;

    scanf("%d", &num_chars);

    for (int i = 0; i < num_chars; i++) {
        scanf(" %c", &ch);
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (count[(int)ch] == 0) {
                order[order_index++] = ch;
            }
            count[(int)ch]++;
        }
    }

    for (int i = 0; i < order_index; i++) {
        printf("%c: %d\n", order[i], count[(int)order[i]]);
    }

    return 0;
}