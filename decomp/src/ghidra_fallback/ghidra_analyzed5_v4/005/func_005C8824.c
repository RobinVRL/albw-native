#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005c8864;
extern undefined4 *DAT_005c8868;
extern undefined4 *DAT_005c886c;
extern undefined4 DAT_005c887c;
extern undefined4 DAT_005c88a4;
extern undefined4 DAT_005c88a8;
extern char s_N_ArrowB_00_005c8880[];
extern char s_N_ArrowL_00_005c888c[];
extern char s_N_ArrowR_00_005c8898[];
extern char s_N_ArrowT_00_005c8870[];

// USA 005C8824 <- EU 005C87FC (Ghidra, non-matching)
// GLOBAL DAT_005c8864 int
// GLOBAL DAT_005c8868 undefined4 *
// GLOBAL DAT_005c886c undefined4 *
// GLOBAL DAT_005c887c undefined4
// GLOBAL DAT_005c88a4 undefined4
// GLOBAL DAT_005c88a8 undefined4
// GLOBAL s_N_ArrowB_00_005c8880 string
// GLOBAL s_N_ArrowL_00_005c888c string
// GLOBAL s_N_ArrowR_00_005c8898 string
// GLOBAL s_N_ArrowT_00_005c8870 string

undefined4 func_005C8824(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005c8864;
  *(undefined4 *)(DAT_005c8864 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  puVar2 = DAT_005c8868;
  *DAT_005c8868 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005c887c;
  puVar2 = DAT_005c886c;
  DAT_005c886c[1] = s_N_ArrowT_00_005c8870;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_N_ArrowB_00_005c8880;
  puVar2[4] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005c888c;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005c8898;
  return func_005902C0(0);
}

