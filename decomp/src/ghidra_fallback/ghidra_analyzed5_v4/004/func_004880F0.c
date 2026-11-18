#include "ghidra_types.h"

extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_00488148;
extern undefined4 DAT_0048814c;
extern int *DAT_00488150;

// USA 004880F0 <- EU 004880C8 (Ghidra, non-matching)
// GLOBAL DAT_00488148 undefined4
// GLOBAL DAT_0048814c undefined4
// GLOBAL DAT_00488150 int *

undefined4 func_004880F0(int *param_1,int *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0xffffffff;
  local_20[4] = DAT_0048814c;
  uStack_c = DAT_00488148;
  iVar1 = func_005826A4(*DAT_00488150,local_20,local_20 + 4,param_2);
  if (iVar1 != 0) {
    return (**(code **)(*param_1 + 0x54))(param_1,local_20);
  }
  return (**(code **)(*param_1 + 0x5c))(param_1);
}

