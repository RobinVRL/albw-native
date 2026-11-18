#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0017b8c4;
extern int DAT_0017b8c8;
extern undefined4 *DAT_0017b8cc;

// USA 0017B7F8 <- EU 0017B7F8 (Ghidra, non-matching)
// GLOBAL DAT_0017b8c4 int *
// GLOBAL DAT_0017b8c8 int
// GLOBAL DAT_0017b8cc undefined4 *

undefined4 func_0017B7F8(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar4 = DAT_0017b8cc;
  piVar1 = DAT_0017b8c4;
  iVar5 = *DAT_0017b8c4;
  piVar2 = *(int **)(DAT_0017b8c8 + iVar5);
  piVar3 = *(int **)(DAT_0017b8c8 + 8 + iVar5);
  if (piVar2 != piVar3) {
    while (piVar2 = (int *)func_005841A8(iVar5,*puVar4,piVar2), piVar2 != piVar3) {
      iVar7 = *piVar2;
      if (*(short *)(iVar7 + 0x2c) == 2) {
        if (iVar7 == 0) {
          return 0;
        }
        if (*(char *)(iVar7 + 0x883) == '\0') {
          return 0;
        }
        puVar4 = *(undefined4 **)(iVar7 + 0x7dc);
        puVar6 = puVar4 + *(int *)(iVar7 + 0x7d4);
        while (puVar4 != puVar6) {
          iVar5 = func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)*puVar4);
          puVar4 = puVar4 + 1;
          if (iVar5 != 0) {
            *(undefined1 *)(iVar5 + 0x2d7) = 1;
          }
        }
        *(undefined1 *)(iVar7 + 0x2d7) = 1;
        return 1;
      }
      piVar2 = piVar2 + 1;
      if (piVar2 == piVar3) {
        return 0;
      }
    }
  }
  return 0;
}

