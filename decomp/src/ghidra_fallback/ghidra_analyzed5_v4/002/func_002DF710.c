#include "ghidra_types.h"

extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00441278(int param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_002df760;
extern int *DAT_002df764;
extern int *DAT_002df768;
extern char s_Common_002df758[];

// USA 002DF710 <- EU 002DF6EC (Ghidra, non-matching)
// GLOBAL DAT_002df760 undefined4
// GLOBAL DAT_002df764 int *
// GLOBAL DAT_002df768 int *
// GLOBAL s_Common_002df758 string

undefined4 func_002DF710(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x14))
  local_20[2] = 0;
  local_20[3] = 0xffffffff;
  local_20[0] = 0;
  local_20[1] = 0;
  local_c = s_Common_002df758;
  local_20[4] = DAT_002df760;
  piVar3 = local_20 + 4;
  piVar4 = DAT_002df764;
  iVar1 = func_005826A4(*DAT_002df768,local_20,piVar3,DAT_002df764);
  uVar2 = extraout_r1;
  if (iVar1 != 0) {
    func_00441278(*(int *)(param_1 + 0x14),local_20);
    uVar2 = extraout_r1_00;
  }
  return func_001B6C2C(*(int **)(param_1 + 0x14),uVar2,piVar3,(int)piVar4);
}

