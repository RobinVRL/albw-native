#include "ghidra_types.h"

extern uint DAT_003da6cc;

// USA 003DA5EC <- EU 003DA5CC (Ghidra, non-matching)
// GLOBAL DAT_003da6cc uint

int func_003DA5EC(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_1 == (ushort *)0x0) {
    iVar1 = -1;
  }
  else {
    uVar2 = (uint)*param_1;
    iVar1 = 0;
    if (uVar2 != 0) {
      do {
        uVar3 = uVar2 - 0x30;
        if (9 < uVar3) {
          uVar3 = uVar2 - 0xff10;
        }
        if (uVar3 < 10) {
LAB_003da6b0:
          iVar1 = iVar1 + 1;
        }
        else {
          uVar3 = uVar2 - 0x2070;
          if (9 < uVar3) {
            uVar3 = uVar2 - 0x2080;
          }
          if (uVar3 < 10) goto LAB_003da6b0;
          uVar3 = uVar2 - 0x2160;
          if (0xb < uVar3) {
            uVar3 = uVar2 - 0x2170;
          }
          if (uVar3 < 0xc) goto LAB_003da6b0;
          uVar3 = uVar2 - 0x2460;
          if (0x13 < uVar3) {
            uVar3 = uVar2 - 0x2474;
          }
          if (uVar3 < 0x14) goto LAB_003da6b0;
          uVar3 = uVar2 - 0x2488;
          bVar5 = 0x12 < uVar3;
          bVar4 = uVar3 == 0x13;
          if (0x13 < uVar3) {
            bVar5 = 8 < uVar2 - 0x2776;
            bVar4 = uVar2 - 0x2776 == 9;
          }
          if (!bVar5 || bVar4) goto LAB_003da6b0;
          uVar3 = uVar2 - 0x2780;
          if (9 < uVar3) {
            uVar3 = uVar2 - 0x278a;
          }
          if (((uVar3 < 10) || (uVar2 == 0xb2 || uVar2 == 0xb3)) ||
             ((uVar2 == 0xb9 || uVar2 == DAT_003da6cc) ||
              uVar2 == (DAT_003da6cc | (int)DAT_003da6cc >> 3))) goto LAB_003da6b0;
        }
        param_1 = param_1 + 1;
        uVar2 = (uint)*param_1;
      } while (uVar2 != 0);
    }
  }
  return iVar1;
}

