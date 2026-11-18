#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0037BB90(float *param_1,float *param_2,int *param_3);
extern int func_00559B08(float *param_1);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern float DAT_005141f0;
extern float DAT_005141f4;
extern float DAT_005141f8;

// USA 00514118 <- EU 005140F0 (Ghidra, non-matching)
// GLOBAL DAT_005141f0 float
// GLOBAL DAT_005141f4 float
// GLOBAL DAT_005141f8 float

void func_00514118(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  fVar4 = *(float *)(param_1 + 0x598);
  *(float *)(param_1 + 0x598) = fVar4 + (DAT_005141f0 - fVar4) * DAT_005141f4;
  func_0037BB90((float *)(param_1 + 0x59c),(float *)(param_1 + 0x3d0),(int *)(param_1 + 1000));
  iVar2 = *(int *)(*(int *)(param_1 + 0x4b0) + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < DAT_005141f8) {
      if (DAT_005141f8 < *(float *)(iVar2 + 8)) goto LAB_005141ac;
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_005141ac;
    puVar3 = (uint *)func_002C11E8(aiStack_68,9,10,0);
    func_0016898C(*(int *)(param_1 + 0x4b0),puVar3);
  }
LAB_005141ac:
  bVar1 = func_00559B08((float *)(param_1 + 0x59c));
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x574);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x578);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x57c);
    func_0066B94C((undefined4 *)(param_1 + 0x48c),0xf);
  }
  return;
}

