#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004C90E8(int param_1);
extern int func_004C9684(int param_1,int param_2);
extern int func_004C9AFC(int param_1,float *param_2);
extern int func_004C9B74(int param_1);
extern int func_004CA164(int *param_1);
extern int func_004CADD8(undefined4 param_1,uint param_2);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern float DAT_004c9aa0;
extern float DAT_004c9aa4;
extern int *DAT_004c9aa8;
extern float DAT_004c9aac;
extern float DAT_004c9ab0;
extern float DAT_004c9ab4;
extern float DAT_004c9ab8;
extern float DAT_004c9abc;
extern float DAT_004c9ac0;
extern int DAT_004c9ac4;
extern float DAT_004c9ac8;
extern int *DAT_004c9acc;
extern int *DAT_004c9ad0;

// USA 004C97C0 <- EU 004C9798 (Ghidra, non-matching)
// GLOBAL DAT_004c9aa0 float
// GLOBAL DAT_004c9aa4 float
// GLOBAL DAT_004c9aa8 int *
// GLOBAL DAT_004c9aac float
// GLOBAL DAT_004c9ab0 float
// GLOBAL DAT_004c9ab4 float
// GLOBAL DAT_004c9ab8 float
// GLOBAL DAT_004c9abc float
// GLOBAL DAT_004c9ac0 float
// GLOBAL DAT_004c9ac4 int
// GLOBAL DAT_004c9ac8 float
// GLOBAL DAT_004c9acc int *
// GLOBAL DAT_004c9ad0 int *

undefined4 func_004C97C0(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  func_004C90E8((int)param_1);
  iVar3 = func_004C9B74((int)param_1);
  if (iVar3 != 0) {
    return func_004CA164(param_1);
  }
  puVar4 = func_004CADD8(param_1,param_1[0x24c]);
  fVar9 = DAT_004c9aa4;
  fVar10 = DAT_004c9aa0;
  iVar3 = param_1[0x255];
  if (iVar3 == 0) {
    param_1[0xf7] = (int)ALBW_AS_U32(DAT_004c9aa4);
    param_1[0xf8] = (int)ALBW_AS_U32(fVar9);
    param_1[0xf9] = (int)ALBW_AS_U32(fVar9);
    piVar2 = DAT_004c9aa8;
    if (puVar4 != (undefined4 *)0x0) {
      fVar8 = DAT_004c9aac;
      uVar5 = func_00111A64((uint *)(*DAT_004c9aa8 + 0x660));
      fVar11 = DAT_004c9ab4;
      fVar7 = DAT_004c9ab0;
      fVar6 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x23a] = (int)ALBW_AS_U32((fVar6 * DAT_004c9ab0 * fVar8 + DAT_004c9ab4 + ALBW_AS_F32(puVar4[0xf4])));
      uVar5 = func_00111A64((uint *)(*piVar2 + 0x660));
      fVar6 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x23c] = (int)ALBW_AS_U32((fVar6 * fVar7 * fVar8 + fVar11 + ALBW_AS_F32(puVar4[0xf6])));
      if ((char)param_1[0x264] == '\0') {
        param_1[0x23b] = param_1[0xf5];
      }
      else {
        param_1[0x23b] = (int)ALBW_AS_U32((ALBW_AS_F32(puVar4[0xf5]) + DAT_004c9ab8));
      }
      func_00115C70(&local_40,(float *)(param_1 + 0x23a),(float *)(param_1 + 0xf4));
      fVar7 = SQRT(local_40 * local_40 + local_38 * local_38) * DAT_004c9abc;
      iVar3 = (int)fVar7;
      fVar11 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      uVar5 = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar7) << 0x1e;
      if ((!SUB41(uVar5 >> 0x1e,0)) &&
         (uVar5 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar7) << 0x1e |
                  (uint)(fVar7 <= fVar9) << 0x1d, bVar1 = (byte)(uVar5 >> 0x18),
         !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
        iVar3 = iVar3 + 1;
      }
      fVar11 = local_3c;
      local_3c = fVar9;
      func_00115DC8(&local_40);
      fVar7 = DAT_004c9ac0;
      fVar8 = (float)VectorSignedToFloat(iVar3,(byte)(uVar5 >> 0x15) & 3);
      param_1[0xf7] = (int)ALBW_AS_U32((local_40 * DAT_004c9ac0));
      param_1[0xf9] = (int)ALBW_AS_U32((local_38 * fVar7));
      param_1[0xf8] = (int)ALBW_AS_U32((fVar11 / fVar8));
      param_1[0x273] = iVar3;
      if (iVar3 == 0) {
        param_1[0x274] = (int)ALBW_AS_U32(fVar9);
      }
      else {
        fVar9 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar5 >> 0x15) & 3);
        param_1[0x274] = (int)ALBW_AS_U32((fVar10 / fVar9));
      }
      param_1[0x272] = 0;
      iVar3 = 1;
LAB_004c9988:
      param_1[0x255] = iVar3;
      goto LAB_004c998c;
    }
LAB_004c9a88:
    func_0066A284(param_1 + 0x22f,5);
  }
  else {
    if (iVar3 == 1) {
      uVar5 = param_1[0x272];
      if ((uint)param_1[0x273] <= uVar5) {
        param_1[0xf8] = (int)ALBW_AS_U32(DAT_004c9aa4);
        iVar3 = DAT_004c9ac4;
        param_1[0x273] = 5;
        param_1[0x274] = iVar3;
        param_1[0x272] = 0;
        param_1[0x255] = 2;
        goto LAB_004c998c;
      }
    }
    else {
      if (iVar3 != 2) goto LAB_004c998c;
      fVar10 = ALBW_AS_F32(param_1[0xf9]) * DAT_004c9ac8;
      param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_004c9ac8));
      param_1[0xf9] = (int)ALBW_AS_U32(fVar10);
      uVar5 = param_1[0x272];
      if ((uint)param_1[0x273] <= uVar5) {
        param_1[0xf7] = (int)ALBW_AS_U32(fVar9);
        param_1[0xf8] = (int)ALBW_AS_U32(fVar9);
        param_1[0xf9] = (int)ALBW_AS_U32(fVar9);
        if ((uint)param_1[0x260] < (uint)param_1[0x261]) {
          param_1[0x260] = param_1[0x260] + 1;
          iVar3 = *DAT_004c9acc;
          if (param_1[0x25f] == iVar3) {
            iVar3 = *DAT_004c9ad0;
          }
          param_1[0x25f] = iVar3;
          func_004C9684((int)param_1,iVar3);
          puVar4 = func_004CADD8(param_1,param_1[0x24c]);
          if (puVar4 != (undefined4 *)0x0) {
            iVar3 = 0;
            goto LAB_004c9988;
          }
        }
        goto LAB_004c9a88;
      }
    }
    param_1[0x272] = uVar5 + 1;
  }
LAB_004c998c:
  return func_004C9AFC((int)param_1,(float *)(param_1 + 0x23a));
}

