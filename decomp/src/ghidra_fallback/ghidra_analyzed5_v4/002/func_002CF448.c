#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0048B330(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00491404(float *param_1,float *param_2);
extern int func_004914B4(float *param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern void func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_002cf798;
extern int *DAT_002cf79c;
extern undefined4 *DAT_002cf7a0;
extern undefined4 DAT_002cf7a4;
extern float DAT_002cf7a8;
extern int DAT_002cf7ac;
extern float *DAT_002cf7b0;
extern int DAT_002cf7b4;
extern float DAT_002cf7b8;
extern float DAT_002cf7bc;
extern float DAT_002cf7c0;
extern float DAT_002cf7c4;
extern float DAT_002cf7c8;
extern float DAT_002cf7cc;

// USA 002CF448 <- EU 002CF424 (Ghidra, non-matching)
// GLOBAL DAT_002cf798 int *
// GLOBAL DAT_002cf79c int *
// GLOBAL DAT_002cf7a0 undefined4 *
// GLOBAL DAT_002cf7a4 undefined4
// GLOBAL DAT_002cf7a8 float
// GLOBAL DAT_002cf7ac int
// GLOBAL DAT_002cf7b0 float *
// GLOBAL DAT_002cf7b4 int
// GLOBAL DAT_002cf7b8 float
// GLOBAL DAT_002cf7bc float
// GLOBAL DAT_002cf7c0 float
// GLOBAL DAT_002cf7c4 float
// GLOBAL DAT_002cf7c8 float
// GLOBAL DAT_002cf7cc float

undefined4 func_002CF448(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  code *in_r2;
  int *in_r3;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fparam_2;
  float fVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define local_e0 (*(float *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define afStack_d8 ((float *)(albw_frame + 0x18))
  #define local_cc (*(float *)(albw_frame + 0x24))
  #define local_bc (*(float *)(albw_frame + 0x34))
  #define local_b0 (*(float *)(albw_frame + 0x40))
  #define local_ac (*(float *)(albw_frame + 0x44))
  #define local_a8 ((float *)(albw_frame + 0x48))
  #define afStack_80 ((float *)(albw_frame + 0x70))
  #define afStack_50 ((float *)(albw_frame + 0xa0))
  #define afStack_40 ((float *)(albw_frame + 0xb0))
  #define afStack_30 ((float *)(albw_frame + 0xc0))
  puVar4 = (undefined4 *)func_0052FBA0(*DAT_002cf798 + 0x3dbbc,*(uint *)(param_1 + 0x478));
  piVar6 = (int *)*DAT_002cf79c;
  if (((uint)*DAT_002cf79c & 1) == 0) {
    iVar5 = func_00100174(DAT_002cf79c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      *DAT_002cf7a0 = DAT_002cf7a4;
      piVar6 = DAT_002cf79c;
    }
  }
  uVar12 = CONCAT44(DAT_002cf7a0,piVar6);
  if (puVar4 == (undefined4 *)0x0) {
LAB_002cf4ac:
    puVar4 = (undefined4 *)0x0;
  }
  else {
    in_r2 = *(code **)*puVar4;
    uVar12 = (*in_r2)(puVar4);
    if ((int)uVar12 == 0) goto LAB_002cf4ac;
  }
  if (puVar4 == (undefined4 *)0x0) {
    return (int)uVar12;
  }
  func_00169A80(*(int **)(param_1 + 0x434),(int)((ulonglong)uVar12 >> 0x20),in_r2,in_r3);
  func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
  iVar5 = *(int *)(param_1 + 0x434);
  if (**(int **)(iVar5 + 0x14) == 3) {
    iVar5 = *(int *)(*(int *)(puVar4[0x1e8] + 0x24) + 0x14) +
            *(short *)(DAT_002cf7ac + (int)puVar4) * 0x30;
    local_b0 = *(float *)(iVar5 + 0xc);
    local_ac = *(float *)(iVar5 + 0x1c);
    local_a8[0] = *(float *)(iVar5 + 0x2c);
    local_e4 = *DAT_002cf7b0;
    local_e0 = DAT_002cf7b0[1];
    local_dc = DAT_002cf7b0[2];
    fVar9 = DAT_002cf7a8;
    func_004D7F70(&local_e4,puVar4[0xfa]);
    func_00115C54(&local_b0,&local_b0,&local_e4);
    func_0051D27C((int *)(param_1 + 1000),puVar4[0xfa] + -0x80000000,DAT_002cf7b4);
    uVar7 = func_004D838C((float *)(param_1 + 0x3d0),&local_b0,DAT_002cf7bc,DAT_002cf7b8,fVar9);
    cVar2 = *(char *)(param_1 + 0x4a0);
    bVar8 = cVar2 == '\0';
    if (bVar8) {
      cVar2 = *(char *)((int)puVar4 + 0x852);
    }
    if (bVar8 && cVar2 == '\b') {
      *(char *)(param_1 + 0x4a0) = (char)uVar7;
    }
    func_004D7E0C(afStack_d8,*(uint *)(param_1 + 0x47c),*(uint *)(param_1 + 1000));
    iVar5 = *(int *)(param_1 + 0x430);
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    func_001151F8((undefined4 *)(iVar5 + 0x80),afStack_d8,(undefined4 *)(param_1 + 0x3d0));
    func_001151F8((undefined4 *)(param_1 + 0x448),afStack_d8,(undefined4 *)(param_1 + 0x3d0));
    goto LAB_002cf778;
  }
  if (**(int **)(iVar5 + 0x20) == 3) {
    if (*(int *)(param_1 + 0x49c) == 0) {
      fVar9 = *(float *)(iVar5 + 0x88);
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < DAT_002cf7c0) << 0x1f |
              (uint)(fVar9 == DAT_002cf7c0) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar9) || NAN(DAT_002cf7c0)) << 0x1c;
      bVar3 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_002cf740;
    }
    fparam_2 = DAT_002cf7a8;
    fVar11 = DAT_002cf7c0;
    func_001119F4(afStack_d8,
                  (undefined4 *)
                  (*(int *)(*(int *)(puVar4[0x1e8] + 0x24) + 0x14) +
                  *(short *)(DAT_002cf7ac + (int)puVar4) * 0x30));
    fVar9 = DAT_002cf7c4;
    if (*(int *)(param_1 + 0x49c) != 0) {
      *(int *)(param_1 + 0x49c) = *(int *)(param_1 + 0x49c) + -1;
    }
    fVar10 = (float)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x49c),(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = DAT_002cf7c8 - (fVar10 - fVar11) / fVar9;
    func_001151D8(local_a8,(undefined4 *)(param_1 + 0x448));
    func_001151D8(afStack_80,afStack_d8);
    func_004914B4(afStack_40,local_a8);
    func_004914B4(afStack_30,afStack_80);
    func_0048B330(afStack_50,afStack_40,afStack_30,fVar11);
    func_00491404(local_a8,afStack_50);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x454);
    fVar9 = DAT_002cf7cc;
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x464);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x474);
    local_e4 = local_cc;
    local_e0 = local_bc;
    local_dc = local_ac;
    func_004D838C((float *)(param_1 + 0x3d0),&local_e4,fVar11,fVar9,fparam_2);
    iVar5 = *(int *)(param_1 + 0x430);
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    func_001151F8((undefined4 *)(iVar5 + 0x80),local_a8,(undefined4 *)(param_1 + 0x3d0));
  }
  else {
LAB_002cf740:
    iVar5 = *(int *)(param_1 + 0x430);
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar5 + 0x80),
                  (undefined4 *)
                  (*(int *)(*(int *)(puVar4[0x1e8] + 0x24) + 0x14) +
                  *(short *)(DAT_002cf7ac + (int)puVar4) * 0x30));
  }
LAB_002cf778:
  uVar7 = func_004CEAF0(*(int *)(param_1 + 0x430));
  return uVar7;
}

