#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0042DD38(int param_1,int param_2,int param_3);
extern int func_00522BE4(int param_1,int param_2);
extern int *DAT_001d66a8;
extern float DAT_001d66ac;
extern undefined4 DAT_001d66b0;
extern undefined4 DAT_001d66b4;
extern undefined4 DAT_001d66b8;
extern float DAT_001d66bc;

// USA 001D656C <- EU 001D656C (Ghidra, non-matching)
// GLOBAL DAT_001d66a8 int *
// GLOBAL DAT_001d66ac float
// GLOBAL DAT_001d66b0 undefined4
// GLOBAL DAT_001d66b4 undefined4
// GLOBAL DAT_001d66b8 undefined4
// GLOBAL DAT_001d66bc float

undefined4 func_001D656C(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(undefined4 *)(albw_frame + 0x0))
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(undefined2 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  #define local_24 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x50))
  #define local_1c (*(undefined2 *)(albw_frame + 0x54))
  #define local_18 (*(float *)(albw_frame + 0x58))
  iVar2 = *(int *)(*DAT_001d66a8 + 0xf74);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x20);
  }
  if ((iVar2 == 0 || iVar3 == 0) || (*(int *)(iVar3 + 0x154) < 2)) {
    local_6c = DAT_001d66ac;
    local_68 = DAT_001d66ac;
    local_64 = DAT_001d66ac;
    local_60 = DAT_001d66ac;
    local_5c = DAT_001d66ac;
    local_58 = DAT_001d66ac;
    local_54 = DAT_001d66ac;
    local_50 = DAT_001d66ac;
    local_4c = DAT_001d66ac;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = DAT_001d66b0;
    local_38 = DAT_001d66b0;
    local_34 = DAT_001d66b0;
    local_30 = DAT_001d66b4;
    local_2c = DAT_001d66b4;
    local_28 = DAT_001d66b4;
    local_1c = 6;
    local_20 = 0;
    local_24 = 0;
    local_70 = DAT_001d66b8;
    local_18 = DAT_001d66ac;
    fVar4 = DAT_001d66ac;
    iVar3 = func_00522BE4(*DAT_001d66a8,(int)&local_70);
    if (iVar3 != 0) {
      local_18 = local_18 + DAT_001d66bc;
      if (local_18 < fVar4) {
        local_18 = fVar4;
      }
      uVar1 = func_0042DD38((int)&local_70,*(int *)(param_1 + 0x418),0);
      if (uVar1 != 0) {
        return 1;
      }
    }
    iVar3 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x418),0,2,0,0);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

