#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_002CEA4C(undefined4 *param_1,undefined4 param_2,float fparam_0);
extern int *DAT_002cedcc;
extern float DAT_002cedd0;
extern float DAT_002cedd4;
extern float DAT_002cedd8;

// USA 002CECA0 <- EU 002CEC7C (Ghidra, non-matching)
// GLOBAL DAT_002cedcc int *
// GLOBAL DAT_002cedd0 float
// GLOBAL DAT_002cedd4 float
// GLOBAL DAT_002cedd8 float

/* WARNING: Variable defined which should be unmapped: objStack_c0 */

undefined4 func_002CECA0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_c0 ((uint *)(albw_frame + 0x0))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(uint *)(albw_frame + 0x38))
  #define uStack_84 (*(uint *)(albw_frame + 0x3c))
  #define uStack_80 (*(uint *)(albw_frame + 0x40))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_68 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x60))
  #define local_5c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x74))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x80))
  #define local_3c (*(undefined4 *)(albw_frame + 0x84))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x88))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_28 (*(float *)(albw_frame + 0x98))
  #define local_24 (*(float *)(albw_frame + 0x9c))
  #define local_20 (*(float *)(albw_frame + 0xa0))
  iVar3 = *(int *)(*DAT_002cedcc + 0x18);
  if (*(int *)(param_1 + 0x49c) == 0) {
    if (iVar3 == 0) {
      return 1;
    }
    fVar4 = DAT_002cedd0;
    func_002CEA4C(&local_5c,param_1,DAT_002cedd0);
    local_b4 = local_5c;
    uStack_b0 = uStack_58;
    uStack_ac = uStack_54;
    uStack_a8 = uStack_50;
    uStack_a4 = uStack_4c;
    local_a0 = uStack_48;
    uStack_9c = uStack_44;
    uStack_98 = uStack_40;
    local_94 = local_3c;
    uStack_90 = uStack_38;
    uStack_8c = uStack_34;
    objStack_c0[2] = (uint)&local_28;
    local_28 = DAT_002cedd8;
    local_20 = DAT_002cedd8;
    objStack_c0[0] = 0;
    objStack_c0[1] = 0;
    local_24 = fVar4;
    func_00120FBC(iVar3,(undefined4 *)(param_1 + 0x4e0),(float *)(param_1 + 0x3d0),&local_b4,0,0,
                  (float *)objStack_c0[2]);
    uVar2 = *(uint *)(param_1 + 0x49c);
  }
  else {
    if (iVar3 == 0) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x49c) + -0xb4;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    func_002CEA4C(objStack_c0,param_1,(fVar4 - DAT_002cedd0) / DAT_002cedd4);
    local_88 = objStack_c0[0];
    uStack_84 = objStack_c0[1];
    uStack_80 = objStack_c0[2];
    uStack_7c = local_b4;
    uStack_78 = uStack_b0;
    uStack_74 = uStack_ac;
    uStack_70 = uStack_a8;
    uStack_6c = uStack_a4;
    local_68 = local_a0;
    uStack_64 = uStack_9c;
    uStack_60 = uStack_98;
    func_001E8268(iVar3,(int *)(param_1 + 0x4e0),(undefined4 *)(param_1 + 0x3d0),&local_88);
    uVar2 = *(uint *)(param_1 + 0x49c);
    if (0x1df < uVar2) {
      *(undefined4 *)(param_1 + 0x49c) = 0;
      return 1;
    }
  }
  *(uint *)(param_1 + 0x49c) = uVar2 + 1;
  return 0;
}

