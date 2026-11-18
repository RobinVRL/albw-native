#include "ghidra_types.h"

extern int func_0014B1D4(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_003bc720;
extern int *DAT_003bc724;
extern undefined4 DAT_003bc728;
extern undefined4 DAT_003bc72c;
extern undefined4 DAT_003bc730;
extern int DAT_003bc750;
extern int *DAT_003bc754;
extern char s_SE_S_WARP_CROSS_BATTLE_END_003bc734[];

// USA 003BC614 <- EU 003BC5F0 (Ghidra, non-matching)
// GLOBAL DAT_003bc720 int *
// GLOBAL DAT_003bc724 int *
// GLOBAL DAT_003bc728 undefined4
// GLOBAL DAT_003bc72c undefined4
// GLOBAL DAT_003bc730 undefined4
// GLOBAL DAT_003bc750 int
// GLOBAL DAT_003bc754 int *
// GLOBAL s_SE_S_WARP_CROSS_BATTLE_END_003bc734 string

undefined4 func_003BC614(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 ((uint *)(albw_frame + 0x0))
  #define local_88 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(uint *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x54))
  #define local_38 (*(undefined1 *)(albw_frame + 0x58))
  #define local_30 (*(int *)(albw_frame + 0x60))
  #define local_2c (*(char * *)(albw_frame + 0x64))
  if (*param_2 != 2) {
    if (*param_2 == 0) {
      func_0014B1D4(*DAT_003bc720,0,1);
      *(undefined1 *)(*DAT_003bc724 + 0x65) = 1;
    }
    return 0;
  }
  local_88 = &local_84;
  local_90[1] = 3;
  uVar1 = 10;
  local_3c = 10;
  local_38 = 0;
  local_90[0] = 1;
  local_84 = 0;
  local_70 = param_4 | 0xff;
  local_80 = DAT_003bc72c;
  local_7c = DAT_003bc728;
  local_78 = DAT_003bc730;
  local_74 = DAT_003bc728;
  uVar2 = DAT_003bc728;
  uVar3 = DAT_003bc72c;
  uVar4 = DAT_003bc730;
  func_0016898C(*(int *)(param_1 + 0x1f8),local_90);
  local_88 = &local_84;
  local_90[1] = 3;
  local_3c = 10;
  local_38 = 0;
  local_84 = 0;
  local_90[0] = 1;
  local_70 = uVar1 | 0xff;
  local_80 = uVar3;
  local_7c = uVar2;
  local_78 = uVar4;
  local_74 = uVar2;
  func_0016898C(*(int *)(param_1 + 0x2f8),local_90);
  local_2c = s_SE_S_WARP_CROSS_BATTLE_END_003bc734;
  local_30 = DAT_003bc750;
  return func_00587F74(*DAT_003bc754,&local_30,0);
}

