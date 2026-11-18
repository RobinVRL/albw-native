#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002B8C84(int param_1);
extern int func_004F8638(int *param_1,undefined1 param_2);
extern undefined4 DAT_003b8344;
extern int DAT_003b835c;
extern char s_SE_ShadowLink_DEAD_003b8348[];

// USA 003B82E0 <- EU 003B82BC (Ghidra, non-matching)
// GLOBAL DAT_003b8344 undefined4
// GLOBAL DAT_003b835c int
// GLOBAL s_SE_ShadowLink_DEAD_003b8348 string

undefined4 func_003B82E0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  uVar1 = DAT_003b8344;
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar2 + 0xa2c) = DAT_003b8344;
  *(undefined4 *)(iVar2 + 0xa30) = uVar1;
  *(undefined4 *)(iVar2 + 0xa34) = uVar1;
  func_004F8638(*(int **)(param_1 + 0x48),0xff);
  local_c = s_SE_ShadowLink_DEAD_003b8348;
  local_10 = DAT_003b835c;
  func_00150A84(*(int **)(param_1 + 0x48),&local_10,0);
  *(uint *)(*(int *)(param_1 + 0x48) + 0x59c) = *(uint *)(*(int *)(param_1 + 0x48) + 0x59c) | 0x2000
  ;
  return func_002B8C84(*(int *)(param_1 + 0x48));
}

