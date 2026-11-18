#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004DE3E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_00583B1C(int param_1);
extern float DAT_004deb28;
extern int *DAT_004deb2c;
extern undefined4 *DAT_004deb30;
extern int DAT_004deb34;
extern int *DAT_004deb38;
extern float DAT_004deb3c;
extern int *DAT_004deb40;
extern float DAT_004deb44;

// USA 004DE944 <- EU 004DE91C (Ghidra, non-matching)
// GLOBAL DAT_004deb28 float
// GLOBAL DAT_004deb2c int *
// GLOBAL DAT_004deb30 undefined4 *
// GLOBAL DAT_004deb34 int
// GLOBAL DAT_004deb38 int *
// GLOBAL DAT_004deb3c float
// GLOBAL DAT_004deb40 int *
// GLOBAL DAT_004deb44 float

/* WARNING: Variable defined which should be unmapped: objStack_cc */

undefined4 func_004DE944(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float in_s0;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_cc ((uint *)(albw_frame + 0x4))
  #define local_c4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_ac (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x34))
  #define local_98 (*(uint *)(albw_frame + 0x38))
  #define uStack_94 (*(uint *)(albw_frame + 0x3c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x54))
  #define local_78 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x60))
  #define local_6c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x74))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x80))
  #define local_4c (*(undefined4 *)(albw_frame + 0x84))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x88))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_38 (*(float *)(albw_frame + 0x98))
  #define local_34 (*(float *)(albw_frame + 0x9c))
  #define local_30 (*(float *)(albw_frame + 0xa0))
  #define local_28 (*(int *)(albw_frame + 0xa8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xac))
  piVar1 = DAT_004deb2c;
  if (param_1[0x265] == 0) {
    local_24 = *DAT_004deb30;
    local_28 = DAT_004deb34;
    fVar6 = DAT_004deb28;
    func_00259354(*DAT_004deb38,&local_28,0x3c);
    iVar2 = *(int *)(*piVar1 + 0x18);
    if (iVar2 != 0) {
      func_004DE3E0(&local_6c,param_1,1,fVar6);
      local_c4 = local_6c;
      uStack_c0 = uStack_68;
      uStack_bc = uStack_64;
      uStack_b8 = uStack_60;
      uStack_b4 = uStack_5c;
      uStack_b0 = uStack_58;
      local_ac = uStack_54;
      uStack_a8 = uStack_50;
      local_a4 = local_4c;
      uStack_a0 = uStack_48;
      uStack_9c = uStack_44;
      objStack_cc[1] = (uint)&local_38;
      local_38 = DAT_004deb3c;
      local_30 = DAT_004deb3c;
      objStack_cc[0] = 0;
      local_34 = fVar6;
      func_00120FBC(iVar2,param_1 + 0x275,(float *)(param_1 + 0xf4),&local_c4,0,0,
                    (float *)objStack_cc[1]);
      uVar4 = param_1[0x265];
LAB_004deb10:
      param_1[0x265] = uVar4 + 1;
      return 0;
    }
  }
  else {
    fVar6 = DAT_004deb28;
    if (param_1[0x265] == 0x10e) {
      (**(code **)(*param_1 + 0xac))(param_1,0xf,0xffffffff);
    }
    if ((*(char *)((int)param_1 + 0x852) == '\x0f') &&
       (iVar2 = func_00583B1C((int)param_1), iVar2 != 0)) {
      (**(code **)(*param_1 + 0xac))(param_1,0x10,0xffffffff);
    }
    iVar2 = *(int *)(*piVar1 + 0x18);
    if (iVar2 != 0) {
      func_004AD9E8(*DAT_004deb40,3,0,1,in_s0);
      iVar3 = param_1[0x265] + -0xb4;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      func_004DE3E0(objStack_cc,param_1,1,(fVar5 - fVar6) / DAT_004deb44);
      local_98 = objStack_cc[0];
      uStack_94 = objStack_cc[1];
      uStack_90 = local_c4;
      uStack_8c = uStack_c0;
      uStack_88 = uStack_bc;
      uStack_84 = uStack_b8;
      uStack_80 = uStack_b4;
      uStack_7c = uStack_b0;
      local_78 = local_ac;
      uStack_74 = uStack_a8;
      uStack_70 = local_a4;
      func_001E8268(iVar2,param_1 + 0x275,param_1 + 0xf4,&local_98);
      uVar4 = param_1[0x265];
      if (uVar4 < 0x1e0) goto LAB_004deb10;
    }
  }
  return 1;
}

