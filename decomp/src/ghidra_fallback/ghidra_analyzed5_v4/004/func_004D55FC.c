// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int func_00556A04();
extern int func_00588BE4(int param_1);
extern float DAT_004d57b8;
extern float DAT_004d57bc;
extern int DAT_004d57c0;
extern int *DAT_004d57c4;
extern int *DAT_004d57c8;
extern uint *DAT_004d57cc;
extern undefined4 *DAT_004d57d0;
extern undefined4 DAT_004d57d4;
extern int *DAT_004d57d8;
extern uint *DAT_004d57dc;
extern undefined4 *DAT_004d57e0;
extern undefined4 DAT_004d57e4;

// USA 004D55FC <- EU 004D55D4 (Ghidra, non-matching)
// GLOBAL DAT_004d57b8 float
// GLOBAL DAT_004d57bc float
// GLOBAL DAT_004d57c0 int
// GLOBAL DAT_004d57c4 int *
// GLOBAL DAT_004d57c8 int *
// GLOBAL DAT_004d57cc uint *
// GLOBAL DAT_004d57d0 undefined4 *
// GLOBAL DAT_004d57d4 undefined4
// GLOBAL DAT_004d57d8 int *
// GLOBAL DAT_004d57dc uint *
// GLOBAL DAT_004d57e0 undefined4 *
// GLOBAL DAT_004d57e4 undefined4

void func_004D55FC(undefined1 *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = DAT_004d57c0;
  if (param_3 == 0) {
    return;
  }
  iVar6 = *DAT_004d57c4;
  fVar8 = DAT_004d57bc;
  fVar7 = DAT_004d57b8;
  if ((iVar6 == 0) || (uVar2 = func_005568E8(iVar6), *param_2 != uVar2)) {
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_004d57c8 + 0x3dbbc,*param_2);
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    if (((*DAT_004d57cc & 1) == 0) && (iVar6 = func_00100174((int *)DAT_004d57cc), iVar6 != 0)) {
      *DAT_004d57d0 = DAT_004d57d4;
    }
    iVar6 = (**(code **)*puVar4)(puVar4,DAT_004d57d0);
    puVar5 = (undefined4 *)0x0;
    if (iVar6 != 0) {
      puVar5 = puVar4;
    }
    if (puVar5 == (undefined4 *)0x0) {
      iVar6 = func_00588BE4((int)puVar4);
      if (iVar6 != *DAT_004d57d8) {
        return;
      }
      if (((*DAT_004d57dc & 1) == 0) && (iVar6 = func_00100174((int *)DAT_004d57dc), iVar6 != 0)) {
        *DAT_004d57e0 = DAT_004d57e4;
      }
      iVar6 = (**(code **)*puVar4)(puVar4,DAT_004d57e0);
      if (iVar6 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      fVar7 = ALBW_AS_F32(puVar4[0xf5]) - (*(float *)(*(int *)(param_1 + 0x94) + 8) + fVar7);
      if (fVar7 <= fVar8) {
        fVar7 = -fVar7;
      }
    }
    else {
      fVar7 = ALBW_AS_F32(puVar5[0xf5]) - (*(float *)(*(int *)(param_1 + 0x94) + 8) + fVar7);
      if (fVar7 <= fVar8) {
        fVar7 = -fVar7;
      }
    }
  }
  else {
    iVar3 = func_00556A04(iVar6);
    if (iVar3 != 0) goto LAB_004d57ac;
    fVar7 = *(float *)(*(int *)(iVar6 + 0x1c) + 4) -
            (*(float *)(*(int *)(param_1 + 0x94) + 8) + fVar7);
    if (fVar7 <= fVar8) {
      fVar7 = -fVar7;
    }
  }
  if (iVar1 <= (int)ALBW_AS_U32(fVar7)) {
    return;
  }
LAB_004d57ac:
  *param_1 = 2;
  return;
}

