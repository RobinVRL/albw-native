#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0065AC0C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001abb58;
extern uint *DAT_001abb5c;
extern undefined4 DAT_001abb60;
extern undefined4 *DAT_001abb64;

// USA 001AB9C8 <- EU 001AB9C8 (Ghidra, non-matching)
// GLOBAL DAT_001abb58 int *
// GLOBAL DAT_001abb5c uint *
// GLOBAL DAT_001abb60 undefined4
// GLOBAL DAT_001abb64 undefined4 *

bool func_001AB9C8(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  bool bVar5;
  short *psVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  bVar10 = true;
  if (param_2 < 10) {
    sVar1 = *(short *)(param_1 + 0x32);
    psVar6 = (short *)(param_1 + 0x30);
    if (param_2 == 0) {
      if (sVar1 <= *psVar6) {
        func_004FC07C(param_1,0,0xffffffff,0);
      }
    }
    else if (param_2 == 1) {
      if (sVar1 <= *psVar6) {
        func_004FC07C(param_1,1,0xffffffff,0);
      }
    }
    else if (param_2 == 2) {
      if (sVar1 <= *psVar6) {
        func_004FC07C(param_1,0,0xffffffff,0);
      }
      if (*(char *)(param_1 + 0x8c0) == '\x04') {
        func_0065AC0C((undefined4 *)(param_1 + 0x8bc),8);
      }
      bVar10 = *(char *)(param_1 + 0x8c0) == '\n';
    }
  }
  uVar4 = DAT_001abb60;
  puVar3 = DAT_001abb5c;
  piVar2 = DAT_001abb58;
  if (*(short *)(param_1 + 0x32) == 0) {
    iVar9 = 1;
    do {
      puVar7 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(param_1 + iVar9 * 4 + 0x97c))
      ;
      if (puVar7 != (undefined4 *)0x0) {
        if (((*puVar3 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_001abb5c), iVar8 != 0)) {
          *DAT_001abb64 = uVar4;
        }
        iVar8 = (**(code **)*puVar7)(puVar7,DAT_001abb64);
        if (iVar8 == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        bVar5 = func_001AB9C8((int)puVar7,param_2);
        bVar10 = (bool)(bVar10 & bVar5);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
  }
  return bVar10;
}

