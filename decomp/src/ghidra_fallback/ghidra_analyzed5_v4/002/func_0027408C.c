#include "ghidra_types.h"

extern int func_00547B48(int param_1,int param_2);
extern int func_00660CE8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00274328;
extern float DAT_0027432c;

// USA 0027408C <- EU 002740B4 (Ghidra, non-matching)
// GLOBAL DAT_00274328 float
// GLOBAL DAT_0027432c float

undefined4 func_0027408C(uint param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = DAT_0027432c;
  fVar9 = DAT_00274328;
  uVar7 = *(uint *)(param_1 + 0x14);
  uVar3 = param_1;
  if (uVar7 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  fVar8 = DAT_00274328;
  if ((uVar7 != 0 && uVar3 != 0) && (fVar8 = DAT_0027432c, uVar3 < uVar7)) {
    fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * *(float *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
  *(float *)(param_1 + 0x2c) = fVar8;
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((*(char *)(param_1 + 0x1c) == '\x03' || *(char *)(param_1 + 0x1c) == '\v') &&
     (bVar2 = func_00547B48(*(int *)(param_1 + 0x34),0), bVar2)) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (*(char *)(iVar4 + 0xb1) == '\0') {
      *(int *)(param_1 + 8) = iVar4;
      if (*(int *)(iVar4 + 0x94) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(undefined4 **)(iVar4 + 0x9c);
      }
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      func_00660CE8((undefined4 *)(param_1 + 100),1);
      fVar9 = (float)VectorUnsignedToFloat
                               (*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
      uVar5 = VectorFloatToUnsigned(fVar9 * (fVar10 - fVar8),3);
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
      *(float *)(param_1 + 0x2c) = fVar10 - fVar8;
      *(undefined1 *)(param_1 + 0x30) = 0;
      return 0;
    }
    func_00660CE8((undefined4 *)(param_1 + 100),6);
  }
  else {
    if (*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0x10)) {
      puVar6 = *(undefined4 **)(param_1 + 0xc);
      if (*(char *)(puVar6 + 0x2c) == '\0') {
        *(undefined4 **)(param_1 + 8) = puVar6;
        if (puVar6[0x28] == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)puVar6[0x2a];
        }
        *(undefined4 *)(param_1 + 0xc) = uVar5;
        if (*(char *)(param_1 + 0x1c) == '\x14') {
          uVar3 = (uint)*(ushort *)(param_1 + 0x20);
        }
        else if (puVar6 == (undefined4 *)0x0) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x20);
          if (uVar3 == 0) {
            uVar3 = 1;
            *(undefined2 *)(param_1 + 0x20) = 1;
          }
        }
        else {
          uVar3 = (uint)*(byte *)(param_1 + 0x1d);
          if (uVar3 == 0) {
            uVar3 = (uint)*(ushort *)(param_1 + 0x20);
          }
          else if (uVar3 == 6) {
            if (*(char *)(param_1 + 0x68) == '\x02' || *(char *)(param_1 + 0x68) == '\b') {
              uVar3 = puVar6[0x13];
            }
            else {
              uVar3 = puVar6[0x12];
            }
          }
          else if (uVar3 == 5) {
            uVar3 = puVar6[0x11];
          }
          else {
            uVar3 = puVar6[uVar3 + 0x10];
          }
          if ((int)uVar3 < 1) {
            uVar3 = 1;
          }
        }
        *(uint *)(param_1 + 0x14) = uVar3;
        if (uVar3 == 0) {
          *(float *)(param_1 + 0x18) = fVar9;
        }
        else {
          fVar9 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x18) = fVar10 / fVar9;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (uVar3 != 0) {
          *(undefined4 *)(param_1 + 0x10) = 1;
        }
        return 0;
      }
      if (*(char *)(param_1 + 0x1c) == '\x03' || *(char *)(param_1 + 0x1c) == '\v') {
        return func_00660CE8((undefined4 *)(param_1 + 100),5);
      }
      *(undefined4 **)(param_1 + 8) = puVar6;
      piVar1 = puVar6 + 0x25;
      if (*piVar1 != 0) {
        puVar6 = (undefined4 *)puVar6[0x27];
      }
      if (*piVar1 != 0) {
        uVar5 = *puVar6;
      }
      else {
        uVar5 = 0;
      }
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      if (*(short *)(param_1 + 0x22) == 0) {
        return func_00660CE8((undefined4 *)(param_1 + 100),1);
      }
      return func_00660CE8((undefined4 *)(param_1 + 100),3);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + 1;
  }
  return 0;
}

