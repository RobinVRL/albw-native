#include "ghidra_types.h"

extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0054C998(int param_1,int param_2);
extern int DAT_0038b494;
extern int *DAT_0038b498;
extern char s_SE_PL_Boomerang_SHOT_0038b47c[];

// USA 0038B424 <- EU 0038B400 (Ghidra, non-matching)
// GLOBAL DAT_0038b494 int
// GLOBAL DAT_0038b498 int *
// GLOBAL s_SE_PL_Boomerang_SHOT_0038b47c string

void func_0038B424(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(short *)(param_2 + 2) != 0x4a) {
    if (*(short *)(param_2 + 2) == 0x4b) {
      iVar1 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
      *(int *)(param_1 + 0x58) = iVar1;
      local_c = s_SE_PL_Boomerang_SHOT_0038b47c;
      local_10 = DAT_0038b494;
      func_004EA104(*DAT_0038b498,&local_10,0);
    }
    return;
  }
  iVar1 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
  *(int *)(param_1 + 0x58) = iVar1;
  return;
}

