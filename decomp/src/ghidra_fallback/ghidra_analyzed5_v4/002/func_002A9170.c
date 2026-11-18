#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_002A90E8(int param_1);
extern float func_004F898C(void);
extern float func_004F9594(void);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0066226C(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float *DAT_002a947c;
extern float DAT_002a9480;
extern float DAT_002a9484;
extern float DAT_002a9488;
extern int *DAT_002a948c;
extern int *DAT_002a9490;
extern float DAT_002a9494;
extern float DAT_002a9498;
extern int *DAT_002a949c;
extern float DAT_002a94a0;
extern int DAT_002a94a4;
extern float DAT_002a94a8;
extern int *DAT_002a94ac;
extern float DAT_002a94b0;
extern undefined4 DAT_002a94b4;

// USA 002A9170 <- EU 002A914C (Ghidra, non-matching)
// GLOBAL DAT_002a947c float *
// GLOBAL DAT_002a9480 float
// GLOBAL DAT_002a9484 float
// GLOBAL DAT_002a9488 float
// GLOBAL DAT_002a948c int *
// GLOBAL DAT_002a9490 int *
// GLOBAL DAT_002a9494 float
// GLOBAL DAT_002a9498 float
// GLOBAL DAT_002a949c int *
// GLOBAL DAT_002a94a0 float
// GLOBAL DAT_002a94a4 int
// GLOBAL DAT_002a94a8 float
// GLOBAL DAT_002a94ac int *
// GLOBAL DAT_002a94b0 float
// GLOBAL DAT_002a94b4 undefined4

undefined4 func_002A9170(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  local_38 = *DAT_002a947c;
  fStack_34 = DAT_002a947c[1];
  local_30 = DAT_002a947c[2];
  puVar3 = func_002A90E8(param_1);
  fVar13 = DAT_002a9484;
  fVar11 = DAT_002a9480;
  if ((puVar3 == (undefined4 *)0x0) ||
     ((puVar3 = func_002A90E8(param_1), puVar3 != (undefined4 *)0x0 &&
      (puVar3 = func_002A90E8(param_1), *(char *)(puVar3 + 0x2e7) != '\0')))) {
    *(float *)(param_1 + 0x3dc) = fVar13;
    *(float *)(param_1 + 0x3e4) = fVar13;
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffc;
    *(float *)(param_1 + 0x4e4) = fVar11;
    *(float *)(param_1 + 0x4e8) = fVar11;
    *(float *)(param_1 + 0x4ec) = fVar11;
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  else {
    fparam_0 = DAT_002a9494;
    piVar2 = DAT_002a9490;
    piVar1 = DAT_002a948c;
    fVar12 = DAT_002a9488;
    fVar10 = *(float *)(param_1 + 0x8e0);
    *(float *)(param_1 + 0x8e0) = fVar10 + (fVar11 - fVar10) * DAT_002a9488;
    if (*(char *)(param_1 + 0x90c) == '\0') {
      *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) - *piVar1;
      fVar11 = func_004F898C();
      fVar11 = *(float *)(param_1 + 0x3e0) - fVar11;
      fVar10 = func_004F9594();
      uVar6 = in_fpscr & 0xfffffff;
      if (fVar11 < -fVar10) {
        fVar11 = -fVar10;
      }
      *(float *)(param_1 + 0x3e0) = fVar11;
      in_fpscr = uVar6 | (uint)(*(float *)(param_1 + 0x8e8) <= *(float *)(param_1 + 0x3d4)) << 0x1d;
      bVar9 = SUB41(in_fpscr >> 0x1d,0);
      if (!bVar9) {
        in_fpscr = uVar6 | (uint)(fVar13 <= fVar11) << 0x1d;
        bVar9 = SUB41(in_fpscr >> 0x1d,0);
      }
      if (!bVar9) {
        *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x8e8);
        *(float *)(param_1 + 0x3e0) = fVar13;
      }
      iVar4 = func_0051E6D0(*piVar2,(float *)(param_1 + 0x3d0),fparam_0);
      if (iVar4 != 0) {
        uVar8 = *(undefined4 *)(param_1 + 0x3e0);
        func_0014FAFC(param_1,*(uint *)(param_1 + 0x8ec),*(float *)(param_1 + 0x8e0));
        *(undefined4 *)(param_1 + 0x3e0) = uVar8;
        return func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),
                      (float *)(param_1 + 0x3dc));
      }
      *(float *)(param_1 + 0x3e0) = fVar13;
      *(float *)(param_1 + 0x8e0) = fVar13;
      *(float *)(param_1 + 0x3dc) = fVar13;
      *(float *)(param_1 + 0x3e4) = fVar13;
      *(undefined1 *)(param_1 + 0x90c) = 1;
    }
    *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) - *piVar1;
    puVar3 = func_002A90E8(param_1);
    if ((puVar3 != (undefined4 *)0x0) &&
       (puVar3 = func_002A90E8(param_1), *(char *)((int)puVar3 + 0xb9b) != '\0')) {
      return func_0066226C((undefined4 *)(param_1 + 0x8bc),1);
    }
    *(float *)(param_1 + 0x3d0) =
         *(float *)(param_1 + 0x3d0) + (DAT_002a9498 - *(float *)(param_1 + 0x3d0)) * fVar12;
    iVar5 = func_00520FC0();
    iVar4 = DAT_002a94a4;
    piVar1 = DAT_002a949c;
    *(float *)(param_1 + 0x3d8) =
         *(float *)(param_1 + 0x3d8) +
         (*(float *)(iVar5 + 8) - *(float *)(param_1 + 0x3d8)) * fVar12;
    fVar13 = DAT_002a94a0;
    uVar6 = *piVar1 + *(int *)(param_1 + 0x8ec);
    *(uint *)(param_1 + 0x8ec) = uVar6;
    pfVar7 = (float *)(iVar4 + (uVar6 >> 0x18) * 0x10);
    fVar11 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_38 = (*pfVar7 + pfVar7[1] * fVar11 * fVar13) * DAT_002a94a8;
    uVar6 = *DAT_002a94ac + *(int *)(param_1 + 0x8f0);
    *(uint *)(param_1 + 0x8f0) = uVar6;
    iVar4 = iVar4 + (uVar6 >> 0x18) * 0x10;
    fVar11 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_30 = (*(float *)(iVar4 + 8) + *(float *)(iVar4 + 0xc) * fVar11 * fVar13) * DAT_002a94b0;
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_38);
    if (*(uint *)(param_1 + 0x900) < *(uint *)(param_1 + 0x904)) {
      *(uint *)(param_1 + 0x900) = *(uint *)(param_1 + 0x900) + 1;
    }
    else {
      iVar4 = func_0051E6D0(*piVar2,(float *)(param_1 + 0x3d0),fparam_0);
      if (iVar4 != 0) {
        pfVar7 = (float *)func_00520FC0();
        func_00115C70(&local_38,pfVar7,(float *)(param_1 + 0x3d0));
        func_0068C690(&local_38);
        uVar8 = DAT_002a94b4;
        *(undefined4 *)(param_1 + 0x904) = 2;
        *(undefined4 *)(param_1 + 0x908) = uVar8;
        *(undefined4 *)(param_1 + 0x900) = 0;
        *(undefined1 *)(param_1 + 0x90d) = 1;
        return 0;
      }
    }
  }
  return 0;
}

