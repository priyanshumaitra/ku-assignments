#include<stdio.h>

int main(){
    int n,i,yr;
    float cgpa[i];
    float highest=0;
    char name[100], stream[20];
    
    printf("----IT Department----\n");
    printf("Enter year: ");
    scanf("%d",&yr);
    printf("Enter the number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nFor student %d",i+1);
        printf("\nEnter student's name: ");
        scanf("%s",&name[i]);
        printf("Enter CGPA: ");
        scanf("%f",&cgpa[i]);
    }
    for (i= 0; i< n; i++){
        if (cgpa[i] > highest) 
            highest = cgpa[i]; 
    }
    printf("\nThe highest cgpa of IT Department is %.2f \n",highest);


    printf("\n\n----For EIE Department----\n");
    printf("Enter year:");
    scanf("%d",&yr);
    printf("Enter the number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("For student %d",i+1);
        printf("Enter student's name: ");
        scanf("%s",&name[i]);
        printf("Enter CGPA: ");
        scanf("%f",&cgpa[i]);
    }
    for (i= 0; i< n; i++){
        if (cgpa[i] > highest) 
            highest = cgpa[i]; 
    }
    printf("\nThe highest cgpa of EIE department is %.2f \n",highest);
    return 0;

}