#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int DAT_00584124;

// USA 00584084 <- EU 0058405C (Ghidra, non-matching)
// GLOBAL DAT_00584124 int

void func_00584084(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(uint * *)(albw_frame + 0x4))
  if (param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0xd60) != 0)) {
    local_1c = (uint *)(iVar1 + 0xd60);
    local_20 = DAT_00584124;
    puVar2 = *(uint **)(param_2 + 4);
    (**(code **)(DAT_00584124 + 8))(&local_20);
    iVar1 = 0;
    do {
      if (*(short *)((int)local_1c + iVar1 * 2) == 0) {
        if (iVar1 < 0x40001) goto LAB_005840e8;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x40001);
    iVar1 = 0;
LAB_005840e8:
    if (*(int *)(param_2 + 8) <= iVar1) {
      iVar1 = *(int *)(param_2 + 8) + -1;
    }
    (**(code **)(local_20 + 8))(&local_20);
    func_0010E3C4(puVar2,local_1c,iVar1 << 1);
    *(undefined2 *)((int)puVar2 + iVar1 * 2) = 0;
  }
  return;
}

