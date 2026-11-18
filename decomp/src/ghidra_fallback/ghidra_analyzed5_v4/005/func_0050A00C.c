#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0050a088;
extern int *DAT_0050a08c;

// USA 0050A00C <- EU 00509FE4 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_0050a088 int *
// GLOBAL DAT_0050a08c int *

undefined4 func_0050A00C(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0052FBA0(*DAT_0050a088 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (((iVar1 == 0) || (iVar1 = func_00588BE4(iVar1), iVar1 != *DAT_0050a08c)) ||
     (*(char *)(param_1 + 0x41c) != '\x02')) {
    if ((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x02')) {
      if (*(char *)(param_1 + 0x41c) == '\x02') {
        *(undefined1 *)(param_1 + 0x464) = 1;
        return 1;
      }
      if (*(char *)(param_1 + 0x41c) == '\x04') {
        *(undefined4 *)(param_1 + 0x418) = 0;
        return 1;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x467) = 1;
  }
  return uVar2;
}

