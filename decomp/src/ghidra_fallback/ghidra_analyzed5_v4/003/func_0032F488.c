#include "ghidra_types.h"

extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);

// USA 0032F488 <- EU 0032F464 (Ghidra, non-matching)

undefined4 func_0032F488(int param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define afStack_58 ((float *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0x2c))
  *(int *)(param_1 + 0x920) = *(int *)(param_1 + 0x928) + *(int *)(param_1 + 0x920);
  *(int *)(param_1 + 1000) = *(int *)(param_1 + 0x92c) + *(int *)(param_1 + 1000);
  uVar2 = *(int *)(param_1 + 0x924) + *(int *)(param_1 + 0x930);
  *(uint *)(param_1 + 0x924) = uVar2;
  func_00491624(afStack_34,*(uint *)(param_1 + 0x920),*(uint *)(param_1 + 1000),uVar2);
  func_001151D8(afStack_58,(undefined4 *)(param_1 + 0x8ec));
  func_0011549C(afStack_58,afStack_58,afStack_34);
  iVar1 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_001151F8((undefined4 *)(iVar1 + 0x80),afStack_58,(undefined4 *)(param_1 + 0x3d0));
  return func_004CEAF0(*(int *)(param_1 + 0x40c));
}

