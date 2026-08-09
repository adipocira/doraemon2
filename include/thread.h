#ifndef THREAD_H
#define THREAD_H

#include "ultra64.h"

#define THREAD_ID_IDLE 0

typedef struct ThreadInfo {
    s32 thread_id;
    s32 thread_priority;
    void (*entry)(void*);
    void* stackPtr;
} ThreadInfo;

extern OSThread idle_thread; 

#endif
