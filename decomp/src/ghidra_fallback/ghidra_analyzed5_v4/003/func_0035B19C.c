#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int DAT_0035b1e8;
extern char s_SE_JewelRockCandle_FIRE_0035b1d0[];

// USA 0035B19C <- EU 0035B178 (Ghidra, non-matching)
// GLOBAL DAT_0035b1e8 int
// GLOBAL s_SE_JewelRockCandle_FIRE_0035b1d0 string

undefined4 func_0035B19C(int *param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(char * *)(albw_frame + 0x64))
  puVar1 = (uint *)func_002C11E8(aiStack_70,0,10,0);
  func_0016898C(param_1[0x10d],puVar1);
  local_c = s_SE_JewelRockCandle_FIRE_0035b1d0;
  local_10 = DAT_0035b1e8;
  return func_00150A84(param_1,&local_10,0);
}

