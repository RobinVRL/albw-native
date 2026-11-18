#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004F4A68();
extern float DAT_00206a4c;
extern int DAT_00206a50;

// USA 002069FC <- EU 002069FC (Ghidra, non-matching)
// GLOBAL DAT_00206a4c float
// GLOBAL DAT_00206a50 int

undefined4 func_002069FC(int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 8);
  if (fVar1 <= DAT_00206a4c) {
    fVar1 = -fVar1;
  }
  if ((int)ALBW_AS_U32(fVar1) < DAT_00206a50) {
    func_00115C54((float *)(param_1 + 0x8f0),(float *)(param_1 + 0x8f0),(float *)(param_2 + 4));
  }
  return func_004F4A68(param_1,param_2);
}

