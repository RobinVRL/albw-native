#include "ghidra_types.h"

extern int func_0011410C(int param_1,uint param_2);
extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_003EA524(int param_1);
extern int func_003F3544(int param_1);
extern int func_003F44EC(undefined4 param_1,int param_2,int param_3);
extern int func_003F4750(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
extern int func_003F7B0C(int param_1,int param_2);
extern int *DAT_003f7ac8;
extern float DAT_003f7acc;
extern float DAT_003f7ad0;
extern int DAT_003f7ad4;
extern int DAT_003f7ad8;

// USA 003F5494 <- EU 003F5474 (Ghidra, non-matching)
// GLOBAL DAT_003f7ac8 int *
// GLOBAL DAT_003f7acc float
// GLOBAL DAT_003f7ad0 float
// GLOBAL DAT_003f7ad4 int
// GLOBAL DAT_003f7ad8 int

void func_003F77B4(undefined4 param_1,int *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  
  fVar14 = DAT_003f7acc;
  piVar2 = DAT_003f7ac8;
  iVar7 = param_2[6];
  iVar10 = param_2[0x36];
  fVar13 = *(float *)(param_2[0x36] + 0x53c);
  if (*(char *)(iVar7 + 0x280) == '\0') {
    fVar13 = ALBW_AS_F32(param_2[0x24]) + fVar13;
    bVar12 = true;
    param_2[0x24] = (int)ALBW_AS_U32(fVar13);
    if (0x3f800000 < (int)ALBW_AS_U32(fVar13)) {
      fVar13 = DAT_003f7ad0;
    }
    param_2[0x24] = (int)ALBW_AS_U32(fVar13);
  }
  else {
    fVar13 = ALBW_AS_F32(param_2[0x24]) - fVar13;
    bVar12 = *(char *)(iVar10 + 0x17d) == '\0';
    param_2[0x24] = (int)ALBW_AS_U32(fVar13);
    param_3 = *piVar2;
    if ((fVar13 <= fVar14) ||
       ((fVar13 = *(float *)(param_2[0x36] + 0x53c),
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar14) << 0x1e |
                   (uint)(fVar14 <= fVar13) << 0x1d, bVar1 = (byte)(in_fpscr >> 0x18),
        !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6) && (*(int *)(iVar10 + 0x31c) == 0x7fffffff))))
    {
      func_003F7B0C(param_3,(int)param_2);
      return;
    }
  }
  if (param_2[0x3f] != 0) {
    func_003F4750(param_1,param_2,param_3);
  }
  func_00114E74((float *)(param_2 + 9),(float *)(param_2[6] + 0x1cc),(float *)(param_2 + 0x73));
  func_00114E74((float *)(param_2 + 0x15),(float *)(param_2[6] + 0x19c),(float *)(param_2 + 0x7f));
  if (*param_2 == 0) {
    param_2[0x25] = param_2[0xc];
    param_2[0x26] = param_2[0x10];
    param_2[0x27] = param_2[0x14];
  }
  iVar3 = *param_2 - *(int *)(iVar7 + 0x260);
  if ((*(int *)(iVar10 + 0x2cc) <= iVar3) || (!bVar12)) {
    iVar7 = param_2[0x37];
    bVar12 = iVar7 == 0;
    if (bVar12) {
      iVar7 = param_2[0x38];
    }
    if (bVar12 && iVar7 == 0) {
      iVar10 = *piVar2;
      for (iVar7 = param_2[0x37]; iVar7 != 0; iVar7 = func_003EA524(iVar7)) {
      }
      for (iVar7 = param_2[0x38]; iVar7 != 0; iVar7 = func_003EA524(iVar7)) {
      }
      func_003F3544((int)(param_2 + 0x8f));
      param_2[0x35] = 0;
      *(int *)(param_2[6] + 4) = *(int *)(param_2[6] + 4) + -1;
      param_2[8] = -1;
      if (*(int *)(param_2[6] + 4) == 0) {
        *(int *)(iVar10 + 0x474) = *(int *)(iVar10 + 0x474) + -1;
      }
      *(int *)(iVar10 + 0x328) = *(int *)(iVar10 + 0x328) + 1;
      iVar10 = iVar10 + param_2[5] * 4;
      iVar7 = param_2[0x34];
      if (*(int **)(iVar10 + 0x20) == param_2) {
        *(int *)(iVar10 + 0x20) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0xcc) = 0;
        }
        return;
      }
      if (iVar7 != 0) {
        *(int *)(iVar7 + 0xcc) = param_2[0x33];
      }
      *(int *)(param_2[0x33] + 0xd0) = param_2[0x34];
      return;
    }
    goto LAB_003f7a98;
  }
  if (iVar3 < *(int *)(iVar10 + 0x2c8)) goto LAB_003f7a98;
  if (*(char *)(iVar10 + 0x181) != '\0') {
    func_003F44EC(param_1,iVar10,(int)param_2);
    goto LAB_003f7a98;
  }
  fVar14 = (float)VectorSignedToFloat(param_2[0x23],(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fVar14 * *(float *)(param_2[7] + 4));
  if (iVar3 == 0) {
LAB_003f7948:
    iVar3 = DAT_003f7ad4;
    if (*(int *)(iVar7 + 0x270) < 1) {
      (**(code **)(DAT_003f7ad4 + *(int *)(iVar10 + 0x250) * 4))(param_2);
      uVar5 = extraout_r1_00;
    }
    else {
      iVar9 = 0;
      do {
        iVar8 = param_2[0x37];
        (**(code **)(iVar3 + *(int *)(iVar10 + 0x250) * 4))(param_2);
        iVar4 = param_2[0x37];
        uVar5 = extraout_r1;
        if (iVar4 != iVar8) {
          uVar5 = iVar9 * 3;
          do {
            iVar11 = *(int *)(iVar7 + 0x274);
            *(float *)(iVar4 + 8) = *(float *)(iVar11 + iVar9 * 0xc) + *(float *)(iVar4 + 8);
            *(float *)(iVar4 + 0xc) = *(float *)(iVar11 + iVar9 * 0xc + 4) + *(float *)(iVar4 + 0xc)
            ;
            *(float *)(iVar4 + 0x10) =
                 *(float *)(iVar11 + iVar9 * 0xc + 8) + *(float *)(iVar4 + 0x10);
            iVar4 = *(int *)(iVar4 + 0x140);
          } while (iVar4 != iVar8);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(iVar7 + 0x270));
    }
    if (*(char *)(param_2[0x36] + 0x183) != '\0') {
      func_0011410C((int)param_2,uVar5);
      func_00114E74((float *)(param_2 + 9),(float *)(param_2[6] + 0x1cc),(float *)(param_2 + 0x73));
      func_00114E74((float *)(param_2 + 0x15),(float *)(param_2[6] + 0x19c),
                    (float *)(param_2 + 0x7f));
    }
  }
  else {
    if (iVar3 <= param_2[1]) {
      param_2[1] = 0;
      goto LAB_003f7948;
    }
    param_2[1] = param_2[1] + 1;
    if ((param_2[2] & 8U) == 0) goto LAB_003f7948;
  }
  uVar5 = param_2[0x22];
  uVar6 = *(uint *)(iVar10 + 0x2d4);
  param_2[0x22] = uVar5 * DAT_003f7ad8 + 0x3039;
  param_2[0x23] =
       uVar5 * ((int)uVar6 >> 0x1f) + (int)((ulonglong)uVar6 * (ulonglong)uVar5 >> 0x20) +
       *(int *)(iVar10 + 0x2d0);
LAB_003f7a98:
  param_2[2] = param_2[2] | 0x10;
  param_2[0x25] = param_2[0xc];
  param_2[0x26] = param_2[0x10];
  param_2[0x27] = param_2[0x14];
  *param_2 = *param_2 + 1;
  return;
}

