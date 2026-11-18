#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0060F368(int param_1);
extern int *DAT_001805c8;
extern uint *DAT_001805cc;
extern undefined4 *DAT_001805d0;
extern undefined4 DAT_001805d4;
extern undefined4 DAT_001805d8;

// USA 001804D4 <- EU 001804D4 (Ghidra, non-matching)
// GLOBAL DAT_001805c8 int *
// GLOBAL DAT_001805cc uint *
// GLOBAL DAT_001805d0 undefined4 *
// GLOBAL DAT_001805d4 undefined4
// GLOBAL DAT_001805d8 undefined4

undefined4 func_001804D4(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(uint *)(param_1 + 0xb9c) != 0) {
    puVar3 = (undefined4 *)func_0052FBA0(*DAT_001805c8 + 0x3dbbc,*(uint *)(param_1 + 0xb9c));
    if (puVar3 != (undefined4 *)0x0) {
      if (((*DAT_001805cc & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001805cc), iVar4 != 0)) {
        *DAT_001805d0 = DAT_001805d4;
      }
      iVar4 = (**(code **)*puVar3)(puVar3,DAT_001805d0);
      if (iVar4 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      puVar3[0xb8] = puVar3[0xb8] & 0xfffffffd;
    }
    *(undefined4 *)(param_1 + 0xb9c) = 0;
  }
  if (*(short *)(param_1 + 0x38) != 0) {
    bVar2 = func_00588BF0(param_1,1);
    cVar1 = '\0';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xbee);
    }
    if (bVar2 && cVar1 != '\0') {
      uVar5 = 5;
    }
    else {
      uVar5 = 0;
    }
    *(undefined4 *)(param_1 + 0x984) = uVar5;
  }
  uVar5 = DAT_001805d8;
  *(undefined4 *)(param_1 + 0x9cc) = 0x1e;
  *(undefined4 *)(param_1 + 0x9d0) = uVar5;
  *(undefined4 *)(param_1 + 0x9c8) = 0;
  return func_0060F368(param_1);
}

