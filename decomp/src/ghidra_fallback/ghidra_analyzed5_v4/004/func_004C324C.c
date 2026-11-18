#include "ghidra_types.h"

extern int func_001E4A5C(int param_1,undefined4 param_2,undefined4 *param_3);
extern float func_004C2328(int param_1,undefined4 param_2);
extern int DAT_004c328c;
extern undefined4 DAT_004c3290;
extern float DAT_004c3294;

// GLOBAL DAT_004c328c int
// GLOBAL DAT_004c3290 undefined4
// GLOBAL DAT_004c3294 float
// USA 004C324C <- EU 004C3228 (Ghidra, function missing from the decomp table)

undefined4 func_004C324C(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = func_001E4A5C(param_1,param_2,param_3);
  fVar1 = DAT_004c3294;
  uVar3 = 0;
  if (cVar2 != '\0') {
    if (DAT_004c328c < (int)ALBW_AS_U32((*param_3 * *param_3 + param_3[2] * param_3[2]))) {
      *(undefined4 *)(param_1 + 0x3e0) = DAT_004c3290;
    }
    *(float *)(param_1 + 0x580) = *(float *)(param_1 + 0x3d4) + fVar1;
    func_004C2328(param_1,2);
    uVar3 = 1;
  }
  return uVar3;
}

