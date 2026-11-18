#include "ghidra_types.h"

extern int func_0051C63C(int param_1,uint param_2,undefined *param_3,int param_4);
extern int DAT_00652f54;
extern int DAT_00652f58;
extern int DAT_00652f5c;
extern int *DAT_00652f60;

// USA 00652F28 <- EU 00652F00 (Ghidra, non-matching)
// GLOBAL DAT_00652f54 int
// GLOBAL DAT_00652f58 int
// GLOBAL DAT_00652f5c int
// GLOBAL DAT_00652f60 int *

undefined4 func_00652F28(int param_1,undefined *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x9d3) == '\x02') {
    cVar1 = *(char *)(param_1 + 0x9d2);
    uVar3 = 0;
    iVar2 = DAT_00652f54;
    if ((cVar1 == '\0') || (iVar2 = DAT_00652f58, cVar1 == '\x01')) {
      uVar3 = (uint)(byte)param_2[iVar2];
    }
    else if (cVar1 == '\x02') {
      uVar3 = (uint)(byte)param_2[DAT_00652f5c];
    }
    return func_0051C63C(*DAT_00652f60,uVar3,param_2,param_4);
  }
  return 0;
}

