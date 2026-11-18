#include "ghidra_types.h"

extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_004EB418(int param_1,int *param_2,int param_3);
extern int DAT_001911f4;
extern int DAT_001911f8;
extern undefined4 DAT_001911fc;
extern int *DAT_00191200;
extern int *DAT_00191204;

// USA 00191144 <- EU 00191144 (Ghidra, non-matching)
// GLOBAL DAT_001911f4 int
// GLOBAL DAT_001911f8 int
// GLOBAL DAT_001911fc undefined4
// GLOBAL DAT_00191200 int *
// GLOBAL DAT_00191204 int *

undefined4 func_00191144(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_c (*(uint *)(albw_frame + 0x4))
  iVar1 = DAT_001911f4;
  param_1[0x16b] = 600;
  param_1[0x16c] = iVar1;
  param_1[0x16a] = 0;
  iVar1 = DAT_001911f8;
  param_1[0x168] = 0xd;
  param_1[0x169] = iVar1;
  piVar3 = DAT_00191200;
  param_1[0x167] = 0;
  uVar2 = DAT_001911fc;
  param_1[0x163] = *(int *)(*(int *)(*piVar3 + 0x1c) + 4);
  local_c = param_1[0xb3];
  func_0014EB8C((int)(param_1 + 0x148),param_1[0x147],(undefined2 *)param_1[0xe8],&local_c,
                (short)param_1[0x15],param_1 + 0x179,(short)uVar2);
  return func_004EB418(*DAT_00191204,param_1,1);
}

