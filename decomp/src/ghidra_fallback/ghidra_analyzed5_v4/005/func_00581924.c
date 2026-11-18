#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00103CBC(char *param_1);
extern int func_0010FBAC(uint *param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int *DAT_00581990;
extern uint *DAT_00581994;
extern undefined4 *DAT_00581998;
extern undefined4 DAT_0058199c;

// USA 00581924 <- EU 005818FC (Ghidra, non-matching)
// GLOBAL DAT_00581990 int *
// GLOBAL DAT_00581994 uint *
// GLOBAL DAT_00581998 undefined4 *
// GLOBAL DAT_0058199c undefined4

/* WARNING: Removing unreachable block (ram,0x0056b52c) */

undefined4 func_00581924(undefined4 param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar6 = *(undefined4 **)(*DAT_00581990 + 0x1c);
  if (((*DAT_00581994 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00581994), iVar3 != 0)) {
    *DAT_00581998 = DAT_0058199c;
  }
  if ((puVar6 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar6)(puVar6,DAT_00581998), iVar3 == 0)) {
    puVar6 = (undefined4 *)0x0;
  }
  puVar6 = func_0057F260(puVar6[0x50]);
  if (puVar6 != (undefined4 *)0x0) {
    iVar3 = *(int *)(puVar6[1] + 0x38);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    puVar7 = (uint *)(*(int *)(iVar3 + 0xc) + iVar3);
    puVar8 = (uint *)0x0;
    if (*puVar7 < puVar7[1]) {
      puVar5 = puVar7 + *puVar7 * 5 + 2;
      iVar2 = func_00103CBC((char *)param_2);
      uVar1 = (ushort)*puVar5;
      while ((uVar1 & 1) == 0) {
        uVar4 = (uint)(*(ushort *)((int)puVar5 + 2) >> 3);
        if (((int)uVar4 < iVar2) &&
           (((int)*(char *)((int)param_2 + uVar4) &
            1 << (7 - (*(ushort *)((int)puVar5 + 2) & 7) & 0xff)) != 0)) {
          uVar4 = puVar5[2];
        }
        else {
          uVar4 = puVar5[1];
        }
        puVar5 = puVar7 + uVar4 * 5 + 2;
        uVar1 = (ushort)*puVar5;
      }
      if (puVar5 + 3 != (uint *)0x0) {
        uVar4 = puVar5[3];
        if ((uVar4 != 0xffffffff) && (iVar3 = *(int *)(iVar3 + 4) + iVar3, iVar3 != 0)) {
          puVar8 = (uint *)(iVar3 + *(int *)(iVar3 + uVar4 * 0xc + 8));
        }
        uVar4 = func_0010FBAC(param_2,puVar8);
        if (uVar4 == 0) {
          return puVar5[4];
        }
      }
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

