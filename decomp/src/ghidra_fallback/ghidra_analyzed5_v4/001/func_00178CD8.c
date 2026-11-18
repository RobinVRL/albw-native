#include "ghidra_types.h"

extern int func_00178AE8(int param_1,uint *param_2,uint *param_3,uint param_4);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_00178d4c;
extern int DAT_00178d50;
extern int *DAT_00178d54;

// USA 00178CD8 <- EU 00178CD8 (Ghidra, non-matching)
// GLOBAL DAT_00178d4c undefined4
// GLOBAL DAT_00178d50 int
// GLOBAL DAT_00178d54 int *

uint * func_00178CD8(int param_1,uint *param_2,int *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(uint * *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(uint *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  local_18 = 0;
  uStack_14 = 0xffffffff;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_24 = DAT_00178d4c;
  local_28 = DAT_00178d50;
  iVar1 = func_005826A4(*DAT_00178d54,(int *)&local_20,&local_28,param_3);
  if (iVar1 != 0) {
    param_2 = func_00178AE8(param_1,param_2,local_20,local_18);
  }
  return param_2;
}

