#include<stdio.h>
void push(int element, int stack[], int *top, int stackSize){
 if(*top == -1){
  stack[stackSize - 1] = element;
  *top = stackSize - 1;
 }
 else if(*top == 0){
  printf("The stack is already full. \n");
 }
 else{
  stack[(*top) - 1] = element;
  (*top)--;
 }
}
void pop(int stack[], int *top, int stackSize){
 if(*top == -1){
   printf("The stack is empty. \n");
 }
 else{
  printf("Element popped: %d \n", stack[(*top)]);
  // If the element popped was the last element in the stack
  // then set top to -1 to show that the stack is empty
  if((*top) == stackSize - 1){
    (*top) = -1;
  }
  else{
    (*top)++;
  }
 }
}
void view(int stack[], int *top, int stackSize){
 if(*top == -1){
   printf("The stack is empty. \n");
 }
 
 else{
	printf("\nElement on top: %d",stack[*top]);
	printf("\n\n");
 }

}
int main() {
  int stackSize = 10;
  int stack[stackSize];
  // A negative index shows that the stack is empty
  int top = -1;
  
  while (1<2){
    // menu 
    int ch;
    printf("Menu: ");
    printf("\n1) Push in stack");
    printf("\n2) Pop from stack");
    printf("\n3) Display stack");
    printf("\n4) Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    if (ch == 1){
        printf("\n\nEnter element to push: ");
        int ele;
        scanf("%d",&ele);
        push(ele, stack, &top, stackSize);
    }
    else if (ch == 2){
        pop(stack, &top, stackSize);
    }
    else if (ch == 3){
        view(stack, &top, stackSize);
    }
    else{
        printf("\n\nThank You!");
        break;
    }
  }
  
//   push('a', stack, &top, stackSize);
//   printf("Element on top: %c\n", stack[top]);
//   push('b',stack, &top, stackSize);
//   printf("Element on top: %c\n", stack[top]);
//   pop(stack, &top, stackSize);
//   printf("Element on top: %c\n", stack[top]);
//   pop(stack, &top, stackSize);
//   printf("Top: %d\n", top);
//   pop(stack, &top, stackSize);
  
//   int val;
//   printf("Enter element");
//   scanf("%d",&val);
//   printf("Element = %d",val);
//   return 0;
}