#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0040449C(int param_1,int param_2);
extern int DAT_001681e0;

// USA 00168100 <- EU 00168100 (Ghidra, non-matching)
// GLOBAL DAT_001681e0 int

int func_00168100(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(uint * *)(albw_frame + 0xc))
  param_1[1] = (int)param_2;
  (**(code **)(*param_3 + 8))(param_3);
  iVar1 = func_0040449C(*param_2,param_3[1]);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfb;
  local_28 = DAT_001681e0;
  iVar2 = *(int *)(iVar1 + 0xac);
  *param_1 = iVar2;
  local_24 = *(uint **)(iVar2 + 0x20);
  puVar4 = (uint *)param_1[10];
  (**(code **)(local_28 + 8))(&local_28);
  uVar3 = 0;
  do {
    if (*(char *)((int)local_24 + uVar3) == '\0') {
      if ((int)uVar3 < 0x40001) goto LAB_001681a4;
      break;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x40001);
  uVar3 = 0;
LAB_001681a4:
  if (param_1[0xb] <= (int)uVar3) {
    uVar3 = param_1[0xb] - 1;
  }
  (**(code **)(local_28 + 8))(&local_28);
  func_0010E3C4(puVar4,local_24,uVar3);
  *(undefined1 *)((int)puVar4 + uVar3) = 0;
  return iVar1;
}

