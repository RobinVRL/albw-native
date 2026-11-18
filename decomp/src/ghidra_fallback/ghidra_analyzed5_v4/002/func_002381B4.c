#include "ghidra_types.h"

extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00539AA8(int param_1,int param_2,uint param_3);
extern undefined4 *DAT_002382bc;

// USA 002381B4 <- EU 002381B4 (Ghidra, non-matching)
// GLOBAL DAT_002382bc undefined4 *

undefined4 func_002381B4(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar2 = iVar2 + param_2 * 0x104;
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 != 0) {
    func_004CEA18(iVar2,0,0);
    func_004CEA18(iVar2,0,1);
  }
  iVar2 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar2 = iVar2 + param_2 * 0x104;
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 != 0) {
    func_004CEA18(iVar2,0,0);
    func_004CEA18(iVar2,1,1);
  }
  puVar1 = DAT_002382bc;
  iVar2 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar2 = iVar2 + param_2 * 0x104;
  }
  func_004A8304(*DAT_002382bc,*(int *)(iVar2 + 0x88));
  iVar2 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar2 = iVar2 + param_2 * 0x104;
  }
  func_004A9120(*puVar1,iVar2 + 0x20);
  if (param_2 < *(uint *)(param_1 + 0x478)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x480) + param_2 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (*(short *)(iVar2 + 0x32) == 0) {
    return 0;
  }
  if (param_2 < *(uint *)(param_1 + 0x478)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x480) + param_2 * 4);
  }
  else {
    iVar2 = 0;
  }
  return func_00539AA8(iVar2,0,1);
}

