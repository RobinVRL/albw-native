#include "ghidra_types.h"

extern int func_0053F7A8(int param_1);
extern int *DAT_00200eb0;
extern float DAT_00200eb4;
extern float DAT_00200eb8;

// USA 00200E34 <- EU 00200E34 (Ghidra, non-matching)
// GLOBAL DAT_00200eb0 int *
// GLOBAL DAT_00200eb4 float
// GLOBAL DAT_00200eb8 float

float func_00200E34(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = DAT_00200eb4;
  if (((*DAT_00200eb0 != 0) && (iVar1 = func_0053F7A8(*DAT_00200eb0), iVar1 == 0)) &&
     (*(char *)(*(int *)(param_1 + 0x420) + 0x22) == '\x06')) {
    if (*(char *)(param_2 + 0x21) == '\x05') {
      if (*(uint *)(param_2 + 0x38) >> 0x1c != 4) {
        return DAT_00200eb8;
      }
    }
    else if (*(char *)(param_2 + 0x21) == '\b') {
      return DAT_00200eb8;
    }
  }
  return fVar2;
}

