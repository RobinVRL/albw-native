#include "ghidra_types.h"

extern int func_00194BFC(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00652CD0(int param_1,int param_2);
extern int *DAT_003126ec;

// USA 003125C8 <- EU 003125A4 (Ghidra, non-matching)
// GLOBAL DAT_003126ec int *

bool func_003125C8(int param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = DAT_003126ec;
  switch(param_2) {
  case 1:
    iVar3 = func_00194BFC((uint)*(byte *)(param_1 + 0x9d0));
    iVar3 = func_0055696C(*piVar1,iVar3);
    if (iVar3 == 1) {
      return false;
    }
    break;
  case 2:
    *(undefined1 *)(param_1 + 0xa3a) = 1;
    bVar2 = func_00652CD0(param_1,1);
    if (bVar2) {
      return false;
    }
    break;
  case 3:
    iVar3 = func_00194BFC((uint)*(byte *)(param_1 + 0x9d0));
    uVar4 = func_0055696C(*piVar1,iVar3);
    if (1 < uVar4) {
      return false;
    }
    break;
  case 4:
    if (((*(char *)(param_1 + 0x9d0) == '\x01') && (bVar2 = func_00588BF0(param_1,0), bVar2)) &&
       (bVar2 = func_00588BF0(param_1,1), !bVar2)) {
      return bVar2;
    }
    break;
  case 5:
    *(undefined1 *)(param_1 + 0xa3a) = 0;
    bVar2 = func_00652CD0(param_1,0);
    if (bVar2) {
      return false;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x9d0) == '\b') {
      return false;
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x9d0) == '\x02') {
      return false;
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x9d0) == '\a') {
      return false;
    }
  }
  return true;
}

