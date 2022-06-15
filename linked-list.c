#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};


struct node *head = NULL;
struct node *current = NULL;

void insertFirst(int x) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   (*link).data = x;
	
   //point it to old first node
   (*link).next = head;
	
   //point first to new first node
   head = link;
}


//print list
void print() {
   struct node *ptr = head;
    printf("\n");
   //start from the beginning
   while(ptr != NULL) {
      printf("%d, ",ptr->data);
      ptr = ptr->next;
   }

}

//is list empty
int isEmpty() {
   return head == NULL;
}

//delete first link
struct node* deleteFirst() {

   //save reference to first link
   struct node *tempLink = head;
	
   //mark next to first link as first 
   head = head->next;
	
   //return the deleted link
   return tempLink;
}



int main()
{
    insertFirst(3);
    insertFirst(9);
    insertFirst(70);
    print();

}