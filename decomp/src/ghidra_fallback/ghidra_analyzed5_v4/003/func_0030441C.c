#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001DDCC4(int param_1,undefined1 param_2);
extern int func_00295B6C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053FAD4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00664884(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00304590;
extern int *DAT_00304594;
extern int *DAT_00304598;
extern uint *DAT_0030459c;
extern undefined4 DAT_003045a0;
extern undefined4 *DAT_003045a4;

// USA 0030441C <- EU 003043F8 (Ghidra, non-matching)
// GLOBAL DAT_00304590 int *
// GLOBAL DAT_00304594 int *
// GLOBAL DAT_00304598 int *
// GLOBAL DAT_0030459c uint *
// GLOBAL DAT_003045a0 undefined4
// GLOBAL DAT_003045a4 undefined4 *

undefined4 func_0030441C(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  piVar1 = DAT_00304590;
  iVar5 = func_0053FAD4(*DAT_00304590);
  if (iVar5 == 0) {
    func_001DDCC4(*piVar1,1);
  }
  if (*(short *)(param_1 + 0x2e) == 1) {
    if (*(char *)(param_1 + 0x4bd) != '\0') {
      func_00664884((undefined4 *)(param_1 + 0x4c0),5);
      uVar3 = DAT_003045a0;
      puVar2 = DAT_0030459c;
      piVar1 = DAT_00304598;
      iVar5 = 0;
      do {
        uVar8 = *(uint *)(param_1 + 0x4f4 + iVar5 * 4);
        if (uVar8 != 0) {
          puVar6 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar8);
          if (((*puVar2 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0030459c), iVar7 != 0)) {
            *DAT_003045a4 = uVar3;
          }
          if ((puVar6 == (undefined4 *)0x0) ||
             (iVar7 = (**(code **)*puVar6)(puVar6,DAT_003045a4), iVar7 == 0)) {
            puVar6 = (undefined4 *)0x0;
          }
          if (puVar6 != (undefined4 *)0x0) {
            *(undefined1 *)((int)puVar6 + 0x4bd) = 1;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      *(undefined1 *)(param_1 + 0x4bd) = 0;
      piVar1 = DAT_00304594;
      *(undefined1 *)(param_1 + 0x51a) = 1;
      return func_00295B6C(*piVar1);
    }
  }
  else if (*(int *)(param_1 + 0x4f0) == 0) {
    bVar4 = func_00588BF0(param_1,1);
    if (bVar4) {
      func_00664884((undefined4 *)(param_1 + 0x4c0),5);
      return func_00295B6C(*DAT_00304594);
    }
  }
  else if (*(char *)(param_1 + 0x4bd) != '\0') {
    func_00664884((undefined4 *)(param_1 + 0x4c0),5);
    *(undefined1 *)(param_1 + 0x4bd) = 0;
    piVar1 = DAT_00304594;
    *(undefined1 *)(param_1 + 0x51a) = 1;
    return func_00295B6C(*piVar1);
  }
  return 0;
}

