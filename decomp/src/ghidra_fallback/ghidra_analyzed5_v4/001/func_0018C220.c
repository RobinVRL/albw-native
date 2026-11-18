#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0018c2f0;
extern int *DAT_0018c2f4;
extern int *DAT_0018c2f8;
extern int *DAT_0018c2fc;

// USA 0018C220 <- EU 0018C220 (Ghidra, non-matching)
// GLOBAL DAT_0018c2f0 int *
// GLOBAL DAT_0018c2f4 int *
// GLOBAL DAT_0018c2f8 int *
// GLOBAL DAT_0018c2fc int *

undefined4 func_0018C220(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0018c2f0;
  if (*(char *)(param_1 + 0x53a) == '\0') {
    if ((*(int *)(param_2 + 0x34) != 0) &&
       ((*(ushort *)(*(int *)(param_2 + 0x34) + 0x14) & 0xff) == 1)) {
      iVar2 = func_0052FBA0(*DAT_0018c2f0 + 0x3dbbc,*(uint *)(param_2 + 0x28));
      if (iVar2 != 0) {
        iVar2 = func_00588BE4(iVar2);
        if (iVar2 == *DAT_0018c2f4) {
          return 1;
        }
        if (iVar2 == *DAT_0018c2f8) {
          return 1;
        }
      }
      *(undefined1 *)(param_1 + 0x53a) = 1;
    }
    if (((4 < *(int *)(param_1 + 0x528)) ||
        (iVar2 = func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar2 == 0)) ||
       (iVar2 = func_00588BE4(iVar2), iVar2 != *DAT_0018c2fc)) {
      return 1;
    }
  }
  return 0;
}

