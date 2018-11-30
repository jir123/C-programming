#include<stdio.h>
#include<string.h>

struct nametype{

    char firstname[20];
    char lastname[20];

};

struct student{

    int id;
    struct nametype name;//must use struct

};

int main()
{
    struct student one;

    scanf("%d", &one.id);
    scanf("%s", &one.name.firstname);
    scanf("%s", &one.name.lastname);

    printf("ID : %d\nName : %s %s\n", one.id, one.name.firstname, one.name.lastname);

    return 0;
}
