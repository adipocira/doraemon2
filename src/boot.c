#include "boot.h"
#include "thread.h"

void bootproc() {
    static ThreadInfo info; //todo fill
    
    osInitialize();
    osCreateThread(&idle_thread, info.thread_id, info.entry, NULL,
                  info.stackPtr, info.thread_priority);
    osStartThread(&idle_thread);
} 
