#include "node.h"

node_t* node_init(){}
int node_set_is_black(node_t* node, bool_t is_black){

    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    else if (is_black != True || is_black != False){
        printf("    |! Wrong parameter value\n");
        return WRONG_VALUE;
    }

    return node->is_black;

}
/*
int node_set_is_leaf(node_t* node, bool_t is_leaf){

    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    else if (is_leaf != True || is_leaf != False){
        printf("    |! Wrong parameter value\n");
        return WRONG_VALUE;
    }

    return node->is_leaf;

}

int node_set_is_root(node_t* node, bool_t is_root){

    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    else if (is_root != True || is_root != False){
        printf("    |! Wrong parameter value\n");
        return WRONG_VALUE;
    }

    return NO_ERR;

}
*/
int node_set_parent(node_t* node, node_t* parent){

    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    else if (parent == NULL){
        printf("    |! warning : parent NULL\n");
    }
    node->parent = parent;
    return NO_ERR;
}
int node_set_left(node_t* node, node_t* left){

    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    else if (left == NULL){
        printf("    |! warning : left NULL\n");
    }
    node -> left = left;
    return NO_ERR;
}        
int node_set_right (node_t* node, node_t* right){

    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    else if(right == NULL){
        printf("    |! warning : right NULL\n");
    }
    node->right = right;
    return NO_ERR;
}

int node_set_data(node_t* node, void* data){

    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    else if (data == NULL){
        printf("    |! warning : data NULL\n");        
    }
    node->data = data;
    return NO_ERR;
}
int node_set_data_type(node_t* node, int data_type){
    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    else if (data_type < -1 || data_type > 3){
        printf("    |! wrong data_type\n");
        return WRONG_VALUE;
    }
    node->data_type = data_type;
    return NO_ERR;
}
int node_set_data_with_type(node_t* node, void* data, int data_type){

    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    else if(data == NULL){
        printf("    |! warning : data is NULL\n");
        node->data = data;
        if(data_type != -1){
            printf("    |! warning : data is NULL but data_type is not -1");
            node->data_type = data_type;
            printf("    |! warning : data_type is now -1");
            return NO_ERR;            
        }
    }
    else{
        node->data = data;
        node->data_type = data_type;
        return NO_ERR;
    }

}


bool_t node_get_is_black(node_t* node){
    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    return node->is_black;
}
bool_t node_get_is_leaf(node_t* node){
    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    return node->is_leaf;
}
bool_t node_get_is_root(node_t* node){
    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    return node->is_root;
}

node_t* node_get_parent(node_t* node){
    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    return node->parent;
}
node_t* node_get_left(node_t* node){
    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    return node->left;
}
node_t* node_get_right(node_t* node){
    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    return node->right;
}

void* node_get_data(node_t* node){
    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    node->data;
}
int node_get_data_type(node_t* node){
    if(node == NULL){
        printf("    |! node NULL\n");
        return PARAM_NULL;
    }
    return node->data_type;
}