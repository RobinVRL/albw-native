#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_005278B4(void);
extern int DAT_00320e54;
extern undefined4 DAT_00320e58;

// USA 00320DB0 <- EU 00320D8C (Ghidra, non-matching)
// GLOBAL DAT_00320e54 int
// GLOBAL DAT_00320e58 undefined4

void func_00320DB0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(uint * *)(albw_frame + 0x4))
  local_20 = DAT_00320e54;
  if ((short)*param_1 == 0) {
    local_1c = param_1;
    local_1c = (uint *)func_005278B4();
    (**(code **)(local_20 + 8))(&local_20);
    puVar1 = local_1c;
    (**(code **)(local_20 + 8))(&local_20);
    uVar2 = 0;
    do {
      if (*(short *)((int)local_1c + uVar2 * 2) == 0) {
        if ((int)uVar2 < 0x40001) goto LAB_00320e1c;
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x40001);
    uVar2 = 0;
LAB_00320e1c:
    uVar2 = uVar2 & 0xffff;
    if (10 < uVar2) {
      uVar2 = 10;
    }
    if (puVar1 != (uint *)0x0 && uVar2 != 0) {
      func_0010E3C4(param_1,puVar1,uVar2 << 1);
      *(undefined2 *)((int)param_1 + uVar2 * 2) = 0;
    }
  }
  return;
}

