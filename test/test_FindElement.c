#include "unity.h"
#include "FindElement.h"
#include "SimpleList.h"

void setUp(void){}

void tearDown(void){}

void test_findElement_given_integer(void){
  int value1 = 1;
  int myValue1 = 1;
  int value3 = 3;
  int value4 = 4;
  int value6 = 6;
  int value7 = 7;
  
  List* list = listCreate();
  Element* elem, * elemNext;
  
  elem = elementCreate(&value4);
  elemNext = elementCreate(&value6);
  elem->next = elemNext;
  elemNext = elem;
  
  elem = elementCreate(&value1);
  elem->next = elemNext;
  elemNext = elem;

  elem = elementCreate(&value7);
  elem->next = elemNext;
  elemNext = elem;
  
  elem = elementCreate(&value3);
  elem->next = elemNext;
  elemNext = elem;  
  list->head = elem;
  
  elem = NULL;
  elem = listFind(list, &myValue1, intCompare);
  
  TEST_ASSERT_NOT_NULL(elem);
  TEST_ASSERT_NOT_NULL(elem->data);
  TEST_ASSERT_EQUAL(1, *(int *)(elem->data));
}

void test_findElement_given_string(void){
  char* str1 = "one";
  char* str3 = "three";
  char* str4 = "four";
  char* myStr4 = "four";
  char* str6 = "six";
  char* str7 = "seven";
  
  List* list = listCreate();
  Element* elem, * elemNext;
  
  elem = elementCreate(str4);
  elemNext = elementCreate(str6);
  elem->next = elemNext;
  elemNext = elem;
  
  elem = elementCreate(str1);
  elem->next = elemNext;
  elemNext = elem;

  elem = elementCreate(str7);
  elem->next = elemNext;
  elemNext = elem;
  
  elem = elementCreate(str3);
  elem->next = elemNext;
  elemNext = elem;  
  list->head = elem;
  
  elem = NULL;
  elem = listFind(list, myStr4, stringCompare);
  
  TEST_ASSERT_NOT_NULL(elem);
  TEST_ASSERT_NOT_NULL(elem->data);
  TEST_ASSERT_EQUAL_STRING("four", (char *)(elem->data));
  
}
