#include "ghidra_types.h"

extern int func_00103294(void);
extern int func_001033DC(void);
extern int func_001036D8(void);
extern int func_001036F4(void);
extern int func_00103A3C(void);
extern int func_00103B70(void);
extern int func_00104940(undefined4 param_1);
extern int DAT_00101d40;
extern undefined4 DAT_00101d44;
extern undefined4 *DAT_00101d48;

// USA 00101BE8 <- EU 00101BE8 (Ghidra, non-matching)
// GLOBAL DAT_00101d40 int
// GLOBAL DAT_00101d44 undefined4
// GLOBAL DAT_00101d48 undefined4 *

void func_00101BE8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = DAT_00101d40;
  if (*(char *)(DAT_00101d40 + 0x10) != '\0') {
    func_00103B70();
    func_001036F4();
    func_001033DC();
    func_00103A3C();
    func_00103294();
    uVar4 = func_001036D8();
    *(undefined1 *)(iVar2 + 0x10) = 0;
    func_00104940(uVar4);
    puVar3 = DAT_00101d48;
    uVar4 = DAT_00101d44;
    iVar6 = 0;
    do {
      puVar5 = *(undefined4 **)(iVar2 + iVar6 * 4 + 0x1c);
joined_r0x00101c38:
      puVar1 = puVar5;
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)puVar1[0x10];
        if (puVar1[1] != 0) goto code_r0x00101c4c;
        goto LAB_00101c68;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x20);
    iVar6 = 0;
    do {
      puVar5 = *(undefined4 **)(iVar2 + iVar6 * 4 + 0xa4);
joined_r0x00101cac:
      puVar1 = puVar5;
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)puVar1[6];
        if (puVar1[1] != 0) goto code_r0x00101cc0;
        goto LAB_00101cdc;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x20);
    if ((code *)puVar3[1] != (code *)0x0) {
      (*(code *)puVar3[1])(0x10000,0x100,0,puVar3[4]);
    }
    puVar3[4] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  return;
code_r0x00101c4c:
  if ((code *)puVar3[1] != (code *)0x0) {
    (*(code *)puVar3[1])(0x10000,uVar4,*puVar1);
LAB_00101c68:
    if ((code *)puVar3[1] != (code *)0x0) {
      (*(code *)puVar3[1])(0x10000,0x100,0,puVar1);
    }
  }
  goto joined_r0x00101c38;
code_r0x00101cc0:
  if ((code *)puVar3[1] != (code *)0x0) {
    (*(code *)puVar3[1])(puVar1[5],0x104,*puVar1);
LAB_00101cdc:
    if ((code *)puVar3[1] != (code *)0x0) {
      (*(code *)puVar3[1])(0x10000,0x100,0,puVar1);
    }
  }
  goto joined_r0x00101cac;
}

