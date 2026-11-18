#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0016B0E4(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4);
extern int func_00588F14(int param_1);
extern int *DAT_00387ca8;
extern float DAT_00387cac;
extern int DAT_00387cb0;
extern float DAT_00387cb4;
extern int *DAT_00387cb8;
extern int *DAT_00387cbc;

// USA 003879FC <- EU 003879D8 (Ghidra, non-matching)
// GLOBAL DAT_00387ca8 int *
// GLOBAL DAT_00387cac float
// GLOBAL DAT_00387cb0 int
// GLOBAL DAT_00387cb4 float
// GLOBAL DAT_00387cb8 int *
// GLOBAL DAT_00387cbc int *

void func_003879FC(int *param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  int *piVar11;
  float *pfVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  if ((param_1[1] != 0) && ((*(ushort *)(param_1 + 0x28) & 2) != 0)) {
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x14))(param_1);
    fVar13 = DAT_00387cac;
    piVar3 = DAT_00387ca8;
    uVar8 = *(ushort *)(param_1 + 0x28);
    if ((uVar8 & 1) == 0) {
      param_1[0x20] = param_1[0x21];
    }
    iVar4 = DAT_00387cb0;
    iVar5 = *piVar3;
    bVar1 = *(byte *)(iVar5 + 0xfaa);
    cVar2 = *(char *)(iVar5 + 0xfa9);
    if (bVar1 != 0) {
      param_1[0x23] = 0x14;
      param_1[0x24] = iVar4;
      param_1[0x22] = 0;
    }
    fVar14 = DAT_00387cb4;
    if (cVar2 == '\0') {
      if ((((uVar8 & 4) == 0 & ~bVar1) != 0) || ((uVar8 & 1) == 0)) {
        pfVar6 = (float *)func_00588F14(*DAT_00387cb8);
        if ((*(ushort *)(param_1 + 0x28) & 8) == 0) {
          pfVar12 = *(float **)(*DAT_00387cbc + 0x1c);
          func_00115C70(&local_2c,pfVar6,pfVar12);
          fVar15 = SQRT(local_2c * local_2c + fStack_28 * fStack_28 + local_24 * local_24);
          uVar9 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar14) << 0x1f |
                  (uint)(fVar15 == fVar14) << 0x1e;
          in_fpscr = uVar9 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
          bVar1 = (byte)(uVar9 >> 0x18);
          if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar15 = fVar13 / fVar15;
            param_1[0x27] = (int)ALBW_AS_U32((local_24 * fVar15));
            param_1[0x25] = (int)ALBW_AS_U32((local_2c * fVar15));
            param_1[0x26] = (int)ALBW_AS_U32((fStack_28 * fVar15));
          }
          func_00115D70(&local_2c,(float *)(param_1 + 0x25),ALBW_AS_F32(param_1[0x1f]));
          local_38 = local_2c;
          fStack_34 = fStack_28;
          fStack_30 = local_24;
          func_00115C54(&local_2c,&local_38,pfVar12);
        }
        else {
          local_2c = *pfVar6;
          fStack_28 = pfVar6[1];
          local_24 = pfVar6[2];
        }
        uVar9 = param_1[0x23];
        if ((uint)param_1[0x22] < uVar9) {
          uVar7 = param_1[0x22] + 1;
          if (uVar9 != 0 && uVar7 != 0) {
            fVar14 = fVar13;
          }
          fVar13 = fVar14;
          param_1[0x22] = uVar7;
          if ((uVar9 != 0 && uVar7 != 0) && uVar7 < uVar9) {
            fVar13 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
            fVar13 = fVar13 * ALBW_AS_F32(param_1[0x24]);
          }
        }
        else if (((*(ushort *)(param_1 + 0x28) & 1) != 0) &&
                ((*(ushort *)(param_1 + 0x28) & 4) == 0)) {
          fVar13 = ALBW_AS_F32(param_1[0x20]);
        }
        fVar14 = ALBW_AS_F32(param_1[0x16]);
        param_1[0x16] = (int)ALBW_AS_U32((fVar14 + (local_2c - fVar14) * fVar13));
        param_1[0x17] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x17]) + (fStack_28 - ALBW_AS_F32(param_1[0x17])) * fVar13));
        param_1[0x18] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x18]) + (local_24 - ALBW_AS_F32(param_1[0x18])) * fVar13));
      }
    }
    else {
      param_1[0x23] = 0;
      param_1[0x24] = (int)ALBW_AS_U32(fVar14);
      param_1[0x22] = 0;
    }
    if ((*(ushort *)(param_1 + 0x28) & 0x10) == 0) {
      param_1[0x19] = param_1[0x16];
      param_1[0x1a] = param_1[0x17];
      param_1[0x1b] = param_1[0x18];
    }
    if ((*(ushort *)(param_1 + 0x28) & 0x20) == 0) {
      param_1[0x1c] = param_1[0x16];
      param_1[0x1d] = param_1[0x17];
      param_1[0x1e] = param_1[0x18];
    }
    uVar9 = 0;
    if (0 < param_1[1]) {
      do {
        piVar11 = param_1 + 0x16;
        puVar10 = (ushort *)param_1[3];
        if (uVar9 < (uint)param_1[1]) {
          puVar10 = puVar10 + uVar9 * 2;
        }
        if ((uint)(int)*(char *)((int)puVar10 + 3) < 3) {
          piVar11 = piVar11 + *(char *)((int)puVar10 + 3) * 3;
        }
        func_0016B0E4(*piVar3,(uint)*puVar10,(uint)(byte)puVar10[1],piVar11);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < param_1[1]);
    }
    uVar8 = *(ushort *)(param_1 + 0x28);
    *(ushort *)(param_1 + 0x28) = uVar8 | 1;
    if (cVar2 == '\0') {
      uVar8 = uVar8 & 0xfffb | 1;
    }
    else {
      uVar8 = uVar8 | 5;
    }
    *(ushort *)(param_1 + 0x28) = uVar8;
  }
  return;
}

