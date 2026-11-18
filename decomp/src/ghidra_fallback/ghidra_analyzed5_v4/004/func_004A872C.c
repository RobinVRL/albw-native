#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_004A8610(int param_1,int param_2);
extern int DAT_004a8770;

// USA 004A872C <- EU 004A8704 (Ghidra, non-matching)
// GLOBAL DAT_004a8770 int

undefined4 func_004A872C(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  sVar1 = *(short *)(DAT_004a8770 + param_2);
  piVar3 = (int *)(*(int *)(param_1 + 0xbf48) + param_1 + 0x10);
  iVar2 = piVar3[1];
  bVar4 = iVar2 == 0;
  if (bVar4) {
    iVar2 = *piVar3;
  }
  if (bVar4 && iVar2 == 0) {
    func_0010F1DC((int *)(param_1 + 0xbf3c),piVar3);
    *(int *)(param_1 + 0xbf44) = *(int *)(param_1 + 0xbf44) + 1;
  }
  if (sVar1 < 0) {
    return 0;
  }
  return func_004A8610(param_1,param_2);
}

