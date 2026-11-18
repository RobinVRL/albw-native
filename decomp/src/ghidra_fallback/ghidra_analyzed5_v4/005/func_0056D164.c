#include "ghidra_types.h"

extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B554(int param_1);
extern int func_0056B754(int param_1);
extern int func_0056B774(int param_1);
extern int func_0056B7D8(int param_1);
extern int func_0056B8D4(int param_1);
extern int func_0056B9F8(int param_1);
extern int func_0056BA10(int param_1);
extern uint DAT_0056d1f4;

// USA 0056D164 <- EU 0056D13C (Ghidra, non-matching)
// GLOBAL DAT_0056d1f4 uint

undefined4 func_0056D164(int param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined1 uVar6;
  
  iVar1 = func_0056AF9C(*(int *)(param_1 + 0x3c),param_2);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0056B8D4(iVar1);
    if (iVar2 == 2) {
      if (*(uint *)(param_1 + 8) < DAT_0056d1f4) {
        iVar1 = func_0056BA10(iVar1);
        uVar3 = func_0056B7D8(iVar1);
        *param_3 = (char)uVar3;
        uVar5 = func_0056B774(iVar1);
        *(uint *)(param_3 + 4) = uVar5;
        uVar5 = func_0056B754(iVar1);
      }
      else {
        iVar1 = func_0056B9F8(iVar1);
        piVar4 = (int *)func_0056B554(iVar1);
        if (piVar4 == (int *)0x0) {
          return 0;
        }
        uVar6 = (undefined1)((uint)*piVar4 >> 8);
        if ((uint)(*piVar4 << 0x10) >> 0x18 != 1) {
          uVar6 = 0;
        }
        *param_3 = uVar6;
        *(int *)(param_3 + 4) = piVar4[1];
        uVar5 = piVar4[2];
      }
      *(uint *)(param_3 + 8) = uVar5;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

