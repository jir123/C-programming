#include<stdio.h>
int main(){

    struct student{

        int id;
        char name[50];

    };

    struct student one;

    one.id = 503;
    strcpy(one.name, "Jahirul Islm Razu");

    printf("id = %d\nName : %s\n", one.id, one.name);

    return 0;

}
