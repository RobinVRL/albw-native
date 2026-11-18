#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int *DAT_001be1dc;
extern undefined4 *DAT_001be1e0;
extern float DAT_001be1e4;

// USA 001BE128 <- EU 001BE128 (Ghidra, non-matching)
// GLOBAL DAT_001be1dc int *
// GLOBAL DAT_001be1e0 undefined4 *
// GLOBAL DAT_001be1e4 float

void func_001BE128(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_28 (*(float *)(albw_frame + 0x48))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x50))
  #define local_1c (*(float *)(albw_frame + 0x54))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x5c))
  if (*(char *)(param_1 + 0x468) != '\0') {
    local_68 = *DAT_001be1e0;
    uStack_64 = DAT_001be1e0[1];
    uStack_5c = DAT_001be1e0[3];
    uStack_58 = DAT_001be1e0[4];
    uStack_54 = DAT_001be1e0[5];
    uStack_50 = DAT_001be1e0[6];
    uStack_4c = DAT_001be1e0[7];
    local_48 = DAT_001be1e0[8];
    uStack_44 = DAT_001be1e0[9];
    local_40 = DAT_001be1e0[10];
    local_60 = *(undefined4 *)(*(int *)(*DAT_001be1dc + 0x18) + 0x1a8);
    local_28 = *(float *)(param_1 + 0x3d0);
    uStack_24 = *(undefined4 *)(param_1 + 0x3d4);
    uStack_20 = *(undefined4 *)(param_1 + 0x3d8);
    func_00115D70(&local_1c,(float *)(param_1 + 0x374),DAT_001be1e4);
    local_38 = local_1c;
    uStack_34 = uStack_18;
    uStack_30 = uStack_14;
    func_00115C54(&local_28,&local_28,&local_38);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x438) + 0x34))
                      (*(int **)(param_1 + 0x438),&local_28,&local_68,0);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x468) = 0;
    }
  }
  return;
}

