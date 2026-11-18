#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_0041062C(undefined4 *param_1,undefined4 param_2);
extern int func_00413788(undefined4 *param_1);
extern int func_00414FF0(void);
extern int func_00415658(int param_1,int param_2);
extern uint DAT_0040a558;
extern uint DAT_0040a55c;
extern undefined4 DAT_0040a560;
extern undefined *DAT_0040a564;

// USA 0040A35C <- EU 0040A33C (Ghidra, non-matching)
// GLOBAL DAT_0040a558 uint
// GLOBAL DAT_0040a55c uint
// GLOBAL DAT_0040a560 undefined4
// GLOBAL DAT_0040a564 undefined *

undefined4 func_0040A35C(int param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  puVar7 = (undefined4 *)*param_3;
  if (((uint)puVar7 & 0x1f) == 0) {
    uVar10 = param_2 * 0x2d8 + 0x1fU & 0xffffffe0;
    puVar9 = (undefined4 *)((int)puVar7 + uVar10);
    if ((int)puVar9 - param_4 < 1) {
      uVar8 = 0;
      uVar1 = (uint)((ulonglong)DAT_0040a558 * (ulonglong)uVar10 + (ulonglong)DAT_0040a558 >> 0x27);
      puVar3 = puVar7;
      if (uVar1 != 0) {
        do {
          if (puVar3 == (undefined4 *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = func_0041062C(puVar3,(uint *)(param_1 + 0x20));
          }
          func_00112364((int *)(param_1 + 0x34),param_1 + 0x38,(int *)(iVar6 + 0xf4));
          uVar8 = uVar8 + 1;
          puVar3 = puVar3 + 0xb6;
        } while (uVar8 < uVar1);
      }
      *(uint *)(param_1 + 0x20) = (uint)puVar7;
      *(uint *)(param_1 + 0x24) = uVar10;
      *param_3 = (uint)puVar9;
      uVar2 = DAT_0040a560;
      uVar10 = param_2 * 0x88 + 0x1fU & 0xffffffe0;
      if ((int)(((int)puVar9 + uVar10) - param_4) < 1) {
        uVar8 = 0;
        uVar1 = (uint)((ulonglong)uVar10 * (ulonglong)DAT_0040a55c >> 0x27);
        puVar7 = puVar9;
        if (uVar1 != 0) {
          do {
            iVar6 = 0;
            if (puVar7 != (undefined4 *)0x0) {
              puVar3 = func_00413788(puVar7);
              *puVar3 = uVar2;
              puVar3[7] = 0;
              puVar3[8] = 0;
              puVar3[9] = 0;
              puVar3[10] = 0xffffffff;
              puVar3[0xb] = 0;
              iVar4 = func_00100118((int)(puVar3 + 0xc),DAT_0040a564,8,4);
              iVar6 = iVar4 + -0x30;
              *(undefined4 *)(iVar4 + 0x20) = 0;
              *(undefined4 *)(iVar4 + 0x24) = 0;
              *(undefined4 *)(iVar4 + 0x34) = 0;
              *(undefined1 *)(iVar4 + 0x44) = 0;
              *(undefined4 *)(iVar4 + 0x28) = 0;
              *(undefined4 *)(iVar4 + 0x38) = 0;
              *(undefined1 *)(iVar4 + 0x45) = 0;
              *(undefined4 *)(iVar4 + 0x2c) = 0;
              *(undefined4 *)(iVar4 + 0x3c) = 0;
              *(undefined1 *)(iVar4 + 0x46) = 0;
              *(undefined4 *)(iVar4 + 0x30) = 0;
              *(undefined4 *)(iVar4 + 0x40) = 0;
              *(undefined1 *)(iVar4 + 0x47) = 0;
              *(undefined4 *)(iVar4 + 0x50) = 0;
              *(undefined4 *)(iVar4 + 0x54) = 0;
            }
            func_00112364((int *)(param_1 + 0x54),param_1 + 0x58,(int *)(iVar6 + 0x80));
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 0x22;
          } while (uVar8 < uVar1);
        }
        *(undefined4 **)(param_1 + 0x4c) = puVar9;
        *(uint *)(param_1 + 0x50) = uVar10;
        *param_3 = (int)puVar9 + uVar10;
        piVar5 = *(int **)(param_1 + 0x38);
        if (piVar5 != (int *)(param_1 + 0x38)) {
          do {
            piVar5[0x69] = param_1 + 0x40;
            piVar5 = (int *)*piVar5;
          } while (piVar5 != (int *)(param_1 + 0x38));
        }
        puVar7 = func_00414FF0();
        func_00415658((int)puVar7,param_1 + 0x40);
        return 1;
      }
    }
  }
  return 0;
}

