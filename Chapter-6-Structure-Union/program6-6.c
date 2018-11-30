#include<stdio.h>
#include<string.h>

struct nametype{

    char first[20];
    char last[20];

};

struct student{

    int id;
    struct nametype name;

};


int  main()
{
    struct student input[5];
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter the id of Student : %d", i+1);
        scanf("%d", &input[i].id);
        printf("\nEnter the first name of Student : ");
        scanf("%s", &input[i].name.first);
        printf("\nEnter the last name of student : ");
        scanf("%s", &input[i].name.last);
    }

    printf("\nOutput : \n\n");

    for(i=0; i<n; i++){
        printf("Number of Input - %d", i+1);
        printf("\nId : %d\n", input[i].id);
        printf("Name : %s %s\n", input[i].name.first, input[i].name.last);
        printf("------------------------\n");
    }

    return 0;
}
