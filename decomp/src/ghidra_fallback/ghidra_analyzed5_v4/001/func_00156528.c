#include "ghidra_types.h"

extern int func_001566B4(int param_1);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_00520FC0(void);
extern undefined4 DAT_001566a0;
extern undefined4 DAT_001566a4;
extern float DAT_001566a8;
extern undefined4 *DAT_001566ac;
extern int *DAT_001566b0;
extern float DAT_001566b4;

// USA 00156528 <- EU 0015652C (Ghidra, non-matching)
// GLOBAL DAT_001566a0 undefined4
// GLOBAL DAT_001566a4 undefined4
// GLOBAL DAT_001566a8 float
// GLOBAL DAT_001566ac undefined4 *
// GLOBAL DAT_001566b0 int *
// GLOBAL DAT_001566b4 float

undefined4 func_00156528(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined4 * *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined1 *)(albw_frame + 0x28))
  #define local_37 (*(undefined1 *)(albw_frame + 0x29))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x4c))
  if (*(short *)(param_1 + 0x922) != 0) {
    *(short *)(param_1 + 0x922) = *(short *)(param_1 + 0x922) + -1;
    return 0;
  }
  *(undefined2 *)(param_1 + 0x922) = 0x19;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  uStack_50 = DAT_001566a0;
  local_48 = 0;
  local_3c = DAT_001566a4;
  local_38 = 0;
  local_37 = 1;
  local_28 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_24 = *(undefined4 *)(param_1 + 0x3d4);
  uStack_20 = *(undefined4 *)(param_1 + 0x3d8);
  local_40 = &local_28;
  local_34 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_2c = *(undefined4 *)(param_1 + 0x3d8);
  local_44 = &local_34;
  local_30 = *(float *)(param_1 + 0x3d4) - DAT_001566a8;
  local_1c = *DAT_001566ac;
  local_18 = DAT_001566ac[1];
  uStack_14 = DAT_001566ac[2];
  local_60 = &local_1c;
  local_4c = 0x78;
  uVar2 = DAT_001566a4;
  fVar3 = DAT_001566a8;
  iVar1 = func_004A8030(*DAT_001566b0,(int *)&local_60,3);
  if ((iVar1 != 0) &&
     (iVar1 = func_00520FC0(),
     *(float *)(iVar1 + 4) + DAT_001566b4 <
     (*(float *)(param_1 + 0x3d4) - fVar3) + ALBW_AS_F32(local_60[1]))) {
    *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x904);
    *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x908);
    *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x90c);
    *(undefined4 *)(param_1 + 0x464) = uVar2;
    *(undefined4 *)(param_1 + 0x468) = uVar2;
    *(undefined4 *)(param_1 + 0x46c) = uVar2;
    return 0;
  }
  return func_001566B4(param_1);
}

