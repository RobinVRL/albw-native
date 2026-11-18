#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern undefined4 *DAT_00232d2c;
extern int DAT_00232d30;

// USA 00232CA8 <- EU 00232CA8 (Ghidra, non-matching)
// GLOBAL DAT_00232d2c undefined4 *
// GLOBAL DAT_00232d30 int

undefined4 func_00232CA8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = DAT_00232d2c;
  if (param_2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = func_0010983C(*DAT_00232d2c,param_2);
  }
  iVar3 = 0;
  do {
    iVar4 = iVar3 * DAT_00232d30;
    iVar3 = iVar3 + 1;
    iVar4 = param_1 + 0x10 + iVar4 * 4;
    *(undefined4 *)(iVar4 + 0x80) = 0;
    *(undefined1 *)(iVar4 + 0x7c) = 1;
    *(undefined1 *)(iVar4 + 0x7d) = 0;
    *(undefined4 *)(iVar4 + 0x160c) = 0;
    *(undefined1 *)(iVar4 + 0x1608) = 1;
    *(undefined1 *)(iVar4 + 0x1609) = 0;
  } while (iVar3 < 2);
  if (iVar2 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar2);
}

