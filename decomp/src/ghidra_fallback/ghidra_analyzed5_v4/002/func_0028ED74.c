#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern void func_00255494(int param_1,int param_2,undefined4 param_3,float fparam_0);
extern int func_0026F748(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_0028D7A4(int param_1,float fparam_0);
extern int func_002919F0(int param_1,int param_2);
extern int func_002D3B28(int param_1,int param_2);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_00344834(undefined4 param_1,int param_2,undefined4 param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3);
extern int func_00363850(int param_1);
extern int func_0051D1C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0, float fparam_1,float fparam_2);
extern int func_0053ED3C(int param_1);
extern int func_0053EDD8(int param_1);
extern float func_0053EE30(int param_1);
extern int func_0058DFB0(int param_1);
extern float DAT_0028f0b4;
extern int DAT_0028f0b8;
extern float DAT_0028f0bc;
extern float DAT_0028f0c0;
extern int DAT_0028f0c4;
extern float DAT_0028f0c8;
extern float DAT_0028f0cc;
extern int *DAT_0028f0d0;
extern int DAT_0028f0d4;
extern int *DAT_0028f12c;

// USA 0028ED74 <- EU 0028ED9C (Ghidra, non-matching)
// GLOBAL DAT_0028f0b4 float
// GLOBAL DAT_0028f0b8 int
// GLOBAL DAT_0028f0bc float
// GLOBAL DAT_0028f0c0 float
// GLOBAL DAT_0028f0c4 int
// GLOBAL DAT_0028f0c8 float
// GLOBAL DAT_0028f0cc float
// GLOBAL DAT_0028f0d0 int *
// GLOBAL DAT_0028f0d4 int
// GLOBAL DAT_0028f12c int *

undefined4 func_0028ED74(int param_1,int param_2,undefined4 param_3,float fparam_0,float fparam_1,
                  float fparam_2,float fparam_3)

{
  short sVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fparam_0_00;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 ((int *)(albw_frame + 0xc))
  fparam_0_00 = DAT_0028f0b4;
  pfVar2 = *(float **)(param_1 + 0x34);
  *pfVar2 = DAT_0028f0b4;
  pfVar2[1] = fparam_0_00;
  pfVar2[2] = fparam_0_00;
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (*(char *)(*(int *)(*(int *)(param_1 + 0x70) + 0x30) + 0xe8) == '\x03')) {
    func_002919F0(*(int *)(param_1 + 0x2c),1);
  }
  if (param_2 == 0x7b) {
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fparam_0_00);
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fparam_0_00);
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x44);
    iVar4 = ALBW_AS_U32(VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3));
    if (iVar4 < DAT_0028f0b8) {
      fVar8 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      func_0051D1C0(*(undefined4 **)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x88),
                    *(undefined4 *)(param_1 + 0x90),fparam_0_00,fparam_0_00,fVar8 * DAT_0028f0bc);
    }
    else {
      **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x90);
    }
    if (0xe < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) {
      **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x90);
      return func_002D55D0(param_1,0x7c);
    }
  }
  else if (param_2 == 0x7c) {
    fVar8 = fparam_0_00;
    fVar9 = DAT_0028f0c0;
    fVar7 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x5c);
    if ((0x40ffffff < (int)ALBW_AS_U32(fVar7)) &&
       (fVar7 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x5c), fVar8 = DAT_0028f0c8,
       (int)ALBW_AS_U32(fVar7) <= DAT_0028f0c4)) {
      fVar8 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x5c);
      fVar8 = (fVar8 - fVar9) * DAT_0028f0cc;
    }
    func_0051D1C0(*(undefined4 **)(param_1 + 0x3c),*(int *)(param_1 + 0x90),
                  *(int *)(param_1 + 0x90) + -0x80000000,fparam_0_00,fparam_0_00,fVar8);
    iVar4 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar4 != 0) {
      return func_002D55D0(param_1,0x7d);
    }
  }
  else if (param_2 == 0x7d) {
    if (*(char *)(param_1 + 0x7c) == '\0') {
      iVar4 = func_0058DFB0(*DAT_0028f0d0);
      if (*(int **)(param_1 + 0x70) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70));
      }
      if (iVar4 == 0) {
        iVar4 = func_0053ED3C(*(int *)(param_1 + 0x4c));
        local_30 = *(undefined4 *)(iVar4 + 0xc);
        local_2c = *(undefined4 *)(iVar4 + 0x1c);
        local_28 = *(undefined4 *)(iVar4 + 0x2c);
        local_24[0] = *(int *)(*(int *)(param_1 + 0x28) + 0x2cc);
        return func_0026F748(*(int *)(*DAT_0028f12c + 0xf9c),6,local_24,&local_30);
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0x6c);
      if (iVar4 != 0) {
        if (*(int *)(param_1 + 0x74) == 0x5c) {
          iVar5 = 0x55;
        }
        else {
          iVar5 = 8;
        }
        func_00165E28(iVar4,*(undefined2 *)(DAT_0028f0d4 + iVar5 * 0x2c + 0x2a));
      }
      *(undefined1 *)(param_1 + 0x7c) = 1;
      if (*(int *)(param_1 + 0x74) == 0x45) {
        func_00255494(*(int *)(param_1 + 0x28) + 0x40c,0x26,2,fparam_0);
        func_002D3B28(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8),1);
      }
      if (*(int *)(param_1 + 0x70) != 0) {
        return func_00363850(*(int *)(param_1 + 0x70));
      }
    }
    else {
      func_00344834(*(undefined4 *)(param_1 + 0x74),*(int *)(param_1 + 0x28),param_3,fparam_0,
                    fparam_1,fparam_2,fparam_3);
      sVar1 = *(short *)(param_1 + 0x80);
      if ((sVar1 != 0x91 && sVar1 != 0x96) && sVar1 != 0x97) {
        **(int **)(param_1 + 0x3c) = *(int *)(param_1 + 0x90) + -0x80000000;
        if (*(short *)(*(int *)(param_1 + 0x4c) + 0x52) == 0x71) {
          return func_002D55D0(param_1,0x3f);
        }
        return func_002D55D0(param_1,0);
      }
      puVar3 = (undefined4 *)func_002D55D0(param_1,0x91);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(param_1 + 0x84);
      }
    }
  }
  return 0;
}

