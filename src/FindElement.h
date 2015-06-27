#ifndef FindElement_H
#define FindElement_H
#include "SimpleList.h"


Element* listFind(List* list, void* value, int(*compare)(void*,void*));

int intCompare(void *first, void *second);
int stringCompare(void *first, void *second);


#endif // FindElement_H
