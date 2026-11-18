#include "ghidra_types.h"

extern int func_00519D74(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0051AF38(int param_1,undefined4 param_2,undefined *param_3,int param_4);
extern int func_0051B0B4(int param_1);
extern int func_0058D6D0(int param_1);
extern int func_0058D808(int param_1);
extern int func_0058DABC(int param_1);
extern int func_0058DC54(int param_1);
extern int func_0058DE90(int param_1);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00446c20;

// USA 00446B60 <- EU 00446B38 (Ghidra, non-matching)
// GLOBAL DAT_00446c20 int *

undefined4 func_00446B60(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined *in_r2;
  int in_r3;
  bool bVar4;
  
  piVar1 = DAT_00446c20;
  if (*(char *)(param_1 + 0x284) == '\0') {
    iVar2 = func_0058DABC(*DAT_00446c20);
    if (iVar2 != 0) {
      uVar3 = func_0058DE90(*piVar1);
      bVar4 = uVar3 == 0;
      if (bVar4) {
        uVar3 = (uint)*(byte *)(param_1 + 0x293);
      }
      if (((!bVar4 || uVar3 != 0) && (iVar2 = func_0058D6D0(*piVar1), iVar2 != 0)) &&
         (iVar2 = func_0058D808(*piVar1), iVar2 != 0)) {
        func_00519D74(*piVar1,extraout_r1_00,in_r2,in_r3);
      }
    }
    if (((*(char *)(*(int *)(param_1 + 0x210) + 0x5f) != '\0') ||
        (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0')) &&
       ((iVar2 = func_0058DE90(*piVar1), iVar2 != 0 && (iVar2 = func_0051B0B4(*piVar1), iVar2 != 0))
       )) {
      return func_0066CC58((undefined4 *)(param_1 + 0x158),7);
    }
  }
  else {
    iVar2 = func_0058DC54(*DAT_00446c20);
    if (iVar2 != 0) {
      func_0051AF38(*piVar1,extraout_r1,in_r2,in_r3);
    }
    func_0066CC58((undefined4 *)(param_1 + 0x158),9);
  }
  return 0;
}

