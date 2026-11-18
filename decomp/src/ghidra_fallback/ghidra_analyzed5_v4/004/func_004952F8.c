#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int DAT_004953cc;

// USA 004952F8 <- EU 004952D0 (Ghidra, non-matching)
// GLOBAL DAT_004953cc int

void func_004952F8(int param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar1 = *(int **)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  (**(code **)(*piVar1 + 8))(piVar1);
  local_30 = DAT_004953cc;
  iVar2 = 0;
  if ((iVar3 < piVar1[2]) && (-1 < iVar3)) {
    puVar4 = (uint *)(piVar1[1] + iVar3);
    iVar2 = piVar1[2] - iVar3;
    *(undefined1 *)((int)puVar4 + iVar2 + -1) = 0;
  }
  else {
    puVar4 = (uint *)0x0;
  }
  local_2c = param_2;
  if ((int)param_3 < 0) {
    (**(code **)(local_30 + 8))(&local_30);
    param_3 = 0;
    do {
      if (*(char *)((int)local_2c + param_3) == '\0') {
        if ((int)param_3 < 0x40001) goto LAB_0049538c;
        break;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < 0x40001);
    param_3 = 0;
  }
LAB_0049538c:
  if (iVar2 <= (int)param_3) {
    param_3 = iVar2 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar4,local_2c,param_3);
  *(undefined1 *)((int)puVar4 + param_3) = 0;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
  return;
}

