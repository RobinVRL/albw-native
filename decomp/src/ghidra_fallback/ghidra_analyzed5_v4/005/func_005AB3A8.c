#include "ghidra_types.h"

extern int func_00429F94(float fparam_0);
extern int DAT_005ab420;
extern undefined4 *DAT_005ab424;
extern undefined4 DAT_005ab434;
extern undefined4 DAT_005ab45c;
extern undefined4 DAT_005ab460;
extern float DAT_005ab464;
extern float DAT_005ab468;
extern char s_N_ArrowB_00_005ab438[];
extern char s_N_ArrowL_00_005ab444[];
extern char s_N_ArrowR_00_005ab450[];
extern char s_N_ArrowT_00_005ab428[];

// USA 005AB3A8 <- EU 005AB380 (Ghidra, non-matching)
// GLOBAL DAT_005ab420 int
// GLOBAL DAT_005ab424 undefined4 *
// GLOBAL DAT_005ab434 undefined4
// GLOBAL DAT_005ab45c undefined4
// GLOBAL DAT_005ab460 undefined4
// GLOBAL DAT_005ab464 float
// GLOBAL DAT_005ab468 float
// GLOBAL s_N_ArrowB_00_005ab438 string
// GLOBAL s_N_ArrowL_00_005ab444 string
// GLOBAL s_N_ArrowR_00_005ab450 string
// GLOBAL s_N_ArrowT_00_005ab428 string

void func_005AB3A8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float fparam_0;
  
  iVar1 = DAT_005ab420;
  *(undefined4 *)(DAT_005ab420 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  uVar3 = DAT_005ab434;
  puVar2 = DAT_005ab424;
  DAT_005ab424[1] = s_N_ArrowT_00_005ab428;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005ab438;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005ab444;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005ab450;
  iVar4 = func_00429F94(DAT_005ab464);
  fparam_0 = DAT_005ab468;
  *(int *)(iVar1 + 0x10) = iVar4;
  iVar4 = func_00429F94(fparam_0);
  *(int *)(iVar1 + 0x14) = iVar4;
  iVar4 = func_00429F94(fparam_0);
  *(int *)(iVar1 + 0x18) = iVar4;
  return;
}

