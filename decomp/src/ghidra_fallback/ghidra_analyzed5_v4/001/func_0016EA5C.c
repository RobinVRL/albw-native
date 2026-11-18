#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_0058FBB8(undefined4 *param_1,undefined4 *param_2);
extern float DAT_0016ec44;

// USA 0016EA5C <- EU 0016EA5C (Ghidra, non-matching)
// GLOBAL DAT_0016ec44 float

void func_0016EA5C(int param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = param_2[1];
  *(undefined4 *)(param_1 + 0x24) = param_2[2];
  *(undefined4 *)(param_1 + 0x28) = param_2[3];
  *(undefined4 *)(param_1 + 0x2c) = param_2[4];
  *(undefined4 *)(param_1 + 0x30) = param_2[5];
  *(undefined4 *)(param_1 + 0x34) = param_2[6];
  *(undefined4 *)(param_1 + 0x38) = param_2[7];
  *(undefined4 *)(param_1 + 0x3c) = param_2[8];
  *(undefined4 *)(param_1 + 0x40) = param_2[9];
  uVar5 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x44) = param_2[10];
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)((int)param_2 + 0x32);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)((int)param_2 + 0x36);
  *(undefined4 *)(param_1 + 0x54) = param_2[0xe];
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0xf);
  func_0058FBB8((undefined4 *)(param_1 + 0x5a),(undefined4 *)((int)param_2 + 0x3e));
  *(undefined4 *)(param_1 + 0x60) = param_2[0x11];
  *(undefined4 *)(param_1 + 100) = param_2[0x12];
  *(undefined4 *)(param_1 + 0x68) = param_2[0x13];
  *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x6e) = *(undefined2 *)((int)param_2 + 0x52);
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x15);
  *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)((int)param_2 + 0x56);
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)((int)param_2 + 0x59);
  func_001163A0((uint *)(param_1 + 0x76),(uint *)((int)param_2 + 0x5a),0x240);
  uVar5 = param_2[0xa8];
  uVar8 = param_2[0xa9];
  uVar10 = param_2[0xaa];
  uVar11 = param_2[0xab];
  uVar12 = param_2[0xac];
  uVar13 = param_2[0xad];
  uVar14 = param_2[0xae];
  *(undefined4 *)(param_1 + 0x2b8) = param_2[0xa7];
  *(undefined4 *)(param_1 + 700) = uVar5;
  *(undefined4 *)(param_1 + 0x2c0) = uVar8;
  *(undefined4 *)(param_1 + 0x2c4) = uVar10;
  *(undefined4 *)(param_1 + 0x2c8) = uVar11;
  *(undefined4 *)(param_1 + 0x2cc) = uVar12;
  *(undefined4 *)(param_1 + 0x2d0) = uVar13;
  *(undefined4 *)(param_1 + 0x2d4) = uVar14;
  *(undefined4 *)(param_1 + 0x2d8) = param_2[0xaf];
  *(undefined4 *)(param_1 + 0x2dc) = param_2[0xb0];
  sVar1 = *(short *)(param_2 + 10);
  *(int *)(param_1 + 0x3c0) = (int)sVar1;
  *(int *)(param_1 + 0x4fc) = (int)sVar1;
  iVar6 = param_2[0xa7];
  iVar4 = param_2[0xa9];
  iVar2 = param_2[0xab];
  iVar3 = param_2[0xad];
  uVar11 = param_2[0xa8];
  uVar8 = param_2[0xaa];
  uVar5 = param_2[0xac];
  uVar10 = param_2[0xae];
  *(int *)(param_1 + 0x3d4) = iVar6;
  *(undefined4 *)(param_1 + 0x3d8) = uVar11;
  *(int *)(param_1 + 0x3dc) = iVar4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar8;
  *(int *)(param_1 + 0x3e4) = iVar2;
  *(undefined4 *)(param_1 + 1000) = uVar5;
  *(int *)(param_1 + 0x3ec) = iVar3;
  *(undefined4 *)(param_1 + 0x3f0) = uVar10;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  if ((((-1 < iVar6) && (*(undefined4 *)(param_1 + 0x3f4) = 1, -1 < iVar4)) &&
      (*(undefined4 *)(param_1 + 0x3f4) = 2, -1 < iVar2)) &&
     (*(undefined4 *)(param_1 + 0x3f4) = 3, -1 < iVar3)) {
    *(undefined4 *)(param_1 + 0x3f4) = 4;
  }
  fVar7 = (*(float *)(param_1 + 8) + *(float *)(param_1 + 0x14)) * DAT_0016ec44;
  fVar9 = (*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x18)) * DAT_0016ec44;
  *(float *)(param_1 + 0x3c4) =
       (*(float *)(param_1 + 4) + *(float *)(param_1 + 0x10)) * DAT_0016ec44;
  *(float *)(param_1 + 0x3c8) = fVar7;
  *(float *)(param_1 + 0x3cc) = fVar9;
  return;
}

