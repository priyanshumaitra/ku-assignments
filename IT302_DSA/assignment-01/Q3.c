#include<stdio.h>

struct Q3 {   

    float cgpa;
    char marksheet[20], id[10];
    
};

int main(){
    struct Q3 s;
    
    int n, i;
    
    FILE *fpt;
    fpt=fopen("students.txt","a");

    printf("Enter number of students: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++){
        
        printf("Enter Student ID: ");
        scanf("%s",s.id);
        printf("Date of issue of marksheet: ");
        scanf("%s",s.marksheet);
        printf("Enter CGPA: ");
        scanf("%0.2f",&s.cgpa);
    
        fprintf(fpt,"\nStudent ID: %s \nDate of marksheet: %s \nCGPA: %0.2f \n",s.id,s.marksheet,s.cgpa);
    
    }

fclose(fpt);
return 0;
}