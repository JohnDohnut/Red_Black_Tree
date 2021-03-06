#pragma once
#ifndef __NODE_H__
#define __NODE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <memory.h>
#include "error.h"
/*
typedef enum bool_e bool_t;
enum bool_e{

    False = 0,
    True = 1

};
*/
typedef struct node_s node_t;
struct node_s{

    bool is_black;
    bool is_leaf;
    bool is_root;

    int key;

    struct node_s *parent;
    struct node_s *left;
    struct node_s *right;
    void * data;
    int data_type;
};




node_t* node_init();
int node_destroy(node_t* node);
int node_set_is_black(node_t* node, bool is_black);
int node_set_is_leaf(node_t* node, bool is_leaf);
int node_set_is_root(node_t* node, bool is_root);

int node_set_parent(node_t* node, node_t* parent);
int node_set_left(node_t* node, node_t* left);
int node_set_right (node_t* node, node_t* right);

int node_set_data(node_t* node, void* data);
int node_set_data_type(node_t* node, int data_type);
int node_set_data_with_type(node_t* node, void* data, int data_type);


bool node_get_is_black(node_t* node);
bool node_get_is_leaf(node_t* node);
bool node_get_is_root(node_t* node);

node_t* node_get_parent(node_t* node);
node_t* node_get_left(node_t* node);
node_t* node_get_right(node_t* node);

void* node_get_data(node_t* node);
int node_get_data_type(node_t* node);

#endif