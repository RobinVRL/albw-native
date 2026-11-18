#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_004356B4(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_00520FC0(void);

// USA 001D134C <- EU 001D134C (Ghidra, non-matching)

undefined4 func_001D134C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_r1;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  float fVar7;
  
  iVar1 = *(int *)(param_1 + 0x4f4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x5b4),*(uint *)(param_1 + 1000),0);
  iVar1 = *(int *)(param_1 + 0x4f4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  if ((*(char *)(param_1 + 0x5df) == '\x03') || (*(char *)(param_1 + 0x500) != '\x04')) {
    iVar1 = *(int *)(param_1 + 0x4f4);
    uVar2 = *(undefined4 *)(param_1 + 0x5cc);
    *(undefined4 *)(iVar1 + 0x74) = uVar2;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar1 + 0x78) = uVar2;
    *(undefined4 *)(iVar1 + 0x7c) = uVar2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4f4);
    fVar7 = *(float *)(param_1 + 0x5d0) * *(float *)(param_1 + 0x5cc);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(float *)(iVar1 + 0x74) = fVar7;
    *(float *)(iVar1 + 0x78) = fVar7;
    *(float *)(iVar1 + 0x7c) = fVar7;
  }
  func_004CEAF0(*(int *)(param_1 + 0x4f4));
  func_001512B4(*(int *)(param_1 + 0x574),(float *)(param_1 + 0x4d0));
  if (*(char *)(param_1 + 0x5d7) == '\0') {
    if (*(char *)(param_1 + 0x5df) != '\x03') {
      bVar6 = *(char *)(param_1 + 0x5e0) != '\x01';
      piVar3 = extraout_r1;
      if (bVar6) {
        piVar3 = *(int **)(param_1 + 0x40c);
      }
      if (!bVar6 || piVar3 == (int *)0x0) {
        piVar3 = *(int **)(param_1 + 0x56c);
      }
      piVar3[1] = *(int *)(param_1 + 0x3d0);
      piVar3[2] = *(int *)(param_1 + 0x3d4);
      piVar3[3] = *(int *)(param_1 + 0x3d8);
      return func_004356B4(piVar3);
    }
  }
  else if (*(char *)(param_1 + 0x5df) == '\x04') {
    return 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x4d0);
  uVar5 = *(undefined4 *)(param_1 + 0x4d8);
  iVar1 = func_00520FC0();
  uVar2 = *(undefined4 *)(iVar1 + 4);
  iVar1 = *(int *)(param_1 + 0x56c);
  *(undefined4 *)(iVar1 + 4) = uVar4;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar5;
  return func_004356B4(*(int **)(param_1 + 0x56c));
}

