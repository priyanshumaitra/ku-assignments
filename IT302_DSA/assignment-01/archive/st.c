#include<stdio.h>
#include<string.h>

struct st
{
    char stdname[100], dept[50];
    int cgpa, year;

};
 int main(){

    int n, k, i, h_mark = 0, year;
    char dept[50];

    struct st std_arr[10];
    printf("enter number of students: ");
    scanf("%d", &n);

    for(k=0;k<n;k++){

        printf("student name: ");
        scanf("%s", std_arr[k].stdname);
        printf("enter cgpa: ");
        scanf("%d", &std_arr[k].cgpa);
        printf("enter dept: ");
        scanf("%s", std_arr[k].dept);
        printf("year: ");
        scanf("%d", &std_arr[k].year);
    }

    printf("enter dept: ");
    scanf("%s", dept);
    printf("enter year: ");
    scanf("%d", &year);

    for(k=0; k<n; k++){
        if(strcmp(std_arr[k].dept,dept)==0){
            if(year == year){

                if(std_arr[k].cgpa>h_mark){
                    h_mark = std_arr[k].cgpa;
                }
            }
        }

    }
  printf("highest: ", h_mark);
 }