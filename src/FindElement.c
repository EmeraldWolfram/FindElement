#include "FindElement.h"
#include "SimpleList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


Element* listFind(List* list, void* value, int(*compare)(void*,void*)){
  Element* tempElement;

  if(list == NULL){
    return NULL;
  }
  else if(list->head == NULL){
    return NULL;
  }
  else{
    tempElement = list->head;
  
    printf("head(%X)",*(int*)(tempElement->data));
    while(compare(tempElement->data,value) != 0){
      tempElement = tempElement->next;
      printf("->%X", *(int*)(tempElement->data));
    }
  }
  return tempElement;
}

int intCompare(void *first, void *second){
  if(*((int*)first) == *((int*)second)){
    return 0;
  }
  return 1;
}

int stringCompare(void *first, void *second){
  if(strcmp((char*)first,(char*)second) == 0){
    return 0;
  }
  return 1;
}