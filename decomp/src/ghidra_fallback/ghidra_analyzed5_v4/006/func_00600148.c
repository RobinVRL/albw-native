#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int DAT_0060024c;
extern undefined4 *DAT_00600250;

// USA 00600148 <- EU 00600120 (Ghidra, non-matching)
// GLOBAL DAT_0060024c int
// GLOBAL DAT_00600250 undefined4 *

void func_00600148(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  
  puVar3 = DAT_00600250;
  iVar2 = DAT_0060024c;
  iVar8 = 0;
  if (0 < param_1) {
    do {
      if ((code *)*puVar3 == (code *)0x0) {
        puVar7 = (uint *)0x0;
      }
      else {
        puVar7 = (uint *)(*(code *)*puVar3)(0x10000,0x100,0,0x44);
      }
      func_00110490(puVar7,0x44);
      puVar7[0xb] = 0x300;
      uVar4 = puVar3[2];
      while( true ) {
        iVar5 = iVar2 + (uVar4 & 0x1f) * 4;
        puVar6 = *(uint **)(iVar5 + 0x1c);
        if (puVar6 == (uint *)0x0) break;
        if (*puVar6 != uVar4) {
          if (uVar4 < *puVar6) {
            *(uint *)(param_2 + iVar8 * 4) = uVar4;
            *puVar7 = uVar4;
            puVar7[0x10] = *(uint *)(iVar2 + (uVar4 & 0x1f) * 4 + 0x1c);
            goto LAB_006001bc;
          }
          puVar1 = (uint *)puVar6[0x10];
          while( true ) {
            if (puVar1 == (uint *)0x0) {
              puVar6[0x10] = (uint)puVar7;
              *puVar7 = uVar4;
              puVar7[0x10] = 0;
              *(uint *)(param_2 + iVar8 * 4) = uVar4;
              goto LAB_0060022c;
            }
            if (*puVar1 == uVar4) break;
            if (uVar4 < *puVar1) {
              *(uint *)(param_2 + iVar8 * 4) = uVar4;
              *puVar7 = uVar4;
              puVar6[0x10] = (uint)puVar7;
              puVar7[0x10] = (uint)puVar1;
              goto LAB_0060022c;
            }
            puVar6 = puVar1;
            puVar1 = (uint *)puVar1[0x10];
          }
        }
        uVar4 = uVar4 + 1;
      }
      *(uint *)(param_2 + iVar8 * 4) = uVar4;
      *puVar7 = uVar4;
      iVar5 = iVar2 + (uVar4 & 0x1f) * 4;
      puVar7[0x10] = 0;
LAB_006001bc:
      *(uint **)(iVar5 + 0x1c) = puVar7;
LAB_0060022c:
      iVar8 = iVar8 + 1;
      puVar3[2] = uVar4 + 1;
    } while (iVar8 < param_1);
  }
  return;
}

