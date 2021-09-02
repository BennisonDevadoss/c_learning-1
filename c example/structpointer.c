#include <stdio.h>
int main()
{
    struct emp
    {
        int eno;
        char ename[20];
        float esalary;
    };
    struct emp *ptr, e;
    ptr = &e;
    printf(".....ENTER THE EMPLOYE DOCUMENTS....\n");
    printf("enter the number:");
    scanf("%d", &ptr->eno); //another method is &(*ptr).eno
    printf("enter the name:");
    scanf("%s", &ptr->ename[20]);
    // fgets(e.ename, sizeof(e.ename), stdin);
    printf("enter the salary:");
    scanf("%f", &ptr->esalary);
    printf("\n\n");
    printf(".....ENTERED EMPLOYE DETAIL.....\n");
    printf("emplaye number:%d\n", ptr->eno);
    printf("employe name:%s\n", ptr->ename[20]);
    // printf("employe name:");
    // puts(e.ename);
    printf("employe salary:%.0f\n", ptr->esalary);
}