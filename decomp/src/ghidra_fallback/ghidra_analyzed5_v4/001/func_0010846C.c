#include "ghidra_types.h"

extern int func_0010A9FC(int *param_1,undefined4 param_2,undefined4 param_3);
extern char *DAT_001084c4;
extern int *DAT_001084c8;
extern undefined4 *DAT_001084cc;
extern undefined4 *DAT_001084d0;

// USA 0010846C <- EU 0010846C (Ghidra, non-matching)
// GLOBAL DAT_001084c4 char *
// GLOBAL DAT_001084c8 int *
// GLOBAL DAT_001084cc undefined4 *
// GLOBAL DAT_001084d0 undefined4 *

void func_0010846C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_001084c4;
  iVar2 = *(int *)(DAT_001084c4 + 4);
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    *(int *)(DAT_001084c4 + 4) = iVar2;
  }
  if (iVar2 == 0) {
    if (*pcVar1 != '\0') {
      *pcVar1 = '\0';
      iVar2 = func_0010A9FC(DAT_001084c8,0,param_3);
      if (-1 < iVar2) {
        *DAT_001084d0 = *DAT_001084cc;
      }
      return;
    }
    return;
  }
  return;
}

