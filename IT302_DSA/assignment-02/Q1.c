#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  
void main (){    
    printf("Enter the Stack Size(Max=100): ");   
    scanf("%d",&n);
    while(choice != 4){  
        printf("----Stack Menu----\n");  
        printf("\n1.PUSH\n2.POP\n3.SHOW\n4.EXIT");  
        printf("\n Enter your choice: \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:{
                push();  
                break;  
            }  
             case 2:{
                pop();  
                break;  
            }  
            case 3:{
                show();  
                break;  
            }  
            case 4:{
                printf("Exiting....");  
                break;   
            }  
            default:{
                printf("Please Enter valid choice!");  
            }   
        };  
    }  
}   
void push (){  
    int val;      
    if (top == n )   
    printf("\n Overflow");   
    else{  
        printf("Enter the value: ");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
void pop (){   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;   
}   
void show(){  
    for (i=top;i>=0;i--){
        printf("%d\n",stack[i]);  
    }  
    if(top == -1){
        printf("Stack is empty.");  
    }  
}  