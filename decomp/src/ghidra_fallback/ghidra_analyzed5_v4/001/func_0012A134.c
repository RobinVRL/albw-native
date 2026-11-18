#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00129460(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int *DAT_0012a36c;
extern float DAT_0012a370;
extern int *DAT_0012a374;
extern float DAT_0012a378;
extern float DAT_0012a37c;
extern float DAT_0012a380;
extern uint DAT_0012a384;
extern int *DAT_0012a388;
extern int DAT_0012a38c;
extern uint *DAT_0012a390;

// USA 0012A134 <- EU 0012A134 (Ghidra, non-matching)
// GLOBAL DAT_0012a36c int *
// GLOBAL DAT_0012a370 float
// GLOBAL DAT_0012a374 int *
// GLOBAL DAT_0012a378 float
// GLOBAL DAT_0012a37c float
// GLOBAL DAT_0012a380 float
// GLOBAL DAT_0012a384 uint
// GLOBAL DAT_0012a388 int *
// GLOBAL DAT_0012a38c int
// GLOBAL DAT_0012a390 uint *

int func_0012A134(int param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint in_r3;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((float *)(albw_frame + 0x0))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((int *)(albw_frame + 0xc))
  piVar2 = DAT_0012a36c;
  iVar8 = 0;
  if ((2 < (int)*(char *)(*DAT_0012a36c + 0x18) - 0x18U) &&
     (iVar3 = func_0051E6D0(*DAT_0012a374,(float *)(param_1 + 0x3d0),DAT_0012a370), iVar3 == 0)) {
LAB_0012a2b0:
    *(char *)(param_1 + 0x977) = (char)iVar8;
    return iVar8;
  }
  fVar11 = DAT_0012a378;
  if (*(char *)(param_1 + 0x97c) != '\0') {
    fVar11 = DAT_0012a37c;
  }
  if ((*(char *)(param_1 + 0x977) != '\0') && (2 < (int)*(char *)(*piVar2 + 0x18) - 0x18U)) {
    pfVar4 = (float *)func_00520FC0();
    fVar10 = *(float *)(param_1 + 0x3d0) - *pfVar4;
    fVar9 = *(float *)(param_1 + 0x3d8) - pfVar4[2];
    if (fVar11 * fVar11 < fVar10 * fVar10 + fVar9 * fVar9) {
      *(undefined1 *)(param_1 + 0x977) = 0;
    }
    return (int)*(char *)(param_1 + 0x977);
  }
  iVar3 = func_00520FC0();
  fVar9 = *(float *)(iVar3 + 4) - *(float *)(param_1 + 0x3d4);
  if (fVar9 <= DAT_0012a380) {
    fVar9 = -fVar9;
  }
  if (0x3f800000 < (int)ALBW_AS_U32(fVar9)) goto LAB_0012a2b0;
  lVar1 = (ulonglong)DAT_0012a384 * (ulonglong)*(uint *)(*DAT_0012a388 + 0x10) +
          (ulonglong)DAT_0012a384;
  uVar7 = (undefined4)lVar1;
  if (*(uint *)(*DAT_0012a388 + 0x10) + (uint)((ulonglong)lVar1 >> 0x21) * -7 == 0) {
    puVar5 = (undefined4 *)func_00520FC0();
    iVar8 = func_00129460(param_1,puVar5,uVar7,in_r3);
    if (iVar8 == 0) {
      pfVar4 = (float *)func_00520FC0();
      fVar9 = *(float *)(param_1 + 0x3d0) - *pfVar4;
      fVar10 = *(float *)(param_1 + 0x3d8) - pfVar4[2];
      iVar8 = 1;
      if ((int)ALBW_AS_U32((fVar9 * fVar9 + fVar10 * fVar10)) < DAT_0012a38c) goto LAB_0012a2b0;
      pfVar4 = (float *)func_00520FC0();
      func_00115C70(local_30,pfVar4,(float *)(param_1 + 0x3d0));
      iVar8 = *(int *)(param_1 + 1000);
      iVar3 = *(int *)(param_1 + 0x904);
      local_24[0] = func_004904CC(local_30[0],local_28);
      local_24[0] = (iVar8 + iVar3) - local_24[0];
      uVar6 = func_0058E2B8(local_24);
      if (uVar6 <= *DAT_0012a390) {
        pfVar4 = (float *)func_00520FC0();
        fVar10 = *(float *)(param_1 + 0x3d0) - *pfVar4;
        fVar9 = *(float *)(param_1 + 0x3d8) - pfVar4[2];
        if (fVar10 * fVar10 + fVar9 * fVar9 < fVar11 * fVar11) {
          iVar8 = 1;
          goto LAB_0012a35c;
        }
      }
    }
  }
  iVar8 = 0;
LAB_0012a35c:
  *(char *)(param_1 + 0x977) = (char)iVar8;
  return iVar8;
}

