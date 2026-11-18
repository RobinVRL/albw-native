#include "ghidra_types.h"

extern int func_00232468(int param_1);
extern int func_00427940(int param_1,uint param_2,int param_3);
extern int func_00427B8C(int param_1);
extern int func_00521608(int param_1);
extern int *DAT_0046ec44;
extern int *DAT_0046ec48;

// USA 0046EBD0 <- EU 0046EBA8 (Ghidra, non-matching)
// GLOBAL DAT_0046ec44 int *
// GLOBAL DAT_0046ec48 int *

void func_0046EBD0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  func_00232468(param_1);
  iVar1 = func_00521608(*DAT_0046ec44);
  if (iVar1 != 0) {
    func_00427B8C(*(int *)(param_1 + 0x74));
    iVar1 = *(int *)(param_1 + 0x74);
    *(undefined4 *)(iVar1 + 0x7c) = 0;
    *(byte *)(iVar1 + 0x81) = *(byte *)(iVar1 + 0x81) | 3;
    func_00427940(*(int *)(param_1 + 0x74),0,0);
  }
  iVar1 = *DAT_0046ec48;
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x80) + 0x18);
  *(uint *)(*(int *)(iVar1 + 0x80) + 0x18) = uVar2 & 0xfffffffe;
  *(uint *)(*(int *)(iVar1 + 0x80) + 0x18) = uVar2 & 0xfffffffc;
  iVar1 = *(int *)(iVar1 + 0x84);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xfffffffc;
  }
  return;
}

