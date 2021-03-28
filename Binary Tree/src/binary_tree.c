#include <stdlib.h>
#include "inc/binary_tree.h"

int binary_tree_init(Binary_tree ** to_init)
{
    int retval = 0;

    if(!to_init)
    {
        retval = 1;
    }
    else
    {
        *to_init = (Binary_tree *) malloc(sizeof(Binary_tree *));
    }

    return retval;
}
