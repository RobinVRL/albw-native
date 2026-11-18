#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_001329B4(int param_1);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001DDB38(int param_1,uint param_2);
extern int func_001DE0CC(int param_1,int param_2);
extern int func_00255120(int *param_1);
extern int func_00270300(int param_1,int param_2,int param_3);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002914A0(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_004CDB2C(int param_1,int *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 func_004CF864(int param_1,uint param_2,uint param_3,float fparam_0);
extern int func_004E9C1C(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern float fRam002db1dc;
extern float fRam002db1e4;
extern float fRam002db1ec;
extern float fRam002db38c;
extern undefined4 uRam002db1c8;
extern float *pfRam002db1e8;
extern undefined4 *puRam002db1e0;
extern int *DAT_002db1ac;
extern int *DAT_002db1b0;
extern undefined4 DAT_002db1b4;
extern int *DAT_002db1b8;
extern float DAT_002db1bc;
extern float DAT_002db1c0;
extern int *DAT_002db1c4;
extern int *DAT_002db390;
extern undefined4 DAT_002db394;
extern float DAT_002db398;
extern undefined4 DAT_002db39c;
extern int *DAT_002db3a0;
extern int DAT_002db3b8;
extern undefined *PTR_002db1cc;
extern undefined *PTR_002db1d0;
extern undefined *PTR_002db1d4;
extern undefined *PTR_002db1d8;
extern char s_SE_PL_DOWN_START_002db3a4[];

// USA 002DAE08 <- EU 002DADE4 (Ghidra, non-matching)
// GLOBAL DAT_002db1ac int *
// GLOBAL DAT_002db1b0 int *
// GLOBAL DAT_002db1b4 undefined4
// GLOBAL DAT_002db1b8 int *
// GLOBAL DAT_002db1bc float
// GLOBAL DAT_002db1c0 float
// GLOBAL DAT_002db1c4 int *
// GLOBAL DAT_002db390 int *
// GLOBAL DAT_002db394 undefined4
// GLOBAL DAT_002db398 float
// GLOBAL DAT_002db39c undefined4
// GLOBAL DAT_002db3a0 int *
// GLOBAL DAT_002db3b8 int
// GLOBAL PTR_002db1cc undefined *
// GLOBAL PTR_002db1d0 undefined *
// GLOBAL PTR_002db1d4 undefined *
// GLOBAL PTR_002db1d8 undefined *
// GLOBAL UNK_002db1c8 undefined4
// GLOBAL UNK_002db1dc float
// GLOBAL UNK_002db1e0 uint *
// GLOBAL UNK_002db1e4 float
// GLOBAL UNK_002db1e8 float *
// GLOBAL UNK_002db1ec float
// GLOBAL UNK_002db38c float
// GLOBAL s_SE_PL_DOWN_START_002db3a4 string

undefined4 func_002DAE08(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  int *in_r3;
  uint in_fpscr;
  float fVar19;
  float in_s0;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  func_002914A0(*(int *)(param_1 + 0x2c));
  piVar4 = DAT_002db1ac;
  func_004CDB2C(*DAT_002db1ac,*(int **)(*(int *)(param_1 + 0x2c) + 0x70));
  fVar22 = DAT_002db1c0;
  fVar19 = DAT_002db1bc;
  piVar6 = DAT_002db1b8;
  uVar12 = DAT_002db1b4;
  piVar5 = DAT_002db1b0;
  piVar13 = (int *)(*DAT_002db1b0 + 0x2c2c);
  puVar9 = (undefined4 *)(*DAT_002db1b0 + 0x2c30);
  *(int *)(param_1 + 0x74) = *piVar13;
  *(undefined4 *)(param_1 + 0x78) = *puVar9;
  sVar2 = *(short *)(param_2 + 2);
  if (sVar2 == 0x98) {
    piVar13 = (int *)*piVar13;
    *(int **)(param_1 + 0x74) = piVar13;
    *(undefined4 *)(param_1 + 0x78) = *puVar9;
    func_004CF478((int)piVar13,1);
    func_004CF864(*(int *)(param_1 + 0x74),1,0xffffffff,in_s0);
    fVar21 = in_s0;
    func_004CF478(*(int *)(param_1 + 0x78),1);
    func_004CF864(*(int *)(param_1 + 0x78),1,0xffffffff,fVar21);
    puVar7 = PTR_002db1cc;
    uVar25 = CONCAT44(uRam002db1c8,uVar12);
    *(undefined4 *)(param_1 + 0x7c) = uRam002db1c8;
    pcVar10 = (char *)(*(int *)puVar7 + 0x18);
    cVar1 = *pcVar10;
    if (cVar1 == '\x15') {
      pcVar10 = *(char **)(*(int *)puVar7 + 0x1c);
    }
    if (cVar1 == '\x15' && pcVar10 == (char *)0x0) {
      iVar11 = func_001329B4(*piVar5);
      if ((*(uint *)(iVar11 + 0x2c8) & 1) == 0) {
        puVar9 = (undefined4 *)(iVar11 + 0x10);
      }
      else {
        puVar9 = (undefined4 *)(iVar11 + 400);
      }
      if (((*(uint *)PTR_002db1d0 & 1) == 0) &&
         (iVar11 = func_00100174((int *)PTR_002db1d0), iVar11 != 0)) {
        *(undefined **)PTR_002db1d4 = PTR_002db1d8;
      }
      if ((puVar9 == (undefined4 *)0x0) ||
         (iVar11 = (**(code **)*puVar9)(puVar9,PTR_002db1d4), iVar11 == 0)) {
        puVar9 = (undefined4 *)0x0;
      }
      fVar21 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
      if (puVar9 == (undefined4 *)0x0) {
        *(float *)(param_1 + 0x7c) = fVar21;
      }
      else {
        iVar11 = *(int *)(param_1 + 0x28);
        fVar24 = ALBW_AS_F32(puVar9[0xd]) - *(float *)(iVar11 + 0x3d0);
        fVar20 = ALBW_AS_F32(puVar9[0xe]) - *(float *)(iVar11 + 0x3d4);
        fVar23 = ALBW_AS_F32(puVar9[0xf]) - *(float *)(iVar11 + 0x3d8);
        fVar23 = SQRT(fVar24 * fVar24 + fVar20 * fVar20 + fVar23 * fVar23) - fVar19;
        uVar15 = in_fpscr & 0xfffffff;
        in_fpscr = uVar15 | (uint)(fRam002db1dc <= fVar23) << 0x1d;
        fVar20 = fRam002db1dc;
        if ((SUB41(in_fpscr >> 0x1d,0)) &&
           (uVar15 = uVar15 | (uint)(fVar23 < fVar21) << 0x1f | (uint)(fVar23 == fVar21) << 0x1e,
           in_fpscr = uVar15 | (uint)(NAN(fVar23) || NAN(fVar21)) << 0x1c,
           bVar3 = (byte)(uVar15 >> 0x18), fVar20 = fVar23,
           !(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
          fVar20 = fVar21;
        }
        *(float *)(param_1 + 0x7c) = fVar20;
      }
    }
    uVar18 = (undefined4)uVar25;
    iVar11 = *(int *)(param_1 + 0x74);
    iVar14 = *(int *)(param_1 + 0x28);
    *(uint *)(iVar11 + 0x164) = *(uint *)(iVar11 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar11 + 0x8c) = *(undefined4 *)(iVar14 + 0x3d0);
    *(undefined4 *)(iVar11 + 0x9c) = *(undefined4 *)(iVar14 + 0x3d4);
    *(undefined4 *)(iVar11 + 0xac) = *(undefined4 *)(iVar14 + 0x3d8);
    iVar11 = *(int *)(param_1 + 0x74);
    uVar12 = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(iVar11 + 0x74) = uVar12;
    *(uint *)(iVar11 + 0x164) = *(uint *)(iVar11 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar11 + 0x78) = uVar12;
    *(undefined4 *)(iVar11 + 0x7c) = uVar12;
    func_004CEAF0(*(int *)(param_1 + 0x74));
    if (((*puRam002db1e0 & 1) == 0) &&
       (iVar11 = func_00100174((int *)puRam002db1e0), fVar20 = fRam002db1ec, pfVar8 = pfRam002db1e8,
       fVar21 = fRam002db1e4, iVar11 != 0)) {
      *pfRam002db1e8 = fRam002db1e4;
      pfVar8[1] = fVar22;
      pfVar8[2] = fVar22;
      pfVar8[3] = fVar22;
      pfVar8[4] = fVar22;
      pfVar8[5] = fVar21;
      pfVar8[6] = fVar22;
      pfVar8[7] = fVar22;
      pfVar8[8] = fVar22;
      pfVar8[9] = fVar22;
      pfVar8[10] = fVar21;
      pfVar8[0xb] = fVar20;
    }
    iVar11 = func_001329B4(*piVar5);
    iVar14 = *(int *)(param_1 + 0x78);
    *(uint *)(iVar14 + 0x164) = *(uint *)(iVar14 + 0x164) | 0x40000000;
    func_001157FC((float *)(iVar14 + 0x80),(float *)(iVar11 + 0x120),pfRam002db1e8);
    func_004CEAF0(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x84) = 0x2d;
    *(undefined4 *)(param_1 + 0x88) = uVar18;
    *(undefined4 *)(param_1 + 0x80) = 0;
    func_001DDB38(*(int *)(param_1 + 0x28),1);
    iVar11 = *(int *)(*piVar4 + 0x44);
    if ((iVar11 == 0) || (iVar11 != *(int *)(*(int *)(param_1 + 0x2c) + 0x68))) {
      func_002D55D0(param_1,0);
    }
    else {
      if (*(uint *)(param_1 + 0x80) < *(uint *)(param_1 + 0x84) && *(uint *)(param_1 + 0x80) < 0x2d)
      {
        *(undefined1 *)(*piVar5 + 0x2c1c) = 0;
      }
      else {
        *(undefined1 *)(*piVar5 + 0x2c1c) = 1;
      }
      iVar11 = *(int *)(param_1 + 0x74);
      iVar14 = *(int *)(param_1 + 0x28);
      *(uint *)(iVar11 + 0x164) = *(uint *)(iVar11 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar11 + 0x8c) = *(undefined4 *)(iVar14 + 0x3d0);
      *(undefined4 *)(iVar11 + 0x9c) = *(undefined4 *)(iVar14 + 0x3d4);
      uVar15 = *(uint *)(iVar14 + 0x3d8);
      *(uint *)(iVar11 + 0xac) = uVar15;
      fVar21 = fRam002db38c;
      uVar17 = *(uint *)(param_1 + 0x84);
      if (uVar17 != 0) {
        uVar15 = *(uint *)(param_1 + 0x80);
      }
      iVar11 = *(int *)(param_1 + 0x74);
      if ((uVar17 != 0 && uVar15 != 0) && (fVar22 = fVar19, uVar15 < uVar17)) {
        fVar22 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
        fVar22 = fVar22 * *(float *)(param_1 + 0x88);
      }
      fVar20 = *(float *)(param_1 + 0x7c);
      *(uint *)(iVar11 + 0x164) = *(uint *)(iVar11 + 0x164) | 0x40000000;
      fVar20 = (fVar19 - fVar22) * fVar20;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar21 <= fVar20) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar20 = fVar21;
      }
      *(float *)(iVar11 + 0x74) = fVar20;
      *(float *)(iVar11 + 0x78) = fVar20;
      *(float *)(iVar11 + 0x7c) = fVar20;
      func_004CEAF0(*(int *)(param_1 + 0x74));
      if (*(uint *)(param_1 + 0x80) < *(uint *)(param_1 + 0x84)) {
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) + 1;
      }
      else if (0x37 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) {
        func_002D55D0(param_1,0x99);
      }
    }
    func_004E9C1C(*piVar6);
    iVar11 = *(int *)(param_1 + 0x4c);
    iVar16 = *(int *)(iVar11 + 0x2c);
    iVar14 = *(int *)(iVar16 + 0x14);
    fVar19 = (float)VectorUnsignedToFloat(2,(byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(iVar14 + 8) != fVar19) {
      iVar16 = 1;
      *(float *)(iVar14 + 8) = fVar19;
      *(undefined1 *)(iVar14 + 0x26) = 1;
    }
    return func_00169A80(*(int **)(iVar11 + 0x2c),iVar14,iVar16,piVar13);
  }
  if (sVar2 == 0x99) {
    func_004CDB2C(*piVar4,*(int **)(*(int *)(param_1 + 0x2c) + 0x70));
    piVar4 = DAT_002db390;
    uVar18 = 0x5a;
    func_00270300(*DAT_002db390,0,0x5a);
    uVar12 = DAT_002db394;
    *(undefined1 *)(*piVar4 + 0x5c) = 1;
    *(undefined4 *)(param_1 + 0x84) = 0x78;
    *(undefined4 *)(param_1 + 0x88) = uVar12;
    *(undefined4 *)(param_1 + 0x80) = 0;
    func_0028C8EC(*(int *)(param_1 + 0x4c),2,uVar18,in_r3);
    local_38 = DAT_002db3b8;
    fVar19 = DAT_002db398;
    fVar21 = (float)VectorUnsignedToFloat
                              (**(undefined4 **)(param_1 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8c) = fVar21 * DAT_002db398;
    *(float *)(param_1 + 0x90) = fVar22;
    piVar4 = DAT_002db3a0;
    uVar12 = DAT_002db39c;
    fVar22 = (float)VectorUnsignedToFloat
                              (**(undefined4 **)(param_1 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x98) = fVar22 * fVar19;
    *(undefined4 *)(param_1 + 0x94) = uVar12;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined2 *)(*(int *)(*piVar4 + 0x3dbe4) + 0x30) = 0;
    local_34 = s_SE_PL_DOWN_START_002db3a4;
    func_004EA104(*piVar6,&local_38,0);
  }
  else if (sVar2 == 0x9a) {
    *(undefined4 *)(param_1 + 0x84) = 0x2d;
    *(undefined4 *)(param_1 + 0x88) = uVar12;
    *(undefined4 *)(param_1 + 0x80) = 0;
    func_001DE0CC(*(int *)(param_1 + 0x28),0x14);
    *(ushort *)(*DAT_002db1c4 + 0x33e) = *(ushort *)(*DAT_002db1c4 + 0x33e) & 0xfefc;
    return func_00255120((int *)(*(int *)(param_1 + 0x28) + 0x40c));
  }
  return 0;
}

