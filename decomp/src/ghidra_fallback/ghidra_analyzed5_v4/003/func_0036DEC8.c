#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern float DAT_0036df38;

// USA 0036DEC8 <- EU 0036DEA4 (Ghidra, non-matching)
// GLOBAL DAT_0036df38 float

void func_0036DEC8(undefined1 *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0036df38;
  switch(*param_1) {
  default:
    fVar1 = *(float *)(param_1 + 0x5c);
    *param_2 = DAT_0036df38;
    param_2[1] = fVar3;
    param_2[2] = fVar1;
    func_004D7F70(param_2,*(int *)(param_1 + 0x48) * param_3 + *(int *)(param_1 + 0x44));
    func_00115C54(param_2,param_2,(float *)(param_1 + 4));
    return;
  case 9:
  case 10:
  case 0xb:
    fVar1 = *(float *)(param_1 + param_3 * 0xc + 0x1c);
    fVar2 = *(float *)(param_1 + param_3 * 0xc + 0x20);
    param_2[2] = *(float *)(param_1 + param_3 * 0xc + 0x24);
    *param_2 = fVar1;
    param_2[1] = fVar2;
    return;
  }
}

