#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_0045101c;
extern int *DAT_00451020;
extern int *DAT_00451024;

// USA 00450EB8 <- EU 00450E90 (Ghidra, non-matching)
// GLOBAL DAT_0045101c int
// GLOBAL DAT_00451020 int *
// GLOBAL DAT_00451024 int *

void func_00450EB8(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define aiStack_20 ((int *)(albw_frame + 0x10))
  uVar2 = *(uint *)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8 + 4);
  pcVar6 = *(code **)(*(int *)(param_1 + 0x90) + *(char *)(param_1 + 0x78) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(int *)(*(int *)(param_1 + 0x88) + ((int)uVar2 >> 1)));
  }
  (*pcVar6)((int)(*(int *)(param_1 + 0x88)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0x74) + 1;
  *(int *)(param_1 + 0x74) = iVar3;
  piVar7 = extraout_r1;
  if (*(int *)(param_1 + 0x84) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x84),1,fparam_0);
    piVar7 = extraout_r1_00;
  }
  uVar2 = *(uint *)(param_1 + 0x108);
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    piVar7 = *(int **)(param_1 + 0x110);
    iVar3 = *piVar7;
  }
  if (2 < uVar2) {
    piVar7 = *(int **)(param_1 + 0x110);
  }
  if (uVar2 < 3) {
    iVar8 = 0;
  }
  else {
    iVar8 = piVar7[2];
  }
  uVar4 = uVar2;
  if (1 < uVar2) {
    uVar4 = *(uint *)(param_1 + 0x110);
  }
  if (uVar2 < 2) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(uVar4 + 4);
  }
  iVar3 = (int)(short)*(char *)(iVar8 + 0x84) * (int)*(short *)(param_1 + 0x150) +
          (int)(short)*(char *)(iVar5 + 0x84) * (int)*(short *)(param_1 + 0x14e) +
          (int)(short)*(char *)(iVar3 + 0x84) * (int)*(short *)(param_1 + 0x14c);
  sVar1 = (short)iVar3;
  bVar9 = *(short *)(param_1 + 0x152) != sVar1;
  if (bVar9) {
    iVar3 = *(int *)(param_1 + 0x144);
  }
  if (bVar9 && iVar3 != 0) {
    aiStack_20[0] = 0;
    aiStack_20[1] = 0;
    aiStack_20[3] = 0xffffffff;
    aiStack_20[2] = 0;
    uStack_2c = *(undefined4 *)(*(int *)(param_1 + 0x144) + 0xa8);
    iStack_30 = DAT_0045101c;
    func_005826A4(*DAT_00451024,aiStack_20,DAT_00451020,&iStack_30);
    *(short *)(*(int *)(param_1 + 0x140) + 0x60) = sVar1;
    func_001788DC(*(int *)(param_1 + 0x140),aiStack_20);
    iVar3 = *(int *)(param_1 + 0x140);
    piVar7 = *(int **)(param_1 + 0x144);
    *(undefined2 *)(iVar3 + 0x32) = 0;
    *(undefined1 *)(iVar3 + 0x3d) = 0;
    (**(code **)(*piVar7 + 0x60))
              (piVar7,*(undefined4 *)(*(int *)(param_1 + 0x140) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x140) + 0x20) >> 1);
  }
  return;
}

