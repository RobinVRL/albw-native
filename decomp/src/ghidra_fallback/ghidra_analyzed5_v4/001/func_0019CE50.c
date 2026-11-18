#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_003C02E0(uint *param_1,int param_2);
extern undefined4 DAT_0019cee8;
extern undefined *DAT_0019ceec;

// USA 0019CE50 <- EU 0019CE50 (Ghidra, non-matching)
// GLOBAL DAT_0019cee8 undefined4
// GLOBAL DAT_0019ceec undefined *

int func_0019CE50(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = DAT_0019cee8;
  iVar3 = func_00100118((int)(param_1 + 1),DAT_0019ceec,0x40,0x14);
  iVar5 = 0;
  iVar4 = 0;
  do {
    if (iVar5 < 0x14) {
      uVar1 = *(undefined1 *)(iVar3 + iVar4 * 0x40 + 5);
      uVar2 = *(undefined1 *)(iVar3 + iVar4 * 0x40 + 6);
      func_003C02E0((uint *)(iVar3 + iVar4 * 0x40),iVar5);
      *(undefined1 *)(iVar3 + iVar4 * 0x40 + 6) = uVar2;
      *(undefined1 *)(iVar3 + iVar4 * 0x40 + 5) = uVar1;
    }
    iVar4 = iVar4 + 1;
    iVar5 = (int)(char)((char)iVar5 + '\x01');
  } while (iVar4 != 0x14);
  return iVar3 + -4;
}

