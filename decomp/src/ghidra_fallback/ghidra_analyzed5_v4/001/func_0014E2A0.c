#include "ghidra_types.h"

extern int func_004331A0(undefined4 *param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int *DAT_0014e334;

// USA 0014E2A0 <- EU 0014E2A0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_0014e334 int *

uint func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                  ,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined2 *)(albw_frame + 0x10))
  #define uStack_4e (*(undefined2 *)(albw_frame + 0x12))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x20))
  #define auStack_3c ((undefined4 *)(albw_frame + 0x24))
  puVar1 = func_004331A0(auStack_3c);
  uStack_4c = puVar1[5];
  local_40 = 0;
  local_54 = *(undefined4 *)(param_1 + 0x2cc);
  local_60 = 0;
  (*(undefined4 *)&local_50) = CONCAT22((short)((uint)puVar1[4] >> 0x10),*(undefined2 *)(param_1 + 0x54));
  if (param_6 == 0) {
    param_6 = *(int *)(param_1 + 0x3a0);
  }
  local_5c = param_3;
  local_58 = param_5;
  local_48 = param_6;
  local_44 = param_2;
  uVar2 = func_004A8F40(*DAT_0014e334,&local_60,param_4);
  return uVar2;
}

