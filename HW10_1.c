#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F} 
};
void playing_decision(struct Weather *w) {
    if (strcmp(w->outlook, "overcast") == 0) {
        printf("yes\n");
    } else if (strcmp(w->outlook, "rain") == 0) {
        if (w->wind == 'F') {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    } else if (strcmp(w->outlook, "sunny") == 0) {
        if (w->humidity > 77) {
            printf("no\n");
        } else {
            printf("yes\n");
        }
    }
}
int main(){
    int count;
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {   
        struct Weather today;
        scanf("%s %d %d %c", today.outlook, &today.temperature, &today.humidity, &today.wind);
        playing_decision(&today);
    }
    return 0;
}