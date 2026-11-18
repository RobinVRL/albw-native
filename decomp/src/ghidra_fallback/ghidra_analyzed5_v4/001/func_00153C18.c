#include "ghidra_types.h"

extern int func_004F4A68();
extern int func_0068C690(float *param_1);
extern float DAT_00153cb0;
extern int DAT_00153cb4;

// USA 00153C18 <- EU 00153C1C (Ghidra, non-matching)
// GLOBAL DAT_00153cb0 float
// GLOBAL DAT_00153cb4 int

undefined4 func_00153C18(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x910) == '\0' || *(char *)(param_1 + 0x910) == '\x03') {
    fVar2 = *(float *)(param_2 + 8);
    if (fVar2 <= DAT_00153cb0) {
      fVar2 = -fVar2;
    }
    if ((int)ALBW_AS_U32(fVar2) < DAT_00153cb4) {
      iVar1 = func_0068C690((float *)(param_2 + 4));
      iVar1 = iVar1 - (*(int *)(param_1 + 1000) + -0x80000000);
      if (iVar1 + 0x3fffffffU < 0x7fffffff) {
        *(undefined1 *)(param_1 + 0x930) = 1;
        *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 1000) + iVar1 * 2 + -0x80000000;
      }
    }
  }
  return func_004F4A68(param_1,param_2);
}

