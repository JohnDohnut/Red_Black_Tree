#include "key.h"

key_t* key_init(){
    key_t* key = malloc(sizeof(key_t));
    return key;
}

int key_destory(key_t* key){

    if(key == NULL){
        printf("    |! key NULL\n");
        return PARAM_NULL;
    }
    free(key);
    return NO_ERR;
}

int key_get_is_available(key_t* key, int index){
    if(key==NULL){
        printf("    |! key NULL\n");
        return PARAM_NULL;
    }
    if(index < 0 || index >= MAX_INDEX){
        printf("    |! index out of boundary\n");
        return WRONG_VALUE;
    }

    return (int)(key->is_available[index]);
}

int key_set_is_available(key_t* key, int index, bool value){
    if(key==NULL){
        printf("    |! key NULL");
        return PARAM_NULL;
    }
    if(index < 0 || index >= MAX_INDEX){
        printf("    |! index out of boundary\n");
        return WRONG_VALUE;
    }
    key->is_available[index] = value;
    return NO_ERR;
}