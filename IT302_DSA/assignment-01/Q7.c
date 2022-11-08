#include<stdio.h>
int main(){
    int n, i, pin, count=0;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter their pincodes: ");
        scanf("%d",&a[i]);
    }

    printf("Enter the pincode of the region to be searched: ");
    scanf("%d",&pin);

    for(i=0;i<n;i++){
        if(a[i]==pin){
            count+=1;
        }
    }
    printf("Number of Students from entered region is/are: %d \n",count);
    return 0;
}