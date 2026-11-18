#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0028FE00(int param_1,int param_2);
extern int func_00309548(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int *DAT_00309780;
extern int *DAT_00309784;
extern int *DAT_00309788;
extern undefined4 DAT_0030978c;
extern int DAT_00309790;
extern int *DAT_00309794;

// USA 003096D8 <- EU 003096B4 (Ghidra, non-matching)
// GLOBAL DAT_00309780 int *
// GLOBAL DAT_00309784 int *
// GLOBAL DAT_00309788 int *
// GLOBAL DAT_0030978c undefined4
// GLOBAL DAT_00309790 int
// GLOBAL DAT_00309794 int *

void func_003096D8(int *param_1)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar2 = func_00588BE4((int)param_1);
  if (((iVar2 != *DAT_00309780) && (iVar2 != *DAT_00309784)) && (iVar2 != *DAT_00309788)) {
    *(undefined1 *)(param_1[0x105] + 0x44) = 1;
  }
  *(undefined1 *)(param_1[0x104] + 0x44) = 0;
  func_00309548((int)param_1,1);
  func_00588C14((int)param_1,0,1);
  (**(code **)(param_1[200] + 0x30))(param_1 + 200);
  local_14 = DAT_0030978c;
  local_18 = DAT_00309790;
  func_00150A84(param_1,&local_18,0);
  piVar1 = DAT_00309794;
  *(undefined1 *)((int)param_1 + 0x435) = 1;
  if (*(int *)(*(int *)(*piVar1 + 0x28) + 0x14) == param_1[0xb3]) {
    func_0028FE00(*piVar1,1);
  }
  return;
}

