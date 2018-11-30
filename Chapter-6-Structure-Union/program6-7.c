#include<stdio.h>
#include<string.h>

typedef struct{
    char first[20];
    char last[20];
}nametype;

typedef struct {
    int id;
    nametype name;
    char grade[3];
}studenttype;

int main(){
    studenttype student[3];
    return 0;

}
