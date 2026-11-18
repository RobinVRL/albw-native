#include "ghidra_types.h"

extern int func_0049BEAC(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined1 param_5, undefined4 param_6,undefined4 param_7,int param_8);
extern undefined4 DAT_00297a9c;
extern int DAT_00297aa0;
extern char s_Cross_00297a94[];

// USA 00297A04 <- EU 00297A2C (Ghidra, non-matching)
// GLOBAL DAT_00297a9c undefined4
// GLOBAL DAT_00297aa0 int
// GLOBAL s_Cross_00297a94 string

undefined4 * func_00297A04(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  local_18 = DAT_00297a9c;
  local_14 = s_Cross_00297a94;
  piVar2 = func_0049BEAC(param_1,(int)&local_18,param_2,0xb,1,0x7fffffff,0x1000,0x20);
  iVar1 = DAT_00297aa0;
  *piVar2 = DAT_00297aa0;
  piVar2[0x23] = param_3;
  *(undefined1 *)(piVar2 + 0x24) = 0;
  piVar2[6] = iVar1 + 0x4c;
  return piVar2;
}

