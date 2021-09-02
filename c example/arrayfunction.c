#include <stdio.h>
void displayarray(int, int);
int main()
{
    int number[5] = {1, 2, 3, 4, 5}, c;
    displayarray(number[3], number[1]);
    return 0;
}
void displayarray(int number1, int number2)
{
    printf("%d\n", number1);
    printf("%d", number2);
}
// #include <stdio.h>
// void display(int age1, int age2)
// {
//     printf("%d\n", age1);
//     printf("%d\n", age2);
// }

// int main()
// {
//     int ageArray[] = {2, 8, 4, 12};

//     // pass second and third elements to display()
//     display(ageArray[1], ageArray[2]);
//     return 0;
// }
