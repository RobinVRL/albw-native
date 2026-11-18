#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern float DAT_0013deb0;
extern undefined4 *DAT_0013deb4;
extern int *DAT_0013deb8;
extern int DAT_0013debc;
extern int DAT_0013dec0;
extern int DAT_0013dec4;
extern int DAT_0013dec8;
extern int DAT_0013decc;
extern float DAT_0013ded0;

// USA 0013DD1C <- EU 0013DD1C (Ghidra, non-matching)
// GLOBAL DAT_0013deb0 float
// GLOBAL DAT_0013deb4 undefined4 *
// GLOBAL DAT_0013deb8 int *
// GLOBAL DAT_0013debc int
// GLOBAL DAT_0013dec0 int
// GLOBAL DAT_0013dec4 int
// GLOBAL DAT_0013dec8 int
// GLOBAL DAT_0013decc int
// GLOBAL DAT_0013ded0 float

undefined4 func_0013DD1C(int param_1,float *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  local_48 = *param_2;
  local_40 = param_2[2];
  uVar9 = (ulonglong)(uint)ALBW_AS_U32(DAT_0013deb0);
  local_44 = DAT_0013deb0;
  func_00115DC8(&local_48);
  puVar1 = DAT_0013deb4;
  fVar8 = ALBW_AS_F32(uVar9);
  if ((local_48 != fVar8 || local_44 != fVar8) || local_40 != fVar8) {
    iVar6 = *DAT_0013deb8;
    piVar3 = (int *)func_005841A8(iVar6,*DAT_0013deb4,*(int **)(DAT_0013debc + iVar6));
    iVar2 = DAT_0013dec4;
    piVar5 = *(int **)(DAT_0013dec0 + iVar6);
    for (; piVar3 != piVar5; piVar3 = (int *)func_005841A8(iVar6,*puVar1,piVar3 + 1)) {
      iVar4 = *piVar3;
      if (*(char *)(iVar4 + 0x41c) != '\x02') {
        func_00115C70(&local_60,(float *)(iVar4 + 0x3d0),(float *)(param_1 + 0x3d0));
        if (((int)ALBW_AS_U32((local_60 * local_60 + local_5c * local_5c + local_58 * local_58)) < DAT_0013dec8)
           && (func_00115DC8(&local_60),
              *(float *)(DAT_0013decc + 0x208) + *(float *)(iVar2 + 0xc) * ALBW_AS_F32(uVar9) <
              local_60 * local_48 + local_5c * local_44 + local_58 * local_40)) {
          *(float *)(param_1 + 0x554) = *(float *)(iVar4 + 0x3d0);
          fVar8 = DAT_0013ded0;
          fVar7 = *(float *)(iVar4 + 0x3d4);
          *(float *)(param_1 + 0x558) = fVar7;
          *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(iVar4 + 0x3d8);
          *(float *)(param_1 + 0x558) = fVar7 + fVar8;
          *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(iVar4 + 0x2cc);
          return 1;
        }
      }
    }
  }
  return 0;
}

