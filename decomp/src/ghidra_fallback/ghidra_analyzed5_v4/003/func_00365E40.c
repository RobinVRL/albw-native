#include "ghidra_types.h"

extern int func_002D3BB4(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0054C998(int param_1,int param_2);
extern int DAT_00365eb4;
extern int *DAT_00365eb8;
extern char s_SE_PL_FireRod_SET_00365ea0[];

// USA 00365E40 <- EU 00365E1C (Ghidra, non-matching)
// GLOBAL DAT_00365eb4 int
// GLOBAL DAT_00365eb8 int *
// GLOBAL s_SE_PL_FireRod_SET_00365ea0 string

undefined4 func_00365E40(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(short *)(param_2 + 2) != 0x33) {
    if (*(short *)(param_2 + 2) == 0x34) {
      func_002D3BB4(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
    }
    return 0;
  }
  iVar1 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
  local_18 = DAT_00365eb4;
  **(int **)(param_1 + 0x3c) = iVar1;
  local_14 = s_SE_PL_FireRod_SET_00365ea0;
  return func_004EA104(*DAT_00365eb8,&local_18,0);
}

