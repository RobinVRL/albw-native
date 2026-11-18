#include "ghidra_types.h"

extern int func_0053F7A8(int param_1);
extern int *DAT_002044e0;
extern float DAT_002044e4;
extern float DAT_002044e8;

// USA 00204464 <- EU 00204464 (Ghidra, non-matching)
// GLOBAL DAT_002044e0 int *
// GLOBAL DAT_002044e4 float
// GLOBAL DAT_002044e8 float

float func_00204464(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = DAT_002044e4;
  if (((*DAT_002044e0 != 0) && (iVar1 = func_0053F7A8(*DAT_002044e0), iVar1 == 0)) &&
     (*(char *)(*(int *)(param_1 + 0x420) + 0x22) == '\x06')) {
    if (*(char *)(param_2 + 0x21) == '\x05') {
      if (*(uint *)(param_2 + 0x38) >> 0x1c != 4) {
        return DAT_002044e8;
      }
    }
    else if (*(char *)(param_2 + 0x21) == '\b') {
      return DAT_002044e8;
    }
  }
  return fVar2;
}

