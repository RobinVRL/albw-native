// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int func_00556A04();
extern int func_00588BE4(int param_1);
extern float DAT_004ba598;
extern float DAT_004ba59c;
extern int DAT_004ba5a0;
extern int *DAT_004ba5a4;
extern int *DAT_004ba5a8;
extern uint *DAT_004ba5ac;
extern undefined4 *DAT_004ba5b0;
extern undefined4 DAT_004ba5b4;
extern int *DAT_004ba5b8;
extern uint *DAT_004ba5bc;
extern undefined4 *DAT_004ba5c0;
extern undefined4 DAT_004ba5c4;

// USA 004BA3DC <- EU 004BA3B4 (Ghidra, non-matching)
// GLOBAL DAT_004ba598 float
// GLOBAL DAT_004ba59c float
// GLOBAL DAT_004ba5a0 int
// GLOBAL DAT_004ba5a4 int *
// GLOBAL DAT_004ba5a8 int *
// GLOBAL DAT_004ba5ac uint *
// GLOBAL DAT_004ba5b0 undefined4 *
// GLOBAL DAT_004ba5b4 undefined4
// GLOBAL DAT_004ba5b8 int *
// GLOBAL DAT_004ba5bc uint *
// GLOBAL DAT_004ba5c0 undefined4 *
// GLOBAL DAT_004ba5c4 undefined4

void func_004BA3DC(undefined1 *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = DAT_004ba5a0;
  if (param_3 == 0) {
    return;
  }
  iVar6 = *DAT_004ba5a4;
  fVar8 = DAT_004ba59c;
  fVar7 = DAT_004ba598;
  if ((iVar6 == 0) || (uVar2 = func_005568E8(iVar6), *param_2 != uVar2)) {
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_004ba5a8 + 0x3dbbc,*param_2);
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    if (((*DAT_004ba5ac & 1) == 0) && (iVar6 = func_00100174((int *)DAT_004ba5ac), iVar6 != 0)) {
      *DAT_004ba5b0 = DAT_004ba5b4;
    }
    iVar6 = (**(code **)*puVar4)(puVar4,DAT_004ba5b0);
    puVar5 = (undefined4 *)0x0;
    if (iVar6 != 0) {
      puVar5 = puVar4;
    }
    if (puVar5 == (undefined4 *)0x0) {
      iVar6 = func_00588BE4((int)puVar4);
      if (iVar6 != *DAT_004ba5b8) {
        return;
      }
      if (((*DAT_004ba5bc & 1) == 0) && (iVar6 = func_00100174((int *)DAT_004ba5bc), iVar6 != 0)) {
        *DAT_004ba5c0 = DAT_004ba5c4;
      }
      iVar6 = (**(code **)*puVar4)(puVar4,DAT_004ba5c0);
      if (iVar6 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      fVar7 = ALBW_AS_F32(puVar4[0xf5]) - (*(float *)(*(int *)(param_1 + 0x90) + 8) + fVar7);
      if (fVar7 <= fVar8) {
        fVar7 = -fVar7;
      }
    }
    else {
      fVar7 = ALBW_AS_F32(puVar5[0xf5]) - (*(float *)(*(int *)(param_1 + 0x90) + 8) + fVar7);
      if (fVar7 <= fVar8) {
        fVar7 = -fVar7;
      }
    }
  }
  else {
    iVar3 = func_00556A04(iVar6);
    if (iVar3 != 0) goto LAB_004ba58c;
    fVar7 = *(float *)(*(int *)(iVar6 + 0x1c) + 4) -
            (*(float *)(*(int *)(param_1 + 0x90) + 8) + fVar7);
    if (fVar7 <= fVar8) {
      fVar7 = -fVar7;
    }
  }
  if (iVar1 <= (int)ALBW_AS_U32(fVar7)) {
    return;
  }
LAB_004ba58c:
  *param_1 = 1;
  return;
}

