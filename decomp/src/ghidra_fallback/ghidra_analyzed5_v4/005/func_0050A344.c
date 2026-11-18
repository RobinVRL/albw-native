#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int DAT_0050a3c8;
extern int DAT_0050a3dc;
extern char s_SE_LavaUp_MELT_0050a3cc[];

// USA 0050A344 <- EU 0050A31C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_0050a3c8 int
// GLOBAL DAT_0050a3dc int
// GLOBAL s_SE_LavaUp_MELT_0050a3cc string

undefined4 func_0050A344(int *param_1)

{
  int iVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(char * *)(albw_frame + 0x64))
  puVar2 = (uint *)func_002C11E8(aiStack_70,1,10,0);
  func_0016898C(param_1[0x104],puVar2);
  puVar2 = (uint *)func_002C11E8(aiStack_70,2,10,0);
  func_0016898C(param_1[0x105],puVar2);
  iVar1 = DAT_0050a3c8;
  *(uint *)(param_1[0x111] + 0x2c) = *(uint *)(param_1[0x111] + 0x2c) & 0xfffff8ff | 0x300;
  local_10 = DAT_0050a3dc;
  *(uint *)(param_1[0x111] + 0x2c) = *(uint *)(param_1[0x111] + 0x2c) | 0x1800;
  param_1[0x116] = iVar1;
  local_c = s_SE_LavaUp_MELT_0050a3cc;
  return func_00150A84(param_1,&local_10,0);
}

