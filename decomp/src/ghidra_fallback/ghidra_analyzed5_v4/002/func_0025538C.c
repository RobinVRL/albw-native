#include "ghidra_types.h"

extern int DAT_002554a8;

// USA 0025538C <- EU 002553B4 (Ghidra, non-matching)
// GLOBAL DAT_002554a8 int

void * func_0025538C(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  iVar5 = 0;
  iVar9 = 0x2d;
  puVar3 = (undefined4 *)(param_1 + 0x28);
  do {
    iVar8 = param_2 + iVar5;
    iVar9 = iVar9 + -1;
    iVar5 = iVar5 + 1;
    *(char *)(iVar8 + 8) = (char)*puVar3;
    puVar3 = puVar3 + 1;
  } while (iVar9 != 0);
  iVar9 = 0x20;
  *(char *)(param_2 + 3) = (char)*(undefined4 *)(param_1 + 0xdc);
  *(char *)(param_2 + 4) = (char)*(undefined4 *)(param_1 + 0xe0);
  *(char *)(param_2 + 5) = (char)*(undefined4 *)(param_1 + 0xe4);
  *(char *)(param_2 + 6) = (char)*(undefined4 *)(param_1 + 0xe8);
  *(char *)(param_2 + 7) = (char)*(undefined4 *)(param_1 + 0xec);
  iVar5 = DAT_002554a8;
  *(undefined2 *)(param_2 + 0xce) = *(undefined2 *)(param_1 + 0xf0);
  *(undefined1 *)(param_2 + 0xcb) = *(undefined1 *)(param_1 + 0xf9);
  *(undefined1 *)(param_2 + 0xcc) = *(undefined1 *)(param_1 + 0xfa);
  *(undefined1 *)(param_2 + 0xcd) = *(undefined1 *)(param_1 + 0xfb);
  *(undefined1 *)(param_2 + 0xd0) = *(undefined1 *)(param_1 + 0xfc);
  *(undefined1 *)(param_2 + 0xd1) = *(undefined1 *)(param_1 + 0xfd);
  puVar6 = (undefined1 *)(param_2 + 0x88);
  *(undefined2 *)(param_2 + 0xd2) = *(undefined2 *)(iVar5 + param_1);
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x108);
  uVar4 = 0;
  puVar1 = (undefined1 *)(param_2 + 0xa8);
  do {
    puVar10 = (undefined1 *)(param_1 + 0x10c + uVar4);
    puVar2 = puVar1;
    puVar7 = puVar6;
    do {
      puVar11 = (undefined1 *)(param_1 + 0x14c);
      if (uVar4 < 0x40) {
        puVar11 = puVar11 + uVar4;
      }
      puVar6 = puVar7 + 1;
      *puVar7 = *puVar10;
      iVar9 = iVar9 + -1;
      uVar4 = uVar4 + 1;
      puVar1 = puVar2 + 1;
      *puVar2 = *puVar11;
      if (iVar9 == 0) {
        return (void *)param_1;
      }
      puVar10 = (undefined1 *)(param_1 + 0x10c);
      puVar2 = puVar1;
      puVar7 = puVar6;
    } while (0x3f < uVar4);
  } while( true );
}

