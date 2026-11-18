#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_0019e114;
extern float DAT_0019e118;
extern float DAT_0019e11c;
extern float DAT_0019e120;
extern int DAT_0019e124;
extern float DAT_0019e128;
extern float DAT_0019e12c;
extern int DAT_0019e130;
extern float DAT_0019e134;

// USA 0019DF7C <- EU 0019DF7C (Ghidra, non-matching)
// GLOBAL DAT_0019e114 float
// GLOBAL DAT_0019e118 float
// GLOBAL DAT_0019e11c float
// GLOBAL DAT_0019e120 float
// GLOBAL DAT_0019e124 int
// GLOBAL DAT_0019e128 float
// GLOBAL DAT_0019e12c float
// GLOBAL DAT_0019e130 int
// GLOBAL DAT_0019e134 float

int func_0019DF7C(int param_1,float *param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(local_38,(float *)(param_1 + 0x3d0),pfVar2);
  local_30 = local_30 * DAT_0019e114;
  iVar3 = func_0068C690(local_38);
  fVar5 = local_38[0] * local_38[0] + local_30 * local_30;
  if ((fVar5 <= DAT_0019e118) && (param_3 != (undefined1 *)0x0)) {
    *param_3 = 1;
  }
  fVar7 = DAT_0019e11c;
  if (param_4 != (undefined1 *)0x0) {
    if (DAT_0019e120 <= fVar5) {
LAB_0019e03c:
      uVar4 = 1;
    }
    else {
      fVar5 = pfVar2[1] - *(float *)(param_1 + 0xc);
      if (fVar5 <= DAT_0019e11c) {
        fVar5 = -fVar5;
      }
      if (DAT_0019e124 <= (int)ALBW_AS_U32(fVar5)) goto LAB_0019e03c;
      uVar4 = 0;
    }
    *param_4 = uVar4;
  }
  local_2c = fVar7;
  local_28 = fVar7;
  uVar1 = iVar3 + 0x20000000U >> 0x1e;
  local_24 = fVar7;
  fVar5 = DAT_0019e128;
  if ((uVar1 != 0) &&
     ((fVar6 = DAT_0019e128, uVar1 == 1 ||
      ((fVar5 = DAT_0019e12c, uVar1 != 2 && (fVar6 = DAT_0019e12c, fVar5 = local_24, uVar1 == 3)))))
     ) {
    local_2c = fVar6;
    fVar5 = local_24;
  }
  local_24 = fVar5;
  func_00115C70(local_38,local_38,&local_2c);
  fVar6 = local_38[0] * local_38[0] + local_30 * local_30;
  fVar5 = fVar7;
  if (DAT_0019e130 <= (int)ALBW_AS_U32(fVar6)) {
    if (0x3f7fffff < (int)ALBW_AS_U32(fVar6)) goto LAB_0019e0ec;
    if ((fVar7 < fVar6) && (fVar5 = *param_2, (int)ALBW_AS_U32(fVar6) < 0x3f800000)) {
      fVar5 = fVar7 + *param_2 * fVar6;
    }
  }
  *param_2 = fVar5;
LAB_0019e0ec:
  local_30 = local_30 * DAT_0019e134;
  iVar3 = func_0068C690(local_38);
  return iVar3 + -0x80000000;
}

