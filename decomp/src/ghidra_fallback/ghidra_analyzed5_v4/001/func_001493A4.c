#include "ghidra_types.h"

extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00435610(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A3018(int param_1,undefined4 *param_2,float *param_3);
extern int func_004CF478(int param_1,int param_2);
extern float DAT_00149548;
extern undefined DAT_0014954c;
extern float DAT_00149554;
extern float DAT_00149558;
extern float DAT_0014955c;

// USA 001493A4 <- EU 001493A4 (Ghidra, non-matching)
// GLOBAL DAT_00149548 float
// GLOBAL DAT_0014954c undefined
// GLOBAL DAT_00149554 float
// GLOBAL DAT_00149558 float
// GLOBAL DAT_0014955c float

undefined4 func_001493A4(int param_1)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  undefined4 extraout_r1_00;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  if (*(uint *)(param_1 + 0x418) < *(uint *)(param_1 + 0x41c)) {
    *(uint *)(param_1 + 0x418) = *(uint *)(param_1 + 0x418) + 1;
    fVar8 = DAT_00149548;
    if (*(char *)(param_1 + 0x458) != '\0') {
      *(undefined1 *)(param_1 + 0x458) = 0;
      func_003521F0(param_1 + 0x324,(uint)(*(char *)(param_1 + 0x459) != '\0'));
      iVar1 = 0;
      iVar6 = 0;
      if (*(int *)(param_1 + 0x344) != 0) {
        func_004A1B9C(&local_38,*(int *)(param_1 + 0x344),(uint *)&DAT_0014954c);
        iVar1 = local_38;
        iVar6 = iStack_34;
      }
      local_20 = *(undefined4 *)(param_1 + 0x450);
      local_24 = fVar8;
      local_1c = fVar8;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == iVar6)) {
        func_004A3018(iVar1,(undefined4 *)(param_1 + 0x3d0),&local_24);
      }
    }
    fVar10 = DAT_00149554;
    func_0014D994((float *)(param_1 + 0x4c4),fVar8,DAT_00149558,DAT_00149554);
    uVar3 = *(uint *)(param_1 + 0x41c);
    uVar2 = extraout_r1;
    if (uVar3 != 0) {
      uVar2 = *(uint *)(param_1 + 0x418);
    }
    fVar7 = DAT_0014955c;
    if ((uVar3 != 0 && uVar2 != 0) && (fVar7 = fVar8, uVar2 < uVar3)) {
      fVar7 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = fVar7 * *(float *)(param_1 + 0x420);
    }
    puVar4 = (undefined4 *)(param_1 + 0x45c);
    *(float *)(param_1 + 0x430) = (fVar8 - fVar7) * fVar10;
    fVar8 = *(float *)(param_1 + 0x4c4);
    fVar10 = *(float *)(param_1 + 0x43c);
    iVar1 = *(int *)(param_1 + 0x45c);
    uVar9 = *(undefined4 *)(param_1 + 0x438);
    *(float *)(iVar1 + 0x58) = *(float *)(param_1 + 0x434) * fVar8;
    *(undefined4 *)(iVar1 + 0x5c) = uVar9;
    *(float *)(iVar1 + 0x60) = fVar10 * fVar8;
    iVar1 = *(int *)(param_1 + 0x45c);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x440);
    piVar5 = *(int **)(param_1 + 0x444);
    *(int **)(iVar1 + 8) = piVar5;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x448);
    func_004356B4((int *)*puVar4);
    func_00435610(param_1,extraout_r1_00,puVar4,piVar5);
    return func_004CF478(*(int *)(param_1 + 0x40c),0);
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return 0;
}

