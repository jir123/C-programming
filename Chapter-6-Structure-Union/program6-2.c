#include<stdio.h>
int main(){

    struct student{

        int id;
        char *name;

    };

    struct student one;

    one.id = 230;
    one.name = "Jahirul Islam Razu";

    printf("Id : %d\nName : %d\n", one.id, one.name);

    return 0;

}
