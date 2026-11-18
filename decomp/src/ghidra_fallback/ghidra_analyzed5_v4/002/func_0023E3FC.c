#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);

// USA 0023E3FC <- EU 0023E3FC (Ghidra, function missing from the decomp table)

undefined4 func_0023E3FC(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  float fVar5;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  
  unaff_r6[1] = in_stack_00000000;
  unaff_r6[2] = in_stack_00000004;
  unaff_r6[3] = in_stack_00000008;
  iVar2 = unaff_r4[1];
  iVar4 = unaff_r4[2];
  unaff_r6[0x16] = *unaff_r4;
  unaff_r6[0x17] = iVar2;
  unaff_r6[0x18] = iVar4;
  func_004356B4(unaff_r6);
  fVar5 = func_0054DE3C(unaff_r5,1,1);
  fVar1 = *(float *)(unaff_r5 + 0x3d4);
  uVar3 = *(undefined4 *)(unaff_r5 + 0x3d8);
  iVar2 = *(int *)(unaff_r5 + 0x40c);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_r5 + 0x3d0);
  *(float *)(iVar2 + 8) = fVar1 + fVar5;
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  return func_004356B4(*(int **)(unaff_r5 + 0x40c));
}

