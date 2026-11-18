#include "ghidra_types.h"

extern int func_00297448(int param_1,int param_2,float fparam_0);
extern int func_00297474(int param_1,int param_2,float fparam_0);
extern int func_004EC074(int param_1,int param_2,float fparam_0);
extern float func_005380E0(int param_1);
extern float func_005381B4(int param_1);
extern int *DAT_00259370;
extern float DAT_00259374;

// USA 00259304 <- EU 0025932C (Ghidra, non-matching)
// GLOBAL DAT_00259370 int *
// GLOBAL DAT_00259374 float

undefined4 func_00259304(int param_1)

{
  int *piVar1;
  float fVar2;
  
  fVar2 = func_005380E0(param_1);
  piVar1 = DAT_00259370;
  func_00297448(*DAT_00259370,0,fVar2);
  fVar2 = func_005381B4(param_1);
  func_004EC074(*piVar1,0,fVar2);
  return func_00297474(*piVar1,0,DAT_00259374);
}

