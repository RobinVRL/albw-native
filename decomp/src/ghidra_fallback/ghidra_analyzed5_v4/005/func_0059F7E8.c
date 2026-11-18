#include "ghidra_types.h"

extern undefined4 *DAT_0059f820;
extern undefined4 *DAT_0059f824;
extern undefined4 DAT_0059f828;
extern undefined4 *DAT_0059f82c;
extern undefined4 DAT_0059f830;
extern undefined8 DAT_0059f838;
extern undefined8 *DAT_0059f840;
extern undefined8 DAT_0059f848;

// USA 0059F7E8 <- EU 0059F7C0 (Ghidra, non-matching)
// GLOBAL DAT_0059f820 undefined4 *
// GLOBAL DAT_0059f824 undefined4 *
// GLOBAL DAT_0059f828 undefined4
// GLOBAL DAT_0059f82c undefined4 *
// GLOBAL DAT_0059f830 undefined4
// GLOBAL DAT_0059f838 undefined8
// GLOBAL DAT_0059f840 undefined8 *
// GLOBAL DAT_0059f848 undefined8

void func_0059F7E8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar2 = DAT_0059f828;
  puVar1 = DAT_0059f820;
  *DAT_0059f820 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar3 = DAT_0059f830;
  puVar1 = DAT_0059f824;
  *DAT_0059f824 = 0;
  puVar1[1] = 0;
  uVar6 = DAT_0059f848;
  puVar1 = DAT_0059f82c;
  *DAT_0059f82c = uVar2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar5 = DAT_0059f840;
  uVar4 = DAT_0059f838;
  DAT_0059f840[3] = uVar6;
  *puVar5 = uVar4;
  puVar5[1] = uVar4;
  puVar5[2] = uVar4;
  return;
}

