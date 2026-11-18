#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_0068C690(float *param_1);
extern float DAT_0019d7c0;
extern float DAT_0019d7c4;
extern float DAT_0019d7c8;
extern float DAT_0019d7cc;
extern float DAT_0019d7d0;
extern float DAT_0019d7d4;
extern float DAT_0019d7d8;
extern int DAT_0019d7dc;
extern float DAT_0019d7e0;
extern float DAT_0019d7e4;
extern float DAT_0019d7e8;
extern int DAT_0019d7ec;
extern float DAT_0019d7f0;
extern float DAT_0019d7f4;
extern float DAT_0019d7f8;
extern float DAT_0019d7fc;
extern int DAT_0019d800;
extern float DAT_0019d804;

// USA 0019D5C4 <- EU 0019D5C4 (Ghidra, non-matching)
// GLOBAL DAT_0019d7c0 float
// GLOBAL DAT_0019d7c4 float
// GLOBAL DAT_0019d7c8 float
// GLOBAL DAT_0019d7cc float
// GLOBAL DAT_0019d7d0 float
// GLOBAL DAT_0019d7d4 float
// GLOBAL DAT_0019d7d8 float
// GLOBAL DAT_0019d7dc int
// GLOBAL DAT_0019d7e0 float
// GLOBAL DAT_0019d7e4 float
// GLOBAL DAT_0019d7e8 float
// GLOBAL DAT_0019d7ec int
// GLOBAL DAT_0019d7f0 float
// GLOBAL DAT_0019d7f4 float
// GLOBAL DAT_0019d7f8 float
// GLOBAL DAT_0019d7fc float
// GLOBAL DAT_0019d800 int
// GLOBAL DAT_0019d804 float

int func_0019D5C4(int param_1,float *param_2,int param_3)

{
  byte bVar1;
  float *pfVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 ((float *)(albw_frame + 0xc))
  #define local_2c (*(float *)(albw_frame + 0x14))
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(local_34,(float *)(param_1 + 0x3d0),pfVar2);
  local_2c = local_2c * DAT_0019d7c0;
  uVar3 = func_0068C690(local_34);
  fVar11 = DAT_0019d7cc;
  fVar9 = DAT_0019d7c8;
  fVar10 = DAT_0019d7c4;
  fVar12 = SQRT(local_34[0] * local_34[0] + local_2c * local_2c);
  *param_2 = fVar12;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x8e0) = 0;
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar7 * fVar9 * fVar10;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar11) << 0x1e |
               (uint)(fVar11 <= fVar8) << 0x1d;
    bVar1 = (byte)(in_fpscr >> 0x18);
    fVar7 = DAT_0019d7d0;
    if (((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) &&
       (fVar7 = DAT_0019d7d4, (int)ALBW_AS_U32(fVar8) < 0x3f800000)) {
      fVar7 = DAT_0019d7d0 + DAT_0019d7d8 * fVar8;
    }
    *(float *)(param_1 + 0x8ec) = fVar7;
    if ((uVar3 & 0x20000000) == 0) {
      *(undefined1 *)(param_1 + 0x904) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x904) = 0;
    }
  }
  local_38 = DAT_0019d7e0;
  if (DAT_0019d7dc <= (int)ALBW_AS_U32(fVar12)) {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    iVar6 = DAT_0019d7ec;
    fVar12 = DAT_0019d7e8;
    fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = (int)(fVar7 * fVar9 * fVar10 * DAT_0019d7e4) + *(uint *)(param_1 + 0x8e8);
    *(uint *)(param_1 + 0x8e8) = uVar5;
    pfVar2 = (float *)(iVar6 + (uVar5 >> 0x18) * 0x10);
    fVar9 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (*pfVar2 + pfVar2[1] * fVar9 * fVar12 + fVar10) * DAT_0019d7f0;
    local_38 = DAT_0019d7f4;
    if ((fVar11 < fVar10) && (local_38 = DAT_0019d7f8, (int)ALBW_AS_U32(fVar10) < 0x3f800000)) {
      local_38 = DAT_0019d7f4 + DAT_0019d7fc * fVar10;
    }
  }
  iVar6 = DAT_0019d800;
  if (*(char *)(param_1 + 0x904) != '\0') {
    iVar6 = -DAT_0019d800;
  }
  local_40 = fVar11;
  local_3c = fVar11;
  func_004D7F70(&local_40,uVar3 + iVar6);
  local_38 = local_38 * DAT_0019d804;
  local_2c = local_2c * DAT_0019d804;
  func_00115C70(&local_40,&local_40,local_34);
  iVar6 = func_0068C690(&local_40);
  return iVar6;
}

