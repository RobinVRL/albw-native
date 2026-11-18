#include "ghidra_types.h"

extern int func_003150D8(int *param_1);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_00664C50(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00315664;
extern int *DAT_00315668;
extern int *DAT_0031566c;
extern int *DAT_00315670;
extern int *DAT_00315674;
extern int *DAT_00315678;
extern int *DAT_0031567c;

// USA 003154F4 <- EU 003154D0 (Ghidra, non-matching)
// GLOBAL DAT_00315664 int *
// GLOBAL DAT_00315668 int *
// GLOBAL DAT_0031566c int *
// GLOBAL DAT_00315670 int *
// GLOBAL DAT_00315674 int *
// GLOBAL DAT_00315678 int *
// GLOBAL DAT_0031567c int *

undefined4 func_003154F4(int *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar1 = (uVar3 & 0x7e0) >> 5;
  func_0035227C((int)(param_1 + 0xc9),uVar1);
  switch(uVar1) {
  case 0:
    bVar2 = true;
    break;
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xf:
  case 0x15:
  case 0x17:
    *(char *)((int)param_1 + 0x393) = (char)uVar1;
    func_003150D8(param_1);
    bVar2 = true;
    break;
  case 4:
    if ((1 << (uVar3 & 0x1f) & 2U) == 0) {
      return 0;
    }
    goto LAB_003155b4;
  default:
    bVar2 = false;
  }
  if (bVar2) {
LAB_003155b4:
    iVar4 = func_0052FBA0(*DAT_00315664 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if ((iVar4 == 0) ||
       ((((iVar4 = func_00588BE4(iVar4), iVar4 != *DAT_00315668 && (iVar4 != *DAT_0031566c)) &&
         (iVar4 != *DAT_00315670)) &&
        (((iVar4 != *DAT_00315674 && (iVar4 != *DAT_00315678)) && (iVar4 != *DAT_0031567c)))))) {
      func_00664C50(param_1 + 0x115,1);
      return 1;
    }
  }
  return 0;
}

