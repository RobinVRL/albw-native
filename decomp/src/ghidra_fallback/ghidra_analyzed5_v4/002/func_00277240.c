#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_00277368;
extern undefined *DAT_0027736c;
extern int DAT_00277370;
extern undefined *DAT_00277374;
extern int DAT_00277378;
extern undefined4 *DAT_0027737c;
extern undefined4 DAT_00277380;

// USA 00277240 <- EU 00277268 (Ghidra, non-matching)
// GLOBAL DAT_00277368 undefined4
// GLOBAL DAT_0027736c undefined *
// GLOBAL DAT_00277370 int
// GLOBAL DAT_00277374 undefined *
// GLOBAL DAT_00277378 int
// GLOBAL DAT_0027737c undefined4 *
// GLOBAL DAT_00277380 undefined4

undefined4 * func_00277240(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = func_0010DA7C(param_1,0,3);
  *puVar1 = DAT_00277368;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  func_0010B3EC(puVar1 + 4,0x180,(int)(puVar1 + 7));
  puVar1[0x187] = 0;
  puVar1[0x188] = 0;
  puVar1[0x189] = 0;
  puVar1[0x18a] = 0;
  puVar1[0x18b] = 0;
  puVar1[0x18c] = 0;
  puVar1[0x18d] = 0;
  puVar1[0x18e] = 0;
  func_0010B3EC(puVar1 + 0x18c,0x200,(int)(puVar1 + 399));
  iVar2 = func_00100118((int)(puVar1 + 0x38f),DAT_0027736c,0x28,0x40);
  iVar3 = func_00100118(iVar2 + 0xa00,DAT_00277374,DAT_00277370,0x40);
  iVar2 = DAT_00277378;
  *(undefined4 *)(DAT_00277378 + iVar3) = 0;
  *(undefined2 *)(iVar3 + 0x14304) = 0xffff;
  *(undefined2 *)(iVar3 + 0x14306) = 0xffff;
  *(undefined4 *)(iVar2 + 8 + iVar3) = 0;
  *(undefined4 *)(iVar2 + 0xc + iVar3) = 0;
  puVar1 = DAT_0027737c;
  *(undefined4 *)(iVar3 + 0x14310) = 0;
  *(undefined4 *)(iVar3 + 0x14314) = 0;
  *(undefined4 *)(iVar3 + 0x14318) = 0;
  *(undefined4 *)(iVar3 + 0x1431c) = DAT_00277380;
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  *(undefined4 **)(iVar3 + 0x14320) = (undefined4 *)(iVar3 + -0x183c);
  *(undefined4 *)(iVar3 + 0x14324) = uVar4;
  *(undefined4 *)(iVar3 + 0x14328) = uVar5;
  return (undefined4 *)(iVar3 + -0x183c);
}

