
#include<stdio.h>
#define SIZE 10

char queue[SIZE], back= -1, fornt = 0;
    /**Function:enQueue(),,to
        push an item into Queue. **/
void enQueue(char value){
   if(back == SIZE-1)  //this condition check Queue is full ....
      printf("\nQueue is Full");
   else{
      back++;
      queue[back] = value;
   }
}
   /**Function:deQueue(),,to
       remove (pop) an item into Queue. **/
void deQueue(){
   if(back == -1)   //this condition check Queue is empty...
      printf("\nQueue is Empty ");
   else{
      printf("\nDeleted : %c", queue[fornt]);
      fornt++;
   }
}
    /**Function:display(),,
       to display queue elements **/
void display(){
   if(back == -1)
      printf("\nQueue is Empty");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=fornt; i<=back; i++) //using for loop to print Queue
	 printf("%c\t",queue[i]);
   }
}

void main()
{

enQueue('r');
enQueue('a');
enQueue('s');
enQueue('h');
enQueue('e');
enQueue('d');
deQueue();
deQueue();
enQueue('r');
enQueue('a');
enQueue('z');
display();
}
