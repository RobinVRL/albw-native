#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_0045101c;
extern int *DAT_00451020;
extern int *DAT_00451024;

// USA 00450F34 <- EU 00450F0C (Ghidra, non-matching)
// GLOBAL DAT_0045101c int
// GLOBAL DAT_00451020 int *
// GLOBAL DAT_00451024 int *

void func_00450F34(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *in_r1;
  int iVar6;
  int iVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_20 ((int *)(albw_frame + 0x10))
  uVar2 = *(uint *)(param_1 + 0x108);
  if (uVar2 == 0) {
    iVar7 = 0;
  }
  else {
    in_r1 = *(int **)(param_1 + 0x110);
    iVar7 = *in_r1;
  }
  if (2 < uVar2) {
    in_r1 = *(int **)(param_1 + 0x110);
  }
  if (uVar2 < 3) {
    iVar6 = 0;
  }
  else {
    iVar6 = in_r1[2];
  }
  uVar3 = uVar2;
  if (1 < uVar2) {
    uVar3 = *(uint *)(param_1 + 0x110);
  }
  if (uVar2 < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(uVar3 + 4);
  }
  iVar7 = (int)(short)*(char *)(iVar6 + 0x84) * (int)*(short *)(param_1 + 0x150) +
          (int)(short)*(char *)(iVar4 + 0x84) * (int)*(short *)(param_1 + 0x14e) +
          (int)(short)*(char *)(iVar7 + 0x84) * (int)*(short *)(param_1 + 0x14c);
  sVar1 = (short)iVar7;
  bVar8 = *(short *)(param_1 + 0x152) != sVar1;
  if (bVar8) {
    iVar7 = *(int *)(param_1 + 0x144);
  }
  if (bVar8 && iVar7 != 0) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[3] = 0xffffffff;
    local_20[2] = 0;
    local_2c = *(undefined4 *)(*(int *)(param_1 + 0x144) + 0xa8);
    local_30 = DAT_0045101c;
    func_005826A4(*DAT_00451024,local_20,DAT_00451020,&local_30);
    *(short *)(*(int *)(param_1 + 0x140) + 0x60) = sVar1;
    func_001788DC(*(int *)(param_1 + 0x140),local_20);
    iVar7 = *(int *)(param_1 + 0x140);
    piVar5 = *(int **)(param_1 + 0x144);
    *(undefined2 *)(iVar7 + 0x32) = 0;
    *(undefined1 *)(iVar7 + 0x3d) = 0;
    (**(code **)(*piVar5 + 0x60))
              (piVar5,*(undefined4 *)(*(int *)(param_1 + 0x140) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x140) + 0x20) >> 1);
  }
  return;
}

