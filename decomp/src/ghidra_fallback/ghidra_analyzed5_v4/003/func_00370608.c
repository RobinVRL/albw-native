#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int DAT_00370688;

// USA 00370608 <- EU 003705E4 (Ghidra, non-matching)
// GLOBAL DAT_00370688 int

void func_00370608(int param_1,uint *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(uint * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0x3e) = 0;
  local_20 = DAT_00370688;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  local_1c = param_2;
  (**(code **)(local_20 + 8))(&local_20);
  iVar1 = 0;
  do {
    if (*(short *)((int)local_1c + iVar1 * 2) == 0) {
      if (iVar1 < 0x40001) goto LAB_00370650;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40001);
  iVar1 = 0;
LAB_00370650:
  if (10 < iVar1) {
    iVar1 = 10;
  }
  (**(code **)(local_20 + 8))(&local_20);
  func_0010E3C4((uint *)(param_1 + 0x28),local_1c,iVar1 << 1);
  *(undefined2 *)(param_1 + 0x28 + iVar1 * 2) = 0;
  return;
}

