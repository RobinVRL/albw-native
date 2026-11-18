#include "ghidra_types.h"

extern int func_004C6654(int param_1,uint param_2);
extern int func_00537B38(int param_1);
extern int func_005568E8(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_0055DE50(undefined4 param_1,int param_2);
extern int *DAT_002b9078;
extern int *DAT_002b907c;

// USA 002B8C84 <- EU 002B8C60 (Ghidra, non-matching)
// GLOBAL DAT_002b9078 int *
// GLOBAL DAT_002b907c int *

undefined4 func_002B8C84(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = DAT_002b907c;
  piVar1 = DAT_002b9078;
  if (((*(uint *)(param_1 + 0x938) & 0x20) != 0) &&
     (uVar4 = func_00537B38(*DAT_002b9078), 2 < uVar4)) {
    func_004C6654(*piVar2,0x2b);
  }
  if ((*(uint *)(param_1 + 0x938) & 0x400000) != 0) {
    func_004C6654(*piVar2,0x28);
  }
  if ((*(uint *)(param_1 + 0x938) & 0x800000) != 0) {
    func_004C6654(*piVar2,0x29);
  }
  if ((*(uint *)(param_1 + 0x938) & 0x40) != 0) {
    func_004C6654(*piVar2,0x2a);
  }
  if ((*(uint *)(param_1 + 0x938) & 0x2000) != 0) {
    uVar4 = func_0055696C(*piVar1,0xc);
    if (uVar4 < 3) {
      func_004C6654(*piVar2,4);
    }
    else {
      func_004C6654(*piVar2,4);
      func_004C6654(*piVar2,5);
    }
  }
  if ((*(uint *)(param_1 + 0x938) & 0x80) != 0) {
    uVar4 = func_0055696C(*piVar1,4);
    if (uVar4 < 3) {
      func_004C6654(*piVar2,6);
    }
    else {
      func_004C6654(*piVar2,6);
      func_004C6654(*piVar2,7);
    }
  }
  if ((*(uint *)(param_1 + 0x938) & 0x100) != 0) {
    uVar4 = func_0055696C(*piVar1,6);
    if (uVar4 < 3) {
      func_004C6654(*piVar2,0xc);
    }
    else {
      func_004C6654(*piVar2,0xc);
      func_004C6654(*piVar2,0xd);
    }
  }
  if ((*(uint *)(param_1 + 0x938) & 0x8000) != 0) {
    iVar5 = func_005568E8(*piVar1);
    if (*(int *)(param_1 + 0xb30) == iVar5) {
      uVar4 = func_0055696C(*piVar1,2);
      if (uVar4 < 3) {
LAB_002b8e34:
        func_004C6654(*piVar2,0xe);
        goto LAB_002b8e40;
      }
    }
    else {
      bVar3 = func_0055DE50(param_1 + 0xbc8,(uint)*(byte *)(param_1 + 0x1488));
      if (((!bVar3) || (*(char *)(param_1 + 0x148a) < '\x02')) &&
         ((bVar3 = func_0055DE50(param_1 + 0xbc8,(uint)*(byte *)(param_1 + 0x1489)), !bVar3 ||
          (*(char *)(param_1 + 0x148b) < '\x02')))) goto LAB_002b8e34;
    }
    func_004C6654(*piVar2,0xe);
    func_004C6654(*piVar2,0xf);
  }
LAB_002b8e40:
  if ((*(uint *)(param_1 + 0x938) & 2) == 0) goto LAB_002b8efc;
  iVar5 = func_005568E8(*piVar1);
  if (*(int *)(param_1 + 0xb30) == iVar5) {
    uVar4 = func_0055696C(*piVar1,8);
    if (uVar4 < 3) {
LAB_002b8ef0:
      func_004C6654(*piVar2,0x10);
      goto LAB_002b8efc;
    }
  }
  else if (((*(byte *)(param_1 + 0x1488) != 6) || (*(char *)(param_1 + 0x148a) < '\x02')) &&
          ((*(byte *)(param_1 + 0x1489) != 6 || (*(char *)(param_1 + 0x148b) < '\x02'))))
  goto LAB_002b8ef0;
  func_004C6654(*piVar2,0x10);
  func_004C6654(*piVar2,0x11);
LAB_002b8efc:
  if ((*(uint *)(param_1 + 0x938) & 4) != 0) {
    uVar4 = func_0055696C(*piVar1,9);
    if (uVar4 < 3) {
      func_004C6654(*piVar2,0x12);
    }
    else {
      func_004C6654(*piVar2,0x12);
      func_004C6654(*piVar2,0x13);
    }
  }
  if (((*(uint *)(param_1 + 0x938) & 0x800) != 0) && (uVar4 = func_0055696C(*piVar1,10), 2 < uVar4))
  {
    func_004C6654(*piVar2,0x15);
  }
  if ((*(uint *)(param_1 + 0x938) & 0x4000) != 0) {
    uVar4 = func_0055696C(*piVar1,0xd);
    if (uVar4 < 3) {
      func_004C6654(*piVar2,0x18);
    }
    else {
      func_004C6654(*piVar2,0x18);
      func_004C6654(*piVar2,0x19);
    }
  }
  if ((*(uint *)(param_1 + 0x938) & 0x10000) != 0) {
    func_004C6654(*piVar2,0x1e);
  }
  if ((*(uint *)(param_1 + 0x938) & 0x100000) != 0) {
    func_004C6654(*piVar2,0x21);
  }
  if ((*(uint *)(param_1 + 0x938) & 0x200000) != 0) {
    func_004C6654(*piVar2,0x22);
  }
  if (((*(uint *)(param_1 + 0x938) & 0x200) != 0) && (uVar4 = func_0055696C(*piVar1,0xb), 2 < uVar4)
     ) {
    return func_004C6654(*piVar2,0xb);
  }
  return 0;
}

