#include "ghidra_types.h"

extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_0045F574(int *param_1);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int *DAT_0047a588;

// USA 0047A4FC <- EU 0047A4D4 (Ghidra, non-matching)
// GLOBAL DAT_0047a588 int *

void func_0047A4FC(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint extraout_r1;
  undefined4 extraout_r1_00;
  int iVar3;
  
  if ((int)*(char *)(*(int *)(param_1 + 500) + 0x3c) - 1U < 5) {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\x06');
  }
  uVar2 = (int)*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) - 1;
  if (uVar2 < 5) {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\x06');
    uVar2 = extraout_r1;
  }
  func_001B6C2C(*(int **)(param_1 + 500),uVar2,param_3,param_4);
  func_001B6C2C(*(int **)(param_1 + 0x1f8),extraout_r1_00,param_3,param_4);
  if (*(int **)(*DAT_0047a588 + 0xe8) != (int *)0x0) {
    func_0045F574(*(int **)(*DAT_0047a588 + 0xe8));
  }
  *(undefined4 *)(param_1 + 0x298) = 1;
  iVar3 = *(int *)(param_1 + 500);
  cVar1 = *(char *)(iVar3 + 0xe4);
  func_0031B6A0(iVar3 + 0x60,(int)cVar1,0);
  *(char *)(iVar3 + 0xe4) = cVar1;
  iVar3 = *(int *)(param_1 + 0x1f8);
  cVar1 = *(char *)(iVar3 + 0xe4);
  func_0031B6A0(iVar3 + 0x60,(int)cVar1,0);
  *(char *)(iVar3 + 0xe4) = cVar1;
  return;
}

