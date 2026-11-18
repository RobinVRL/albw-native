#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005f785c;
extern undefined4 *DAT_005f7860;
extern undefined4 *DAT_005f7864;
extern undefined4 DAT_005f7874;
extern undefined4 DAT_005f789c;
extern uint DAT_005f78a0;
extern undefined4 DAT_005f78a4;
extern undefined4 *DAT_005f78a8;
extern undefined4 DAT_005f78ac;
extern uint DAT_005f78b0;
extern char s_N_ArrowB_00_005f7878[];
extern char s_N_ArrowL_00_005f7884[];
extern char s_N_ArrowR_00_005f7890[];
extern char s_N_ArrowT_00_005f7868[];

// USA 005F77F0 <- EU 005F77C8 (Ghidra, non-matching)
// GLOBAL DAT_005f785c undefined4 *
// GLOBAL DAT_005f7860 undefined4 *
// GLOBAL DAT_005f7864 undefined4 *
// GLOBAL DAT_005f7874 undefined4
// GLOBAL DAT_005f789c undefined4
// GLOBAL DAT_005f78a0 uint
// GLOBAL DAT_005f78a4 undefined4
// GLOBAL DAT_005f78a8 undefined4 *
// GLOBAL DAT_005f78ac undefined4
// GLOBAL DAT_005f78b0 uint
// GLOBAL s_N_ArrowB_00_005f7878 string
// GLOBAL s_N_ArrowL_00_005f7884 string
// GLOBAL s_N_ArrowR_00_005f7890 string
// GLOBAL s_N_ArrowT_00_005f7868 string

void func_005F77F0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar1 = DAT_005f785c;
  DAT_005f785c[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1 = DAT_005f7860;
  *DAT_005f7860 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005f7874;
  puVar1 = DAT_005f7864;
  DAT_005f7864[1] = s_N_ArrowT_00_005f7868;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f7878;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f7884;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f7890;
  uVar5 = DAT_005f78ac;
  puVar4 = DAT_005f78a8;
  uVar2 = DAT_005f78a4;
  uVar3 = DAT_005f78a0;
  puVar1 = DAT_005f785c;
  *DAT_005f78a8 = DAT_005f78a4;
  puVar4[1] = uVar2;
  puVar4[2] = uVar5;
  uVar6 = func_00114608(DAT_005f78b0,uVar3);
  *puVar1 = (int)uVar6;
  return;
}

