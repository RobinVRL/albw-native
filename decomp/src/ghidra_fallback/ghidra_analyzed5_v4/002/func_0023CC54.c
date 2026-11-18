#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0023C4E8(int param_1,int param_2);
extern int func_0023C710(int param_1,int param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0023cd3c;
extern undefined4 *DAT_0023cd40;
extern int DAT_0023cd44;
extern int *DAT_0023cd48;
extern undefined4 DAT_0023cd4c;
extern undefined4 *DAT_0023cd50;

// USA 0023CC54 <- EU 0023CC54 (Ghidra, non-matching)
// GLOBAL DAT_0023cd3c int *
// GLOBAL DAT_0023cd40 undefined4 *
// GLOBAL DAT_0023cd44 int
// GLOBAL DAT_0023cd48 int *
// GLOBAL DAT_0023cd4c undefined4
// GLOBAL DAT_0023cd50 undefined4 *

void func_0023CC54(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar2 = DAT_0023cd40;
  piVar1 = DAT_0023cd3c;
  puVar5 = (undefined4 *)
           func_005841A8(*DAT_0023cd3c,*DAT_0023cd40,*(int **)(DAT_0023cd44 + *DAT_0023cd3c));
  uVar4 = DAT_0023cd4c;
  piVar3 = DAT_0023cd48;
  puVar9 = *(undefined4 **)(*piVar1 + 0x3dbc8);
  for (; puVar5 != puVar9; puVar5 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar5 + 1)) {
    puVar8 = (undefined4 *)*puVar5;
    piVar7 = (int *)*piVar3;
    if (((uint)*piVar3 & 1) == 0) {
      iVar6 = func_00100174(DAT_0023cd48);
      piVar7 = (int *)0x0;
      if (iVar6 != 0) {
        *DAT_0023cd50 = uVar4;
        piVar7 = DAT_0023cd48;
      }
    }
    if ((puVar8 == (undefined4 *)0x0) ||
       (piVar7 = (int *)(**(code **)*puVar8)(puVar8,DAT_0023cd50), piVar7 == (int *)0x0)) {
      puVar8 = (undefined4 *)0x0;
    }
    if (puVar8 != (undefined4 *)0x0) {
      piVar7 = (int *)(uint)*(byte *)(puVar8 + 0x13f);
    }
    if (puVar8 != (undefined4 *)0x0 && piVar7 != (int *)0x0) {
      func_0023C4E8((int)puVar8,0);
      func_0023C710((int)puVar8,0);
    }
  }
  return;
}

