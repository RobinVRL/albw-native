#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float func_0058A404(int param_1);
extern int func_0058A7D4(void);
extern undefined4 DAT_00355c00;
extern uint DAT_00355c04;
extern float DAT_00355c08;
extern float DAT_00355c0c;
extern float DAT_00355c10;
extern float DAT_00355c14;
extern float DAT_00355c18;
extern float DAT_00355c1c;
extern int DAT_00355c20;
extern float DAT_00355c24;
extern float *DAT_00355c28;

// USA 0035591C <- EU 003558F8 (Ghidra, non-matching)
// GLOBAL DAT_00355c00 undefined4
// GLOBAL DAT_00355c04 uint
// GLOBAL DAT_00355c08 float
// GLOBAL DAT_00355c0c float
// GLOBAL DAT_00355c10 float
// GLOBAL DAT_00355c14 float
// GLOBAL DAT_00355c18 float
// GLOBAL DAT_00355c1c float
// GLOBAL DAT_00355c20 int
// GLOBAL DAT_00355c24 float
// GLOBAL DAT_00355c28 float *

undefined4 func_0035591C(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define fStack_70 (*(float *)(albw_frame + 0x10))
  #define local_6c ((float *)(albw_frame + 0x14))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define fStack_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define afStack_54 ((float *)(albw_frame + 0x2c))
  *(undefined4 *)(param_1 + 0x58c) = DAT_00355c00;
  fVar12 = DAT_00355c08;
  uVar5 = DAT_00355c04;
  uVar17 = (ulonglong)DAT_00355c04;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0xb7;
  if (*(char *)(param_1 + 0xa61) == '\x04') {
    if (*(short *)(param_1 + 0x9e8) == 1) {
      *(float *)(param_1 + 0x9dc) = fVar12;
    }
    else {
      *(uint *)(param_1 + 0x9dc) = uVar5;
    }
    return 0;
  }
  *(uint *)(param_1 + 0x9d4) = uVar5;
  *(float *)(param_1 + 0x9d8) = fVar12;
  *(uint *)(param_1 + 0x9dc) = uVar5;
  fVar9 = func_0058A404(param_1);
  fVar13 = DAT_00355c10;
  iVar10 = (int)(fVar9 * DAT_00355c0c + (DAT_00355c10 - fVar9) * DAT_00355c0c);
  *(int *)(param_1 + 0xa20) = iVar10;
  if (iVar10 == 0) {
    *(float *)(param_1 + 0xa24) = fVar12;
  }
  else {
    fVar9 = (float)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xa24) = fVar13 / fVar9;
  }
  *(undefined4 *)(param_1 + 0xa1c) = 0;
  *(float *)(param_1 + 0x3dc) = fVar12;
  *(float *)(param_1 + 0x3e0) = fVar12;
  *(float *)(param_1 + 0x3e4) = fVar12;
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0xae0)) {
    do {
      puVar6 = *(undefined4 **)(*(int *)(param_1 + 0xae8) + iVar10 * 4);
      iVar10 = iVar10 + 1;
      *puVar6 = *(undefined4 *)(param_1 + 0xaec);
      *(undefined4 **)(param_1 + 0xaec) = puVar6;
    } while (iVar10 < *(int *)(param_1 + 0xae0));
  }
  *(undefined4 *)(param_1 + 0xae0) = 0;
  iVar10 = 3;
  local_78 = *(float *)(param_1 + 0x3d0);
  fStack_70 = *(float *)(param_1 + 0x3d8);
  local_74 = *(float *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x9f0) == '\x01') {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    uVar16 = (undefined4)uVar17;
    iVar10 = (int)((ulonglong)uVar5 * 2 >> 0x20) + 3;
    if (iVar10 == 0) goto LAB_00355b50;
  }
  iVar2 = DAT_00355c20;
  iVar8 = 0;
  fVar13 = DAT_00355c18;
  fVar9 = DAT_00355c14;
  fVar14 = DAT_00355c1c;
  fVar15 = DAT_00355c24;
  do {
    piVar3 = (int *)(param_1 + 0xae0);
    if (*piVar3 < *(int *)(param_1 + 0xae4)) {
      pfVar7 = *(float **)(param_1 + 0xaec);
      if (pfVar7 != (float *)0x0) {
        *(float *)(param_1 + 0xaec) = *pfVar7;
        *pfVar7 = local_78;
        pfVar7[1] = local_74;
        pfVar7[2] = fStack_70;
      }
      if (*piVar3 < *(int *)(param_1 + 0xae4)) {
        *(float **)(*(int *)(param_1 + 0xae8) + *piVar3 * 4) = pfVar7;
        *piVar3 = *piVar3 + 1;
      }
    }
    func_00115C54(afStack_54,(float *)(param_1 + 8),DAT_00355c28);
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    fVar11 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 * fVar13 * fVar9 + fVar14;
    uVar5 = func_00111A64(puVar4);
    func_004D80A4(&fStack_60,uVar5,fVar11);
    local_5c = fVar12;
    func_00115C54(&local_78,&local_78,&fStack_60);
    func_00115C70(local_6c,&local_78,afStack_54);
    uVar5 = in_fpscr & 0xfffffff | (uint)(local_64 < fVar12) << 0x1f |
            (uint)(local_64 == fVar12) << 0x1e;
    in_fpscr = uVar5 | (uint)(NAN(local_64) || NAN(fVar12)) << 0x1c;
    bVar1 = (byte)(uVar5 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      local_64 = fVar12;
    }
    fVar11 = SQRT(local_6c[0] * local_6c[0] + local_64 * local_64);
    if (iVar2 < (int)ALBW_AS_U32(fVar11)) {
      func_00115DAC(&local_78,local_6c,afStack_54,fVar15 / fVar11);
    }
    uVar16 = (undefined4)uVar17;
    iVar8 = iVar8 + 1;
  } while (iVar8 < iVar10);
LAB_00355b50:
  *(undefined4 *)(param_1 + 0x58c) = DAT_00355c00;
  *(undefined4 *)(param_1 + 0x9d4) = uVar16;
  *(float *)(param_1 + 0x9d8) = fVar12;
  *(undefined4 *)(param_1 + 0x9dc) = uVar16;
  func_004FC07C(param_1,0,0xffffffff,0);
  *(undefined2 *)(param_1 + 0x9e8) = 2;
  *(undefined1 *)(param_1 + 0x9ee) = 0;
  *(undefined1 *)(param_1 + 0x9ed) = 0;
  *(undefined4 *)(param_1 + 0xa44) = 0;
  *(float *)(param_1 + 0xa48) = fVar12;
  *(undefined4 *)(param_1 + 0xa40) = 0;
  return func_004FC07C(param_1,0,0xffffffff,0);
}

