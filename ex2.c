#include <stdio.h>
struct person
{
    int age;
    float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &(*personPtr).age); //next printf is using another way.

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);     //this type is equal to (*personptr).age
    printf("weight: %f", personPtr->weight); ///and this is equal to (*personptr).weight
    return 0;
}