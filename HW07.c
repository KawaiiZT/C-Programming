#include <stdio.h>
int main(){
    int n;
    int prev1 = 1,prev2 = 2;
    int num;
    scanf("%d",&n);
    if (n == 1) {
        printf("method = %d", prev1);
    }
    else if (n == 2) {
        printf("method = %d", prev2);
    }
    else {
        for (int i = 3; i <= n; i++) {
            num = prev1 + prev2;
            prev1 = prev2;
            prev2 = num;
        }
        printf("method = %d\n", num);
    }
    return 0;
}