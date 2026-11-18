#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern float DAT_002e9828;
extern int DAT_002e982c;
extern undefined4 DAT_002e9830;
extern float DAT_002e9834;

// USA 002E9730 <- EU 002E970C (Ghidra, non-matching)
// GLOBAL DAT_002e9828 float
// GLOBAL DAT_002e982c int
// GLOBAL DAT_002e9830 undefined4
// GLOBAL DAT_002e9834 float

undefined4 func_002E9730(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  iVar1 = DAT_002e982c;
  fVar5 = DAT_002e9828;
  fVar4 = *(float *)(param_1 + 0xe10) + *(float *)(param_1 + 0xe14);
  *(float *)(param_1 + 0xe10) = fVar4;
  *(float *)(param_1 + 0xe14) = *(float *)(param_1 + 0xe14) - *(float *)(iVar1 + 0x14);
  if (fVar4 < fVar5) {
    *(float *)(param_1 + 0xe10) = fVar5;
  }
  if (*(int *)(param_1 + 0xb7c) == 0) {
    if (fVar4 < fVar5) {
      *(undefined4 *)(param_1 + 0xb7c) = 1;
      uVar2 = DAT_002e9830;
      *(undefined4 *)(param_1 + 0xb10) = 0x3c;
      *(undefined4 *)(param_1 + 0xb14) = uVar2;
      *(undefined4 *)(param_1 + 0xb0c) = 0;
      puVar3 = (uint *)func_002C11E8(aiStack_70,0,0,0);
      func_0016898C(*(int *)(param_1 + 0xdb4),puVar3);
    }
  }
  else if (*(int *)(param_1 + 0xb7c) == 1) {
    fVar4 = *(float *)(param_1 + 0xe1c);
    fVar4 = fVar4 + -fVar4 * DAT_002e9834;
    *(float *)(param_1 + 0xe1c) = fVar4;
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      *(float *)(param_1 + 0xe1c) = fVar5;
      return func_006640EC((undefined4 *)(param_1 + 0x8c8),0x16,fVar4);
    }
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
  }
  *(float *)(param_1 + 0x3e0) = fVar5;
  return 0;
}

