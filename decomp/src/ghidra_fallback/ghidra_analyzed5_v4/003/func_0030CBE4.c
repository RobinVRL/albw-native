#include "ghidra_types.h"

extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int *DAT_0030cc4c;
extern float DAT_0030cc50;
extern float DAT_0030cc54;
extern float DAT_0030cc58;

// USA 0030CBE4 <- EU 0030CBC0 (Ghidra, non-matching)
// GLOBAL DAT_0030cc4c int *
// GLOBAL DAT_0030cc50 float
// GLOBAL DAT_0030cc54 float
// GLOBAL DAT_0030cc58 float

uint func_0030CBE4(int param_1,float *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  piVar1 = DAT_0030cc4c;
  if (*DAT_0030cc4c == 0) {
    uVar2 = 1;
  }
  else {
    func_004D838C((float *)(param_1 + 0x38),param_2,DAT_0030cc58,DAT_0030cc54,DAT_0030cc50);
    uStack_14 = *(undefined4 *)(param_1 + 0x3c);
    local_18 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x74);
    local_10 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x78);
    iVar3 = *(int *)(*piVar1 + 0x18);
    func_001E8268(iVar3,(int *)(param_1 + 0x30),&local_18,(undefined4 *)(param_1 + 0x44));
    uVar2 = *(uint *)(iVar3 + 0x10c) >> 0x1f;
  }
  return uVar2;
}

