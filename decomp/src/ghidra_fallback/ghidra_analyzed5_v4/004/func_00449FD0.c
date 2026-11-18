#include "ghidra_types.h"

extern int func_0051B8C4(int param_1,int *param_2,int param_3);
extern int func_0051BC64(int param_1,int *param_2,int *param_3);
extern int func_0058208C(int param_1,int *param_2,int param_3);
extern int func_00582224(int param_1,int *param_2);
extern int *DAT_0044a0d4;
extern int *DAT_0044a0d8;
extern undefined4 DAT_0044a0dc;

// USA 00449FD0 <- EU 00449FA8 (Ghidra, non-matching)
// GLOBAL DAT_0044a0d4 int *
// GLOBAL DAT_0044a0d8 int *
// GLOBAL DAT_0044a0dc undefined4

void func_00449FD0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  
  iVar1 = *DAT_0044a0d4;
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x244) == '\0') {
      func_0058208C(iVar1,(int *)(param_1 + 0x17c),1);
    }
    else {
      func_00582224(iVar1,(int *)(param_1 + 0x17c));
    }
    piVar3 = DAT_0044a0d8;
    func_0051BC64(*DAT_0044a0d8,(int *)(param_1 + 0x17c),param_2);
    func_0051B8C4(*piVar3,(int *)(param_1 + 0x17c),(int)param_2);
    uVar8 = DAT_0044a0dc;
    if (*(char *)(param_1 + 0x294) != '\0') {
      uVar4 = 0;
      uVar2 = 0;
      do {
        puVar5 = (undefined4 *)(param_1 + 0x298);
        if (uVar2 < 0x1e) {
          puVar5 = (undefined4 *)(param_1 + 0x298 + uVar2 * 0xc);
        }
        iVar1 = param_1 + 0x298;
        *puVar5 = uVar8;
        puVar5[1] = uVar8;
        if (uVar2 < 0x1e) {
          iVar1 = iVar1 + uVar2 * 0xc;
        }
        uVar2 = uVar2 + 1;
        *(undefined1 *)(iVar1 + 8) = 0;
      } while ((int)uVar2 < 0x1e);
      *(undefined1 *)(param_1 + 0x295) = 0;
      piVar3 = *(int **)(param_1 + 0x184);
      piVar7 = piVar3 + *(int *)(param_1 + 0x17c);
      for (; piVar3 != piVar7; piVar3 = piVar3 + 1) {
        puVar5 = (undefined4 *)*piVar3;
        if ((puVar5[5] & 0x400000) != 0) {
          puVar6 = (undefined4 *)(param_1 + 0x298);
          if (uVar4 < 0x1e) {
            puVar6 = (undefined4 *)(param_1 + 0x298 + uVar4 * 0xc);
          }
          uVar8 = puVar5[2];
          iVar1 = param_1 + 0x298;
          *puVar6 = *puVar5;
          puVar6[1] = uVar8;
          if (uVar4 < 0x1e) {
            iVar1 = iVar1 + uVar4 * 0xc;
          }
          uVar4 = uVar4 + 1;
          *(undefined1 *)(iVar1 + 8) = 1;
          *(undefined1 *)(param_1 + 0x295) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x294) = 0;
    }
  }
  return;
}

