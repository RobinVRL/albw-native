#include "ghidra_types.h"

extern int func_001031B4(undefined4 *param_1,undefined4 *param_2);
extern int func_001E0C38(int param_1);
extern int func_002DF3E4(int param_1);
extern int func_0049D4A0(int param_1,int param_2);
extern int func_004EECD4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int *DAT_0014b138;
extern int *DAT_0014b13c;
extern int *DAT_0014b140;
extern undefined4 DAT_0014b144;

// USA 0014B0D0 <- EU 0014B0D0 (Ghidra, non-matching)
// GLOBAL DAT_0014b138 int *
// GLOBAL DAT_0014b13c int *
// GLOBAL DAT_0014b140 int *
// GLOBAL DAT_0014b144 undefined4

void func_0014B0D0(int param_1)

{
  int *piVar1;
  undefined4 extraout_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_90 ((undefined4 *)(albw_frame + 0x0))
  #define local_34 (*(int *)(albw_frame + 0x5c))
  #define local_10 ((undefined1 *)(albw_frame + 0x80))
  #define local_c (*(undefined4 *)(albw_frame + 0x84))
  func_002DF3E4(*DAT_0014b138);
  func_001E0C38(*DAT_0014b13c);
  func_004EECD4(*DAT_0014b140,extraout_r1,in_r2,in_r3);
  local_c = DAT_0014b144;
  local_10[0] = 2;
  func_001031B4(auStack_90,local_10);
  local_34 = param_1;
  piVar1 = func_0049D4A0(param_1,(int)auStack_90);
  *(int **)(param_1 + 0xbc) = piVar1;
  return;
}

