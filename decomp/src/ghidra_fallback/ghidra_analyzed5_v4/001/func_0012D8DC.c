#include "ghidra_types.h"

extern float func_003E23F4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6,float *param_7,int param_8,float fparam_0,float fparam_1);
extern int func_00492604(float *param_1,float *param_2,float *param_3);
extern float DAT_0012d9a4;

// USA 0012D8DC <- EU 0012D8DC (Ghidra, non-matching)
// GLOBAL DAT_0012d9a4 float

void func_0012D8DC(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x1438);
  func_003E23F4((float *)(param_1 + 0x155c),(float *)(param_1 + 0x161c),(float *)(param_1 + 0x15bc),
                (float *)(param_1 + 0x165c),(float *)(param_1 + 0x15ec),
                (float *)(param_1 + uVar1 * 0x40 + 0x149c),
                (float *)(param_1 + uVar1 * 0x30 + 0x143c),0,
                *(float *)(param_1 + uVar1 * 4 + 0x181c),DAT_0012d9a4);
  func_00492604((float *)(param_1 + 0x171c),(float *)(param_1 + 0x161c),(float *)(param_1 + 0x15bc))
  ;
  func_00492604((float *)(param_1 + 0x175c),(float *)(param_1 + 0x165c),(float *)(param_1 + 0x15ec))
  ;
  return;
}

