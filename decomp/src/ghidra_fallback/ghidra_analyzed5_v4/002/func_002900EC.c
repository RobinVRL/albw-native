#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_002901e0;
extern float DAT_002901e4;
extern int *DAT_002901e8;
extern uint *DAT_002901ec;
extern undefined4 *DAT_002901f0;
extern undefined4 DAT_002901f4;

// USA 002900EC <- EU 00290114 (Ghidra, non-matching)
// GLOBAL DAT_002901e0 float
// GLOBAL DAT_002901e4 float
// GLOBAL DAT_002901e8 int *
// GLOBAL DAT_002901ec uint *
// GLOBAL DAT_002901f0 undefined4 *
// GLOBAL DAT_002901f4 undefined4

float func_002900EC(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_002901e0;
  if (param_2 == 0) {
    fVar5 = DAT_002901e4;
  }
  fVar4 = *(float *)(*(int *)(param_1 + 0x14) + 0x24);
  fVar5 = fVar5 * fVar4;
  uVar3 = **(uint **)(*(int *)(param_1 + 0x48) + 0x44);
  if (uVar3 != 0) {
    piVar1 = (int *)func_0052FBA0(*DAT_002901e8 + 0x3dbbc,uVar3);
    if (((*DAT_002901ec & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002901ec), iVar2 != 0)) {
      *DAT_002901f0 = DAT_002901f4;
    }
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)*piVar1)(piVar1,DAT_002901f0), iVar2 == 0)) {
      piVar1 = (int *)0x0;
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x60))(piVar1);
      fVar5 = fVar4 * fVar5;
    }
  }
  return fVar5;
}

