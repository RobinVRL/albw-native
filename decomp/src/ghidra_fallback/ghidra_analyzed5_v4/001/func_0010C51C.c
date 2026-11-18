#include "ghidra_types.h"

extern int DAT_0010c57c;
extern int DAT_0010c580;
extern int DAT_0010c584;
extern int DAT_0010c588;

// USA 0010C51C <- EU 0010C51C (Ghidra, non-matching)
// GLOBAL DAT_0010c57c int
// GLOBAL DAT_0010c580 int
// GLOBAL DAT_0010c584 int
// GLOBAL DAT_0010c588 int

undefined4 func_0010C51C(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0010c57c + 0x20;
  *param_1 = DAT_0010c57c;
  param_1[1] = iVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (int)(param_1 + 4);
  param_1[5] = (int)(param_1 + 4);
  iVar1 = DAT_0010c584;
  iVar2 = DAT_0010c580;
  param_1[6] = DAT_0010c588;
  param_1[7] = 0x20;
  param_1[8] = iVar2;
  param_1[9] = iVar1;
  param_1[10] = -1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return (undefined4)param_1;
}

