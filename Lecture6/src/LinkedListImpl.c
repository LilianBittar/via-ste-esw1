#include "LinkedList.h"
#include <stdlib.h>

typedef struct Linkedlist{
    int16_t size;
    listnode_t* head;
}Linkedlist;

typedef struct ListNode
{
    void* item;
    listnode_t* next;
}ListNode;


linkedlist_t create(){
    linkedlist_t new_linkedlist = calloc(sizeof(linkedlist_t),1);
    //we use collac to make sure that the memory is clean 
    if(NULL == new_linkedlist){
        return NULL;
    }
    new_linkedlist -> size = 0;
    new_linkedlist -> head = NULL;
}

LinkedListReturnCode destroyed(linkedlist_t self){
    if(self == NULL) {return NOT_FOUND;}
    listnode_t current_node = self -> head;
    //free all the nodes
    while (NULL != current_node)
    {
        listnode_t temp_node = current_node -> next;
        free(current_node);
        current_node = temp_node;
    }
    //free the linkedList itself
    free(self);
    return OK;
}

LinkedListReturnCode push(linkedlist_t self, void* item){
    if(self == NULL) {return NOT_FOUND;}
    listnode_t new_node = calloc(sizeof(ListNode),1);
    new_node->item =item;
    listnode_t current_node=self->head;
    self->head=new_node;
    new_node=current_node;
    self->size ++;
    return OK;
}

void* pull(linkedlist_t self) {
    listnode_t tmp = self->head;
    return tmp -> item;
}

LinkedListReturnCode containsItem(linkedlist_t self, void* item){
    if(self == NULL) {return NOT_FOUND;}
      listnode_t current_node = self -> head;
    while (NULL != current_node)
    {
        listnode_t temp_node = current_node -> next;
        if(current_node -> item == item)
        {
            return FOUND;
        }
        current_node = temp_node;
    }
    return NOT_FOUND;
    
}

LinkedListReturnCode removeItem(linkedlist_t self, void* item){
    if(self == NULL) {return NOT_FOUND;}
    //self->head presents the first noe in the list
    listnode_t current_node = self ->head;
    listnode_t temp_node = NULL;
    while (NULL != current_node)
    {
        //checking if the item in the current node is matching the item in the argument
        if(current_node -> item == item)
        {
            //checking if the node is the last node in the list
            if(current_node -> next == NULL)
            {
                //checking if the list has just one node 
                if(self->size == 1){
                    //set the head to NULL
                    self->head = NULL;
                    //free the node
                    free(current_node);
                    self->size--;
                    return OK;
                }
                else{
                   temp_node -> next = NULL;
                   free(current_node);
                   self->size--;
                    return OK;
                }
                
            }
        else{
                temp_node ->next = current_node ->next;
                free(current_node);
                self->size--;
                return OK;
            }
        }
        temp_node = current_node;
        current_node = current_node ->next;
    }
    return NOT_FOUND;

}
void* peekItemByIndex(linkedlist_t self, uint16_t index){
    if(self == NULL) {return NOT_FOUND;}
    listnode_t current_node = self ->head;
    for(int i=1; i<index; i++){
        if(current_node==NULL) return NOT_FOUND;
        //is like making currentnode ++
        current_node = current_node->next;
    }
    //after looping until the index number, we make sure that the location of current node variable matches the number of the node indecated by the index.
    return current_node->item;
}


uint16_t length(linkedlist_t self){
    if(self == NULL) {return 0;}
    return self->size;
}
void clear(linkedlist_t self){
    listnode_t current_node = self -> head;
    //free all the nodes
    while (NULL != current_node)
    {
        listnode_t temp_node = current_node -> next;
        free(current_node);
        current_node = temp_node;
    }
    self->head = NULL;
}
