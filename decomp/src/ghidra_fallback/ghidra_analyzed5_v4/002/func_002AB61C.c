#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_002B1470(undefined4 *param_1);
extern float DAT_002ab7c4;
extern float DAT_002ab7c8;
extern int DAT_002ab7cc;
extern undefined DAT_002ab7d0;
extern undefined4 DAT_002ab7d4;
extern int DAT_002ab7f0;
extern float DAT_002ab7f4;
extern int DAT_002ab7f8;
extern float DAT_002ab7fc;
extern int DAT_002ab800;
extern char s_cf_002ab7d8[];
extern undefined4 _DAT_002ab7d0;

// USA 002AB61C <- EU 002AB5F8 (Ghidra, non-matching)
// GLOBAL DAT_002ab7c4 float
// GLOBAL DAT_002ab7c8 float
// GLOBAL DAT_002ab7cc int
// GLOBAL DAT_002ab7d0 undefined
// GLOBAL DAT_002ab7f0 int
// GLOBAL DAT_002ab7f4 float
// GLOBAL DAT_002ab7f8 int
// GLOBAL DAT_002ab7fc float
// GLOBAL DAT_002ab800 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002AB61C(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  iVar1 = func_002B1470(param_1);
  iVar6 = DAT_002ab7f0;
  fVar8 = DAT_002ab7c4;
  if (iVar1 == 0) {
    uVar3 = param_1[0xb];
    fVar5 = DAT_002ab7c4;
    if (((uVar3 != 0) && (uVar2 = param_1[10], uVar2 != 0)) && (fVar5 = DAT_002ab7c8, uVar2 < uVar3)
       ) {
      fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = fVar5 * ALBW_AS_F32(param_1[0xc]);
    }
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)ALBW_AS_U32(fVar5) < DAT_002ab7cc) {
      iVar6 = (int)((ALBW_AS_F32(_DAT_002ab7d0) - fVar5) * fVar7);
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      fVar5 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x7c] =
           ALBW_AS_U32(ALBW_AS_F32(param_1[0x7c]) + (DAT_002ab7c8 - ALBW_AS_F32(param_1[0x7c])) * (DAT_002ab7c8 / fVar5));
    }
    else if ((int)DAT_002ab7d4 < (int)ALBW_AS_U32(fVar5)) {
      iVar6 = (int)((DAT_002ab7c8 - fVar5) * fVar7);
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      fVar5 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x7c] =
           ALBW_AS_U32(ALBW_AS_F32(param_1[0x7c]) + (DAT_002ab7c4 - ALBW_AS_F32(param_1[0x7c])) * (DAT_002ab7c8 / fVar5));
    }
    else {
      param_1[0x7c] = ALBW_AS_U32(DAT_002ab7c8);
      local_18 = iVar6;
      local_14 = s_cf_002ab7d8;
      func_001507D8(param_1[0xd],&local_18,0);
    }
    uVar3 = param_1[0x7b];
    pfVar4 = (float *)(DAT_002ab7f8 + (uVar3 >> 0x18) * 0x10);
    fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = uVar3 + DAT_002ab800;
    fVar5 = (*pfVar4 + pfVar4[1] * fVar5 * DAT_002ab7f4) * DAT_002ab7fc * ALBW_AS_F32(param_1[0x7c]);
    param_1[0x1e] = ALBW_AS_U32(fVar5);
    param_1[0x1c] = ALBW_AS_U32(fVar5);
    param_1[0x1d] = ALBW_AS_U32(fVar8);
    param_1[0x7b] = iVar6;
    if ((uint)param_1[10] < (uint)param_1[0xb]) {
      param_1[10] = param_1[10] + 1;
    }
    return func_002ACD14(param_1,0,0);
  }
  return 0;
}

