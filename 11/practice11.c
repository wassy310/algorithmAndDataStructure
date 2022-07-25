#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} DNode;

int insert_dlink(int InsertData, int NewData, DNode *r_ptr);

int main(void){

    int i, w = 100, insert, new;

    DNode head;
    DNode *ptr;
    head.left = NULL;
    head.right = NULL;

    int input_data[5] = {1, 3, 5, 7, 9};

    for(i = 0; i < sizeof(input_data) / sizeof(input_data[0]); i++){
        ptr = (DNode*)malloc(sizeof(DNode));
        ptr -> data = input_data[i];
        ptr -> right = head.right;
        ptr -> left = &head;
        head.right = ptr;
    }

    insert_dlink(5, 2, ptr -> right);
}

int insert_dlink(int InsertData, int NewData, DNode *h_r_ptr) {
    DNode *c_ptr, *new_ptr;
    c_ptr = h_r_ptr;
    while(c_ptr != NULL){
        if(c_ptr -> data == InsertData){
            break;
        }
        else{
            c_ptr = c_ptr -> right;
        }
    }
    if(c_ptr == NULL){
        return -2;
    }
    else{
        new_ptr = (DNode*)malloc(sizeof(DNode));
        new_ptr -> data = NewData;
        new_ptr -> right = c_ptr -> left;
        c_ptr -> left -> right = new_ptr;
        c_ptr -> left = new_ptr;
        
        printf("succuss");
        
        return 0;
    }
}