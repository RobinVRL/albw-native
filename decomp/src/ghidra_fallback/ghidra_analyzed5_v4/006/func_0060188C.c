#include "ghidra_types.h"

extern int func_003E336C(undefined4 param_1);
extern int DAT_006018e8;

// USA 0060188C <- EU 00601864 (Ghidra, non-matching)
// GLOBAL DAT_006018e8 int

void func_0060188C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_006018e8;
  iVar3 = *(int *)(DAT_006018e8 + 0x154);
  iVar4 = *(int *)(DAT_006018e8 + 0x158);
  do {
    if (param_1 == 0x400) {
      iVar2 = *(int *)(iVar1 + 0x154);
      if (iVar3 != iVar2) {
        return;
      }
    }
    else {
      iVar2 = param_1 + -0x401;
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x158);
      }
      else {
        if ((iVar2 != 1) || (iVar2 = *(int *)(iVar1 + 0x154), iVar3 == iVar2))
        goto code_r0x006018d4;
        iVar2 = *(int *)(iVar1 + 0x158);
      }
      if (iVar4 != iVar2) {
        return;
      }
    }
code_r0x006018d4:
    func_003E336C(iVar2);
  } while( true );
}

