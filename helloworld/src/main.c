#include <psp2/ctrl.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include <stdio.h>
 
#include "debugScreen.h"
 
 
#define printf psvDebugScreenPrintf
 
int main(int argc, char *argv[]) {
SceCtrlData pad;
psvDebugScreenInit();
sceCtrlSetSamplingMode(SCE_CTRL_MODE_ANALOG);
printf("Hello, world!\n");
 
while (1) {
sceCtrlPeekBufferPositive(0, &pad, 1);
 
if (pad.buttons & SCE_CTRL_START) { 
printf("ben is the best");
break;
}
}
sceKernelDelayThread(3*1000000);
              
sceKernelExitProcess(0);
return 0;
}