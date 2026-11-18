#include "ghidra_types.h"

extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int *DAT_00143790;
extern undefined4 DAT_00143794;
extern undefined4 DAT_00143798;
extern undefined4 DAT_0014379c;

// USA 001436A8 <- EU 001436A8 (Ghidra, non-matching)
// GLOBAL DAT_00143790 int *
// GLOBAL DAT_00143794 undefined4
// GLOBAL DAT_00143798 undefined4
// GLOBAL DAT_0014379c undefined4

void func_001436A8(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  puVar1 = (uint *)func_0014E904(param_1,1,1);
  *(uint **)(param_1 + 0x470) = puVar1;
  func_00169608(puVar1,0,DAT_00143790,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8));
  func_0016A02C(*(int *)(param_1 + 0x470),-1,(int *)0xffffffff,0);
  local_78[1] = 3;
  local_70 = &local_6c;
  local_78[0] = 1;
  local_24 = 10;
  local_20 = 0;
  local_6c = 0;
  local_60 = DAT_0014379c;
  local_5c = DAT_00143798;
  local_58 = (uint)puVar1 | 0xff;
  local_68 = DAT_00143794;
  uStack_64 = DAT_00143798;
  uVar2 = DAT_00143794;
  func_0016898C(*(int *)(param_1 + 0x470),local_78);
  func_00168E9C(*(int **)(param_1 + 0x470),*(int *)(param_1 + 0x46c),(int *)0x0);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x470) + 0x14) + 0x10) = uVar2;
  return;
}

