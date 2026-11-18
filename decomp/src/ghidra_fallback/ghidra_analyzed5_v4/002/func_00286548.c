#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00520ED8(int param_1);
extern int func_00520EE4(int param_1);
extern int func_006611F8(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00286670;
extern undefined4 *DAT_00286674;
extern float DAT_00286678;
extern float DAT_0028667c;

// USA 00286548 <- EU 00286570 (Ghidra, non-matching)
// GLOBAL DAT_00286670 undefined4
// GLOBAL DAT_00286674 undefined4 *
// GLOBAL DAT_00286678 float
// GLOBAL DAT_0028667c float

undefined4 func_00286548(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_20 ((undefined1 *)(albw_frame + 0x0))
  fVar3 = *(float *)(*(int *)(param_1 + 0x434) + 0x58);
  iVar1 = func_0014EEC8(param_1,(uint)auStack_20,DAT_00286674,DAT_00286670,fVar3);
  if (iVar1 == 0) {
    fVar3 = fVar3 * DAT_00286678;
    fVar2 = *(float *)(param_1 + 0x3e0) - DAT_0028667c;
    *(float *)(param_1 + 0x3e0) = fVar2;
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    *(float *)(param_1 + 0x3e0) = fVar2;
    return func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  }
  iVar1 = func_00520ED8(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    return (**(code **)(*(int *)(param_1 + 800) + 0x38))(param_1 + 800);
  }
  iVar1 = func_00520EE4(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    return (**(code **)(*(int *)(param_1 + 800) + 0x34))(param_1 + 800);
  }
  return func_006611F8((undefined4 *)(param_1 + 0x40c),1);
}

