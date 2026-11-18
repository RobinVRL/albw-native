#include "ghidra_types.h"

extern int func_00547B48(int param_1,int param_2);
extern int func_00660CE8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0027401c;
extern float DAT_00274020;

// USA 00273CF4 <- EU 00273D1C (Ghidra, non-matching)
// GLOBAL DAT_0027401c float
// GLOBAL DAT_00274020 float

undefined4 func_00273CF4(uint param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = DAT_00274020;
  fVar9 = DAT_0027401c;
  uVar7 = *(uint *)(param_1 + 0x14);
  uVar3 = param_1;
  if (uVar7 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  fVar8 = DAT_0027401c;
  if ((uVar7 != 0 && uVar3 != 0) && (fVar8 = DAT_00274020, uVar3 < uVar7)) {
    fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * *(float *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
  *(float *)(param_1 + 0x2c) = fVar8;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if ((*(char *)(param_1 + 0x1c) != '\x03' && *(char *)(param_1 + 0x1c) != '\v') ||
     (bVar2 = func_00547B48(*(int *)(param_1 + 0x34),0), bVar2)) {
    if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + 1;
    }
    else {
      puVar4 = *(undefined4 **)(param_1 + 0xc);
      if (*(char *)((int)puVar4 + 0xb1) == '\0') {
        *(undefined4 **)(param_1 + 8) = puVar4;
        if (puVar4[0x25] == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)puVar4[0x27];
        }
        *(int *)(param_1 + 0xc) = iVar6;
        if (iVar6 == 0) {
          func_00660CE8((undefined4 *)(param_1 + 100),4);
        }
        if (*(char *)(param_1 + 0x1c) == '\x14') {
          uVar3 = (uint)*(ushort *)(param_1 + 0x20);
        }
        else {
          iVar6 = *(int *)(param_1 + 8);
          if (iVar6 == 0) {
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
                uVar3 = *(uint *)(iVar6 + 0x4c);
              }
              else {
                uVar3 = *(uint *)(iVar6 + 0x48);
              }
            }
            else if (uVar3 == 5) {
              uVar3 = *(uint *)(iVar6 + 0x44);
            }
            else {
              uVar3 = *(uint *)(iVar6 + uVar3 * 4 + 0x40);
            }
            if ((int)uVar3 < 1) {
              uVar3 = 1;
            }
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
      *(undefined4 **)(param_1 + 8) = puVar4;
      switch(*(undefined1 *)(param_1 + 0x1c)) {
      case 0:
      case 8:
        return func_00660CE8((undefined4 *)(param_1 + 100),4);
      case 1:
      case 9:
        piVar1 = puVar4 + 0x28;
        if (*piVar1 != 0) {
          puVar4 = (undefined4 *)puVar4[0x2a];
        }
        if (*piVar1 != 0) {
          uVar5 = *puVar4;
        }
        else {
          uVar5 = 0;
        }
        *(undefined4 *)(param_1 + 0xc) = uVar5;
        if (*(short *)(param_1 + 0x22) == 0) {
          return func_00660CE8((undefined4 *)(param_1 + 100),2);
        }
        return func_00660CE8((undefined4 *)(param_1 + 100),3);
      case 2:
      case 10:
        iVar6 = puVar4[0x2b];
        puVar4 = *(undefined4 **)(iVar6 + 0x28);
        if (puVar4 != (undefined4 *)0x0) {
          iVar6 = *(int *)(iVar6 + 0x20);
        }
        if (puVar4 != (undefined4 *)0x0 && iVar6 != 0) {
          uVar5 = *puVar4;
        }
        else {
          uVar5 = 0;
        }
        *(undefined4 *)(param_1 + 0xc) = uVar5;
        return func_00660CE8((undefined4 *)(param_1 + 100),1);
      case 3:
      case 0xb:
        return func_00660CE8((undefined4 *)(param_1 + 100),6);
      }
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc);
    if (*(char *)(iVar6 + 0xb0) == '\0') {
      *(int *)(param_1 + 8) = iVar6;
      if (*(int *)(iVar6 + 0xa0) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(undefined4 **)(iVar6 + 0xa8);
      }
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      func_00660CE8((undefined4 *)(param_1 + 100),2);
      fVar9 = (float)VectorUnsignedToFloat
                               (*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
      uVar5 = VectorFloatToUnsigned(fVar9 * (fVar10 - fVar8),3);
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
      *(float *)(param_1 + 0x2c) = fVar10 - fVar8;
      *(undefined1 *)(param_1 + 0x30) = 1;
      return 0;
    }
    func_00660CE8((undefined4 *)(param_1 + 100),5);
  }
  return 0;
}

