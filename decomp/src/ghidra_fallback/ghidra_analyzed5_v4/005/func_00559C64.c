// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556E64(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern float DAT_00559eac;
extern float DAT_00559eb0;
extern int *DAT_00559eb4;
extern int *DAT_00559eb8;
extern int *DAT_00559ebc;
extern int *DAT_00559ec0;
extern int *DAT_00559ec4;
extern int *DAT_00559ec8;
extern int *DAT_00559ecc;

// USA 00559C64 <- EU 00559C3C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00559eac float
// GLOBAL DAT_00559eb0 float
// GLOBAL DAT_00559eb4 int *
// GLOBAL DAT_00559eb8 int *
// GLOBAL DAT_00559ebc int *
// GLOBAL DAT_00559ec0 int *
// GLOBAL DAT_00559ec4 int *
// GLOBAL DAT_00559ec8 int *
// GLOBAL DAT_00559ecc int *

undefined4
func_00559C64(int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,int param_5)

{
  ushort uVar1;
  byte bVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  uint uVar7;
  uint uVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float * *)(albw_frame + 0x0))
  iVar5 = *(int *)(param_1 + 0x410);
  if (*param_4 < *(float *)(iVar5 + 0x34)) {
    return 0;
  }
  if (param_4[2] + DAT_00559eac < *(float *)(iVar5 + 0x3c)) {
    return 0;
  }
  if (NAN(*(float *)(iVar5 + 0x40)) || NAN(*param_4 - DAT_00559eac)) {
    return 0;
  }
  if (!NAN(*(float *)(iVar5 + 0x48)) && !NAN(param_4[2] - DAT_00559eac)) {
    if (param_4[1] + DAT_00559eac < *(float *)(iVar5 + 0x38)) {
      return 0;
    }
    fVar9 = param_4[1] - DAT_00559eac;
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar9 == *(float *)(iVar5 + 0x44)) << 0x1e |
            (uint)(*(float *)(iVar5 + 0x44) <= fVar9) << 0x1d;
    bVar2 = (byte)(uVar7 >> 0x18);
    if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
      return 0;
    }
    local_20 = param_4;
    if ((*(short *)(param_1 + 0x36) != 0) && (bVar4 = func_00588BF0(param_1,0), !bVar4)) {
      return 0;
    }
    bVar4 = func_00588BF0(param_1,1);
    if (bVar4) {
      return 0;
    }
    if (*(short *)(param_1 + 0x32) != 0) {
      iVar5 = *(int *)(param_1 + 0x410);
      fVar9 = *(float *)(iVar5 + 0x58);
      uVar7 = uVar7 & 0xfffffff | (uint)(fVar9 < *(float *)(iVar5 + 0x60)) << 0x1f;
      uVar8 = uVar7 | (uint)(NAN(fVar9) || NAN(*(float *)(iVar5 + 0x60))) << 0x1c;
      if ((byte)(uVar7 >> 0x1f) == ((byte)(uVar8 >> 0x1c) & 1)) {
        iVar6 = 0x40000000;
      }
      else {
        iVar6 = 0;
      }
      local_20 = (float *)(param_5 - iVar6);
      iVar6 = func_0058E2B8((int *)&local_20);
      fVar9 = (float)VectorUnsignedToFloat(iVar6,(byte)(uVar8 >> 0x15) & 3);
      fVar9 = fVar9 * DAT_00559eb0;
      if (*(float *)(iVar5 + 0x58) < *(float *)(iVar5 + 0x60)) {
        if (0xc00000 < (int)ALBW_AS_U32(fVar9) + 0xc1800000U) {
          return 0;
        }
      }
      else {
        if ((int)ALBW_AS_U32(fVar9) < 0x3e800001) {
          return 0;
        }
        if (0x3f3fffff < (int)ALBW_AS_U32(fVar9)) {
          return 0;
        }
      }
    }
    piVar3 = DAT_00559eb4;
    uVar1 = *(ushort *)(param_1 + 0x30);
    if (((((uVar1 & 1) != 0) || ((uVar1 & 2) != 0)) || ((uVar1 & 4) != 0)) &&
       (bVar4 = func_00556E64(*DAT_00559eb4), bVar4)) {
      iVar5 = func_0052FBA0(*DAT_00559eb8 + 0x3dbbc,*(uint *)(*(int *)(*piVar3 + 0x28) + 0x14));
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = func_00588BE4(iVar5);
      if (iVar5 == *DAT_00559ebc) {
        if ((*(ushort *)(param_1 + 0x30) & 4) == 0) {
          return 0;
        }
      }
      else if (((iVar5 == *DAT_00559ec0) || (iVar5 == *DAT_00559ec4)) ||
              ((iVar5 == *DAT_00559ec8 || (iVar5 == *DAT_00559ecc)))) {
        if ((*(ushort *)(param_1 + 0x30) & 1) == 0) {
          return 0;
        }
      }
      else if ((*(ushort *)(param_1 + 0x30) & 1) != 0) {
        return 0;
      }
    }
    *param_2 = *(undefined4 *)(param_1 + 0x414);
    *param_3 = *(undefined4 *)(param_1 + 0x418);
    return 1;
  }
  return 0;
}

