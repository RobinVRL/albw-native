// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int func_00556A04();
extern int func_00588BE4(int param_1);
extern float DAT_00235d20;
extern float DAT_00235d24;
extern int DAT_00235d28;
extern int *DAT_00235d2c;
extern int *DAT_00235d30;
extern uint *DAT_00235d34;
extern undefined4 *DAT_00235d38;
extern undefined4 DAT_00235d3c;
extern int *DAT_00235d40;
extern uint *DAT_00235d44;
extern undefined4 *DAT_00235d48;
extern undefined4 DAT_00235d4c;

// USA 00235B30 <- EU 00235B30 (Ghidra, non-matching)
// GLOBAL DAT_00235d20 float
// GLOBAL DAT_00235d24 float
// GLOBAL DAT_00235d28 int
// GLOBAL DAT_00235d2c int *
// GLOBAL DAT_00235d30 int *
// GLOBAL DAT_00235d34 uint *
// GLOBAL DAT_00235d38 undefined4 *
// GLOBAL DAT_00235d3c undefined4
// GLOBAL DAT_00235d40 int *
// GLOBAL DAT_00235d44 uint *
// GLOBAL DAT_00235d48 undefined4 *
// GLOBAL DAT_00235d4c undefined4

void func_00235B30(undefined1 *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = DAT_00235d28;
  if (param_3 == 0) {
    return;
  }
  iVar6 = *DAT_00235d2c;
  fVar8 = DAT_00235d24;
  fVar7 = DAT_00235d20;
  if ((iVar6 == 0) || (uVar2 = func_005568E8(iVar6), *param_2 != uVar2)) {
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_00235d30 + 0x3dbbc,*param_2);
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    if (((*DAT_00235d34 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00235d34), iVar6 != 0)) {
      *DAT_00235d38 = DAT_00235d3c;
    }
    iVar6 = (**(code **)*puVar4)(puVar4,DAT_00235d38);
    puVar5 = (undefined4 *)0x0;
    if (iVar6 != 0) {
      puVar5 = puVar4;
    }
    if (puVar5 == (undefined4 *)0x0) {
      iVar6 = func_00588BE4((int)puVar4);
      if (iVar6 != *DAT_00235d40) {
        return;
      }
      if (((*DAT_00235d44 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00235d44), iVar6 != 0)) {
        *DAT_00235d48 = DAT_00235d4c;
      }
      iVar6 = (**(code **)*puVar4)(puVar4,DAT_00235d48);
      if (iVar6 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      fVar7 = ALBW_AS_F32(puVar4[0xf5]) -
              (*(float *)(*(int *)(*(int *)(param_1 + 0x88) + 0x18) + 8) + fVar7);
      if (fVar7 <= fVar8) {
        fVar7 = -fVar7;
      }
    }
    else {
      fVar7 = ALBW_AS_F32(puVar5[0xf5]) -
              (*(float *)(*(int *)(*(int *)(param_1 + 0x88) + 0x18) + 8) + fVar7);
      if (fVar7 <= fVar8) {
        fVar7 = -fVar7;
      }
    }
  }
  else {
    iVar3 = func_00556A04(iVar6);
    if (iVar3 != 0) goto LAB_00235d14;
    fVar7 = *(float *)(*(int *)(iVar6 + 0x1c) + 4) -
            (*(float *)(*(int *)(*(int *)(param_1 + 0x88) + 0x18) + 8) + fVar7);
    if (fVar7 <= fVar8) {
      fVar7 = -fVar7;
    }
  }
  if (iVar1 <= (int)ALBW_AS_U32(fVar7)) {
    return;
  }
LAB_00235d14:
  *param_1 = 1;
  return;
}

