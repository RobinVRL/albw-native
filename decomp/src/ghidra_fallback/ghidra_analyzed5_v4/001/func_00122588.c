#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00122688(int *param_1,undefined4 param_2,undefined4 param_3);
extern int DAT_00122668;
extern int *DAT_0012266c;

// USA 00122588 <- EU 00122588 (Ghidra, non-matching)
// GLOBAL DAT_00122668 int
// GLOBAL DAT_0012266c int *

void func_00122588(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_00122668;
  param_1[0x23] = DAT_00122668;
  iVar3 = *(int *)(*DAT_0012266c + 0x28);
  if (iVar3 != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0xc4) + 0x30) + 0x48) + param_2 * 4);
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x20);
      iVar5 = *(int *)(iVar2 + 0x24);
      param_1[0x12] = *(int *)(iVar2 + 0x1c);
      param_1[0x13] = iVar4;
      param_1[0x14] = iVar5;
      cVar1 = *(char *)(iVar2 + 0x28);
      if (cVar1 == '\0') {
        func_0010E3C4((uint *)(param_1 + 0xe),*(uint **)(iVar2 + 0x30),0x10);
      }
      else if ((cVar1 != '\x01') && (cVar1 == '\x02')) {
        func_0010E3C4((uint *)(param_1 + 0xe),*(uint **)(iVar2 + 0x30),0xc);
      }
      param_3 = 0x10;
      func_0010E3C4((uint *)(param_1 + 0x1e),*(uint **)(iVar2 + 0x34),0x10);
    }
    param_2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0xc4) + 0x30) + 0x90) + param_2 * 4);
    *param_1 = param_2;
    param_1[0x23] = iVar6;
  }
  func_00122688(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0x25) = 0;
  return;
}

