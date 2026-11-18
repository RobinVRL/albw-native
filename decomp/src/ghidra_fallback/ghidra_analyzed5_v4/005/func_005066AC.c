#include "ghidra_types.h"

extern int func_002356D4(int param_1,uint param_2);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern undefined4 *DAT_0050671c;

// USA 005066AC <- EU 00506684 (Ghidra, non-matching)
// GLOBAL DAT_0050671c undefined4 *

undefined4 func_005066AC(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar2 = iVar2 + param_2 * 0x104;
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 != 0) {
    func_004CEA18(iVar2,1,0);
    func_004CEA18(iVar2,0,1);
  }
  puVar1 = DAT_0050671c;
  iVar2 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar2 = iVar2 + param_2 * 0x104;
  }
  func_004A8304(*DAT_0050671c,*(int *)(iVar2 + 0x88));
  iVar2 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar2 = iVar2 + param_2 * 0x104;
  }
  func_004A9120(*puVar1,iVar2 + 0x20);
  return func_002356D4(param_1,param_2);
}

