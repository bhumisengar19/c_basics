#include <stdio.h>
#include <stdlib.h>
#define MAX 10
	int stack_arr[MAX];
	int top = -1;

void push( int data)
{
    if (top == MAX - 1)
    {
        printf("STACK OVERFLOW.");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}
int pop()
{
    int value;
    if (top == -1)
    {
        printf("STACK UNDERFLOW");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}
void display()
{
    if (top == -1)
    {
        printf("STACK UNDERFLOW.");
        return;
    }
    for( int i = top; i>=0; i-- ){
        printf("%d", stack_arr[i]);
        printf("\n");
    }
}
int peek(){
    if (top == -1){
        printf("STACK UNDERFLOW.");
        return -1;
    }
    return stack_arr[top];
}
int main(){

    int choice, data;
    while (1)
    {
        
        printf("1 PUSH \n");
        printf("2 POP \n");
        printf("3 DISPLAY\n");
        printf("4 PEEK\n");
        printf("5 EXIT\n");
        printf("\n");
        printf("PLEASE ENTER YOUR CHOICE:  \n");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            printf("PLEASE ENTER THE NUMBER U WANNA PUSH: ");
            scanf("%d",&data);
            push( data);
            break;
            case 2:
            pop();
            break;
            case 3:
            printf("DISPLAYED DATA: ");
            display();
            break;
            case 4:
            printf("TOP= %d \n ",peek());
            break;
            case 5:
            printf("exit..");
            exit (0);
            break;
        
        default:
        printf("ENTER VALID CHOICE.");
            break;
        }
    }
        return 0;
    }
