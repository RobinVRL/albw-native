#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0066F7C8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0038a82c;
extern float DAT_0038a830;

// USA 0038A674 <- EU 0038A650 (Ghidra, non-matching)
// GLOBAL DAT_0038a82c float
// GLOBAL DAT_0038a830 float

void func_0038A674(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int extraout_r1;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  float fparam_0;
  float fparam_0_00;
  float fVar13;
  
  param_1[0x1e] = 0;
  iVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
  param_1[0x62] = iVar1;
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  fparam_0_00 = DAT_0038a830;
  fVar13 = DAT_0038a82c;
  uVar9 = param_1[0x62];
  if ((int)uVar9 <= (int)uVar2) {
    uVar2 = uVar9;
  }
  param_1[99] = uVar2;
  piVar10 = (int *)param_1[9];
  uVar8 = 0;
  do {
    if (0 < (int)uVar9) {
      if ((uVar2 - 1 < 4) || (param_1[99] == 0 && uVar8 == 0)) {
        iVar1 = param_1[0x1d];
        uVar5 = uVar2;
        if (4 < uVar2) {
          uVar5 = 4;
        }
        func_0066F7C8((undefined4 *)(iVar1 + 0x38),0);
        *(byte *)(iVar1 + 0x9d) = *(byte *)(iVar1 + 0x9d) & 0xfd | 1;
        func_00231448(iVar1 + 0x74);
        if ((uVar5 & 0xff) < 4) {
          *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x1c);
          *(short *)(iVar1 + 0x76) = (short)((uVar5 & 0xff) << 1);
          *(undefined2 *)(iVar1 + 0x74) = 2;
        }
        else {
          *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x1c);
          *(undefined2 *)(iVar1 + 0x76) = 7;
          *(undefined2 *)(iVar1 + 0x74) = 0;
        }
        func_002317C0((undefined2 *)(iVar1 + 0x74),fparam_0_00);
        iVar4 = extraout_r1;
        if (uVar8 < 0x14) {
          iVar4 = uVar8 * 3;
        }
        puVar6 = (uint *)(param_1 + 0x23);
        *(char *)(iVar1 + 0x9c) = (char)uVar5;
        if (uVar8 < 0x14) {
          puVar6 = puVar6 + iVar4;
        }
        param_1[0x1e] = uVar8;
        param_3 = *puVar6;
        uVar5 = puVar6[1];
        uVar12 = puVar6[2];
        iVar1 = *(int *)(**(int **)(param_1[0x1d] + 0x1c) + 0x10);
        *(uint *)(iVar1 + 0x1c) = param_3;
        *(uint *)(iVar1 + 0x20) = uVar5;
        *(uint *)(iVar1 + 0x24) = uVar12;
        *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
      }
      else {
        iVar1 = *piVar10;
        fparam_0 = fVar13;
        if (0 >= (int)uVar2) {
          fparam_0 = fparam_0_00;
        }
        *(bool *)(iVar1 + 0x30) = 0 < (int)uVar2;
        func_002316CC(iVar1 + 0x24,fparam_0);
        if (uVar8 < 0x14) {
          param_3 = uVar8 * 3;
        }
        piVar3 = param_1 + 0x23;
        iVar1 = *piVar10;
        if (uVar8 < 0x14) {
          piVar3 = piVar3 + param_3;
        }
        piVar10 = piVar10 + 1;
        iVar7 = piVar3[1];
        iVar11 = piVar3[2];
        iVar4 = *(int *)(**(int **)(iVar1 + 0x1c) + 0x10);
        *(int *)(iVar4 + 0x1c) = *piVar3;
        *(int *)(iVar4 + 0x20) = iVar7;
        *(int *)(iVar4 + 0x24) = iVar11;
        param_3 = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
        *(char *)(iVar4 + 0x44) = (char)param_3;
        iVar1 = *(int *)(iVar1 + 0x1c);
        *(byte *)(iVar1 + 0x70) = *(byte *)(iVar1 + 0x70) | 2;
      }
    }
    uVar8 = uVar8 + 1;
    uVar2 = uVar2 - 4;
    uVar9 = uVar9 - 4;
  } while ((int)uVar8 < 0x14);
  return;
}

