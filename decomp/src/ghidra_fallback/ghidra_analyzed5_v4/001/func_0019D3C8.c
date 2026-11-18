// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0019D5C4(int param_1,float *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00556B3C(int param_1);
extern int func_0065A1EC(undefined4 *param_1,undefined1 param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int DAT_0019d598;
extern float DAT_0019d59c;
extern int DAT_0019d5a0;
extern float DAT_0019d5a4;
extern int DAT_0019d5a8;
extern float DAT_0019d5ac;
extern float DAT_0019d5b0;
extern float DAT_0019d5b4;
extern float DAT_0019d5b8;
extern int DAT_0019d5bc;
extern int *DAT_0019d5c0;

// USA 0019D3C8 <- EU 0019D3C8 (Ghidra, non-matching)
// GLOBAL DAT_0019d598 int
// GLOBAL DAT_0019d59c float
// GLOBAL DAT_0019d5a0 int
// GLOBAL DAT_0019d5a4 float
// GLOBAL DAT_0019d5a8 int
// GLOBAL DAT_0019d5ac float
// GLOBAL DAT_0019d5b0 float
// GLOBAL DAT_0019d5b4 float
// GLOBAL DAT_0019d5b8 float
// GLOBAL DAT_0019d5bc int
// GLOBAL DAT_0019d5c0 int *

undefined4 func_0019D3C8(int param_1)

{
  float fparam_3;
  int iVar1;
  bool bVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c ((float *)(albw_frame + 0x4))
  pfVar3 = (float *)func_00520FC0();
  fparam_1 = DAT_0019d59c;
  func_0014FB58(param_1,pfVar3,DAT_0019d598,DAT_0019d59c);
  iVar5 = *(int *)(param_1 + 0x8e0);
  iVar7 = DAT_0019d5a0 + iVar5;
  *(int *)(param_1 + 0x8e0) = iVar7;
  uVar4 = func_0019D5C4(param_1,local_1c,(uint)(iVar7 < iVar5));
  fVar14 = DAT_0019d5ac;
  fVar10 = DAT_0019d5a4;
  pfVar6 = (float *)(DAT_0019d5a8 + (*(uint *)(param_1 + 0x8e0) >> 0x18) * 0x10);
  fVar8 = (float)VectorUnsignedToFloat
                           (*(uint *)(param_1 + 0x8e0) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (*pfVar6 + pfVar6[1] * fVar8 * DAT_0019d5a4) * *(float *)(param_1 + 0x8ec);
  pfVar6 = (float *)(DAT_0019d5a8 + (uVar4 >> 0x18) * 0x10);
  fVar8 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = pfVar6[2];
  fVar13 = pfVar6[3];
  fVar11 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3dc) = (*pfVar6 + pfVar6[1] * fVar8 * DAT_0019d5a4) * fVar9;
  *(float *)(param_1 + 0x3e0) = fVar14;
  fparam_3 = DAT_0019d5b4;
  fVar8 = DAT_0019d5b0;
  *(float *)(param_1 + 0x3e4) = (fVar12 + fVar13 * fVar11 * fVar10) * fVar9;
  local_20 = *(float *)(param_1 + 0x3d4);
  func_0068C794(&local_20,pfVar3[1] + fVar8,fparam_1,DAT_0019d5b8,fparam_3);
  iVar1 = DAT_0019d5bc;
  *(float *)(param_1 + 0x3e0) = local_20 - *(float *)(param_1 + 0x3d4);
  fVar10 = pfVar3[1] - *(float *)(param_1 + 0xc);
  if (fVar10 <= fVar14) {
    fVar10 = -fVar10;
  }
  if (((iVar1 <= (int)ALBW_AS_U32(fVar10)) || (iVar1 + 0xe00000 <= (int)ALBW_AS_U32(local_1c[0]))) ||
     (bVar2 = func_00556B3C(*DAT_0019d5c0), bVar2)) {
    func_0065A1EC((undefined4 *)(param_1 + 0x8bc),6);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x8f8);
    bVar2 = *(uint *)(param_1 + 0x8f4) < uVar4;
    if (bVar2) {
      uVar4 = *(uint *)(param_1 + 0x8f4) + 1;
    }
    if (bVar2) {
      *(uint *)(param_1 + 0x8f4) = uVar4;
    }
    if (!bVar2 && iVar7 < iVar5) {
      return func_0065A1EC((undefined4 *)(param_1 + 0x8bc),2);
    }
  }
  return 0;
}

