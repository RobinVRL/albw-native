#include "ghidra_types.h"

extern int func_00187F18(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_00659544(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00189d30;
extern int *DAT_00189d34;
extern int *DAT_00189d38;

// USA 00189C40 <- EU 00189C40 (Ghidra, non-matching)
// GLOBAL DAT_00189d30 int *
// GLOBAL DAT_00189d34 int *
// GLOBAL DAT_00189d38 int *

undefined4 func_00189C40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x500) == '\a') {
    return 0;
  }
  iVar1 = func_00187F18(param_1,param_2);
  if (iVar1 != 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x500) == '\x02') {
    if ((*(int *)(param_2 + 0x34) != 0) && ((*(ushort *)(*(int *)(param_2 + 0x34) + 4) & 0xff) == 2)
       ) {
      if ((*(ushort *)(param_2 + 0x20) & 0x1f) == 7) {
        return 1;
      }
      func_00659544((undefined4 *)(param_1 + 0x4fc),6);
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x500) == '\x06') {
      return 1;
    }
    iVar1 = func_0052FBA0(*DAT_00189d30 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if ((iVar1 != 0) &&
       ((iVar2 = func_00588BE4(iVar1), iVar2 == *DAT_00189d34 ||
        (iVar1 = func_00588BE4(iVar1), iVar1 == *DAT_00189d38)))) {
      func_00659544((undefined4 *)(param_1 + 0x4fc),6);
      return 1;
    }
  }
  return 0;
}

