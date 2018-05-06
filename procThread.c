#include "types.h"
#include "user.h"
#include "procThread.h"


int procThread_create(void)
{
    // add your implementation here ...
    // return -1;
    printf(1,"procThread_create is called\n");
    void *st;
    st = malloc(4096); 
    clone(st);
    return 1;
}


void procThread_exit(int ret_val)
{
    // add your implementation here ...
    
}


void procThread_join(int tid, int * ret_val_p)
{
    // add your implementation here ...
    
}

