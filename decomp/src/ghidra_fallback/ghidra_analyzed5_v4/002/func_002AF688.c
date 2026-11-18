#include "ghidra_types.h"

extern int func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5);
extern int func_002AE780(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern undefined4 DAT_002af7fc;
extern float DAT_002af800;
extern uint DAT_002af804;

// USA 002AF688 <- EU 002AF664 (Ghidra, non-matching)
// GLOBAL DAT_002af7fc undefined4
// GLOBAL DAT_002af800 float
// GLOBAL DAT_002af804 uint

void func_002AF688(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_002AE780(param_1);
  fVar10 = DAT_002af800;
  uVar1 = DAT_002af7fc;
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) & 0xfff7 | 1;
  iVar2 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(iVar2 + 0x770);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(iVar2 + 0x774);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(iVar2 + 0x778);
  *(undefined4 *)(param_1 + 0x2c) = 0x82;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x266) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x655) = 2;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x200;
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 2;
  iVar2 = (int)*(char *)(param_1 + 0x264);
  if (-1 < iVar2) {
    func_004FABDC(*(int *)(param_1 + 0x34),iVar2,0xffffffff,0);
  }
  uVar11 = func_0058AB74(*(int *)(param_1 + 0x34));
  fVar6 = func_0058AA40(*(undefined4 *)(param_1 + 0x34));
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x82a) = 0;
  func_002ADFE4(param_1,1,0x1f,0,0);
  uVar12 = func_0058AB74(*(int *)(param_1 + 0x34));
  fVar7 = func_0058AA40(*(undefined4 *)(param_1 + 0x34));
  if (-1 >= iVar2) {
    bVar4 = *(char *)(*(int *)(param_1 + 0x34) + 0x82a) == '\0';
    bVar5 = (int)uVar11 == (int)uVar12;
    bVar3 = bVar4 && bVar5;
    if (bVar4 && bVar5) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 == fVar7) << 0x1e;
      bVar3 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (bVar3) goto LAB_002af7e0;
  }
  fVar6 = func_0058AC38(*(undefined4 *)(param_1 + 0x34));
  uVar8 = VectorFloatToUnsigned(fVar6,3);
  if (*(uint *)(param_1 + 0x2c) < uVar8) {
    uVar9 = uVar8;
    if (uVar8 == 0) {
      uVar9 = DAT_002af804;
    }
    *(uint *)(param_1 + 0x2c) = uVar8;
    if (uVar8 == 0) {
      *(uint *)(param_1 + 0x30) = uVar9;
    }
    else {
      fVar6 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x30) = fVar10 / fVar6;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_002af7e0:
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
       *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0x3fffffff;
  return;
}

