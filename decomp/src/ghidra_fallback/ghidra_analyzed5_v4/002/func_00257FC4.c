#include "ghidra_types.h"

extern int func_0057D86C(int *param_1);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_0025805c;

// USA 00257FC4 <- EU 00257FEC (Ghidra, non-matching)
// GLOBAL DAT_0025805c int *

void func_00257FC4(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r9;
  
  bVar2 = func_0057D86C((int *)(param_1 + 0xc));
  piVar1 = DAT_0025805c;
  if (bVar2) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 != 0) {
      unaff_r9 = *(int *)(iVar3 + 0xac);
    }
    if (iVar3 == 0) {
      unaff_r9 = -1;
    }
    iVar3 = func_00587FCC(*DAT_0025805c,param_2);
    if (unaff_r9 == iVar3) {
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
  }
  uVar4 = func_00587FCC(*piVar1,param_2);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  *(undefined1 *)(param_1 + 100) = 0;
  return;
}

