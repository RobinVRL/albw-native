#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern int func_002C00A8(int param_1);
extern int func_00448700(int param_1);
extern int func_004727B8(int param_1,int param_2);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_0051B524(int param_1);
extern int func_0051B5C4(int param_1);
extern int func_0051BE94(int param_1);
extern int func_0066DDF4(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00447df0;
extern uint DAT_00447df4;
extern int *DAT_00447df8;

// USA 00447C28 <- EU 00447C00 (Ghidra, non-matching)
// GLOBAL DAT_00447df0 undefined4
// GLOBAL DAT_00447df4 uint
// GLOBAL DAT_00447df8 int *

void func_00447C28(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  undefined4 uVar12;
  
  *(undefined1 *)(param_1 + 0x290) = 1;
  func_00231524(param_1 + 200);
  uVar12 = DAT_00447df0;
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(param_1 + 0x260) = uVar12;
  cVar1 = *(char *)(param_1 + 0xd);
  bVar11 = cVar1 == '\x04';
  if (bVar11) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (!bVar11 || cVar1 != '\x04') {
    if (*(char *)(param_1 + 0x292) == '\0') {
      func_00231448(param_1 + 0x104);
      func_00231524(param_1 + 0xf8);
      func_00231448(param_1 + 0x104);
      func_00231524(param_1 + 0xf8);
      func_002C00A8(*(int *)(param_1 + 0x14));
      uVar2 = DAT_00447df4;
      iVar3 = *(int *)(param_1 + 0x14);
      iVar7 = *(int *)(param_1 + 0x218);
      *(int *)(iVar3 + 4) = iVar7;
      puVar4 = (ushort *)(iVar3 + 0x16);
      uVar6 = *puVar4;
      if (iVar7 == 0) {
        uVar6 = uVar6 & 0xffbf;
      }
      else {
        uVar6 = uVar6 | 0x40;
      }
      *puVar4 = uVar6;
      uVar5 = 0;
      do {
        puVar8 = (uint *)(param_1 + 0x188);
        if (uVar5 < 4) {
          puVar8 = puVar8 + uVar5;
        }
        uVar9 = *puVar8;
        bVar11 = *(char *)(uVar9 + 0xd) == '\0';
        if (bVar11) {
          uVar9 = (uint)*(byte *)(uVar9 + 0xe);
        }
        if (bVar11 && uVar9 == 0) {
          uVar9 = uVar5 & 0xff;
          if (uVar9 == 0) {
            uVar9 = *(uint *)(param_1 + 0x24c);
joined_r0x00447d04:
            if (uVar9 < (uVar2 | uVar2 << 0xe)) {
LAB_00447d38:
              piVar10 = (int *)(param_1 + 0x188);
              if (uVar5 < 4) {
                piVar10 = piVar10 + uVar5;
              }
              *(undefined1 *)(*piVar10 + 0xe) = 1;
            }
          }
          else {
            if (uVar9 == 1) {
              iVar3 = *(int *)(param_1 + 0x24c);
            }
            else {
              if (uVar9 != 2) {
                if (uVar9 == 3) {
                  uVar9 = *(uint *)(param_1 + 0x248);
                  goto joined_r0x00447d04;
                }
                goto LAB_00447d38;
              }
              iVar3 = *(int *)(param_1 + 0x248);
            }
            if (iVar3 < (int)uVar2) goto LAB_00447d38;
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 4);
      if (*(char *)(param_1 + 0x208) != '\0') {
        func_00448700(param_1);
      }
      func_004727B8(*(int *)(param_1 + 0x20c),1);
      func_0047E8C4(*(int *)(param_1 + 0x210),1,0);
      if (*(char *)(*(int *)(param_1 + 0x214) + 0x54) == '\x03') {
        func_0066DDF4((undefined4 *)(*(int *)(param_1 + 0x214) + 0x50),0);
      }
    }
    piVar10 = DAT_00447df8;
    cVar1 = *(char *)(param_1 + 0xd);
    bVar11 = cVar1 == '\0';
    if (bVar11) {
      cVar1 = *(char *)(param_1 + 0xe);
    }
    if (!bVar11 || cVar1 != '\0') {
      func_0051B5C4(*DAT_00447df8);
      func_0051BE94(*piVar10);
      func_0051B524(*piVar10);
    }
    *(undefined4 *)(param_1 + 0x264) = uVar12;
    *(undefined4 *)(param_1 + 0x268) = uVar12;
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  return;
}

