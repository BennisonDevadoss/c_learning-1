#include <stdio.h>
int main()
{

    // variable declaration
    int tamil, english, maths, science, social, total;
    float presentage, average;

    printf("Enter the student marks\n");
    scanf("%d\n%d\n%d\n%d\n%d\n", &tamil, &english, &maths, &science, &social);

    //logic
    total = tamil + english + maths + science + social;
    average = total / 5.0;
    presentage = (total / 500.0) * 100;

    //print output
    printf("total mark:%d\n", total);
    printf("average :%.2f\n", average);
    printf("total presentage %.2f\n", presentage);
}