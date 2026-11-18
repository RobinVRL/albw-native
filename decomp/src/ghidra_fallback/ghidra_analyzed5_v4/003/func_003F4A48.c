#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_0011410C(int param_1,uint param_2);
extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_003F44EC(undefined4 param_1,int param_2,int param_3);
extern int func_003F7B0C(int param_1,int param_2);
extern int *DAT_003f4d00;
extern float DAT_003f4d04;
extern float DAT_003f4d08;
extern int DAT_003f4d0c;
extern int DAT_003f4d10;

// USA 003F4A48 <- EU 003F4A28 (Ghidra, non-matching)
// GLOBAL DAT_003f4d00 int *
// GLOBAL DAT_003f4d04 float
// GLOBAL DAT_003f4d08 float
// GLOBAL DAT_003f4d0c int
// GLOBAL DAT_003f4d10 int

undefined4 func_003F4A48(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = DAT_003f4d04;
  piVar1 = DAT_003f4d00;
  iVar7 = param_2[6];
  iVar9 = param_2[0x36];
  if (*(char *)(iVar7 + 0x280) == '\0') {
    fVar13 = ALBW_AS_F32(param_2[0x24]) + *(float *)(param_2[0x36] + 0x53c);
    bVar11 = true;
    param_2[0x24] = (int)ALBW_AS_U32(fVar13);
    if (0x3f800000 < (int)ALBW_AS_U32(fVar13)) {
      fVar13 = DAT_003f4d08;
    }
    param_2[0x24] = (int)ALBW_AS_U32(fVar13);
  }
  else {
    fVar12 = ALBW_AS_F32(param_2[0x24]) - *(float *)(param_2[0x36] + 0x53c);
    bVar11 = *(char *)(iVar9 + 0x17d) == '\0';
    param_2[0x24] = (int)ALBW_AS_U32(fVar12);
    if (fVar12 <= fVar13) {
      return func_003F7B0C(*piVar1,(int)param_2);
    }
  }
  func_00114E74((float *)(param_2 + 9),(float *)(iVar7 + 0x1cc),(float *)(param_2 + 0x73));
  func_00114E74((float *)(param_2 + 0x15),(float *)(param_2[6] + 0x19c),(float *)(param_2 + 0x7f));
  iVar2 = *param_2 - *(int *)(iVar7 + 0x260);
  if ((*(int *)(iVar9 + 0x2cc) <= iVar2) || (!bVar11)) {
    iVar7 = param_2[0x37];
    bVar11 = iVar7 == 0;
    if (bVar11) {
      iVar7 = param_2[0x38];
    }
    if (bVar11 && iVar7 == 0) {
      return func_003F7B0C(*piVar1,(int)param_2);
    }
    goto LAB_003f4cc0;
  }
  if (iVar2 < *(int *)(iVar9 + 0x2c8)) goto LAB_003f4cc0;
  if (*(char *)(iVar9 + 0x181) != '\0') {
    func_003F44EC(param_1,iVar9,(int)param_2);
    goto LAB_003f4cc0;
  }
  iVar2 = param_2[0x23] * (int)*(float *)(param_2[7] + 4);
  if (iVar2 == 0) {
LAB_003f4b78:
    iVar2 = DAT_003f4d0c;
    if (*(int *)(iVar7 + 0x270) < 1) {
      (**(code **)(DAT_003f4d0c + *(int *)(iVar9 + 0x250) * 4))(param_2);
      uVar4 = extraout_r1_00;
    }
    else {
      iVar6 = 0;
      do {
        iVar8 = param_2[0x37];
        (**(code **)(iVar2 + *(int *)(iVar9 + 0x250) * 4))(param_2);
        iVar3 = param_2[0x37];
        uVar4 = extraout_r1;
        if (iVar3 != iVar8) {
          uVar4 = iVar6 * 3;
          do {
            iVar10 = *(int *)(iVar7 + 0x274);
            *(float *)(iVar3 + 8) = *(float *)(iVar10 + iVar6 * 0xc) + *(float *)(iVar3 + 8);
            *(float *)(iVar3 + 0xc) = *(float *)(iVar10 + iVar6 * 0xc + 4) + *(float *)(iVar3 + 0xc)
            ;
            *(float *)(iVar3 + 0x10) =
                 *(float *)(iVar10 + iVar6 * 0xc + 8) + *(float *)(iVar3 + 0x10);
            iVar3 = *(int *)(iVar3 + 0x140);
          } while (iVar3 != iVar8);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar7 + 0x270));
    }
    if (*(char *)(param_2[0x36] + 0x183) != '\0') {
      func_0011410C((int)param_2,uVar4);
      func_001119F4(param_2 + 9,(undefined4 *)(param_2[6] + 0x1cc));
      func_001119F4(param_2 + 0x15,(undefined4 *)(param_2[6] + 0x19c));
    }
  }
  else {
    iVar6 = param_2[1];
    if (iVar2 - iVar6 == 0 || iVar2 < iVar6) {
      param_2[1] = 0;
      goto LAB_003f4b78;
    }
    param_2[1] = iVar6 + 1;
    if ((param_2[2] & 8U) == 0) goto LAB_003f4b78;
  }
  uVar4 = param_2[0x22];
  uVar5 = *(uint *)(iVar9 + 0x2d4);
  param_2[0x22] = uVar4 * DAT_003f4d10 + 0x3039;
  param_2[0x23] =
       uVar4 * ((int)uVar5 >> 0x1f) + (int)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20) +
       *(int *)(iVar9 + 0x2d0);
LAB_003f4cc0:
  *param_2 = *param_2 + 1;
  param_2[2] = param_2[2] | 0x10;
  param_2[0x25] = param_2[0xc];
  param_2[0x26] = param_2[0x10];
  param_2[0x27] = param_2[0x14];
  return 0;
}

