#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int *DAT_001bc1b8;

// USA 001BC07C <- EU 001BC07C (Ghidra, non-matching)
// GLOBAL DAT_001bc1b8 int *

ulonglong func_001BC07C(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  
  iVar2 = *DAT_001bc1b8;
  cVar1 = *(char *)(*(int *)(iVar2 + 0x14) + 0x1600);
  if (((cVar1 != '\0') || (0x1f < (int)param_2)) || (param_2 == 0xffffffff)) {
    return (ulonglong)CONCAT14(cVar1,iVar2);
  }
  func_0010E3C4((uint *)(iVar2 + 0x18 + param_2 * 0x40),(uint *)(param_1 + 0x11c),0x20);
  bVar4 = 4 < param_2;
  bVar3 = param_2 == 5;
  if (5 < param_2) {
    bVar4 = 3 < param_2 - 0x16;
    bVar3 = param_2 - 0x16 == 4;
  }
  if (!bVar4 || bVar3) {
    switch(param_2) {
    default:
      if (param_2 != 10) {
        if ((int)param_2 < 0xb) {
          if ((param_2 != 0 && param_2 != 2) && (param_2 != 4 && param_2 != 9)) break;
        }
        else if ((param_2 != 0xb && param_2 != 0xc) && (param_2 != 0x12 && param_2 != 0x16)) break;
      }
      param_2 = 0;
      break;
    case 1:
    case 3:
    case 5:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
      param_2 = 1;
    }
  }
  uVar5 = func_0010E3C4((uint *)(iVar2 + 0x18 + param_2 * 0x40 + 0x20),(uint *)(param_1 + 0x15c),
                        0x10);
  return uVar5;
}

