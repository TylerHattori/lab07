

#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"



void addIntToEndOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.

  Node *p; // temporary pointer
  p = new Node;
  p->data = value;
  p->next = NULL;
  // TODO:
  // (1) Allocate a new node.  p will point to it.

  // THIS IS PLACE-HOLDER LINE OF CODE.  DELETE IT AND REPLACE IT.

  // (2) Set p's data field to the value passed in
  
  // (3) Set p's next field to NULL


  if (list->head == NULL) {
    list->head = p;
    list->tail = p;
    // (4) Make both head and tail of this list point to p
    
    
  } else {
    list->tail->next = p;
    list->tail = p;
    // Add p at the end of the list.   

    // (5) The current node at the tail? Make it point to p instead of NULL

    // (6) Make the tail of the list be p now.

  }

}

void addIntToStartOfList(LinkedList *list, int value) {
  /*assert(list!=NULL); // if list is NULL, we can do nothing.
  Node *p; // temporary pointer
  p = new Node;
  p->data = value;
  p->next = NULL;

  if (list->head == NULL) {
    list->head = p;
    list->tail = p;
    // (4) Make both head and tail of this list point to p
    
    
  } else {
    p->next=list->head;
    list->head = p;
    // Add p at the end of the list.   

    // (5) The current node at the tail? Make it point to p instead of NULL

    // (6) Make the tail of the list be p now.

  }*/
  // Add code for this.  
  // HINTS:
  //  You will need to allocate a new Node.
  //  You will need two cases just as in addIntToEndOfList,
  //  one for when list->head is NULL and another for when it is not.
  // You need to consider how to make sure that list->head changes to point to the new node
  // that you allocated.  And you will need to make sure that when you are done, 
  // that if the new node is now the ONLY thing on the list, that tail points to it also,
  // and that the new node is pointing to NULL.
  // Otherwise, you'll need to be sure that 
  //   if it is the only node on the list, or to the "old" head if there 

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {
  /*
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);

  int max = largestValue(list);
  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)
  Node *temp;
  temp = new Node;
  temp->data = 42;
  temp->next=list->head;
  while (temp->next != NULL)
  {
    if (temp->next->data == max)
    {
      return temp->next;
    }
    temp->next = temp->next->next;

  }
  return temp;
  */return NULL;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {
/*
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list!=NULL);
  assert(list->head != NULL);

  int min = smallestValue(list);
  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)
  Node *temp;
  temp = new Node;
  temp->data = 42;
  temp->next=list->head;
  while (temp->next != NULL)
  {
    if (temp->next->data == min)
    {
      return temp->next;
    }
    temp->next = temp->next->next;

  }
  return temp;*/return NULL;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  int max = list->head->data;
  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)
  Node *temp;
  temp = new Node;
  temp->next=list->head;
  while (temp->next != NULL)
  {
    temp = temp->next;
    if (temp->data > max)
    {
      max = temp->data;
    }

  }
  return max;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  int min = list->head->data;
  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)
  Node *temp;
  temp = new Node;
  temp->next=list->head;
  while (temp->next != NULL)
  {
    temp = temp->next;
    if (temp->data < min)
    {
      min = temp->data;
    }

  }
  return min;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  int sum = 0;
  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)
  Node *temp;
  temp = new Node;
  temp->next=list->head;
  while (temp->next != NULL)
  {
    temp = temp->next;
    sum+=temp->data;
  }
  return sum;
}

