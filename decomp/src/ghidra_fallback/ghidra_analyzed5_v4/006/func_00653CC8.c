#include "ghidra_types.h"

extern int func_0051C63C(int param_1,uint param_2,undefined *param_3,int param_4);
extern int DAT_00653cf4;
extern int DAT_00653cf8;
extern int DAT_00653cfc;
extern int *DAT_00653d00;

// USA 00653CC8 <- EU 00653CA0 (Ghidra, non-matching)
// GLOBAL DAT_00653cf4 int
// GLOBAL DAT_00653cf8 int
// GLOBAL DAT_00653cfc int
// GLOBAL DAT_00653d00 int *

undefined4 func_00653CC8(int param_1,undefined *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x9d3) == '\x02') {
    cVar1 = *(char *)(param_1 + 0x9d2);
    uVar3 = 0;
    iVar2 = DAT_00653cf4;
    if ((cVar1 == '\0') || (iVar2 = DAT_00653cf8, cVar1 == '\x01')) {
      uVar3 = (uint)(byte)param_2[iVar2];
    }
    else if (cVar1 == '\x02') {
      uVar3 = (uint)(byte)param_2[DAT_00653cfc];
    }
    return func_0051C63C(*DAT_00653d00,uVar3,param_2,param_4);
  }
  return 0;
}

