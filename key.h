#pragma once
#ifndef __KEY_H__
#include <stdbool.h>
#include <memory.h>
#include "error.h"

#define MAX_INDEX 20000
typedef struct key_arr key_t;
struct key_arr{
    bool is_available[20000];
};

key_t* key_init();
int key_destroy(key_t key);
int key_get_is_available(key_t key, int index);
int key_set_is_available(key_t key, int index, bool value);



#endif