#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    struct Person person1;
    strcpy(person1.name, "Starnoh");
    person1.age = 20;
    person1.height = 5.6;

    printf("Name : %s \n", person1.name);
    printf("Age : %d \n", person1.age);
    printf("Height : %.2f\n", person1.height);

    return 0;
}