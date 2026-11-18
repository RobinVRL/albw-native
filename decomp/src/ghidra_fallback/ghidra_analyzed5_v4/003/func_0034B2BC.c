#include "ghidra_types.h"

extern int func_0025D640(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4, undefined4 param_5,int param_6,byte param_7);
extern undefined4 DAT_0034b310;
extern int DAT_0034b314;
extern char s_GameCoin_0034b304[];

// USA 0034B2BC <- EU 0034B298 (Ghidra, non-matching)
// GLOBAL DAT_0034b310 undefined4
// GLOBAL DAT_0034b314 int
// GLOBAL s_GameCoin_0034b304 string

undefined4 * func_0034B2BC(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_GameCoin_0034b304;
  local_10 = DAT_0034b310;
  piVar2 = func_0025D640(param_1,(int)&local_10,param_2,0x13,0x2800,2,0);
  iVar1 = DAT_0034b314;
  *piVar2 = DAT_0034b314;
  *(undefined1 *)(piVar2 + 0x2c) = 0;
  piVar2[6] = iVar1 + 0x54;
  *(undefined1 *)((int)piVar2 + 0xb1) = 0;
  *(undefined2 *)((int)piVar2 + 0xb2) = 0;
  *(undefined2 *)(piVar2 + 0x2d) = 1;
  return piVar2;
}

