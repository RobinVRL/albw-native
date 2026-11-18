#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_004DE3E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern float DAT_004dec9c;
extern int *DAT_004deca0;
extern int *DAT_004deca4;
extern undefined4 *DAT_004deca8;
extern int DAT_004decac;
extern float DAT_004decb0;

// USA 004DEB70 <- EU 004DEB48 (Ghidra, non-matching)
// GLOBAL DAT_004dec9c float
// GLOBAL DAT_004deca0 int *
// GLOBAL DAT_004deca4 int *
// GLOBAL DAT_004deca8 undefined4 *
// GLOBAL DAT_004decac int
// GLOBAL DAT_004decb0 float

undefined4 func_004DEB70(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_bc (*(float *)(albw_frame + 0x4))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(uint *)(albw_frame + 0x38))
  #define local_7c (*(float *)(albw_frame + 0x44))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define local_74 (*(float *)(albw_frame + 0x4c))
  #define auStack_70 ((undefined4 *)(albw_frame + 0x50))
  #define local_48 (*(ushort *)(albw_frame + 0x78))
  #define local_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x80))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x84))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x88))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x90))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x94))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x98))
  #define local_24 (*(undefined4 *)(albw_frame + 0x9c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0xa0))
  #define uStack_1c (*(uint *)(albw_frame + 0xa4))
  if (*(int *)(param_1 + 0x994) == 0) {
    iVar4 = *(int *)(*DAT_004deca0 + 0x18);
    if (iVar4 != 0) {
      local_bc = *(float *)(param_1 + 0x3d0);
      local_b8 = *(undefined4 *)(param_1 + 0x3d4);
      local_b4 = *(undefined4 *)(param_1 + 0x3d8);
      fparam_0 = DAT_004dec9c;
      piVar2 = (int *)func_005841A8(*DAT_004deca4,*DAT_004deca8,
                                    *(int **)(DAT_004decac + *DAT_004deca4));
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        local_bc = *(float *)(iVar3 + 8);
        local_b8 = *(undefined4 *)(iVar3 + 0xc);
        local_b4 = *(undefined4 *)(iVar3 + 0x10);
      }
      func_004DE3E0(&local_44,param_1,5,fparam_0);
      local_b0 = local_44;
      uStack_ac = uStack_40;
      uStack_a8 = uStack_3c;
      uStack_a4 = uStack_38;
      uStack_a0 = uStack_34;
      uStack_9c = uStack_30;
      uStack_98 = uStack_2c;
      uStack_94 = uStack_28;
      local_90 = local_24;
      uStack_8c = uStack_20;
      local_88 = uStack_1c;
      local_7c = DAT_004decb0;
      local_74 = DAT_004decb0;
      local_78 = fparam_0;
      func_00120FBC(iVar4,(undefined4 *)(param_1 + 0x9d4),&local_bc,&local_b0,uStack_1c & 0xffff,0,
                    &local_7c);
      *(uint *)(param_1 + 0x994) = *(int *)(param_1 + 0x994) + 1;
      return 0;
    }
  }
  else {
    func_004DE3E0(auStack_70,param_1,5,DAT_004dec9c);
    uVar1 = *(int *)(param_1 + 0x994) + 1;
    *(uint *)(param_1 + 0x994) = uVar1;
    if (uVar1 < local_48) {
      return 0;
    }
  }
  return 1;
}

