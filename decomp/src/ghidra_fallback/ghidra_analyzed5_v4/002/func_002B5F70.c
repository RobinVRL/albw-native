#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_002b60fc;
extern undefined4 *DAT_002b6100;
extern int DAT_002b6104;
extern uint *DAT_002b6108;
extern undefined4 DAT_002b610c;
extern undefined4 *DAT_002b6110;
extern int DAT_002b6114;

// USA 002B5F70 <- EU 002B5F4C (Ghidra, non-matching)
// GLOBAL DAT_002b60fc int *
// GLOBAL DAT_002b6100 undefined4 *
// GLOBAL DAT_002b6104 int
// GLOBAL DAT_002b6108 uint *
// GLOBAL DAT_002b610c undefined4
// GLOBAL DAT_002b6110 undefined4 *
// GLOBAL DAT_002b6114 int

undefined4 func_002B5F70(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  
  puVar2 = DAT_002b6100;
  piVar1 = DAT_002b60fc;
  puVar5 = (undefined4 *)
           func_005841A8(*DAT_002b60fc,*DAT_002b6100,*(int **)(DAT_002b6104 + *DAT_002b60fc));
  uVar4 = DAT_002b610c;
  puVar3 = DAT_002b6108;
  puVar8 = (undefined4 *)*puVar5;
  if (((*DAT_002b6108 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002b6108), iVar6 != 0)) {
    *DAT_002b6110 = uVar4;
  }
  if ((puVar8 == (undefined4 *)0x0) ||
     (iVar6 = (**(code **)*puVar8)(puVar8,DAT_002b6110), iVar6 == 0)) {
    puVar8 = (undefined4 *)0x0;
  }
  if (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar5) {
    do {
      puVar7 = (undefined4 *)*puVar5;
      if (((*puVar3 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002b6108), iVar6 != 0)) {
        *DAT_002b6110 = uVar4;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar7)(puVar7,DAT_002b6110), iVar6 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (((puVar7 != (undefined4 *)0x0) &&
          (*(char *)(puVar7 + 0x140) == '\0' || *(char *)(puVar7 + 0x140) == '\x04')) &&
         (fVar9 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(puVar7[0xf4]),
         fVar10 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(puVar7[0xf6]),
         (int)ALBW_AS_U32((fVar9 * fVar9 + fVar10 * fVar10)) < DAT_002b6114)) goto LAB_002b60d4;
      puVar5 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar5 + 1);
    } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar5);
  }
  puVar7 = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
LAB_002b60d4:
    if (*(char *)((int)puVar7 + 0x4f1) == '\0') {
      *(undefined4 *)(param_1 + 0xb10) = puVar7[0xb3];
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0xb10) = 0;
  return 0;
}

