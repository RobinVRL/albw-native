// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0019DF7C(int param_1,float *param_2,undefined1 *param_3,undefined1 *param_4);
extern int func_002862E4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int func_00520FC0(void);
extern int func_00556B3C(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0065A1EC(undefined4 *param_1,undefined1 param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_0019d9f4;
extern int DAT_0019d9f8;
extern float DAT_0019d9fc;
extern float DAT_0019da00;
extern int DAT_0019da04;
extern float DAT_0019da08;
extern float DAT_0019da0c;
extern float DAT_0019da10;
extern float DAT_0019da14;
extern float DAT_0019da18;
extern int *DAT_0019da1c;

// USA 0019D808 <- EU 0019D808 (Ghidra, non-matching)
// GLOBAL DAT_0019d9f4 int *
// GLOBAL DAT_0019d9f8 int
// GLOBAL DAT_0019d9fc float
// GLOBAL DAT_0019da00 float
// GLOBAL DAT_0019da04 int
// GLOBAL DAT_0019da08 float
// GLOBAL DAT_0019da0c float
// GLOBAL DAT_0019da10 float
// GLOBAL DAT_0019da14 float
// GLOBAL DAT_0019da18 float
// GLOBAL DAT_0019da1c int *

undefined4 func_0019D808(int param_1)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 ((float *)(albw_frame + 0xc))
  bVar1 = func_00556B3C(*DAT_0019d9f4);
  iVar4 = DAT_0019d9f8;
  if (!bVar1) {
    pfVar2 = (float *)func_00520FC0();
    func_0014FB58(param_1,pfVar2,iVar4,DAT_0019d9fc);
    local_30 = *(float *)(param_1 + 0x8ec);
    uVar3 = func_0019DF7C(param_1,&local_30,(undefined1 *)0x0,(undefined1 *)0x0);
    pfVar2 = (float *)(DAT_0019da04 + (*(uint *)(param_1 + 0x8e0) >> 0x18) * 0x10);
    fVar6 = (float)VectorUnsignedToFloat
                             (*(uint *)(param_1 + 0x8e0) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    pfVar5 = (float *)(DAT_0019da04 + (uVar3 >> 0x18) * 0x10);
    local_30 = (*pfVar2 + pfVar2[1] * fVar6 * DAT_0019da00) * local_30;
    fVar6 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_24[0] = *(float *)(param_1 + 0x3d4);
    fVar10 = (*pfVar5 + pfVar5[1] * fVar6 * DAT_0019da00) * local_30;
    fVar6 = DAT_0019da00;
    iVar4 = func_00520FC0();
    func_0068C794(local_24,*(float *)(iVar4 + 4) + DAT_0019da08,DAT_0019da14,DAT_0019da10,
                  DAT_0019da0c);
    fVar8 = pfVar5[2];
    fVar9 = pfVar5[3];
    fVar7 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3dc) = fVar10;
    *(float *)(param_1 + 0x3e0) = local_24[0] - *(float *)(param_1 + 0x3d4);
    *(float *)(param_1 + 0x3e4) = (fVar8 + fVar9 * fVar7 * fVar6) * local_30;
  }
  lVar11 = func_0058ACC8(param_1,DAT_0019da18);
  if ((int)lVar11 == 0) {
    iVar4 = func_0058A8F0(param_1);
    if (iVar4 != 0) {
      return func_0065A1EC((undefined4 *)(param_1 + 0x8bc),4);
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
            *(int *)(param_1 + 0x900) * 0x30;
    local_2c = *(undefined4 *)(iVar4 + 0xc);
    local_28 = *(undefined4 *)(iVar4 + 0x1c);
    local_24[0] = *(float *)(iVar4 + 0x2c);
    iVar4 = func_00588BE4(param_1);
    local_30 = *(float *)(param_1 + 1000);
    func_002862E4(&local_2c,&local_30,*(undefined4 *)(param_1 + 0x2cc),
                  (uint)(iVar4 == *DAT_0019da1c));
  }
  return 0;
}

