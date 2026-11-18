#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0025B1B4(int param_1);
extern undefined4 DAT_0025b3bc;
extern char s_SoundFxHeap_0025b3b0[];

// USA 0025B324 <- EU 0025B34C (Ghidra, non-matching)
// GLOBAL DAT_0025b3bc undefined4
// GLOBAL s_SoundFxHeap_0025b3b0 string

void func_0025B324(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0xd8) == '\0') {
    local_c = s_SoundFxHeap_0025b3b0;
    local_10 = DAT_0025b3bc;
    piVar1 = func_0010B954(0x34800,(int)&local_10,(int *)0x0,1,0);
    *(int **)(param_1 + 100) = piVar1;
    if (piVar1 != (int *)0x0) {
      func_0025B1B4(param_1);
    }
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  return;
}

