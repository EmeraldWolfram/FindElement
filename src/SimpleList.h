#ifndef SimpleList_H
#define SimpleList_H

typedef struct Element_t Element;
struct Element_t{
  Element* next;
  void* data;
};

typedef struct{
  Element* head;
  Element* tail;
  int length;
} List;


List* listCreate();
Element* elementCreate(void* data);
void elementDestroy(Element* elem);

#endif // SimpleList_H
