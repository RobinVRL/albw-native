#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00133510(int *param_1,int param_2,int *param_3);
extern void func_001699A0(int *param_1,int *param_2,undefined4 *param_3,float fparam_0);
extern float func_001D6794(int param_1,int param_2);
extern int func_003FAF74(int *param_1,int param_2,uint param_3);
extern int func_00522E7C(int param_1,uint *param_2,int *param_3,int *param_4);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern int DAT_00506b28;
extern uint DAT_00506b2c;
extern undefined DAT_00506b30;
extern float DAT_00506b3c;
extern char s__twinkle_00506b33[];
extern char s_cf_00506b33[];
extern char s_color_00506b20[];
extern undefined4 _DAT_00506b30;

// USA 005068F8 <- EU 005068D0 (Ghidra, non-matching)
// GLOBAL DAT_00506b28 int
// GLOBAL DAT_00506b2c uint
// GLOBAL DAT_00506b30 undefined
// GLOBAL DAT_00506b3c float
// GLOBAL s_cf_00506b33 string
// GLOBAL s_color_00506b20 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_005068F8(int param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar16;
  longlong lVar15;
  ulonglong uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(int * *)(albw_frame + 0x8))
  iVar6 = DAT_00506b28;
  *(undefined4 *)(param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined4 *)(param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0x630) = 0;
  *(undefined4 *)(param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 0x638) = 0;
  *(undefined4 *)(param_1 + 0x63c) = 0;
  *(undefined4 *)(param_1 + 0x640) = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8);
  if (*(int *)(iVar3 + 200) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(iVar3 + 0xd0);
  }
  *(int *)(param_1 + 0x648) = iVar3;
  local_3c = s_color_00506b20;
  local_40 = iVar6;
  local_38 = (int *)func_00533304(*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8),&local_40,1);
  piVar7 = *(int **)(param_1 + 0x480);
  lVar15 = (ulonglong)DAT_00506b2c << 0x20;
  piVar9 = piVar7 + *(int *)(param_1 + 0x478);
  uVar12 = DAT_00506b2c;
  if (piVar7 != piVar9) {
    uVar17 = (ulonglong)_DAT_00506b30;
    piVar8 = (int *)(param_1 + 0x624);
    do {
      fVar16 = ALBW_AS_F32(((ulonglong)lVar15 >> 0x20));
      fVar11 = func_001D6794(*(ushort *)(*piVar7 + 0x2a) & 0xff,*(ushort *)(*piVar7 + 0x2c) & 0xff);
      iVar13 = (int)fVar11;
      fVar14 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
      uVar12 = in_fpscr & 0xfffffff | (uint)(fVar14 == fVar11) << 0x1e |
               (uint)(fVar11 <= fVar14) << 0x1d;
      bVar2 = (byte)(uVar12 >> 0x18);
      bVar10 = (bool)(bVar2 >> 6);
      if (!bVar10) {
        uVar12 = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar11) << 0x1e |
                 (uint)(fVar11 <= fVar16) << 0x1d;
        bVar2 = (byte)(uVar12 >> 0x18);
        bVar10 = (bool)(bVar2 >> 6);
      }
      if ((bool)(bVar2 >> 5 & 1) && !bVar10) {
        iVar13 = iVar13 + -1;
      }
      fVar11 = (float)VectorSignedToFloat(iVar13,(byte)(uVar12 >> 0x15) & 3);
      in_fpscr = uVar12 & 0xfffffff | (uint)(fVar16 <= fVar11) << 0x1d;
      bVar10 = SUB41(in_fpscr >> 0x1d,0);
      if (!bVar10) {
        fVar11 = fVar16;
      }
      lVar15 = CONCAT44(fVar16,fVar11);
      if (bVar10) {
        fVar14 = ALBW_AS_F32(uVar17);
        uVar12 = uVar12 & 0xfffffff | (uint)(fVar11 < fVar14) << 0x1f |
                 (uint)(fVar11 == fVar14) << 0x1e;
        in_fpscr = uVar12 | (uint)(NAN(fVar11) || NAN(fVar14)) << 0x1c;
        bVar2 = (byte)(uVar12 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          lVar15 = CONCAT44(fVar16,fVar14);
        }
      }
      uVar12 = (uint)ALBW_AS_F32(lVar15);
      piVar5 = piVar8;
      if (uVar12 < 8) {
        piVar5 = piVar8 + uVar12;
      }
      if (*piVar5 == 0) {
        puVar4 = (uint *)func_0010BAB4(8);
        if (puVar4 == (uint *)0x0) {
          puVar4 = (uint *)0x0;
        }
        else {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        piVar5 = piVar8;
        if (uVar12 < 8) {
          piVar5 = piVar8 + uVar12;
        }
        *piVar5 = (int)puVar4;
        func_00522E7C(iVar3,puVar4,(int *)0x0,(int *)0x0);
        func_00133510(local_38,*(int *)(iVar3 + 8),(int *)puVar4);
        fVar11 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
        func_001699A0((int *)puVar4,local_38,(undefined4 *)0x0,fVar11);
      }
      uVar12 = (uint)((ulonglong)lVar15 >> 0x20);
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar9);
  }
  local_3c = s__twinkle_00506b33 + 1;
  local_40 = iVar6;
  piVar7 = (int *)func_00533304(*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8),&local_40,1);
  *(int **)(param_1 + 0x644) = piVar7;
  uVar1 = *(ushort *)(*piVar7 + 6);
  iVar6 = func_0058FAAC((uint)uVar1 << 5,0x10);
  func_003FAF74((int *)(param_1 + 0x64c),iVar6,(uint)uVar1);
  fVar11 = DAT_00506b3c;
  *(float *)(param_1 + 0x660) = *(float *)(**(int **)(param_1 + 0x644) + 8) - DAT_00506b3c;
  *(undefined1 *)(param_1 + 0x668) = 1;
  *(uint *)(param_1 + 0x658) = uVar12;
  *(uint *)(param_1 + 0x654) = uVar12;
  *(float *)(param_1 + 0x65c) = fVar11;
  *(undefined4 *)(param_1 + 0x664) = 0;
  return;
}

