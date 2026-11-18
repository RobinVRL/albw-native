#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00659168(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0017cd64;
extern int DAT_0017cd68;
extern undefined4 *DAT_0017cd6c;

// USA 0017CCCC <- EU 0017CCCC (Ghidra, non-matching)
// GLOBAL DAT_0017cd64 int *
// GLOBAL DAT_0017cd68 int
// GLOBAL DAT_0017cd6c undefined4 *

undefined1 func_0017CCCC(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = DAT_0017cd6c;
  iVar5 = *DAT_0017cd64;
  piVar2 = *(int **)(DAT_0017cd68 + iVar5);
  piVar3 = *(int **)(DAT_0017cd68 + 8 + iVar5);
  if (piVar2 != piVar3) {
    while (piVar2 = (int *)func_005841A8(iVar5,*puVar1,piVar2), piVar2 != piVar3) {
      iVar4 = *piVar2;
      if (*(short *)(iVar4 + 0x2c) == 1) {
        if (iVar4 == 0) {
          return 1;
        }
        if (*(char *)(iVar4 + 0x78c) == '\x02') {
          func_00659168((undefined4 *)(iVar4 + 0x788),3);
        }
        if (*(char *)(iVar4 + 0x883) != '\0') {
          return 1;
        }
        return 0;
      }
      piVar2 = piVar2 + 1;
      if (piVar2 == piVar3) {
        return 1;
      }
    }
  }
  return 1;
}

