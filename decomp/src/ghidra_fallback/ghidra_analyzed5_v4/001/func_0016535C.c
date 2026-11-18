#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC570();
extern int DAT_001653f0;
extern undefined DAT_001653f4;
extern int DAT_0016540c;
extern char s__SE_Tendol_V_ATTACK_001653f7[];
extern undefined4 _DAT_001653f4;

// USA 0016535C <- EU 00165360 (Ghidra, non-matching)
// GLOBAL DAT_001653f0 int
// GLOBAL DAT_001653f4 undefined
// GLOBAL DAT_0016540c int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0016535C(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_001653f0;
  param_1[0x167] = param_1[0x167] | 0x30;
  param_1[0x242] = 0xc;
  param_1[0x243] = iVar1;
  iVar1 = _DAT_001653f4;
  param_1[0x241] = 0;
  func_004FC570(param_1);
  func_004FC07C((int)param_1,7,0xffffffff,0);
  local_18 = DAT_0016540c;
  param_1[0x240] = iVar1;
  local_14 = s__SE_Tendol_V_ATTACK_001653f7 + 1;
  return func_00150A84(param_1,&local_18,0);
}

