#include "types.h"
#include "user.h"
#include "procThread.h"


int procThread_create(void)
{
    // add your implementation here ...
    // return -1;
    //printf(1,"procThread_create is called\n");
    void *st;
    st = malloc(4096); 
    //printf(1,"st value is st:%p &st:%p \n",st,&st);
    //clone(st);
    return clone(st);
}


void procThread_exit(int ret_val)
{
    // add your implementation here ...
    //printf(1,"procThread_exit is called");
    //printf(1,"ret value is",s);
    threadexit(ret_val);
   // return 0;
}


void procThread_join(int tid, int * ret_val_p)
{
    // add your implementation here ...
    //printf(1,"procThread_join is called\n");
    join(tid,ret_val_p);
    
}

