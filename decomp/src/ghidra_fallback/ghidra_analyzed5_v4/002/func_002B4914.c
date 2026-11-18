#include "ghidra_types.h"

extern int func_001507A8(int param_1,int param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002b4974;
extern int DAT_002b4978;

// USA 002B4914 <- EU 002B48F0 (Ghidra, non-matching)
// GLOBAL DAT_002b4974 float
// GLOBAL DAT_002b4978 int

bool func_002B4914(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 8);
  if (fVar4 <= DAT_002b4974) {
    fVar4 = -fVar4;
  }
  if ((int)ALBW_AS_U32(fVar4) < DAT_002b4978) {
    iVar2 = func_0068C690((float *)(param_2 + 4));
    iVar3 = *(int *)(param_1 + 0x95c);
    iVar2 = iVar2 - (iVar3 + -0x80000000);
    if (iVar2 + 0x3fffffffU < 0x7fffffff) {
      if (iVar2 < 0) {
        iVar3 = iVar3 + 0x40000000;
      }
      else {
        iVar3 = iVar3 + -0x40000000;
      }
      *(int *)(param_1 + 0x95c) = iVar3;
      *(undefined1 *)(param_1 + 0x984) = 1;
    }
  }
  bVar1 = func_001507A8(param_1,param_2);
  return bVar1;
}

