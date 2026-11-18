#include "ghidra_types.h"

extern int func_003C8874(undefined4 *param_1,short *param_2,undefined4 param_3);
extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_00499c24;
extern char u__s___s_00499c28[];

// USA 00499B9C <- EU 00499B74 (Ghidra, non-matching)
// GLOBAL DAT_00499c24 int
// GLOBAL u_%s:/%s_00499c28 unicode

undefined4 func_00499B9C(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x230];
  #define local_228 (*(int *)(albw_frame + 0x8))
  #define local_224 (*(short * *)(albw_frame + 0xc))
  #define uStack_220 (*(undefined4 *)(albw_frame + 0x10))
  #define local_21c ((short *)(albw_frame + 0x14))
  #define local_1e (*(undefined2 *)(albw_frame + 0x212))
  local_224 = local_21c;
  uStack_220 = 0x100;
  local_1e = 0;
  local_21c[0] = 0;
  local_228 = DAT_00499c24;
  (**(code **)(*param_3 + 8))(param_3);
  iVar2 = param_3[1];
  (**(code **)(*param_2 + 8))(param_2);
  func_004994FC((int)&local_228,u__s___s_00499c28,param_2[1],iVar2);
  (**(code **)(local_228 + 8))(&local_228);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar1 = func_003C8874((undefined4 *)(param_1 + 8),local_224,param_4);
  return uVar1;
}

