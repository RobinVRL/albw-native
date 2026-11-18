#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_00520FC0(void);
extern int func_00525BE0(int param_1,float *param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0065743C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0013cf2c;
extern int *DAT_0013cf30;
extern float DAT_0013cf34;
extern float DAT_0013cf38;

// USA 0013CD58 <- EU 0013CD58 (Ghidra, non-matching)
// GLOBAL DAT_0013cf2c int *
// GLOBAL DAT_0013cf30 int *
// GLOBAL DAT_0013cf34 float
// GLOBAL DAT_0013cf38 float

undefined4 func_0013CD58(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define fStack_24 (*(float *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  if (*(uint *)(param_1 + 0x51c) < *(uint *)(param_1 + 0x520)) {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) + 1;
  }
  iVar1 = func_0052FBA0(*DAT_0013cf2c + 0x3dbbc,*(uint *)(param_1 + 0x628));
  if (((iVar1 != 0) && (iVar2 = func_00588BE4(iVar1), iVar2 == *DAT_0013cf30)) &&
     (fVar4 = DAT_0013cf34, iVar1 = func_00525BE0(iVar1,&local_3c,DAT_0013cf34), iVar1 != 0)) {
    pfVar3 = (float *)func_00520FC0();
    if (0x3f800000 <
        (int)ALBW_AS_U32(((local_3c - *pfVar3) * (local_3c - *pfVar3) +
             (local_34 - pfVar3[2]) * (local_34 - pfVar3[2])))) {
      pfVar3 = (float *)(param_1 + 0x3d0);
      iVar1 = *(int *)(param_1 + 0x520) - *(int *)(param_1 + 0x51c);
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      local_2c = local_3c;
      uStack_28 = uStack_38;
      fStack_24 = local_34;
      fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      fVar4 = DAT_0013cf38 / fVar4;
      func_00115C70(&local_20,&local_2c,pfVar3);
      local_48 = local_20;
      uStack_44 = uStack_1c;
      uStack_40 = uStack_18;
      func_00115D70(&local_20,&local_48,fVar4);
      local_54 = local_20;
      local_50 = ALBW_AS_F32(uStack_1c);
      uStack_4c = uStack_18;
      return func_00115C54(pfVar3,pfVar3,&local_54);
    }
    fVar5 = DAT_0013cf38;
    func_00115C70(&local_58,(float *)(param_1 + 0x3d0),&local_3c);
    fVar6 = SQRT(local_58 * local_58 + local_54 * local_54 + local_50 * local_50);
    if (fVar4 < fVar6) {
      fVar5 = fVar5 / fVar6;
      local_58 = local_58 * fVar5;
      local_54 = local_54 * fVar5;
      local_50 = local_50 * fVar5;
    }
    func_00115C54((float *)(param_1 + 0x3d0),&local_3c,&local_58);
  }
  func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0);
  func_0065743C((undefined4 *)(param_1 + 0x4f8),2);
  *(undefined4 *)(param_1 + 0x628) = 0;
  return 0;
}

