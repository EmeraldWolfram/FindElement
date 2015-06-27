#include "SimpleList.h"
#include <stdlib.h>
#include <stdio.h>

List* listCreate(){
  List* list = malloc(sizeof(List));
  list->head = NULL;
  list->tail = NULL;

  list->length = 0;

}

Element* elementCreate(void* data){
  Element* elem = malloc(sizeof(Element));
  elem->data = data;
  elem->next = NULL;

  return elem;
}

void elementDestroy(Element* elem){
  free(elem);
}