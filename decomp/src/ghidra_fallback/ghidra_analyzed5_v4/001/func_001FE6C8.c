#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern undefined *DAT_001fe800;
extern undefined4 DAT_001fe804;
extern undefined4 DAT_001fe808;
extern undefined4 DAT_001fe80c;
extern undefined4 *DAT_001fe810;
extern undefined *DAT_001fe814;
extern int DAT_001fe818;

// USA 001FE6C8 <- EU 001FE6C8 (Ghidra, non-matching)
// GLOBAL DAT_001fe800 undefined *
// GLOBAL DAT_001fe804 undefined4
// GLOBAL DAT_001fe808 undefined4
// GLOBAL DAT_001fe80c undefined4
// GLOBAL DAT_001fe810 undefined4 *
// GLOBAL DAT_001fe814 undefined *
// GLOBAL DAT_001fe818 int

int func_001FE6C8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar3 = func_00100118(param_1 + 8,DAT_001fe800,0x10,2);
  puVar2 = DAT_001fe810;
  uVar1 = DAT_001fe804;
  *(undefined4 *)(iVar3 + 0x74) = DAT_001fe804;
  *(undefined4 *)(iVar3 + 0x78) = uVar1;
  *(undefined4 *)(iVar3 + 0x7c) = uVar1;
  uVar1 = DAT_001fe808;
  *(undefined4 *)(iVar3 + 0x80) = DAT_001fe808;
  *(undefined4 *)(iVar3 + 0x84) = uVar1;
  *(undefined4 *)(iVar3 + 0x88) = uVar1;
  uVar1 = DAT_001fe80c;
  uVar5 = puVar2[1];
  uVar7 = puVar2[2];
  *(undefined4 *)(iVar3 + 0x8c) = *puVar2;
  *(undefined4 *)(iVar3 + 0x90) = uVar5;
  *(undefined4 *)(iVar3 + 0x94) = uVar7;
  *(undefined4 *)(iVar3 + 0x98) = uVar1;
  *(undefined4 *)(iVar3 + 0x9c) = 0;
  *(undefined4 *)(iVar3 + 0xa0) = 0x30;
  *(undefined4 *)(iVar3 + 0xa4) = 0;
  if (iVar3 + 0xa8 != 0) {
    *(int *)(iVar3 + 0xa4) = iVar3 + 0xa8;
  }
  iVar3 = func_00100118(iVar3 + 0xa8,DAT_001fe814,0x9c,0x30);
  *(undefined4 *)(iVar3 + 0x1d40) = 0;
  *(undefined4 *)(iVar3 + 0x1d44) = 0x30;
  *(undefined4 *)(iVar3 + 0x1d48) = 0;
  if (iVar3 + 0x1d4c != 0) {
    *(int *)(iVar3 + 0x1d48) = iVar3 + 0x1d4c;
  }
  iVar4 = func_00100118(iVar3 + 0x1d4c,DAT_001fe814,0x9c,0x30);
  iVar3 = DAT_001fe818;
  iVar6 = iVar4 + -0x1dfc;
  *(undefined4 *)(iVar4 + 0x1d40) = 0;
  *(undefined4 *)(iVar3 + -8 + iVar6) = 0;
  *(undefined2 *)(iVar3 + iVar6) = 0x1f;
  *(undefined4 *)(iVar4 + 0x1db8) = 0;
  *(undefined4 *)(iVar4 + 0x1dbc) = 0;
  *(undefined4 *)(iVar4 + 0x1dc0) = 0;
  func_0010B3EC((undefined4 *)(iVar4 + 0x1db8),0x80,iVar4 + 0x1dc4);
  *(undefined1 *)(iVar4 + 0x1fc4) = 1;
  *(undefined1 *)(iVar4 + 0x1fc5) = 0;
  *(undefined4 *)(iVar4 + -0x1de8) = 0x70;
  *(undefined4 *)(iVar4 + -0x1dd8) = 0x78;
  *(undefined4 *)(iVar4 + -0x1d58) = 0;
  return iVar6;
}

