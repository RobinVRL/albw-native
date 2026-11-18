#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0065EB40(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0022fd30;
extern undefined4 *DAT_0022fd34;
extern uint DAT_0022fd38;
extern int DAT_0022fd3c;
extern uint *DAT_0022fd40;
extern undefined4 DAT_0022fd44;
extern undefined4 *DAT_0022fd48;
extern int *DAT_0022fd4c;
extern uint *DAT_0022fd50;
extern undefined4 *DAT_0022fd54;
extern undefined4 DAT_0022fd58;

// USA 0022FAE8 <- EU 0022FAE8 (Ghidra, non-matching)
// GLOBAL DAT_0022fd30 int *
// GLOBAL DAT_0022fd34 undefined4 *
// GLOBAL DAT_0022fd38 uint
// GLOBAL DAT_0022fd3c int
// GLOBAL DAT_0022fd40 uint *
// GLOBAL DAT_0022fd44 undefined4
// GLOBAL DAT_0022fd48 undefined4 *
// GLOBAL DAT_0022fd4c int *
// GLOBAL DAT_0022fd50 uint *
// GLOBAL DAT_0022fd54 undefined4 *
// GLOBAL DAT_0022fd58 undefined4

void func_0022FAE8(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  
  puVar6 = DAT_0022fd34;
  piVar1 = DAT_0022fd30;
  if (*(char *)(param_1 + 0x276) == '\0') {
    uVar11 = (ulonglong)DAT_0022fd38;
    puVar4 = (undefined4 *)
             func_005841A8(*DAT_0022fd30,*DAT_0022fd34,*(int **)(DAT_0022fd3c + *DAT_0022fd30));
    uVar3 = DAT_0022fd44;
    puVar2 = DAT_0022fd40;
    puVar8 = (undefined4 *)*puVar4;
    if (((*DAT_0022fd40 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0022fd40), iVar5 != 0)) {
      *DAT_0022fd48 = uVar3;
    }
    if ((puVar8 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar8)(puVar8,DAT_0022fd48), iVar5 == 0)) {
      puVar8 = (undefined4 *)0x0;
    }
    if (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar4) {
      do {
        puVar7 = (undefined4 *)*puVar4;
        if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0022fd40), iVar5 != 0)) {
          *DAT_0022fd48 = uVar3;
        }
        if ((puVar7 == (undefined4 *)0x0) ||
           (iVar5 = (**(code **)*puVar7)(puVar7,DAT_0022fd48), iVar5 == 0)) {
          puVar7 = (undefined4 *)0x0;
        }
        if ((puVar7 != (undefined4 *)0x0) &&
           (fVar9 = **(float **)(*DAT_0022fd4c + 0x1c) - ALBW_AS_F32(puVar7[0xf4]),
           fVar10 = (*(float **)(*DAT_0022fd4c + 0x1c))[2] - ALBW_AS_F32(puVar7[0xf6]),
           fVar9 * fVar9 + fVar10 * fVar10 < ALBW_AS_F32(uVar11))) goto LAB_0022fc74;
        puVar4 = (undefined4 *)func_005841A8(*piVar1,*puVar6,puVar4 + 1);
      } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar4);
    }
    puVar7 = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
LAB_0022fc74:
      func_00230610(param_1,puVar7[0xb3]);
      *(undefined1 *)(param_1 + 0x276) = 1;
    }
  }
  puVar6 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x278));
  if (puVar6 != (undefined4 *)0x0) {
    if (((*DAT_0022fd50 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0022fd50), iVar5 != 0)) {
      *DAT_0022fd54 = DAT_0022fd58;
    }
    iVar5 = (**(code **)*puVar6)(puVar6,DAT_0022fd54);
    if (iVar5 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    if ((puVar6 != (undefined4 *)0x0) && (*(char *)((int)puVar6 + 0x4c1) == '\b')) {
      func_0065EB40((undefined4 *)(param_1 + 0x250),5);
    }
  }
  return;
}

