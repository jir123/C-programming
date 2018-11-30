#include<stdio.h>
#include<string.h>
struct student{

    int id;
    char name[50];

};

int  main(){

    struct student one;

    scanf("%d", &one.id);
    scanf("%s", &one.name);

    printf("id : %d\nName : %s\n", one.id, one.name);

    return 0;

}
