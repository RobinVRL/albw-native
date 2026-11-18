#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00227870(int param_1);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004cd188;
extern int *DAT_004cd18c;
extern undefined *DAT_004cd190;
extern undefined4 *DAT_004cd194;
extern int DAT_004cd198;
extern int *DAT_004cd19c;
extern uint *DAT_004cd1a0;
extern undefined4 *DAT_004cd1a4;
extern undefined4 DAT_004cd1a8;
extern int DAT_004cd1ac;

// USA 004CD094 <- EU 004CD06C (Ghidra, non-matching)
// GLOBAL DAT_004cd188 int *
// GLOBAL DAT_004cd18c int *
// GLOBAL DAT_004cd190 undefined *
// GLOBAL DAT_004cd194 undefined4 *
// GLOBAL DAT_004cd198 int
// GLOBAL DAT_004cd19c int *
// GLOBAL DAT_004cd1a0 uint *
// GLOBAL DAT_004cd1a4 undefined4 *
// GLOBAL DAT_004cd1a8 undefined4
// GLOBAL DAT_004cd1ac int

void func_004CD094(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  
  piVar1 = DAT_004cd188;
  *DAT_004cd18c = param_2;
  func_0052FD7C(*piVar1 + 0x3dbbc,DAT_004cd190,0x28);
  iVar2 = *piVar1;
  puVar3 = (undefined4 *)func_005841A8(iVar2,*DAT_004cd194,*(int **)(DAT_004cd198 + iVar2));
  piVar1 = DAT_004cd19c;
  puVar3 = (undefined4 *)*puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    if (((*DAT_004cd1a0 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004cd1a0), iVar2 != 0)) {
      *DAT_004cd1a4 = DAT_004cd1a8;
    }
    iVar2 = (**(code **)*puVar3)(puVar3,DAT_004cd1a4);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      if (param_2 == 0) {
        fVar5 = ALBW_AS_F32(puVar3[0xf4]) - **(float **)(*piVar1 + 0x1c);
        fVar4 = ALBW_AS_F32(puVar3[0xf6]) - (*(float **)(*piVar1 + 0x1c))[2];
        fVar4 = fVar5 * fVar5 + fVar4 * fVar4;
      }
      else {
        fVar5 = ALBW_AS_F32(puVar3[0xf4]) - *(float *)(param_2 + 0x3d0);
        fVar4 = ALBW_AS_F32(puVar3[0xf6]) - *(float *)(param_2 + 0x3d8);
        fVar4 = fVar5 * fVar5 + fVar4 * fVar4;
      }
      if ((int)ALBW_AS_U32(SQRT(fVar4)) <= DAT_004cd1ac) {
        func_00227870((int)puVar3);
      }
    }
  }
  return;
}

