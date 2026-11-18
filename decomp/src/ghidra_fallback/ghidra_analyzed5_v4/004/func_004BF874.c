#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004905E0(float fparam_0);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_00520FD4(void);
extern float DAT_004bfbbc;
extern float DAT_004bfbc0;
extern int DAT_004bfbc4;
extern float DAT_004bfbc8;
extern int DAT_004bfbcc;
extern float DAT_004bfbd0;
extern float DAT_004bfbd4;
extern int *DAT_004bfbd8;

// USA 004BF874 <- EU 004BF84C (Ghidra, non-matching)
// GLOBAL DAT_004bfbbc float
// GLOBAL DAT_004bfbc0 float
// GLOBAL DAT_004bfbc4 int
// GLOBAL DAT_004bfbc8 float
// GLOBAL DAT_004bfbcc int
// GLOBAL DAT_004bfbd0 float
// GLOBAL DAT_004bfbd4 float
// GLOBAL DAT_004bfbd8 int *

undefined4 func_004BF874(int param_1,float *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  uint in_fpscr;
  uint uVar11;
  float fparam_0;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  pfVar9 = (float *)(param_1 + 0x888);
  cVar2 = *(char *)(param_1 + 0x910);
  if (cVar2 != '\0') {
    iVar10 = 0;
    if (cVar2 == '\x01') {
      fVar6 = param_2[1];
      fVar7 = param_2[2];
      *pfVar9 = *param_2;
      *(float *)(param_1 + 0x88c) = fVar6;
      *(float *)(param_1 + 0x890) = fVar7;
      if (*(int *)(param_1 + 0x8f8) == 0xffff) {
        *(undefined1 *)(param_1 + 0x910) = 0;
      }
      else {
        iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
                 *(int *)(param_1 + 0x8f8) * 0x30;
        local_50 = *(float *)(iVar10 + 0xc);
        local_4c = *(undefined4 *)(iVar10 + 0x1c);
        local_48 = *(undefined4 *)(iVar10 + 0x2c);
        *(undefined4 *)(param_1 + 0x8c0) = local_48;
        func_00115C70(&local_5c,param_2,&local_50);
        *(float *)(param_1 + 0x894) = local_5c;
        *(float *)(param_1 + 0x898) = local_58;
        *(int *)(param_1 + 0x89c) = local_54;
        *(undefined1 *)(param_1 + 0x910) = 2;
      }
      goto LAB_004bfad4;
    }
    if (cVar2 == '\x02') {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
              *(int *)(param_1 + 0x8f8) * 0x30;
      fVar7 = *(float *)(iVar5 + 0xc);
      fVar14 = *(float *)(iVar5 + 0x2c);
      fVar6 = DAT_004bfbbc;
      if ((param_3 != 0) || (bVar4 = func_00520FD4(), bVar4)) {
        iVar5 = *(int *)(param_1 + 0x7a0);
        fVar13 = *(float *)(iVar5 + 0xf8);
        fparam_1 = *(float *)(iVar5 + 0xe0);
        uVar15 = CONCAT44(*(undefined4 *)(iVar5 + 0xec),fVar14);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar6) << 0x1f |
                (uint)(fVar13 == fVar6) << 0x1e;
        uVar11 = uVar1 | (uint)(NAN(fVar13) || NAN(fVar6)) << 0x1c;
        bVar3 = (byte)(uVar1 >> 0x18);
        fVar14 = fVar13;
        if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) {
          fVar14 = -fVar13;
        }
        fVar12 = DAT_004bfbc0;
        if ((int)ALBW_AS_U32((DAT_004bfbc0 - fVar14)) < 0x34000000) {
          fparam_0 = -*(float *)(iVar5 + 0xe4);
          fparam_1 = -(fVar13 * *(float *)(iVar5 + 0xe8));
        }
        else {
          iVar10 = func_004904CC(*(float *)(iVar5 + 0xfc),*(float *)(iVar5 + 0x100));
          fVar13 = -fVar13;
          uVar11 = uVar11 & 0xfffffff | (uint)(fVar6 == fVar13) << 0x1e |
                   (uint)(fVar13 <= fVar6) << 0x1d;
          bVar3 = (byte)(uVar11 >> 0x18);
          if ((bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)) {
            if ((uint)ALBW_AS_U32(DAT_004bfbc8) < (uint)ALBW_AS_U32(fVar13)) {
              fVar13 = -SQRT(fVar12 - fVar13 * fVar13) / fVar13;
            }
            else {
              fVar13 = -fVar13 / SQRT(fVar12 - fVar13 * fVar13);
            }
            func_004905E0(fVar13);
          }
          else {
            fVar14 = SQRT(fVar12 - fVar13 * fVar13);
            if (DAT_004bfbc4 < (int)ALBW_AS_U32(fVar13)) {
              func_004905E0(fVar14 / fVar13);
            }
            else {
              func_004905E0(fVar13 / fVar14);
            }
          }
          fparam_0 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
        }
        fVar14 = ALBW_AS_F32(uVar15);
        func_004904CC(fparam_0,fparam_1);
        fVar13 = (float)VectorSignedToFloat(DAT_004bfbcc - iVar10,(byte)(uVar11 >> 0x15) & 3);
        fVar13 = fVar12 - fVar13 * DAT_004bfbd0;
        if (((int)ALBW_AS_U32(fVar13) < 0x3f800001) && (fVar12 = fVar13, fVar13 < fVar6)) {
          fVar12 = fVar6;
        }
        fVar6 = fVar12 * DAT_004bfbd4;
      }
      fVar13 = param_2[1];
      *pfVar9 = fVar7 + *(float *)(param_1 + 0x894);
      *(float *)(param_1 + 0x88c) = fVar13;
      *(float *)(param_1 + 0x890) = (fVar14 + *(float *)(param_1 + 0x89c)) - fVar6;
      goto LAB_004bfad4;
    }
    if (cVar2 != '\x03') goto LAB_004bfad4;
  }
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  *pfVar9 = *param_2;
  *(float *)(param_1 + 0x88c) = fVar6;
  *(float *)(param_1 + 0x890) = fVar7;
LAB_004bfad4:
  piVar8 = *(int **)(param_1 + 0x788);
  if (piVar8 != (int *)0x0) {
    local_58 = *(float *)(param_1 + 0x888);
    local_54 = *(int *)(param_1 + 0x88c);
    local_50 = *(float *)(param_1 + 0x890);
    func_00115C54(&local_58,&local_58,(float *)(param_1 + 0x804));
    piVar8[1] = (int)ALBW_AS_U32(local_58);
    piVar8[2] = local_54;
    piVar8[3] = (int)ALBW_AS_U32(local_50);
    func_004356B4(piVar8);
  }
  piVar8 = *(int **)(param_1 + 0x40c);
  if (piVar8 != (int *)0x0) {
    local_58 = *(float *)(param_1 + 0x888);
    local_54 = *(int *)(param_1 + 0x88c);
    local_50 = *(float *)(param_1 + 0x890);
    func_00115C54(&local_58,&local_58,(float *)(param_1 + 0x7f8));
    piVar8[1] = (int)ALBW_AS_U32(local_58);
    piVar8[2] = local_54;
    piVar8[3] = (int)ALBW_AS_U32(local_50);
    func_004356B4(piVar8);
  }
  piVar8 = DAT_004bfbd8;
  if (*(char *)(param_1 + 0x85a) == '\x02') {
    *(undefined1 *)(param_1 + 0x85a) = 3;
    func_004A8304(*piVar8,*(int *)(param_1 + 0x86c));
    return func_004A879C(*piVar8,*(int *)(param_1 + 0x86c),3);
  }
  return 0;
}

