#ifndef __ERROR_H__
#define __ERROR_H__

typedef enum error_e error_t;

enum error_e{
    NO_ERR = 0,
    PARAM_NULL = -1,
    WRONG_VALUE = -2

};

#endif