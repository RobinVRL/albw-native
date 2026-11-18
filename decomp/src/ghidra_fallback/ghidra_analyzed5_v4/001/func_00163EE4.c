#include "ghidra_types.h"

extern int func_004FA124(int *param_1,int param_2,int param_3);
extern int DAT_00164020;

// USA 00163EE4 <- EU 00163EE8 (Ghidra, non-matching)
// GLOBAL DAT_00164020 int

uint func_00163EE4(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  iVar2 = DAT_00164020;
  cVar1 = *(char *)(param_3 + 0x24);
  if (((cVar1 == '\t') &&
      (((char)param_1[0x248] != '\0' || ((uint)param_1[0x245] < (uint)param_1[0x246])))) ||
     (param_2 == 3)) {
    return 0;
  }
  if (cVar1 == '\x05') {
    if ((char)param_1[0x248] == '\x01') {
      return 0xe;
    }
  }
  else if (cVar1 == '\x0e') {
    if ((char)param_1[0x248] == '\x01') {
      func_004FA124(param_1,0xe,0);
      return 0xe;
    }
  }
  else if (cVar1 == '\v') {
    if ((char)param_1[0x248] == '\x01') {
      if ((char)param_1[0x230] != '\x02' && (char)param_1[0x230] != '\v') {
        return 0xe;
      }
      goto LAB_00163fe0;
    }
  }
  else {
    if (cVar1 == '\x01') {
      if ((char)param_1[0x230] != '\x02' && (char)param_1[0x230] != '\v') {
        return 0xe;
      }
LAB_00163fe0:
      param_1[0x243] = 0x3c;
      param_1[0x244] = iVar2;
      param_1[0x242] = 0;
      return 0;
    }
    if ((char)param_1[0x248] == '\x01') {
      uVar3 = param_2 & 0xff;
      bVar5 = 0x1d < uVar3;
      bVar4 = uVar3 != 0x1e;
      if (bVar4) {
        uVar3 = uVar3 - 0xe;
        bVar5 = 2 < uVar3;
      }
      if (!bVar5 || (!bVar4 || uVar3 == 3)) {
        return 0xe;
      }
      if (param_2 == 8 || param_2 == 10) {
        return 0xe;
      }
    }
  }
  param_1[0x168] = param_1[0x168] | 0x80;
  return param_2;
}

