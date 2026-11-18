#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_0039c9c8;
extern float DAT_0039c9cc;
extern float DAT_0039c9d0;
extern float DAT_0039c9d4;
extern undefined4 DAT_0039c9d8;
extern float DAT_0039c9dc;
extern float DAT_0039c9e0;
extern float DAT_0039c9e4;
extern float DAT_0039c9e8;
extern undefined4 *DAT_0039c9ec;
extern undefined4 DAT_0039c9f0;

// USA 0039C798 <- EU 0039C774 (Ghidra, non-matching)
// GLOBAL DAT_0039c9c8 float
// GLOBAL DAT_0039c9cc float
// GLOBAL DAT_0039c9d0 float
// GLOBAL DAT_0039c9d4 float
// GLOBAL DAT_0039c9d8 undefined4
// GLOBAL DAT_0039c9dc float
// GLOBAL DAT_0039c9e0 float
// GLOBAL DAT_0039c9e4 float
// GLOBAL DAT_0039c9e8 float
// GLOBAL DAT_0039c9ec undefined4 *
// GLOBAL DAT_0039c9f0 undefined4

void func_0039C798(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fparam_0;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  uVar1 = DAT_0039c9f0;
  fVar6 = DAT_0039c9d0;
  fparam_0 = DAT_0039c9cc;
  fVar9 = DAT_0039c9c8;
  uVar4 = 1;
  if (*(int *)(param_1 + 0x430) != 0) {
    if (*(int *)(param_1 + 0x430) == 1) {
      if (*(uint *)(param_1 + 0x450) < *(uint *)(param_1 + 0x454)) {
        *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x450) + 1;
        uVar5 = *(uint *)(param_1 + 0x454);
        if (uVar5 != 0) {
          uVar4 = *(uint *)(param_1 + 0x450);
        }
        if ((uVar5 != 0 && uVar4 != 0) && (fVar6 = fparam_0, uVar4 < uVar5)) {
          fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
          fVar6 = fVar6 * *(float *)(param_1 + 0x458);
        }
        local_28 = *(float *)(param_1 + 0x3dc);
        uStack_20 = *(undefined4 *)(param_1 + 0x3e4);
        local_24 = *(float *)(param_1 + 0x3e0) + fVar6 * DAT_0039c9d4;
        *(float *)(param_1 + 0x3e0) = local_24;
        func_00115DC8(&local_28);
      }
      else {
        *(undefined1 *)(param_1 + 0x2d7) = 1;
      }
      fVar6 = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0xc);
      if (0x3f000000 < (int)ALBW_AS_U32(fVar6)) {
        fVar7 = fparam_0;
        if ((DAT_0039c9e0 < fVar6) && (fVar7 = DAT_0039c9e4, fVar6 < DAT_0039c9dc)) {
          fVar7 = (fVar9 * (fVar6 - DAT_0039c9e0)) / DAT_0039c9e8 + fparam_0;
        }
        fVar7 = fVar7 * **(float **)(*(int *)(param_1 + 0x2d0) + 0x14);
        *(float *)(param_1 + 0x480) = fVar7;
        *(float *)(param_1 + 0x484) = fVar7;
        *(float *)(param_1 + 0x488) = fVar7;
      }
    }
    return;
  }
  if (*(uint *)(param_1 + 0x450) < *(uint *)(param_1 + 0x454)) {
    *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x450) + 1;
    uVar5 = *(uint *)(param_1 + 0x454);
    if (uVar5 != 0) {
      uVar4 = *(uint *)(param_1 + 0x450);
    }
    fVar7 = fVar6;
    if ((uVar5 != 0 && uVar4 != 0) && (fVar7 = fparam_0, uVar4 < uVar5)) {
      fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = fVar7 * *(float *)(param_1 + 0x458);
    }
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_28,pfVar2,(float *)(param_1 + 0x3d0));
    local_24 = fVar6;
    func_00115DC8(&local_28);
    iVar3 = func_0068C690(&local_28);
    fVar8 = (float)VectorSignedToFloat(*DAT_0039c9ec,(byte)(in_fpscr >> 0x15) & 3);
    func_0051D2F4((int *)(param_1 + 1000),iVar3,0,(int)(fVar8 * (fparam_0 - fVar7)),
                  (fparam_0 - fVar7) * fVar9);
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fparam_0);
    *(float *)(param_1 + 0x3e0) = fVar6;
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x4bc));
    *(float *)(param_1 + 0x3e0) = fVar6;
    return;
  }
  *(undefined4 *)(param_1 + 0x454) = 0x5a;
  *(undefined4 *)(param_1 + 0x458) = uVar1;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x430) = 1;
  return;
}

