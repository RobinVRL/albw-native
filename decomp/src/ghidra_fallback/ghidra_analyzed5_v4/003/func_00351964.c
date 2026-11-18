#include "ghidra_types.h"

extern int func_00261574(undefined4 *param_1,undefined4 *param_2);
extern int func_0029F9D0(undefined1 *param_1);
extern int func_002E1588(undefined4 *param_1);
extern int func_0034CC9C(int param_1,uint param_2);
extern int func_003704C8(undefined4 *param_1);
extern int func_004ED868(void);
extern undefined4 DAT_00351b9c;
extern int *DAT_00351ba0;
extern int *DAT_00351ba4;
extern undefined4 DAT_00351ba8;
extern undefined4 DAT_00351bac;
extern undefined4 DAT_00351bb0;
extern undefined4 *DAT_00351bb4;
extern undefined4 DAT_00351bb8;
extern undefined4 *DAT_00351bbc;
extern undefined4 DAT_00351bc0;
extern undefined4 DAT_00351bc4;

// USA 00351964 <- EU 00351940 (Ghidra, non-matching)
// GLOBAL DAT_00351b9c undefined4
// GLOBAL DAT_00351ba0 int *
// GLOBAL DAT_00351ba4 int *
// GLOBAL DAT_00351ba8 undefined4
// GLOBAL DAT_00351bac undefined4
// GLOBAL DAT_00351bb0 undefined4
// GLOBAL DAT_00351bb4 undefined4 *
// GLOBAL DAT_00351bb8 undefined4
// GLOBAL DAT_00351bbc undefined4 *
// GLOBAL DAT_00351bc0 undefined4
// GLOBAL DAT_00351bc4 undefined4

int func_00351964(undefined4 *param_1,undefined4 *param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  
  puVar3 = (undefined4 *)func_00261574(param_1,param_2);
  *puVar3 = DAT_00351b9c;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  iVar4 = func_003704C8(puVar3 + 0x11);
  iVar10 = iVar4 + -0x44;
  iVar5 = *(int *)(*DAT_00351ba0 + 0x10);
  *(int *)(iVar4 + 0x4c) = iVar5;
  cVar1 = *(char *)(iVar5 + 0x26);
  iVar11 = *DAT_00351ba4;
  iVar5 = func_004ED868();
  if (cVar1 == '\0') {
    if (iVar5 == 0) {
      iVar11 = iVar11 + 0x560;
    }
    else {
      iVar11 = iVar11 + 0x588;
    }
  }
  else {
    iVar11 = iVar11 + 0x538;
  }
  *(int *)(iVar4 + 0x50) = iVar11;
  *(int *)(iVar4 + 0x70) = iVar10;
  func_0029F9D0((undefined1 *)(iVar4 + 0x54));
  uVar9 = DAT_00351bac;
  uVar6 = DAT_00351ba8;
  *(undefined4 *)(iVar4 + 0x74) = DAT_00351ba8;
  *(undefined4 *)(iVar4 + 0x78) = uVar6;
  *(undefined4 *)(iVar4 + 0x7c) = uVar6;
  *(undefined4 *)(iVar4 + 0x80) = uVar9;
  *(undefined4 *)(iVar4 + 0x84) = uVar9;
  *(undefined4 *)(iVar4 + 0x88) = uVar9;
  func_002E1588((undefined4 *)(iVar4 + 0x74));
  *(undefined4 *)(iVar4 + 0x98) = uVar6;
  *(undefined4 *)(iVar4 + 0x9c) = uVar6;
  *(undefined4 *)(iVar4 + 0xa0) = uVar6;
  *(undefined4 *)(iVar4 + 0xa4) = uVar9;
  *(undefined4 *)(iVar4 + 0xa8) = uVar9;
  *(undefined4 *)(iVar4 + 0xac) = uVar9;
  func_002E1588((undefined4 *)(iVar4 + 0x98));
  uVar6 = DAT_00351bb0;
  *(undefined4 *)(iVar4 + 0xcc) = 0;
  *(undefined4 *)(iVar4 + 0xd0) = uVar6;
  *(undefined4 *)(iVar4 + 0xd4) = uVar6;
  *(undefined4 *)(iVar4 + 0xd8) = uVar6;
  *(undefined4 *)(iVar4 + 0xe0) = 0;
  *(undefined4 *)(iVar4 + 0xe4) = 0;
  *(undefined4 *)(iVar4 + 0xe8) = 0;
  *(undefined1 *)(iVar4 + 0xed) = 0;
  *(undefined1 *)(iVar4 + 0xee) = 0;
  *(undefined1 *)(iVar4 + 0xef) = param_3;
  *(undefined1 *)(iVar4 + 0xf0) = 0;
  *(undefined1 *)(iVar4 + 0xf1) = 0;
  *(undefined1 *)(iVar4 + 0xf2) = 0;
  *(undefined1 *)(iVar4 + 0xf3) = 0;
  puVar3 = DAT_00351bb4;
  *(undefined1 *)(iVar4 + 0xf5) = 0;
  *(undefined4 *)(iVar4 + 0xf8) = 0;
  *(undefined4 *)(iVar4 + 0x100) = 0;
  *(undefined1 *)(iVar4 + 0x104) = 0;
  uVar9 = DAT_00351bb8;
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  *(undefined4 *)(iVar4 + 0x114) = *puVar3;
  *(undefined4 *)(iVar4 + 0x118) = uVar7;
  *(undefined4 *)(iVar4 + 0x11c) = uVar8;
  *(undefined1 *)(iVar4 + 0x120) = 0;
  *(undefined1 *)(iVar4 + 0x121) = 0;
  *(undefined1 *)(iVar4 + 0x122) = 0;
  *(undefined1 *)(iVar4 + 0x123) = 0;
  *(undefined4 *)(iVar4 + 0x130) = 0;
  *(undefined4 *)(iVar4 + 0x13c) = 0;
  puVar2 = DAT_00351bbc;
  *(undefined4 *)(iVar4 + 0x148) = 0;
  *(undefined4 *)(iVar4 + 0x14c) = 0;
  *(undefined4 *)(iVar4 + 0x178) = uVar9;
  *(undefined4 *)(iVar4 + 0x198) = 0;
  uVar7 = DAT_00351bc4;
  uVar9 = puVar2[5];
  *(undefined4 *)(iVar4 + 0x19c) = puVar2[4];
  *(undefined4 *)(iVar4 + 0x1a0) = uVar9;
  uVar9 = DAT_00351bc0;
  *(undefined4 *)(iVar4 + 0x194) = DAT_00351bc0;
  *(undefined4 *)(iVar4 + 0x1a8) = 0;
  uVar8 = puVar2[4];
  uVar12 = puVar2[5];
  *(undefined4 *)(iVar4 + 0x1a4) = uVar9;
  *(undefined4 *)(iVar4 + 0x1ac) = uVar8;
  *(undefined4 *)(iVar4 + 0x1b0) = uVar12;
  *(undefined1 *)(iVar4 + 0x1dc) = 0;
  *(undefined4 *)(iVar4 + 0x1e0) = 0;
  *(undefined2 *)(iVar4 + 0x1e4) = 0xffff;
  *(undefined1 *)(iVar4 + 0x1e6) = 0;
  *(undefined1 *)(iVar4 + 0x1e8) = 0;
  *(undefined1 *)(iVar4 + 0x1e9) = 0;
  *(undefined1 *)(iVar4 + 0x1ea) = 0xff;
  *(undefined1 *)(iVar4 + 0x204) = 0;
  *(undefined1 *)(iVar4 + 0x205) = 1;
  *(undefined1 *)(iVar4 + 0x206) = 1;
  *(undefined4 *)(iVar4 + 0x208) = uVar6;
  *(undefined1 *)(iVar4 + 0x20c) = 0;
  *(undefined4 *)(iVar4 + 0x210) = uVar7;
  *(undefined4 *)(iVar4 + 0x214) = 0;
  *(undefined4 *)(iVar4 + 0x218) = uVar6;
  *(undefined4 *)(iVar4 + 0x21c) = 0;
  *(undefined4 *)(iVar4 + 0x220) = 0;
  *(undefined2 *)(iVar4 + 0x224) = 0;
  *(undefined1 *)(iVar4 + 0x226) = 2;
  uVar9 = *puVar3;
  uVar7 = puVar3[1];
  *(undefined4 *)(iVar4 + 0x254) = puVar3[2];
  *(undefined4 *)(iVar4 + 0x24c) = uVar9;
  *(undefined4 *)(iVar4 + 0x250) = uVar7;
  *(undefined1 *)(iVar4 + 600) = 0;
  *(undefined4 *)(iVar4 + 0x26c) = 0;
  *(undefined4 *)(iVar4 + 0x270) = 0;
  *(undefined4 *)(iVar4 + 0x288) = uVar6;
  func_0034CC9C(iVar10,0);
  uVar6 = *puVar2;
  uVar9 = puVar2[1];
  *(int *)(iVar4 + 0x198) = iVar10;
  *(undefined4 *)(iVar4 + 0x19c) = uVar6;
  *(undefined4 *)(iVar4 + 0x1a0) = uVar9;
  uVar6 = puVar2[2];
  uVar9 = puVar2[3];
  *(int *)(iVar4 + 0x1a8) = iVar10;
  *(undefined4 *)(iVar4 + 0x1ac) = uVar6;
  *(undefined4 *)(iVar4 + 0x1b0) = uVar9;
  return iVar10;
}

