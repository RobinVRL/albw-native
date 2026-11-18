#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int DAT_001367e4;
extern undefined4 DAT_001367e8;
extern char s_SE_Curtain_BURN_001367d4[];

// USA 0013671C <- EU 0013671C (Ghidra, non-matching)
// GLOBAL DAT_001367e4 int
// GLOBAL DAT_001367e8 undefined4
// GLOBAL s_SE_Curtain_BURN_001367d4 string

void func_0013671C(int *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_80 ((int *)(albw_frame + 0x0))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  local_20 = DAT_001367e4;
  local_1c = s_SE_Curtain_BURN_001367d4;
  func_00150A84(param_1,&local_20,0);
  puVar1 = (uint *)func_002C11E8(aiStack_80,1,1,0);
  func_0016898C(param_1[0x121],puVar1);
  uVar2 = DAT_001367e8;
  *(undefined4 *)(*(int *)(param_1[0x121] + 0x14) + 0x10) = DAT_001367e8;
  puVar1 = (uint *)func_002C11E8(aiStack_80,0,1,0);
  func_0016898C(param_1[0x122],puVar1);
  *(undefined4 *)(*(int *)(param_1[0x122] + 0x14) + 0x10) = uVar2;
  return;
}

