#include<stdio.h>
#include<stdlib.h>

int Dnode::insert_dlink(int InsertData, int NewData, Dnode *h_r_ptr){
    Dnode *c_ptr, *new_ptr;
    c_ptr = h_r_ptr;
    while(c_ptr != ){
        if(c_ptr -> data == ){
            break;
        }
        else{

        }
    }
    if(c_ptr == NULL){
        return -2;
    }
    else{
        new_ptr = new Dnode;
        new_ptr -> data = ;

        c_ptr -> left => right = new_ptr;
        new_ptr -> right = c_ptr;
        c_ptr -> left = new;

        return 0;
    }
}