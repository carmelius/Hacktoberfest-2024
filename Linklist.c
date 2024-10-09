#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
 int data;  
 struct node *next;  
};  
struct node *HEAD;  
 
void insert_at_begin();  
void insert_at_last();    
void print();    
void main()  
{  
 int your_choice=0;  
 while(your_choice != 9)  
 {
   ​printf("\n \n");
   ​printf("\n\nOperations on Singly Linked List!\n\n");
   ​printf("Choose an option from the below list!\n");  
   ​printf("\n \n");  
   ​printf("1.Do insertion at beginning of the list!\n2.Do insertion at last!\n3.Display!\n4.Exit!\n");  
   ​printf("\nEnter your choice?\n");    ​
   ​scanf("\n%d",&your_choice);  
   ​switch(your_choice)  
   ​{  
       ​case 1:  
       ​insert_at_begin(); ​
       ​break;  
       ​case 2:  
       ​insert_at_last();    ​
       ​break;  
              ​case 3:  
       ​print();   ​
       ​break;  
       ​case 4:  
       ​exit(0);  
       ​break;  
       ​default:  
       ​printf("Please enter a choice from the following list!");  
   ​}  
 }  
}  
void insert_at_begin()  
{  
 struct node *point;  
 int value;  
 point = (struct node *) malloc(sizeof(struct node *));  
 if(point == NULL)  
 {  
   ​printf("\nInvalid!!");  
 }  
 else  
 {  
   ​printf("\nEnter the value: \n");    
   ​scanf("%d",&value);    
   ​point->data = value;  
   ​point->next = HEAD;  
   ​HEAD = point;  
   ​printf("\nNice, The Node is inserted at the beginning!");  
 }  
​  
}  
void insert_at_last()  
{  
 struct node *point,*tmp;  
 int value;​
 point = (struct node*)malloc(sizeof(struct node)); ​
 if(point == NULL)  
 {  
   ​printf("\nInvalid!!");​
 }  
 else  
 {  
   ​printf("\nEnter the value: \n");  
   ​scanf("%d",&value);  
   ​point->data = value;  
   ​if(HEAD == NULL)  
   ​{  
       ​point -> next = NULL;  
       ​HEAD = point;  
       ​printf("\nNice, The Node is inserted!");  
   ​}  
   ​else  
   ​{  
       ​tmp = HEAD;  
       ​while (tmp -> next != NULL)  
       ​{  
           ​tmp = tmp -> next;  
       ​}  
       ​tmp->next = point;  
       ​point->next = NULL;  
       ​printf("\nNice, The Node is inserted!");  
   ​}  
 }  
}  
 
void print()  
{  
 struct node *point;  
 point = HEAD;  
 if(point == NULL)  
 {  
   ​printf("Please enter something to print!");  
 }  
 else  
 {  
   ​printf("\nPrinting the values!\n");  
   ​while (point!=NULL)  
   ​{  
       ​printf("\n%d",point->data);  
       ​point = point -> next;    
​}   
 }  
}
