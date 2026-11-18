#include "ghidra_types.h"

extern int func_00110DDC(undefined4 *param_1,int param_2);
extern int func_00409B8C(int *param_1);
extern void func_00409BC8(int *param_1,int *param_2,float fparam_0);
extern int func_004EC66C(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_0056A1C0(int param_1);
extern int DAT_002589a4;
extern int DAT_002589a8;
extern int DAT_002589ac;
extern int DAT_002589b0;
extern int DAT_002589b4;
extern int DAT_002589b8;
extern int *DAT_002589bc;

// USA 00258890 <- EU 002588B8 (Ghidra, non-matching)
// GLOBAL DAT_002589a4 int
// GLOBAL DAT_002589a8 int
// GLOBAL DAT_002589ac int
// GLOBAL DAT_002589b0 int
// GLOBAL DAT_002589b4 int
// GLOBAL DAT_002589b8 int
// GLOBAL DAT_002589bc int *

void func_00258890(int param_1)

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
  iVar3 = DAT_002589a4;
  if (local_20 == 0) {
    func_00409B8C(&local_20);
    iVar2 = -1;
  }
  else {
    iVar2 = func_0056A1C0(local_20);
    func_00409B8C(&local_20);
    if (iVar3 <= iVar2) goto LAB_00258920;
  }
  bVar1 = true;
LAB_00258920:
  iVar3 = (int)((ulonglong)((longlong)DAT_002589ac * (longlong)(DAT_002589a8 + iVar2)) >> 0x20);
  piVar4 = (int *)(iVar3 >> 0xd);
  iVar3 = DAT_002589a8 + iVar2 + ((int)piVar4 - (iVar3 >> 0x1f)) * -0x6a88;
  bVar5 = DAT_002589b0 == iVar3;
  if (DAT_002589b0 <= iVar3) {
    bVar5 = !bVar1;
  }
  if (!bVar5) {
    func_00110DDC((undefined4 *)(param_1 + 0xc),0x3c);
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined1 *)(param_1 + 100) = 0;
    local_1c = *(undefined4 *)(DAT_002589b4 + 0x20);
    local_20 = DAT_002589b8;
    func_004EC66C(*DAT_002589bc,&local_20,DAT_002589b8,piVar4);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  return;
}

