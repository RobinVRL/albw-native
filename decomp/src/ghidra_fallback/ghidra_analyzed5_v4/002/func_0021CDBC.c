#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00189494(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065E110(undefined4 *param_1,undefined1 param_2);
extern float fRam0021cf24;
extern float DAT_0021cf20;

// USA 0021CDBC <- EU 0021CDBC (Ghidra, non-matching)
// GLOBAL DAT_0021cf20 float
// GLOBAL UNK_0021cf24 float

undefined4 func_0021CDBC(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define fStack_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define fStack_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  uVar4 = func_0058AB74(param_1);
  if ((int)uVar4 == 2) {
    iVar1 = func_0058A8F0(param_1);
    if (iVar1 != 0) {
      func_004FABDC(param_1,3,0xffffffff,0);
      local_34 = *(float *)(param_1 + 0x3d0);
      uStack_30 = *(undefined4 *)(param_1 + 0x3d4);
      uStack_2c = *(undefined4 *)(param_1 + 0x3d8);
      func_00115D70(&local_40,(float *)(param_1 + 0x374),fRam0021cf24);
      fStack_50 = local_40;
      local_4c = fStack_3c;
      fStack_48 = ALBW_AS_F32(uStack_38);
      func_00115C70(&local_34,&local_34,&fStack_50);
      return func_00189494(&local_34,*(undefined4 *)(param_1 + 1000),3,*(uint *)(param_1 + 0x2cc));
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x918) - *(int *)(param_1 + 0x914);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    pfVar2 = (float *)(param_1 + 0x3d0);
    local_34 = *(float *)(param_1 + 0x8f0);
    uStack_30 = *(undefined4 *)(param_1 + 0x8f4);
    uStack_2c = *(undefined4 *)(param_1 + 0x8f8);
    fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = DAT_0021cf20 / fVar3;
    func_00115C70(&local_24,&local_34,pfVar2);
    local_40 = local_24;
    fStack_3c = ALBW_AS_F32(uStack_20);
    uStack_38 = uStack_1c;
    func_00115D70(&local_28,&local_40,fVar3);
    local_4c = local_28;
    fStack_48 = local_24;
    uStack_44 = uStack_20;
    func_00115C54(pfVar2,pfVar2,&local_4c);
    if (*(uint *)(param_1 + 0x914) < *(uint *)(param_1 + 0x918)) {
      *(uint *)(param_1 + 0x914) = *(uint *)(param_1 + 0x914) + 1;
    }
    iVar1 = func_0058A8F0(param_1);
    if (iVar1 != 0) {
      func_0065E110((undefined4 *)(param_1 + 0x8bc),1);
    }
  }
  return 0;
}

