#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_006687F0(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0039c768;
extern float DAT_0039c76c;
extern float DAT_0039c770;

// USA 0039C620 <- EU 0039C5FC (Ghidra, non-matching)
// GLOBAL DAT_0039c768 float
// GLOBAL DAT_0039c76c float
// GLOBAL DAT_0039c770 float

undefined4 func_0039C620(int param_1,float fparam_0,float fparam_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  fVar9 = DAT_0039c76c;
  fVar8 = DAT_0039c768;
  if (*(int *)(param_1 + 0x430) == 0) {
    uVar3 = *(uint *)(param_1 + 0x450);
    uVar4 = *(uint *)(param_1 + 0x454);
    bVar5 = uVar3 < uVar4;
    if (bVar5) {
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0x450) = uVar3;
    }
    if (uVar4 != 0) {
      uVar3 = *(uint *)(param_1 + 0x450);
    }
    fVar6 = fVar9;
    if ((uVar4 != 0 && uVar3 != 0) && (fVar6 = fVar8, uVar3 < uVar4)) {
      fVar6 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = fVar6 * *(float *)(param_1 + 0x458);
    }
    fVar7 = **(float **)(*(int *)(param_1 + 0x2d0) + 0x14) * fVar6;
    *(float *)(param_1 + 0x480) = fVar7;
    *(float *)(param_1 + 0x484) = fVar7;
    *(float *)(param_1 + 0x488) = fVar7;
    fVar8 = (fVar8 - fVar6) * DAT_0039c770;
    *(float *)(param_1 + 0x4bc) = fVar8;
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fVar8);
    *(float *)(param_1 + 0x3e0) = fVar9;
    if (!bVar5) {
      *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + 1;
      *(undefined4 *)(param_1 + 0x454) = 0;
      *(float *)(param_1 + 0x458) = fVar9;
      *(undefined4 *)(param_1 + 0x450) = 0;
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x430) == 1) {
    if (*(uint *)(param_1 + 0x454) <= *(uint *)(param_1 + 0x450)) {
      return func_006687F0((undefined4 *)(param_1 + 0x40c),1);
    }
    *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x450) + 1;
    pfVar1 = (float *)func_00520FC0();
    func_00115C70(&fStack_28,pfVar1,(float *)(param_1 + 0x3d0));
    local_24 = fVar9;
    func_00115DC8(&fStack_28);
    iVar2 = func_0068C690(&fStack_28);
    *(int *)(param_1 + 1000) = iVar2;
  }
  return 0;
}

