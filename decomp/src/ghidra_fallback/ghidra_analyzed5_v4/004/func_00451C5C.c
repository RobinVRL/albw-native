#include "ghidra_types.h"

extern int func_0047D480(int param_1,int *param_2,int *param_3,float fparam_0,float fparam_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00529C1C(int param_1,int param_2);
extern int func_00529D00(int param_1,int param_2);
extern int func_00688F58(undefined4 *param_1,int *param_2);
extern float DAT_00451f2c;
extern float DAT_00451f30;
extern float DAT_00451f34;
extern float DAT_00451f38;
extern int DAT_00451f3c;
extern int DAT_00451f74;
extern char s_P_IconNewF_00_00451f64[];
extern char s_P_IconNew_00_00451f54[];
extern char s_P_IconUnlocked_00_00451f40[];

// USA 00451C5C <- EU 00451C34 (Ghidra, non-matching)
// GLOBAL DAT_00451f2c float
// GLOBAL DAT_00451f30 float
// GLOBAL DAT_00451f34 float
// GLOBAL DAT_00451f38 float
// GLOBAL DAT_00451f3c int
// GLOBAL DAT_00451f74 int
// GLOBAL s_P_IconNewF_00_00451f64 string
// GLOBAL s_P_IconNew_00_00451f54 string
// GLOBAL s_P_IconUnlocked_00_00451f40 string

void func_00451C5C(int param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  int iVar11;
  float fVar12;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_120 (*(int *)(albw_frame + 0x0))
  #define local_11c (*(char * *)(albw_frame + 0x4))
  #define uStack_118 (*(undefined4 *)(albw_frame + 0x8))
  #define local_114 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_f5 (*(undefined1 *)(albw_frame + 0x2b))
  #define local_f4 (*(int *)(albw_frame + 0x2c))
  #define local_f0 (*(undefined1 * *)(albw_frame + 0x30))
  #define uStack_ec (*(undefined4 *)(albw_frame + 0x34))
  #define local_e8 ((undefined1 *)(albw_frame + 0x38))
  #define uStack_c9 (*(undefined1 *)(albw_frame + 0x57))
  #define local_c8 (*(int *)(albw_frame + 0x58))
  #define local_c4 (*(char * *)(albw_frame + 0x5c))
  #define auStack_c0 ((undefined4 *)(albw_frame + 0x60))
  #define auStack_74 ((undefined4 *)(albw_frame + 0xac))
  iVar6 = DAT_00451f3c;
  fVar4 = DAT_00451f34;
  fVar10 = DAT_00451f30 + *param_2 * DAT_00451f2c;
  iVar11 = (int)fVar10;
  fVar12 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 == fVar10) << 0x1e | (uint)(fVar10 <= fVar12) << 0x1d
  ;
  bVar3 = (byte)(uVar1 >> 0x18);
  bVar9 = (bool)(bVar3 >> 6);
  if (!bVar9) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00451f34 == fVar10) << 0x1e |
            (uint)(fVar10 <= DAT_00451f34) << 0x1d;
    bVar3 = (byte)(uVar1 >> 0x18);
    bVar9 = (bool)(bVar3 >> 6);
  }
  if ((bool)(bVar3 >> 5 & 1) && !bVar9) {
    iVar11 = iVar11 + -1;
  }
  fparam_0 = (float)VectorSignedToFloat(iVar11,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = DAT_00451f38 - param_2[2] * DAT_00451f2c;
  iVar11 = (int)fVar10;
  fVar12 = (float)VectorSignedToFloat(iVar11,(byte)(uVar1 >> 0x15) & 3);
  uVar2 = uVar1 & 0xfffffff | (uint)(fVar12 == fVar10) << 0x1e | (uint)(fVar10 <= fVar12) << 0x1d;
  bVar3 = (byte)(uVar2 >> 0x18);
  bVar9 = (bool)(bVar3 >> 6);
  if (!bVar9) {
    uVar2 = uVar1 & 0xfffffff | (uint)(DAT_00451f34 == fVar10) << 0x1e |
            (uint)(fVar10 <= DAT_00451f34) << 0x1d;
    bVar3 = (byte)(uVar2 >> 0x18);
    bVar9 = (bool)(bVar3 >> 6);
  }
  if ((bool)(bVar3 >> 5 & 1) && !bVar9) {
    iVar11 = iVar11 + -1;
  }
  iVar5 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  fVar10 = (float)VectorSignedToFloat(iVar11,(byte)(uVar2 >> 0x15) & 3);
  *(float *)(iVar5 + 0x1c) = fparam_0;
  *(float *)(iVar5 + 0x20) = fVar10;
  *(float *)(iVar5 + 0x24) = fVar4;
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
  if (param_3 == 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
    local_11c = s_P_IconUnlocked_00_00451f40;
    local_120 = iVar6;
    iVar11 = func_005229AC(*(int **)(param_1 + 0x1c),&local_120);
    if ((iVar11 != 0) && ((*(byte *)(iVar11 + 0x44) & 1) == 0)) {
      *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe | 1;
      *(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) | 2;
    }
    local_11c = s_P_IconNew_00_00451f54;
    local_120 = iVar6;
    iVar11 = func_005229AC(*(int **)(param_1 + 0x1c),&local_120);
    if ((iVar11 != 0) && ((*(byte *)(iVar11 + 0x44) & 1) != 0)) {
      *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
    }
    local_11c = s_P_IconNewF_00_00451f64;
    local_120 = iVar6;
    iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),&local_120);
    if (iVar6 != 0) {
      if ((*(byte *)(iVar6 + 0x44) & 1) != 0) {
        *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      }
      return;
    }
  }
  else {
    local_c4 = s_P_IconUnlocked_00_00451f40;
    local_c8 = iVar6;
    iVar11 = func_005229AC(*(int **)(param_1 + 0x1c),&local_c8);
    if ((iVar11 != 0) && ((*(byte *)(iVar11 + 0x44) & 1) != 0)) {
      *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    local_c4 = s_P_IconNew_00_00451f54;
    local_c8 = iVar6;
    iVar11 = func_005229AC(*(int **)(param_1 + 0x1c),&local_c8);
    if ((iVar11 != 0) && ((*(byte *)(iVar11 + 0x44) & 1) == 0)) {
      *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe | 1;
      *(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) | 2;
    }
    iVar11 = *(int *)(param_1 + 0x1c);
    local_c4 = s_P_IconNewF_00_00451f64;
    local_c8 = iVar6;
    iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),&local_c8);
    if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x44) & 1) == 0)) {
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
      *(byte *)(iVar11 + 0x70) = *(byte *)(iVar11 + 0x70) | 2;
    }
    local_11c = local_114;
    *(int *)(param_1 + 0x44) = param_3;
    uStack_118 = 0x20;
    uStack_f5 = 0;
    local_f0 = local_e8;
    local_114[0] = 0;
    local_120 = DAT_00451f74;
    uStack_ec = 0x20;
    uStack_c9 = 0;
    local_f4 = DAT_00451f74;
    local_e8[0] = 0;
    func_00529C1C((int)param_2,(int)&local_120);
    func_00529D00((int)param_2,(int)&local_f4);
    piVar7 = func_00688F58(auStack_74,&local_f4);
    piVar8 = func_00688F58(auStack_c0,&local_120);
    func_0047D480(param_3,piVar8,piVar7,fparam_0,fVar10);
  }
  return;
}

