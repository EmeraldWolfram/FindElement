#include "FindElement.h"
#include "SimpleList.h"
#include <stdlib.h>
#include <stdio.h>


Element* listFind(List* list, void* value){
  Element* tempElement;

  if(list == NULL){
    return NULL;
  }
  else if(list->head == NULL){
    return NULL;
  }
  else{
    tempElement = list->head;
  
    printf("head(%d)",*(int*)(tempElement->data));
    while(tempElement->data != value){
      tempElement = tempElement->next;
      printf("->%d", *(int*)(tempElement->data));
    }
  }
  return tempElement;
}
