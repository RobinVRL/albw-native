#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005eaefc;
extern undefined4 *DAT_005eaf00;
extern undefined4 *DAT_005eaf04;
extern undefined4 DAT_005eaf14;
extern undefined4 DAT_005eaf3c;
extern undefined4 DAT_005eaf40;
extern char s_N_ArrowB_00_005eaf18[];
extern char s_N_ArrowL_00_005eaf24[];
extern char s_N_ArrowR_00_005eaf30[];
extern char s_N_ArrowT_00_005eaf08[];

// USA 005EAEBC <- EU 005EAE94 (Ghidra, non-matching)
// GLOBAL DAT_005eaefc int
// GLOBAL DAT_005eaf00 undefined4 *
// GLOBAL DAT_005eaf04 undefined4 *
// GLOBAL DAT_005eaf14 undefined4
// GLOBAL DAT_005eaf3c undefined4
// GLOBAL DAT_005eaf40 undefined4
// GLOBAL s_N_ArrowB_00_005eaf18 string
// GLOBAL s_N_ArrowL_00_005eaf24 string
// GLOBAL s_N_ArrowR_00_005eaf30 string
// GLOBAL s_N_ArrowT_00_005eaf08 string

undefined4 func_005EAEBC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005eaefc;
  *(undefined4 *)(DAT_005eaefc + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005eaf00;
  *DAT_005eaf00 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005eaf14;
  puVar2 = DAT_005eaf04;
  DAT_005eaf04[1] = s_N_ArrowT_00_005eaf08;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005eaf18;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005eaf24;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005eaf30;
  return func_005902C0(0);
}

