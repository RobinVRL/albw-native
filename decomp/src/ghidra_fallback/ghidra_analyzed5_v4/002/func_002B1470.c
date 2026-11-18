#include "ghidra_types.h"

extern int func_002AD0E4(undefined4 *param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int *DAT_002b14e8;

// USA 002B1470 <- EU 002B144C (Ghidra, non-matching)
// GLOBAL DAT_002b14e8 int *

undefined4 func_002B1470(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar2 = param_1[0xd];
  if ((*(uint *)(iVar2 + 0x5a0) & 0x400000) == 0) {
    if ((((*(uint *)(*DAT_002b14e8 + 0x10) & 3) != 2) && (*(char *)(param_1 + 1) != '\x13')) &&
       ((*(uint *)(iVar2 + 0x59c) & 0x80000000) == 0)) {
      cVar1 = *(char *)(iVar2 + 0x8b5);
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        cVar1 = *(char *)(iVar2 + 0x8b8);
      }
      bVar4 = bVar3 && cVar1 == '\0';
      if (bVar3 && cVar1 == '\0') {
        bVar4 = *(char *)(iVar2 + 0x89d) == '\0';
      }
      if ((bVar4) && (*(char *)(iVar2 + 0x7fc) != '\x05')) {
        return 0;
      }
    }
    iVar2 = func_002AD0E4(param_1,1,(float *)0x0,0,0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

