#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);

// USA 0023E3BC <- EU 0023E3BC (Ghidra, function missing from the decomp table)

undefined4 func_0023E3BC(void)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int unaff_r5;
  int *unaff_r6;
  float fVar4;
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  unaff_r6[0x16] = in_stack_00000010;
  unaff_r6[0x17] = in_stack_0000001c;
  unaff_r6[0x18] = in_stack_00000028;
  func_004356B4(unaff_r6);
  fVar4 = func_0054DE3C(unaff_r5,1,1);
  fVar2 = *(float *)(unaff_r5 + 0x3d4);
  uVar3 = *(undefined4 *)(unaff_r5 + 0x3d8);
  iVar1 = *(int *)(unaff_r5 + 0x40c);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(unaff_r5 + 0x3d0);
  *(float *)(iVar1 + 8) = fVar2 + fVar4;
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  return func_004356B4(*(int **)(unaff_r5 + 0x40c));
}

