#include "ghidra_types.h"

extern int func_004331A0(undefined4 *param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int *DAT_0014fadc;

// USA 0014FA44 <- EU 0014FA44 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_0014fadc int *

uint func_0014FA44(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                  undefined4 param_6,int param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined2 *)(albw_frame + 0x18))
  #define uStack_56 (*(undefined2 *)(albw_frame + 0x1a))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(int *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined1 *)(albw_frame + 0x28))
  #define auStack_44 ((undefined4 *)(albw_frame + 0x2c))
  puVar1 = func_004331A0(auStack_44);
  uStack_54 = puVar1[5];
  local_48 = 0;
  local_5c = *(undefined4 *)(param_1 + 0x2cc);
  (*(undefined4 *)&local_58) = CONCAT22((short)((uint)puVar1[4] >> 0x10),*(undefined2 *)(param_1 + 0x54));
  if (param_7 == 0) {
    param_7 = *(int *)(param_1 + 0x3a0);
  }
  local_68 = param_2;
  local_64 = param_4;
  local_60 = param_6;
  local_50 = param_7;
  local_4c = param_3;
  uVar2 = func_004A8F40(*DAT_0014fadc,&local_68,param_5);
  return uVar2;
}

