#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00440C48(int param_1);
extern int func_00532C78(int param_1);
extern float DAT_00473438;
extern float DAT_0047343c;

// USA 00473148 <- EU 00473120 (Ghidra, non-matching)
// GLOBAL DAT_00473438 float
// GLOBAL DAT_0047343c float

void func_00473148(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  
  func_00440C48(param_1);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x100) + *(char *)(param_1 + 0xe8) * 8 + 4);
  piVar6 = (int *)(*(int *)(param_1 + 0x100) + *(char *)(param_1 + 0xe8) * 8);
  if ((uVar4 & 1) != 0) {
    piVar6 = (int *)(*piVar6 + *(int *)(*(int *)(param_1 + 0xf8) + ((int)uVar4 >> 1)));
  }
  (*(code *)*piVar6)();
  iVar5 = *(int *)(param_1 + 0xe4) + 1;
  *(int *)(param_1 + 0xe4) = iVar5;
  if (*(int *)(param_1 + 0xf4) != 0) {
    fVar8 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0xf4),1,fVar8);
  }
  fVar8 = DAT_00473438;
  if ((*(short *)(param_1 + 0x10a) == 2) && (bVar2 = func_00532C78(param_1 + 0x108), !bVar2)) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x10a) = 6;
    *(undefined2 *)(param_1 + 0x108) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x108),fVar8);
  }
  cVar1 = *(char *)(param_1 + 0x160);
  if (cVar1 == '\x01') {
    iVar5 = *(int *)(param_1 + 0x1c);
    if ((uint)(int)*(short *)(param_1 + 0x156) < *(uint *)(iVar5 + 8)) {
      iVar7 = *(int *)(iVar5 + 0xc) + *(short *)(param_1 + 0x156) * 0x38;
    }
    else {
      iVar7 = *(int *)(iVar5 + 0xc);
    }
    if (*(char *)(iVar7 + 0x28) != '\0') {
      return;
    }
    if (*(float *)(iVar7 + 0x1c) < DAT_0047343c) {
      if (DAT_0047343c < *(float *)(iVar7 + 0x14)) {
        return;
      }
    }
    else if (*(float *)(iVar7 + 0x14) != *(float *)(iVar7 + 0x20)) {
      return;
    }
    *(int *)(param_1 + 0x15c) = iVar5;
    *(undefined2 *)(param_1 + 0x156) = 8;
    *(undefined2 *)(param_1 + 0x154) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x154),fVar8);
    uVar3 = 2;
LAB_00473234:
    *(undefined1 *)(param_1 + 0x160) = uVar3;
    return;
  }
  if (cVar1 != '\x02') {
    if (cVar1 == '\x03') {
      fVar10 = DAT_0047343c;
      bVar2 = func_00532C78(param_1 + 0x154);
      if (bVar2) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if ((uint)(int)*(short *)(param_1 + 0x156) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
          iVar5 = iVar5 + *(short *)(param_1 + 0x156) * 0x38;
        }
        fVar9 = *(float *)(iVar5 + 0x18);
        if (*(float *)(iVar5 + 0x14) < fVar9) {
          if (((fVar9 < *(float *)(iVar5 + 0x20)) && (fVar9 < fVar10)) &&
             (fVar10 <= *(float *)(iVar5 + 0x20))) goto LAB_00473408;
        }
        else if (fVar10 <= fVar9) {
          return;
        }
        if (*(float *)(iVar5 + 0x14) < fVar10) {
          return;
        }
      }
LAB_00473408:
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x156) = 7;
      *(undefined2 *)(param_1 + 0x154) = 2;
      func_002317C0((undefined2 *)(param_1 + 0x154),fVar8);
      *(undefined1 *)(param_1 + 0x160) = 4;
      return;
    }
    if (cVar1 != '\x04') {
      return;
    }
    bVar2 = func_00532C78(param_1 + 0x154);
    if (bVar2) {
      return;
    }
    func_00231448(param_1 + 0x154);
    uVar3 = 0;
    goto LAB_00473234;
  }
  if (*(byte *)(param_1 + 0x161) == 0) {
    return;
  }
  uVar4 = (uint)*(short *)(param_1 + 0x156);
  iVar5 = *(int *)(param_1 + 0x1c);
  if (-1 < (int)uVar4) {
    if (uVar4 < *(uint *)(iVar5 + 8)) {
      iVar7 = *(int *)(iVar5 + 0xc) + uVar4 * 0x38;
    }
    else {
      iVar7 = *(int *)(iVar5 + 0xc);
    }
    if (*(char *)(iVar7 + 0x35) != '\0') {
      if (uVar4 < *(uint *)(iVar5 + 8)) {
        iVar7 = *(int *)(iVar5 + 0xc) + uVar4 * 0x38;
      }
      else {
        iVar7 = *(int *)(iVar5 + 0xc);
      }
      iVar7 = *(int *)(iVar7 + 0x24);
      goto LAB_00473330;
    }
  }
  iVar7 = 0;
LAB_00473330:
  if (iVar7 < (int)(uint)*(byte *)(param_1 + 0x161)) {
    return;
  }
  *(int *)(param_1 + 0x15c) = iVar5;
  *(undefined2 *)(param_1 + 0x156) = 7;
  *(undefined2 *)(param_1 + 0x154) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x154),fVar8);
  *(undefined1 *)(param_1 + 0x160) = 4;
  return;
}

