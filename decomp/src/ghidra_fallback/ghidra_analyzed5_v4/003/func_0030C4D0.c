#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00547B20(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern undefined4 *DAT_0030c6b4;
extern undefined4 *DAT_0030c6b8;
extern undefined4 *DAT_0030c6bc;
extern undefined4 *DAT_0030c6c0;
extern undefined4 *DAT_0030c6c4;
extern int DAT_0030c6c8;
extern undefined4 DAT_0030c6cc;
extern int *DAT_0030c6d0;
extern int DAT_0030c6d4;
extern uint DAT_0030c6d8;
extern uint *DAT_0030c6dc;
extern undefined4 DAT_0030c6e0;
extern undefined4 *DAT_0030c6e4;
extern int *DAT_0030c6e8;

// USA 0030C4D0 <- EU 0030C4AC (Ghidra, non-matching)
// GLOBAL DAT_0030c6b4 undefined4 *
// GLOBAL DAT_0030c6b8 undefined4 *
// GLOBAL DAT_0030c6bc undefined4 *
// GLOBAL DAT_0030c6c0 undefined4 *
// GLOBAL DAT_0030c6c4 undefined4 *
// GLOBAL DAT_0030c6c8 int
// GLOBAL DAT_0030c6cc undefined4
// GLOBAL DAT_0030c6d0 int *
// GLOBAL DAT_0030c6d4 int
// GLOBAL DAT_0030c6d8 uint
// GLOBAL DAT_0030c6dc uint *
// GLOBAL DAT_0030c6e0 undefined4
// GLOBAL DAT_0030c6e4 undefined4 *
// GLOBAL DAT_0030c6e8 int *

undefined4 * func_0030C4D0(int *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  
  piVar1 = DAT_0030c6d0;
  if (param_2 != 0) {
    if (param_2 == 100) {
      uVar10 = *DAT_0030c6b4;
    }
    else {
      puVar9 = DAT_0030c6b8;
      if ((((param_2 == 0x65) || (puVar9 = DAT_0030c6bc, param_2 == 200)) ||
          (puVar9 = DAT_0030c6c0, param_2 == 0xc9)) || (puVar9 = DAT_0030c6c4, param_2 == 0xca)) {
        uVar10 = *puVar9;
      }
      else {
        uVar10 = DAT_0030c6cc;
        if (param_2 - 1U < 0x4f) {
          uVar10 = *(undefined4 *)(DAT_0030c6c8 + param_2 * 4);
        }
      }
    }
    puVar6 = (undefined4 *)
             func_005841A8(*DAT_0030c6d0,uVar10,*(int **)(DAT_0030c6d4 + *DAT_0030c6d0));
    uVar3 = DAT_0030c6e0;
    puVar2 = DAT_0030c6dc;
    puVar9 = (undefined4 *)*puVar6;
    uVar13 = (ulonglong)DAT_0030c6d8;
    if (((*DAT_0030c6dc & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0030c6dc), iVar7 != 0)) {
      *DAT_0030c6e4 = uVar3;
    }
    if ((puVar9 == (undefined4 *)0x0) ||
       (iVar7 = (**(code **)*puVar9)(puVar9,DAT_0030c6e4), iVar7 == 0)) {
      puVar9 = (undefined4 *)0x0;
    }
    piVar4 = DAT_0030c6e8;
    if (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar6) {
      do {
        puVar8 = (undefined4 *)*puVar6;
        if (((*puVar2 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0030c6dc), iVar7 != 0)) {
          *DAT_0030c6e4 = uVar3;
        }
        if ((puVar8 == (undefined4 *)0x0) ||
           (iVar7 = (**(code **)*puVar8)(puVar8,DAT_0030c6e4), iVar7 == 0)) {
          puVar8 = (undefined4 *)0x0;
        }
        if (((puVar8 != (undefined4 *)0x0) && (bVar5 = func_00547B20((int)(puVar8 + 1)), bVar5)) &&
           (fVar11 = **(float **)(*piVar4 + 0x1c) - ALBW_AS_F32(puVar8[0xf4]),
           fVar12 = (*(float **)(*piVar4 + 0x1c))[2] - ALBW_AS_F32(puVar8[0xf6]),
           fVar11 = fVar11 * fVar11 + fVar12 * fVar12, fVar11 < ALBW_AS_F32(uVar13))) {
          uVar13 = (ulonglong)(uint)ALBW_AS_U32(fVar11);
          puVar9 = puVar8;
        }
        puVar6 = (undefined4 *)func_005841A8(*piVar1,uVar10,puVar6 + 1);
      } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar6);
    }
    return puVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x0030c524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x44))(param_1);
  return puVar9;
}

