#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00111A64(uint *param_1);
extern int func_0023C4E8(int param_1,int param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0023cb78;
extern undefined4 *DAT_0023cb7c;
extern int DAT_0023cb80;
extern uint *DAT_0023cb84;
extern undefined4 DAT_0023cb88;
extern undefined4 *DAT_0023cb8c;
extern int *DAT_0023cb90;

// USA 0023C994 <- EU 0023C994 (Ghidra, non-matching)
// GLOBAL DAT_0023cb78 int *
// GLOBAL DAT_0023cb7c undefined4 *
// GLOBAL DAT_0023cb80 int
// GLOBAL DAT_0023cb84 uint *
// GLOBAL DAT_0023cb88 undefined4
// GLOBAL DAT_0023cb8c undefined4 *
// GLOBAL DAT_0023cb90 int *

void func_0023C994(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  puVar2 = DAT_0023cb7c;
  piVar1 = DAT_0023cb78;
  uVar11 = 0;
  puVar5 = (undefined4 *)
           func_005841A8(*DAT_0023cb78,*DAT_0023cb7c,*(int **)(DAT_0023cb80 + *DAT_0023cb78));
  uVar4 = DAT_0023cb88;
  puVar3 = DAT_0023cb84;
  puVar10 = *(undefined4 **)(*piVar1 + 0x3dbc8);
  if (puVar5 != puVar10) {
    do {
      puVar9 = (undefined4 *)*puVar5;
      if (((*puVar3 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0023cb84), iVar6 != 0)) {
        *DAT_0023cb8c = uVar4;
      }
      if ((puVar9 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar9)(puVar9,DAT_0023cb8c), iVar6 == 0)) {
        puVar9 = (undefined4 *)0x0;
      }
      if ((puVar9 != (undefined4 *)0x0) && (*(char *)((int)puVar9 + 0x53a) == '\0')) {
        uVar11 = uVar11 + 1;
      }
      puVar5 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar5 + 1);
    } while (puVar5 != puVar10);
    if (uVar11 != 0) {
      uVar7 = func_00111A64((uint *)(*DAT_0023cb90 + 0x660));
      iVar6 = 0;
      puVar5 = (undefined4 *)func_005841A8(*piVar1,*puVar2,*(int **)(DAT_0023cb80 + *piVar1));
      puVar10 = *(undefined4 **)(*piVar1 + 0x3dbc8);
      for (; puVar5 != puVar10; puVar5 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar5 + 1)) {
        puVar9 = (undefined4 *)*puVar5;
        if (((*puVar3 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0023cb84), iVar8 != 0)) {
          *DAT_0023cb8c = uVar4;
        }
        if ((puVar9 == (undefined4 *)0x0) ||
           (iVar8 = (**(code **)*puVar9)(puVar9,DAT_0023cb8c), iVar8 == 0)) {
          puVar9 = (undefined4 *)0x0;
        }
        if (puVar9 != (undefined4 *)0x0) {
          if (*(char *)((int)puVar9 + 0x53a) == '\0') {
            func_0023C4E8((int)puVar9,
                          (uint)(iVar6 == (int)((ulonglong)uVar11 * (ulonglong)uVar7 >> 0x20)));
            iVar6 = iVar6 + 1;
          }
          else {
            func_0023C4E8((int)puVar9,0);
          }
        }
      }
    }
  }
  return;
}

