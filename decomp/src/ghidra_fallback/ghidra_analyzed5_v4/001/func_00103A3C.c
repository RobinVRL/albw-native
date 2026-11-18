#include "ghidra_types.h"

extern int func_001061F0(undefined4 *param_1);
extern int *DAT_00103b64;
extern int *DAT_00103b68;
extern undefined4 *DAT_00103b6c;

// USA 00103A3C <- EU 00103A3C (Ghidra, non-matching)
// GLOBAL DAT_00103b64 int *
// GLOBAL DAT_00103b68 int *
// GLOBAL DAT_00103b6c undefined4 *

void func_00103A3C(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  code *pcVar7;
  
  puVar3 = DAT_00103b6c;
  piVar2 = DAT_00103b64;
  if (*DAT_00103b64 != 0) {
    iVar4 = 0;
    iVar6 = *DAT_00103b68;
    do {
      puVar5 = *(undefined4 **)(*piVar2 + iVar4 * 4);
joined_r0x00103a6c:
      puVar1 = puVar5;
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)puVar1[3];
        if (puVar1[1] == 0) {
          if (puVar1[2] != 0) goto code_r0x00103a98;
          goto LAB_00103ac0;
        }
        if (puVar1[1] == 1) {
          if (puVar1[2] != 0) {
            if ((code *)*puVar3 == (code *)0x0) goto joined_r0x00103a6c;
            (*(code *)*puVar3)(0x10000,0x100,0);
          }
          pcVar7 = (code *)*puVar3;
          goto joined_r0x00103ac8;
        }
        goto joined_r0x00103a6c;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x200);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(0x10000,0x100,0,*(undefined4 *)(*piVar2 + 0x800));
    }
    *(undefined4 *)(iVar6 + 0x5dc) = 0;
    *(undefined4 *)(iVar6 + 0x5d8) = 0;
    *piVar2 = 0;
  }
  return;
code_r0x00103a98:
  func_001061F0(puVar1);
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(0x10000,0x100,0,puVar1[2]);
LAB_00103ac0:
    pcVar7 = (code *)*puVar3;
joined_r0x00103ac8:
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(0x10000,0x100,0,puVar1);
    }
  }
  goto joined_r0x00103a6c;
}

