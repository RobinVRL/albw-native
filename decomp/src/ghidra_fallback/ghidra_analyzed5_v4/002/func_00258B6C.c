#include "ghidra_types.h"

extern int func_00110DDC(undefined4 *param_1,int param_2);
extern int func_00409B8C(int *param_1);
extern void func_00409BC8(int *param_1,int *param_2,float fparam_0);
extern int func_004EC66C(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_0056A1C0(int param_1);
extern int DAT_00258c7c;
extern int DAT_00258c80;
extern int DAT_00258c84;
extern int DAT_00258c88;
extern int *DAT_00258c8c;

// USA 00258B6C <- EU 00258B94 (Ghidra, non-matching)
// GLOBAL DAT_00258c7c int
// GLOBAL DAT_00258c80 int
// GLOBAL DAT_00258c84 int
// GLOBAL DAT_00258c88 int
// GLOBAL DAT_00258c8c int *

void func_00258B6C(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x3c) != 1) {
    return;
  }
  bVar1 = false;
  func_00409BC8(&local_20,(int *)(param_1 + 0xc),in_s0);
  if (local_20 == 0) {
    func_00409B8C(&local_20);
    iVar2 = -1;
  }
  else {
    iVar2 = func_0056A1C0(local_20);
    func_00409B8C(&local_20);
    if (-1 < iVar2) goto LAB_00258bf8;
  }
  bVar1 = true;
LAB_00258bf8:
  iVar3 = (int)((ulonglong)((longlong)DAT_00258c7c * (longlong)(iVar2 + 0xaa5)) >> 0x20);
  piVar4 = (int *)(iVar3 >> 0xc);
  iVar2 = iVar2 + 0xaa5 + ((int)piVar4 - (iVar3 >> 0x1f)) * -0x3544;
  bVar5 = DAT_00258c80 == iVar2;
  if (DAT_00258c80 <= iVar2) {
    bVar5 = !bVar1;
  }
  if (!bVar5) {
    func_00110DDC((undefined4 *)(param_1 + 0xc),0x78);
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined1 *)(param_1 + 100) = 0;
    local_1c = *(undefined4 *)(DAT_00258c84 + 0x24);
    local_20 = DAT_00258c88;
    func_004EC66C(*DAT_00258c8c,&local_20,DAT_00258c88,piVar4);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  return;
}

