#include "ghidra_types.h"

extern int func_00130134(int param_1);
extern int func_0016B8DC(int param_1,undefined4 param_2,int param_3);
extern int func_001B7380(int param_1,int param_2,uint param_3);
extern int func_0048C320(int *param_1,int param_2,int param_3);
extern uint DAT_0016b878;
extern int *DAT_0016b87c;

// USA 0016B6F4 <- EU 0016B6F4 (Ghidra, non-matching)
// GLOBAL DAT_0016b878 uint
// GLOBAL DAT_0016b87c int *

undefined4 func_0016B6F4(int param_1)

{
  uint uVar1;
  int *piVar2;
  int extraout_r1;
  int iVar3;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((undefined4 *)(albw_frame + 0x8))
  uVar1 = 0;
  puVar4 = local_38;
  piVar7 = (int *)(param_1 + 0xdac);
  do {
    piVar2 = piVar7;
    if (uVar1 < 6) {
      piVar2 = piVar7 + uVar1 * 0xe;
    }
    local_38[uVar1] = piVar2;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  func_001B7380(*(int *)(param_1 + 0xf74),0x3c,(uint)local_38);
  uVar1 = 0;
  uVar8 = (ulonglong)DAT_0016b878;
  iVar3 = extraout_r1;
  do {
    piVar2 = piVar7;
    if (uVar1 < 6) {
      iVar3 = uVar1 * 7;
      piVar2 = piVar7 + uVar1 * 0xe;
    }
    *(undefined1 *)(piVar2 + 5) = 0;
    piVar2 = piVar7;
    if (uVar1 < 6) {
      piVar2 = piVar7 + iVar3 * 2;
    }
    if (*piVar2 != 0) {
      if (uVar1 < 6) {
        iVar3 = uVar1 * 7;
      }
      iVar5 = *(int *)(param_1 + 0x7c);
      piVar2 = piVar7;
      if (uVar1 < 6) {
        piVar2 = piVar7 + iVar3 * 2;
      }
      puVar4 = (undefined4 *)*piVar2;
      iVar6 = iVar5;
      if (0 < iVar5) {
        iVar6 = *(int *)(param_1 + 0x84);
      }
      iVar3 = 0;
      if (0 < iVar5) {
        do {
          if ((undefined4 *)*(undefined1 **)(iVar6 + iVar3 * 4) == puVar4) {
            if (-1 < iVar3) {
              piVar2 = piVar7;
              if (uVar1 < 6) {
                piVar2 = piVar7 + uVar1 * 0xe;
              }
              *piVar2 = 0;
              *(undefined1 *)(piVar2 + 5) = 0;
              *(undefined1 *)((int)piVar2 + 0x15) = 1;
              *(undefined1 *)((int)piVar2 + 0x16) = 1;
              *(undefined1 *)((int)piVar2 + 0x17) = 1;
              iVar5 = (int)uVar8;
              piVar2[2] = iVar5;
              piVar2[3] = iVar5;
              piVar2[4] = iVar5;
              iVar5 = iVar3;
              if (iVar3 + 1 <= *(int *)(param_1 + 0x7c)) {
                do {
                  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x84) + iVar5 * 4);
                  iVar5 = iVar5 + 1;
                  *puVar4 = *(undefined4 *)(param_1 + 0x88);
                  *(undefined4 **)(param_1 + 0x88) = puVar4;
                } while (iVar5 < iVar3 + 1);
              }
              puVar4 = (undefined4 *)0x1;
              func_0048C320((int *)(param_1 + 0x7c),iVar3,1);
              iVar3 = extraout_r1_00;
            }
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x7c));
      }
    }
    uVar1 = uVar1 + 1;
    if (5 < (int)uVar1) {
      func_00130134(*DAT_0016b87c);
      return func_0016B8DC(param_1,extraout_r1_01,(int)puVar4);
    }
  } while( true );
}

