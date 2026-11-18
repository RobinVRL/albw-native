#include "ghidra_types.h"

extern int func_001CB798(int param_1,float fparam_0);
extern int func_006177C0(int param_1,int param_2,undefined1 param_3);
extern float DAT_001cb848;
extern float DAT_001cb84c;
extern float DAT_001cb850;

// USA 001CB7F8 <- EU 001CB7F8 (Ghidra, non-matching)
// GLOBAL DAT_001cb848 float
// GLOBAL DAT_001cb84c float
// GLOBAL DAT_001cb850 float

undefined4 func_001CB7F8(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x960);
  fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  func_001CB798(param_1,DAT_001cb84c - fVar2 * DAT_001cb848);
  if (0xe < iVar1) {
    func_001CB798(param_1,DAT_001cb850);
    return func_006177C0(param_1,6,0);
  }
  return 0;
}

