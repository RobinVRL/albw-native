#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0042DD38(int param_1,int param_2,int param_3);
extern int func_00522BE4(int param_1,int param_2);
extern int *DAT_005068b8;
extern float DAT_005068bc;
extern undefined4 DAT_005068c0;
extern undefined4 DAT_005068c4;
extern undefined4 DAT_005068c8;
extern float DAT_005068cc;

// USA 00506798 <- EU 00506770 (Ghidra, non-matching)
// GLOBAL DAT_005068b8 int *
// GLOBAL DAT_005068bc float
// GLOBAL DAT_005068c0 undefined4
// GLOBAL DAT_005068c4 undefined4
// GLOBAL DAT_005068c8 undefined4
// GLOBAL DAT_005068cc float

undefined4 func_00506798(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(undefined4 *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define local_50 (*(undefined2 *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(undefined1 *)(albw_frame + 0x38))
  #define local_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  #define local_3c (*(undefined4 *)(albw_frame + 0x44))
  #define local_38 (*(undefined4 *)(albw_frame + 0x48))
  #define local_34 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined4 *)(albw_frame + 0x58))
  #define local_24 (*(undefined2 *)(albw_frame + 0x5c))
  #define local_20 (*(float *)(albw_frame + 0x60))
  iVar2 = *(int *)(*DAT_005068b8 + 0xf74);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x20);
  }
  if ((iVar2 == 0 || iVar3 == 0) || (*(int *)(iVar3 + 0x154) < 2)) {
    local_74 = DAT_005068bc;
    local_70 = DAT_005068bc;
    local_6c = DAT_005068bc;
    local_68 = DAT_005068bc;
    local_64 = DAT_005068bc;
    local_60 = DAT_005068bc;
    local_5c = DAT_005068bc;
    local_58 = DAT_005068bc;
    local_54 = DAT_005068bc;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = DAT_005068c0;
    local_40 = DAT_005068c0;
    local_3c = DAT_005068c0;
    local_38 = DAT_005068c4;
    local_34 = DAT_005068c4;
    local_30 = DAT_005068c4;
    local_24 = 6;
    local_28 = 0;
    local_2c = 0;
    local_78 = DAT_005068c8;
    local_20 = DAT_005068bc;
    fVar4 = DAT_005068bc;
    iVar3 = func_00522BE4(*DAT_005068b8,(int)&local_78);
    iVar2 = param_3 + param_2 * 0x30;
    if (iVar3 != 0) {
      local_20 = local_20 + DAT_005068cc;
      if (local_20 < fVar4) {
        local_20 = fVar4;
      }
      uVar1 = func_0042DD38((int)&local_78,*(int *)(iVar2 + 0xc),0);
      if (uVar1 != 0) {
        return 1;
      }
    }
    iVar3 = func_0014E2A0(param_1,*(undefined4 *)(iVar2 + 0xc),0,2,0,0);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

