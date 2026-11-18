#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_0068C690(float *param_1);
extern float DAT_001548d4;
extern float DAT_001548d8;
extern float DAT_001548dc;
extern float DAT_001548e0;
extern float DAT_001548e4;
extern float DAT_001548e8;
extern float DAT_001548ec;
extern int DAT_001548f0;
extern float DAT_001548f4;
extern float DAT_001548f8;
extern float DAT_001548fc;
extern int DAT_00154900;
extern float DAT_00154904;
extern float DAT_00154908;
extern float DAT_0015490c;
extern float DAT_00154910;
extern int DAT_00154914;
extern float DAT_00154918;

// USA 001546BC <- EU 001546C0 (Ghidra, non-matching)
// GLOBAL DAT_001548d4 float
// GLOBAL DAT_001548d8 float
// GLOBAL DAT_001548dc float
// GLOBAL DAT_001548e0 float
// GLOBAL DAT_001548e4 float
// GLOBAL DAT_001548e8 float
// GLOBAL DAT_001548ec float
// GLOBAL DAT_001548f0 int
// GLOBAL DAT_001548f4 float
// GLOBAL DAT_001548f8 float
// GLOBAL DAT_001548fc float
// GLOBAL DAT_00154900 int
// GLOBAL DAT_00154904 float
// GLOBAL DAT_00154908 float
// GLOBAL DAT_0015490c float
// GLOBAL DAT_00154910 float
// GLOBAL DAT_00154914 int
// GLOBAL DAT_00154918 float

int func_001546BC(int param_1,int param_2)

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
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c ((float *)(albw_frame + 0x14))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  pfVar2 = (float *)func_00520FC0();
  local_58 = *pfVar2;
  local_50 = pfVar2[2];
  local_54 = *(undefined4 *)(param_1 + 0xc);
  func_00115C70(local_4c,(float *)(param_1 + 0x3d0),&local_58);
  local_44 = local_44 * DAT_001548d4;
  uVar3 = func_0068C690(local_4c);
  fVar11 = DAT_001548e0;
  fVar9 = DAT_001548dc;
  fVar10 = DAT_001548d8;
  fVar12 = SQRT(local_4c[0] * local_4c[0] + local_44 * local_44);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar7 * fVar9 * fVar10;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar11) << 0x1e |
               (uint)(fVar11 <= fVar8) << 0x1d;
    bVar1 = (byte)(in_fpscr >> 0x18);
    fVar7 = DAT_001548e4;
    if (((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) &&
       (fVar7 = DAT_001548e8, (int)ALBW_AS_U32(fVar8) < 0x3f800000)) {
      fVar7 = DAT_001548e4 + DAT_001548ec * fVar8;
    }
    *(float *)(param_1 + 0x908) = fVar7;
    if ((uVar3 & 0x20000000) == 0) {
      *(undefined1 *)(param_1 + 0x92c) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x92c) = 0;
    }
  }
  local_34 = DAT_001548f4;
  if (DAT_001548f0 <= (int)ALBW_AS_U32(fVar12)) {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    iVar6 = DAT_00154900;
    fVar12 = DAT_001548fc;
    fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = *(uint *)(param_1 + 0x900) + (int)(fVar7 * fVar9 * fVar10 * DAT_001548f8);
    *(uint *)(param_1 + 0x900) = uVar5;
    pfVar2 = (float *)(iVar6 + (uVar5 >> 0x18) * 0x10);
    fVar9 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (*pfVar2 + pfVar2[1] * fVar9 * fVar12 + fVar10) * DAT_00154904;
    local_34 = DAT_00154908;
    if ((fVar11 < fVar10) && (local_34 = DAT_0015490c, (int)ALBW_AS_U32(fVar10) < 0x3f800000)) {
      local_34 = DAT_00154908 + DAT_00154910 * fVar10;
    }
  }
  iVar6 = DAT_00154914;
  if (*(char *)(param_1 + 0x92c) != '\0') {
    iVar6 = -DAT_00154914;
  }
  local_3c = fVar11;
  local_38 = fVar11;
  func_004D7F70(&local_3c,uVar3 + iVar6);
  local_34 = local_34 * DAT_00154918;
  local_44 = local_44 * DAT_00154918;
  func_00115C70(&local_3c,&local_3c,local_4c);
  iVar6 = func_0068C690(&local_3c);
  return iVar6;
}

