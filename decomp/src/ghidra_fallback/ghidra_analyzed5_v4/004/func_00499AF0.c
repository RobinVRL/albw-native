#include "ghidra_types.h"

extern int func_003C8AF8(undefined4 *param_1,short *param_2);
extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_00499b60;
extern char u__s___s_00499b64[];

// USA 00499AF0 <- EU 00499AC8 (Ghidra, non-matching)
// GLOBAL DAT_00499b60 int
// GLOBAL u_%s:/%s_00499b64 unicode

undefined4 func_00499AF0(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x220];
  #define local_220 (*(int *)(albw_frame + 0x0))
  #define local_21c (*(short * *)(albw_frame + 0x4))
  #define uStack_218 (*(undefined4 *)(albw_frame + 0x8))
  #define local_214 ((short *)(albw_frame + 0xc))
  #define local_16 (*(undefined2 *)(albw_frame + 0x20a))
  local_21c = local_214;
  uStack_218 = 0x100;
  local_16 = 0;
  local_214[0] = 0;
  local_220 = DAT_00499b60;
  (**(code **)(*param_3 + 8))(param_3);
  iVar2 = param_3[1];
  (**(code **)(*param_2 + 8))(param_2);
  func_004994FC((int)&local_220,u__s___s_00499b64,param_2[1],iVar2);
  (**(code **)(local_220 + 8))(&local_220);
  uVar1 = func_003C8AF8((undefined4 *)(param_1 + 4),local_21c);
  return uVar1;
}

