#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined DAT_00509ec8;
extern int DAT_00509ee0;
extern char s__SE_LavaUp_UP_START_00509ecb[];
extern undefined4 _DAT_00509ec8;

// USA 00509E6C <- EU 00509E44 (Ghidra, non-matching)
// GLOBAL DAT_00509ec8 undefined
// GLOBAL DAT_00509ee0 int
// GLOBAL s_;SE_LavaUp_UP_START_00509ecb string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00509E6C(int *param_1)

{
  int iVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(char * *)(albw_frame + 0x64))
  puVar2 = (uint *)func_002C11E8(aiStack_70,0,10,0);
  func_0016898C(param_1[0x104],puVar2);
  iVar1 = _DAT_00509ec8;
  param_1[0x114] = 0xb4;
  param_1[0x115] = iVar1;
  param_1[0x113] = 0;
  local_10 = DAT_00509ee0;
  *(undefined1 *)(param_1[0x10f] + 0x61) = 1;
  local_c = s__SE_LavaUp_UP_START_00509ecb + 1;
  return func_00150A84(param_1,&local_10,0);
}

