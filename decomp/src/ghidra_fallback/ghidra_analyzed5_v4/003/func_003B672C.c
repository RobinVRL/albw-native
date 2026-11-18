#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern void *func_0010E74C();
extern int func_0031B438(int param_1,uint param_2,int param_3,int param_4);
extern int func_0031B7D0(int param_1);
extern int DAT_003b6888;

// USA 003B672C <- EU 003B6708 (Ghidra, non-matching)
// GLOBAL DAT_003b6888 int

undefined4 func_003B672C(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  float in_s0;
  
  bVar11 = *(int *)(param_1 + 0x44) == 0;
  iVar1 = 0;
  if (!bVar11) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (bVar11 || iVar1 == 0) {
    return 0;
  }
  uVar7 = 0xb4;
  func_0010E3C4((uint *)(param_1 + 0x6c),param_2,0xb4);
  iVar1 = DAT_003b6888;
  uVar10 = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  do {
    uVar2 = func_0031B7D0(uVar10);
    if (uVar2 != 0x20) {
      uVar7 = *(uint *)(iVar1 + uVar2 * 4);
    }
    if (uVar2 != 0x20 && uVar7 != 0xffffffff) {
      puVar8 = param_2;
      if (uVar2 < 0x2d) {
        puVar8 = param_2 + uVar2;
      }
      if (*puVar8 != 6 && *puVar8 != 0) {
        uVar3 = (uint)*(char *)(param_1 + 0x140);
        for (uVar9 = 0; (int)uVar9 < (int)uVar3; uVar9 = uVar9 + 1) {
          pbVar5 = (byte *)(param_1 + 0x120);
          if (uVar9 < 0x20) {
            pbVar5 = pbVar5 + uVar9;
          }
          if ((int)uVar7 < *(int *)(iVar1 + (uint)*pbVar5 * 4)) {
            puVar8 = (uint *)(param_1 + 0x120);
            if (uVar9 + 1 < 0x20) {
              puVar8 = (uint *)((int)puVar8 + uVar9 + 1);
            }
            puVar6 = (uint *)(param_1 + 0x120);
            uVar7 = uVar3 - uVar9;
            if (uVar9 < 0x20) {
              puVar6 = (uint *)((int)puVar6 + uVar9);
            }
            func_0010E74C(puVar8,puVar6,uVar7,in_s0);
            puVar4 = (undefined1 *)(param_1 + 0x120);
            if (uVar9 < 0x20) {
              puVar4 = puVar4 + uVar9;
            }
            *puVar4 = (char)uVar2;
            *(char *)(param_1 + 0x140) = *(char *)(param_1 + 0x140) + '\x01';
            goto LAB_003b6814;
          }
        }
        puVar4 = (undefined1 *)(param_1 + 0x120);
        if (uVar3 < 0x20) {
          puVar4 = puVar4 + uVar3;
        }
        *puVar4 = (char)uVar2;
        *(char *)(param_1 + 0x140) = *(char *)(param_1 + 0x140) + '\x01';
      }
    }
LAB_003b6814:
    uVar10 = uVar10 + 1;
    if (0x2c < uVar10) {
      puVar4 = (undefined1 *)(param_1 + 0x120);
      if ((uint)(int)*(char *)(param_1 + 0x140) < 0x20) {
        puVar4 = puVar4 + *(char *)(param_1 + 0x140);
      }
      *puVar4 = 0x20;
      *(char *)(param_1 + 0x140) = *(char *)(param_1 + 0x140) + '\x01';
      uVar7 = (uint)*(byte *)(param_1 + 0x120);
      if (uVar7 == 0x20) {
        return func_0031B438(*(int *)(param_1 + 0x44),0x20,0,0);
      }
      if (uVar7 < 0x2d) {
        param_2 = param_2 + uVar7;
      }
      return func_0031B438(*(int *)(param_1 + 0x44),uVar7,*param_2,0);
    }
  } while( true );
}

