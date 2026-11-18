#include "ghidra_types.h"

extern int func_001CB798(int param_1,float fparam_0);
extern int func_006177C0(int param_1,int param_2,undefined1 param_3);
extern float DAT_001cb678;
extern float DAT_001cb67c;

// USA 001CB620 <- EU 001CB620 (Ghidra, non-matching)
// GLOBAL DAT_001cb678 float
// GLOBAL DAT_001cb67c float

undefined4 func_001CB620(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x960);
  fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  func_001CB798(param_1,fVar2 * DAT_001cb678);
  fVar2 = DAT_001cb67c;
  if (0xe < iVar1) {
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) | 8;
    func_001CB798(param_1,fVar2);
    return func_006177C0(param_1,0,0);
  }
  return 0;
}

