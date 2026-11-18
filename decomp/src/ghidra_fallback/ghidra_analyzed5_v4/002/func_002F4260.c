#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00520FC0(void);
extern int func_00548B78(int param_1,float *param_2,float fparam_0);
extern int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3);
extern float func_0058A404(int param_1);
extern int DAT_002f454c;
extern int *DAT_002f4550;
extern int DAT_002f4554;
extern float DAT_002f4558;
extern float DAT_002f455c;
extern int DAT_002f4560;
extern int DAT_002f4564;

// USA 002F4260 <- EU 002F423C (Ghidra, non-matching)
// GLOBAL DAT_002f454c int
// GLOBAL DAT_002f4550 int *
// GLOBAL DAT_002f4554 int
// GLOBAL DAT_002f4558 float
// GLOBAL DAT_002f455c float
// GLOBAL DAT_002f4560 int
// GLOBAL DAT_002f4564 int

undefined4 func_002F4260(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((int *)(albw_frame + 0x0))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  iStack_2c = param_1;
  local_28 = param_2;
  pfVar3 = (float *)func_00520FC0();
  iVar9 = DAT_002f4554;
  piVar2 = DAT_002f4550;
  iVar4 = DAT_002f454c;
  uVar10 = 0;
  if (local_28 != 2 && local_28 != 3) {
    if (local_28 != 4) {
      return 0x23;
    }
    fVar15 = DAT_002f4558;
    fVar16 = DAT_002f455c;
    fVar12 = func_0058A404(param_1);
    uVar10 = (uint)((int)ALBW_AS_U32(fVar12) <= iVar4);
    if ((int)ALBW_AS_U32(fVar12) <= iVar4) {
      uVar10 = func_00548E78(param_1,0,0x1e);
    }
    iVar4 = func_00548E78(param_1,0x1e,0x32);
    iVar5 = func_00548E78(param_1,0x46,0x14);
    uVar6 = func_00111A64((uint *)(*piVar2 + 0x660));
    iVar7 = (int)((ulonglong)(uVar10 + iVar4 + iVar5) * (ulonglong)uVar6 >> 0x20);
    if (iVar7 < (int)uVar10) {
      return 8;
    }
    iVar7 = iVar7 - uVar10;
    if (iVar7 < iVar4) {
      fVar12 = *(float *)(param_1 + 0x3d0) - *pfVar3;
      fVar13 = *(float *)(param_1 + 0x3d4) - pfVar3[1];
      fVar14 = *(float *)(param_1 + 0x3d8) - pfVar3[2];
      if (iVar9 < (int)ALBW_AS_U32((fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14))) {
        return 6;
      }
      iVar9 = func_00548B78(param_1,pfVar3,fVar15);
      if (iVar9 != 0) {
        return 7;
      }
      iVar9 = func_00548B78(param_1,pfVar3,fVar16);
      if (iVar9 != 0) {
        return 5;
      }
    }
    if (iVar7 - iVar4 < iVar5) {
      return 3;
    }
    return 2;
  }
  fVar15 = DAT_002f4558;
  fVar16 = DAT_002f455c;
  fVar12 = func_0058A404(param_1);
  if (((int)ALBW_AS_U32(fVar12) <= iVar4) &&
     (uVar10 = (uint)(0x3f000000 < (int)ALBW_AS_U32(fVar12)), (int)ALBW_AS_U32(fVar12) < 0x3f000001)) {
    uVar10 = 2;
  }
  local_40[0] = *(int *)(DAT_002f4560 + 0x3ac);
  local_40[1] = *(undefined4 *)(DAT_002f4560 + 0x3b0);
  local_40[2] = *(undefined4 *)(DAT_002f4560 + 0x3b4);
  iVar7 = local_40[uVar10];
  local_40[0] = *(int *)(DAT_002f4560 + 0x3b8);
  local_40[1] = *(undefined4 *)(DAT_002f4560 + 0x3bc);
  local_40[2] = *(undefined4 *)(DAT_002f4560 + 0x3c0);
  iVar4 = local_40[uVar10];
  local_40[0] = *(int *)(DAT_002f4560 + 0x3c4);
  local_40[1] = *(undefined4 *)(DAT_002f4560 + 0x3c8);
  local_40[2] = *(undefined4 *)(DAT_002f4560 + 0x3cc);
  iVar5 = local_40[uVar10];
  local_40[2] = *(undefined4 *)(DAT_002f4560 + 0x3d8);
  local_40[0] = *(int *)(DAT_002f4560 + 0x3d0);
  local_40[1] = *(undefined4 *)(DAT_002f4560 + 0x3d4);
  iVar11 = local_40[uVar10];
  cVar1 = *(char *)(DAT_002f4564 + param_1);
  if ((cVar1 == '\b' || cVar1 == '\t') || (cVar1 == '\n' || cVar1 == '\v')) {
    if (cVar1 == '\a') {
      iVar4 = iVar4 >> 1;
    }
    else {
      if (cVar1 != '\t') {
        if (cVar1 == '\v') {
          iVar11 = 0;
          goto LAB_002f43d4;
        }
        if (cVar1 != '\f') goto LAB_002f43d4;
      }
      iVar5 = 0;
    }
  }
LAB_002f43d4:
  uVar10 = func_00111A64((uint *)(*piVar2 + 0x660));
  iVar8 = (int)((ulonglong)(uint)(iVar4 + iVar7 + iVar5 + iVar11) * (ulonglong)uVar10 >> 0x20);
  if (iVar8 < iVar7) {
    pfVar3 = (float *)func_00520FC0();
    fVar12 = *(float *)(param_1 + 0x3d0) - *pfVar3;
    fVar14 = *(float *)(param_1 + 0x3d4) - pfVar3[1];
    fVar13 = *(float *)(param_1 + 0x3d8) - pfVar3[2];
    if (iVar9 < (int)ALBW_AS_U32((fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13))) {
      return 6;
    }
    iVar4 = func_00548B78(param_1,pfVar3,fVar15);
    if (iVar4 == 0) {
      iVar4 = func_00548B78(param_1,pfVar3,fVar16);
      if (iVar4 == 0) {
        return 3;
      }
      return 5;
    }
    return 7;
  }
  iVar8 = iVar8 - iVar7;
  if (iVar8 < iVar4) {
    return 8;
  }
  iVar8 = iVar8 - iVar4;
  if (iVar5 <= iVar8) {
    if (iVar11 <= iVar8 - iVar5) {
      return 2;
    }
    return 0xb;
  }
  return 9;
}

