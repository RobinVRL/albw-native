#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int *DAT_00508838;

// USA 00508758 <- EU 00508730 (Ghidra, non-matching)
// GLOBAL DAT_00508838 int *

undefined4 func_00508758(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((uint *)(albw_frame + 0x8))
  uVar5 = *(undefined8 *)(param_1 + 0x3d0);
  uVar6 = *(undefined4 *)(param_1 + 0x3d8);
  fVar4 = func_0054DE3C(param_1,0,1);
  iVar1 = *(int *)(param_1 + 0x41c);
  piVar3 = (int *)(param_1 + 0x41c);
  *(int *)(iVar1 + 4) = (int)uVar5;
  *(float *)(iVar1 + 8) = fVar4 + ALBW_AS_F32(((ulonglong)uVar5 >> 0x20));
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  func_004356B4(*(int **)(param_1 + 0x41c));
  local_28[1] = 0xa4;
  *(undefined2 *)(*piVar3 + 0x28) = 0xa4;
  *(uint *)(*piVar3 + 0x2c) = *(uint *)(*piVar3 + 0x2c) & 0xfffff8ff | 0x200;
  *(uint *)(*piVar3 + 0x2c) = *(uint *)(*piVar3 + 0x2c) & 0xffffe7ff | 0x1000;
  uVar2 = *(uint *)(*piVar3 + 0x2c);
  *(uint *)(*piVar3 + 0x2c) = uVar2 | 4;
  *(uint *)(*piVar3 + 0x2c) = uVar2 | 5;
  *(uint *)(*piVar3 + 0x2c) = uVar2 | 0x85;
  *(int *)(*(int *)(param_1 + 0x428) + 0x18) = *piVar3;
  local_28[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*(int *)(param_1 + 0x428),local_28);
  *(undefined2 *)(*(int *)(param_1 + 0x428) + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  return func_004A7F00(*DAT_00508838,*(int *)(param_1 + 0x428),2);
}

