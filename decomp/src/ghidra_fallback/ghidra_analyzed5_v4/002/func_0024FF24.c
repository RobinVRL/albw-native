#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_003521F0(int param_1,undefined4 param_2);
extern float DAT_002500c8;
extern undefined4 DAT_002500cc;
extern float DAT_002500d0;
extern undefined4 DAT_002500d4;
extern int DAT_002500f0;
extern char s_SE_SandPillar_GROW_UP_002500d8[];

// USA 0024FF24 <- EU 0024FF24 (Ghidra, non-matching)
// GLOBAL DAT_002500c8 float
// GLOBAL DAT_002500cc undefined4
// GLOBAL DAT_002500d0 float
// GLOBAL DAT_002500d4 undefined4
// GLOBAL DAT_002500f0 int
// GLOBAL s_SE_SandPillar_GROW_UP_002500d8 string

undefined4 func_0024FF24(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 ((uint *)(albw_frame + 0x0))
  #define local_88 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(uint *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x54))
  #define local_38 (*(undefined1 *)(albw_frame + 0x58))
  #define local_30 (*(int *)(albw_frame + 0x60))
  #define local_2c (*(char * *)(albw_frame + 0x64))
  uVar4 = DAT_002500d4;
  fVar2 = DAT_002500d0;
  uVar3 = DAT_002500cc;
  param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) - DAT_002500c8));
  local_88 = &local_84;
  local_90[1] = 3;
  local_84 = 0;
  local_38 = 0;
  local_3c = 10;
  local_90[0] = 1;
  local_70 = param_4 | 0xff;
  local_80 = fVar2;
  uStack_7c = uVar3;
  local_78 = uVar4;
  local_74 = uVar3;
  func_0016898C(param_1[0x121],local_90);
  iVar1 = *(int *)(param_1[0x121] + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(param_1[0x121] + 0x14) + 0x10) = uVar3;
  local_88 = &local_84;
  local_90[1] = 3;
  local_3c = 10;
  local_38 = 0;
  local_84 = 0;
  local_90[0] = 1;
  local_70 = (uint)(param_1 + 0x121) | 0xff;
  local_80 = fVar2;
  uStack_7c = uVar3;
  local_78 = uVar4;
  local_74 = uVar3;
  func_0016898C(param_1[0x122],local_90);
  iVar1 = *(int *)(param_1[0x122] + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(param_1[0x122] + 0x14) + 0x10) = uVar3;
  func_003521F0((int)(param_1 + 0xc9),ALBW_AS_F32(param_1[0x110]) == ALBW_AS_F32(param_1[0x112]) ^ 1);
  local_2c = s_SE_SandPillar_GROW_UP_002500d8;
  local_30 = DAT_002500f0;
  return func_00150A84(param_1,&local_30,0);
}

