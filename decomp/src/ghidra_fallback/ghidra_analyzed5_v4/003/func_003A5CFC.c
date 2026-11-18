#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_003a5e64;
extern undefined4 *DAT_003a5e68;
extern uint DAT_003a5e6c;
extern int DAT_003a5e70;
extern uint *DAT_003a5e74;
extern undefined4 DAT_003a5e78;
extern undefined4 *DAT_003a5e7c;

// USA 003A5CFC <- EU 003A5CD8 (Ghidra, non-matching)
// GLOBAL DAT_003a5e64 int *
// GLOBAL DAT_003a5e68 undefined4 *
// GLOBAL DAT_003a5e6c uint
// GLOBAL DAT_003a5e70 int
// GLOBAL DAT_003a5e74 uint *
// GLOBAL DAT_003a5e78 undefined4
// GLOBAL DAT_003a5e7c undefined4 *

undefined4 * func_003A5CFC(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  puVar2 = DAT_003a5e68;
  piVar1 = DAT_003a5e64;
  puVar10 = (undefined4 *)0x0;
  uVar11 = (ulonglong)DAT_003a5e6c;
  puVar5 = (undefined4 *)
           func_005841A8(*DAT_003a5e64,*DAT_003a5e68,*(int **)(DAT_003a5e70 + *DAT_003a5e64));
  uVar4 = DAT_003a5e78;
  puVar3 = DAT_003a5e74;
  puVar9 = *(undefined4 **)(*piVar1 + 0x3dbc8);
  for (; puVar5 != puVar9; puVar5 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar5 + 1)) {
    puVar8 = (undefined4 *)*puVar5;
    if (((*puVar3 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_003a5e74), iVar6 != 0)) {
      *DAT_003a5e7c = uVar4;
    }
    if ((puVar8 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar8)(puVar8,DAT_003a5e7c), iVar6 == 0)) {
      puVar8 = (undefined4 *)0x0;
    }
    if (((puVar8 != (undefined4 *)0x0) && (*(short *)((int)puVar8 + 0x2e) == param_2)) &&
       ((puVar10 == (undefined4 *)0x0 ||
        (pfVar7 = *(float **)(param_1 + 0x30),
        (*pfVar7 - ALBW_AS_F32(puVar8[0xf4])) * (*pfVar7 - ALBW_AS_F32(puVar8[0xf4])) +
        (pfVar7[1] - ALBW_AS_F32(puVar8[0xf5])) * (pfVar7[1] - ALBW_AS_F32(puVar8[0xf5])) +
        (pfVar7[2] - ALBW_AS_F32(puVar8[0xf6])) * (pfVar7[2] - ALBW_AS_F32(puVar8[0xf6])) < ALBW_AS_F32(uVar11))))) {
      pfVar7 = *(float **)(param_1 + 0x30);
      uVar11 = (ulonglong)
               (uint)ALBW_AS_U32(((*pfVar7 - ALBW_AS_F32(puVar8[0xf4])) * (*pfVar7 - ALBW_AS_F32(puVar8[0xf4])) +
                      (pfVar7[1] - ALBW_AS_F32(puVar8[0xf5])) * (pfVar7[1] - ALBW_AS_F32(puVar8[0xf5])) +
                     (pfVar7[2] - ALBW_AS_F32(puVar8[0xf6])) * (pfVar7[2] - ALBW_AS_F32(puVar8[0xf6]))));
      puVar10 = puVar8;
    }
  }
  return puVar10;
}

