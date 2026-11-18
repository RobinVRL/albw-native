#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int DAT_0037072c;

// USA 003706B0 <- EU 0037068C (Ghidra, non-matching)
// GLOBAL DAT_0037072c int

void func_003706B0(int param_1,uint *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(uint * *)(albw_frame + 0x4))
  local_20 = DAT_0037072c;
  *(undefined2 *)(param_1 + 0x24) = 0;
  local_1c = param_2;
  (**(code **)(local_20 + 8))(&local_20);
  iVar1 = 0;
  do {
    if (*(short *)((int)local_1c + iVar1 * 2) == 0) {
      if (iVar1 < 0x40001) goto LAB_003706f4;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40001);
  iVar1 = 0;
LAB_003706f4:
  if (10 < iVar1) {
    iVar1 = 10;
  }
  (**(code **)(local_20 + 8))(&local_20);
  func_0010E3C4((uint *)(param_1 + 0x10),local_1c,iVar1 << 1);
  *(undefined2 *)(param_1 + 0x10 + iVar1 * 2) = 0;
  return;
}

