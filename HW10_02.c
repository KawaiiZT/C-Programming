#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main(){
    int count;
    char find[10];
    scanf("%d", &count);

    struct Record* employees = (struct Record*)malloc(count * sizeof(struct Record));
    for (int i = 0; i < count; i++)
    {
        scanf("%s %s %ld %ld", employees[i].id,employees[i].name,&employees[i].salary,&employees[i].sales);
    }
    scanf("%s",find);
    int found = 0;
    for (int j = 0; j < count ; j++){
         if (strcmp(employees[j].id, find) == 0){
            found = 1;
            printf("%s\n",employees[j].id);
            printf("%s\n",employees[j].name);
            printf("%ld\n",employees[j].sales);
            printf("%.2lf\n",employees[j].sales*0.02);
            printf("%ld\n",employees[j].salary);
            printf("%.2lf\n",employees[j].salary+(employees[j].sales*0.02));
            break;
        }
    }
    if (!found){
        printf("ID not found !!!");
    }
    free(employees);
    return 0;
}
