#include "ghidra_types.h"

extern int func_0040411C(undefined4 param_1);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_0041E6F0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4);
extern int func_0041E710(int param_1);
extern int func_0041E728(int param_1);
extern undefined4 *DAT_00404114;

// USA 00403FE4 <- EU 00403FC4 (Ghidra, non-matching)
// GLOBAL DAT_00404114 undefined4 *

undefined4 func_00403FE4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar6 = param_2 + 1;
  if (*(ushort *)(param_1 + 0x33) < uVar6) {
    (**(code **)(*param_1 + 0x58))(param_1);
    iVar1 = func_0041E728(param_2);
    if ((*(byte *)(param_1 + 0x3d) & 0x80) == 0) {
      uVar8 = func_0041E710(param_2);
    }
    else {
      uVar8 = 0;
    }
    iVar2 = func_00404138(uVar6 * 2,4);
    iVar7 = 0;
    if ((iVar2 != 0) && (uVar4 = 0, iVar7 = iVar2, uVar6 != 0)) {
      do {
        puVar5 = (undefined2 *)(iVar2 + uVar4 * 2);
        uVar4 = uVar4 + 1;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar4 < uVar6);
    }
    puVar3 = (undefined4 *)func_00404138(iVar1,4);
    if ((*(byte *)(param_1 + 0x3d) & 0x80) == 0) {
      iVar1 = func_00404138(uVar8,0x10);
    }
    else {
      iVar1 = 0;
    }
    param_1[0x40] = iVar1;
    if (iVar7 != 0) {
      if ((puVar3 != (undefined4 *)0x0) &&
         (((*(byte *)(param_1 + 0x3d) & 0x80) != 0 || (iVar1 != 0)))) {
        param_1[0x29] = iVar7;
        *(short *)(param_1 + 0x33) = (short)uVar6;
        iVar1 = func_0041E6F0(puVar3,iVar1,uVar8,param_2);
        param_1[0x3f] = iVar1;
        return 0;
      }
      func_0040411C(iVar7);
    }
    if (puVar3 != (undefined4 *)0x0) {
      func_0040411C(puVar3);
    }
    if (param_1[0x40] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00404110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*(int *)*DAT_00404114 + 0xc))((int *)*DAT_00404114,param_1[0x40]);
    }
  }
  return 0;
}

