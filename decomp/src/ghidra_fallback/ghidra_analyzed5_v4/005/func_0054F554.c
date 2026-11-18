#include "ghidra_types.h"

extern int func_004A6710(int param_1,int param_2);
extern int func_005817C0(int param_1,int param_2,uint *param_3);

// USA 0054F554 <- EU 0054F52C (Ghidra, non-matching)

void func_0054F554(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined1 *)(albw_frame + 0x10))
  piVar1 = (int *)(param_2 + 0x1418);
  if (*(uint *)(param_1 + 0xc) < 0x10) {
    piVar1 = piVar1 + *(uint *)(param_1 + 0xc);
  }
  if ((int *)*piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1);
    (**(code **)(*(int *)(param_1 + 0x10) + 8))((int *)(param_1 + 0x10));
    if (*(int *)(iVar2 + 0x24) != 0) {
      local_18 = 0;
      uStack_14 = 0xffffffff;
      local_20 = 0;
      local_1c = 0;
      local_10 = 0;
      func_005817C0(*(int *)(iVar2 + 0x24),(int)&local_20,*(uint **)(param_1 + 0x14));
      func_004A6710(*(int *)(iVar2 + 0x24),(int)&local_20);
    }
  }
  return;
}

