#include "ghidra_types.h"

extern int func_00584B94(int param_1,int param_2);
extern int *DAT_00282c9c;
extern int DAT_00282ca0;

// USA 00282B40 <- EU 00282B68 (Ghidra, non-matching)
// GLOBAL DAT_00282c9c int *
// GLOBAL DAT_00282ca0 int

undefined4 func_00282B40(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_00282c9c;
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0xa24) != -1) {
      return 0;
    }
  }
  else {
    iVar4 = DAT_00282ca0 + 0x41;
    iVar5 = DAT_00282ca0 + 200;
    iVar3 = DAT_00282ca0 + 0x168;
    if (param_4 != 1) {
      if ((param_4 == 2) &&
         ((((bVar2 = func_00584B94(*DAT_00282c9c,DAT_00282ca0), bVar2 &&
            (bVar2 = func_00584B94(*piVar1,iVar4), !bVar2)) ||
           ((bVar2 = func_00584B94(*piVar1,iVar5), bVar2 &&
            (bVar2 = func_00584B94(*piVar1,iVar3), !bVar2)))) &&
          (*(char *)(param_1 + 0xa28) != '\0')))) {
        *(undefined1 *)(param_1 + 0xa28) = 0;
        return 1;
      }
      return 0;
    }
    bVar2 = func_00584B94(*DAT_00282c9c,DAT_00282ca0);
    if ((!bVar2) || (bVar2 = func_00584B94(*piVar1,iVar4), bVar2)) {
      bVar2 = func_00584B94(*piVar1,iVar5);
      if (!bVar2) {
        return 0;
      }
      bVar2 = func_00584B94(*piVar1,iVar3);
      if (!bVar2) {
        return 2;
      }
      return 0;
    }
  }
  return 1;
}

