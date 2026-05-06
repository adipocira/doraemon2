#include "4F30.h"

static unsigned long int next;

f32 func_80029B30(OSMesgQueue* mq){
    s32 i;
    u32 start;
    u32 end;
    f64 temp;
    
    for(i = 0; i < 10; i++){  
        osRecvMesg(mq, NULL, OS_MESG_BLOCK);
    }

    osRecvMesg(mq, NULL, OS_MESG_BLOCK);
    start = osGetCount();
    osRecvMesg(mq, NULL, OS_MESG_BLOCK);
    end = osGetCount() - start;

    if(osTvType == OS_TV_PAL){
        temp = (f32)(end) * 21.48;
        temp /= 1000.0;        
    }
    else{
        temp = (end) * 21.91;
        temp /= 1000.0;        
    }

    return temp;
}

void srand(unsigned int s){
    next = s;
}

int rand(){
    u32 rand = next * 1103515245 + 12345;
    
    next = rand;
    return next % 32768U;
}
