#pragma once 
#include <stdint.h>

typedef enum LinkedListReturnCode{
    OK,
    EMPTY, 
    NOT_FOUND,
    FULL,
    FOUND
}LinkedListReturnCode;

typedef struct ListNode* listnode_t;
typedef struct Linkedlist* linkedlist_t;

linkedlist_t create();
LinkedListReturnCode destroyed(linkedlist_t self);
LinkedListReturnCode push(linkedlist_t self, void* item);
void* pull(linkedlist_t self);
LinkedListReturnCode containsItem(linkedlist_t self, void* item);
LinkedListReturnCode removeItem(linkedlist_t self, void* item);
void* peekItemByIndex(linkedlist_t self, uint16_t index);
uint16_t length(linkedlist_t self);
void clear(linkedlist_t self);