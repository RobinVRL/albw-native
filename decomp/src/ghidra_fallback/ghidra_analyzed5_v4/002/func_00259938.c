#include "ghidra_types.h"

extern int func_00297448(int param_1,int param_2,float fparam_0);
extern int func_00297474(int param_1,int param_2,float fparam_0);
extern int func_004EC074(int param_1,int param_2,float fparam_0);
extern float func_005380E0(int param_1);
extern float func_005381B4(int param_1);
extern int *DAT_002599c0;
extern float DAT_002599c4;
extern float DAT_002599c8;

// USA 00259938 <- EU 00259960 (Ghidra, non-matching)
// GLOBAL DAT_002599c0 int *
// GLOBAL DAT_002599c4 float
// GLOBAL DAT_002599c8 float

undefined4 func_00259938(int param_1)

{
  int *piVar1;
  float fVar2;
  
  fVar2 = func_005380E0(param_1);
  piVar1 = DAT_002599c0;
  func_00297448(*DAT_002599c0,0x1e,fVar2);
  fVar2 = func_005381B4(param_1);
  func_004EC074(*piVar1,0x1e,fVar2);
  if (*(int *)(param_1 + 0x3c) != 0x11) {
    return func_00297474(*piVar1,0x1e,DAT_002599c4);
  }
  return func_00297474(*piVar1,0x1e,DAT_002599c8);
}

