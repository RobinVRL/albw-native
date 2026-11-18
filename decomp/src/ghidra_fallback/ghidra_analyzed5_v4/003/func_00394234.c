#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004CF478(int param_1,int param_2);
extern int *DAT_003942fc;
extern int DAT_00394300;
extern uint *DAT_00394304;
extern undefined4 DAT_00394308;
extern undefined4 DAT_0039430c;
extern undefined4 DAT_00394310;
extern undefined4 *DAT_00394314;

// USA 00394234 <- EU 00394210 (Ghidra, non-matching)
// GLOBAL DAT_003942fc int *
// GLOBAL DAT_00394300 int
// GLOBAL DAT_00394304 uint *
// GLOBAL DAT_00394308 undefined4
// GLOBAL DAT_0039430c undefined4
// GLOBAL DAT_00394310 undefined4
// GLOBAL DAT_00394314 undefined4 *

void func_00394234(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar5 = DAT_00394310;
  uVar4 = DAT_0039430c;
  uVar3 = DAT_00394308;
  puVar2 = DAT_00394304;
  piVar1 = DAT_003942fc;
  puVar7 = *(undefined4 **)(DAT_00394300 + *DAT_003942fc);
  if (*(undefined4 **)(*DAT_003942fc + 0x3dbc8) != puVar7) {
    do {
      puVar8 = (undefined4 *)*puVar7;
      if ((puVar8 != (undefined4 *)0x0) && (*(char *)((int)puVar8 + 0x2d7) == '\0')) {
        if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00394304), iVar6 != 0)) {
          *DAT_00394314 = uVar5;
        }
        iVar6 = (**(code **)*puVar8)(puVar8,DAT_00394314);
        if (iVar6 == 0) {
          puVar8 = (undefined4 *)0x0;
        }
        if (puVar8 != (undefined4 *)0x0) {
          puVar8[0x232] = uVar3;
          puVar8[0x231] = uVar4;
          *(undefined1 *)((int)puVar8 + 0x919) = 1;
          if (puVar8[0x1e9] != 0) {
            func_004CF478(puVar8[0x1e9],0);
          }
        }
      }
      puVar7 = puVar7 + 1;
    } while (*(undefined4 **)(*piVar1 + 0x3dbc8) != puVar7);
  }
  return;
}

