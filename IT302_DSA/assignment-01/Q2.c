#include <stdio.h>

struct Q2{
        char id[20], name[100], admi[15], course[10], stname[50], post[20], city[50], door[10], stream[20], email[60];
	    int pin;
    };

int main() {
	    
	int n, i;
	
    struct Q2 s;
	
    FILE *fptr;
	fptr=(fopen("students.txt","w"));
	if(fptr = NULL){
        
        puts("Can't open the file.");
        exit(1);
    }
    printf("Enter number of students: ");
	scanf("%d",&n);

    for (i=0;i<n;i++) {
		printf("----Details of Student: %d----\n",i+1);
        printf("Enter Student ID: ");
        scanf("%s",s.id);
        printf("Enter Name: ");
		scanf("%s",s.name);
        printf("Date of Admission: ");
        scanf("%s",s.admi);
		printf("Course Name: ");
        scanf("%s",s.course);
        printf("Stream Name: ");
        scanf("%s",s.stream);
        printf("Email ID: ");
        scanf("%s",s.email);
        printf("\n----Address----\n");
        printf("Door no: ");
        scanf("%s",s.door);
        printf("Street Name: ");        
        scanf("%s",s.stname);
        printf("Post Office: ");
        scanf("%s",s.post);
        printf("City: ");
        scanf("%s",s.city);
        printf("Pincode: ");
        scanf("%d",&s.pin);
    
		fprintf(fptr,"\nStudent ID: %s \nStudent Name: %s \nDate of Admission: %s \nCourse Name: %s \nStream Name: %s \nEmail ID: %s \nDoor No: %s \nStreet Name: %s \nPost Office: %s \nCity: %s \nPincode: %d\n",s.id,s.name,s.admi,s.course,s.stream,s.email,s.door,s.stname,s.post,s.city,s.pin);
    }
	fclose(fptr);
	return 0;
}