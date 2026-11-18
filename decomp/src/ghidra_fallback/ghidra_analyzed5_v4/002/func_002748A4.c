#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00547B48(int param_1,int param_2);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int func_00660CE8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00274c14;
extern float DAT_00274c18;
extern int *DAT_00274c1c;
extern float DAT_00274c20;

// USA 002748A4 <- EU 002748CC (Ghidra, non-matching)
// GLOBAL DAT_00274c14 float
// GLOBAL DAT_00274c18 float
// GLOBAL DAT_00274c1c int *
// GLOBAL DAT_00274c20 float

undefined4 func_002748A4(uint param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar7 = *(uint *)(param_1 + 0x14);
  uVar4 = param_1;
  if (uVar7 != 0) {
    uVar4 = *(uint *)(param_1 + 0x10);
  }
  fVar9 = DAT_00274c14;
  if ((uVar7 != 0 && uVar4 != 0) && (fVar9 = DAT_00274c18, uVar4 < uVar7)) {
    fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 * *(float *)(param_1 + 0x18);
  }
  iVar5 = *(int *)(param_1 + 0x34);
  fVar10 = DAT_00274c14;
  fVar11 = DAT_00274c18;
  if (*(char *)(param_1 + 0x1c) == '\x05' || *(char *)(param_1 + 0x1c) == '\r') {
    bVar2 = func_005822A0(*DAT_00274c1c,
                          (uint)*(ushort *)(iVar5 + 0x34) + *(int *)(*(int *)(param_1 + 8) + 0x40),
                          (uint)*(byte *)(iVar5 + 0x31));
  }
  else {
    bVar2 = func_00547B48(iVar5,0);
    cVar1 = *(char *)(param_1 + 0x3a);
    *(bool *)(param_1 + 0x3a) = bVar2;
    bVar2 = (int)cVar1 != (uint)bVar2;
  }
  cVar1 = *(char *)(param_1 + 0x1c);
  uVar4 = (uint)(cVar1 != '\x05' && cVar1 != '\r');
  if (cVar1 != '\x05' && cVar1 != '\r') {
    bVar3 = func_00547B48(*(int *)(param_1 + 0x34),uVar4);
    cVar1 = *(char *)(param_1 + 0x3b);
    *(bool *)(param_1 + 0x3b) = bVar3;
    if ((int)cVar1 == (uint)bVar3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\x14') {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(float *)(param_1 + 0x2c) = fVar9;
  }
  else {
    *(float *)(param_1 + 0x2c) = fVar9;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x39) = 0;
    if (*(char *)(param_1 + 0x1c) != '\x14') {
      iVar5 = *(int *)(param_1 + 0xc);
      if (*(char *)(iVar5 + 0xb1) == '\0') {
        if (bVar2 != false) {
          *(int *)(param_1 + 8) = iVar5;
          if (*(int *)(iVar5 + 0x94) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = **(int **)(iVar5 + 0x9c);
          }
          *(int *)(param_1 + 0xc) = iVar5;
          if (iVar5 == 0) {
            func_00660CE8((undefined4 *)(param_1 + 100),4);
          }
          if (*(char *)(param_1 + 0x1c) == '\x14') {
            uVar4 = (uint)*(ushort *)(param_1 + 0x20);
          }
          else {
            iVar5 = *(int *)(param_1 + 8);
            if (iVar5 == 0) {
              uVar4 = (uint)*(ushort *)(param_1 + 0x20);
              if (uVar4 == 0) {
                uVar4 = 1;
                *(undefined2 *)(param_1 + 0x20) = 1;
              }
            }
            else {
              uVar4 = (uint)*(byte *)(param_1 + 0x1d);
              if (uVar4 == 0) {
                uVar4 = (uint)*(ushort *)(param_1 + 0x20);
              }
              else if (uVar4 == 6) {
                if (*(char *)(param_1 + 0x68) == '\x02' || *(char *)(param_1 + 0x68) == '\b') {
                  uVar4 = *(uint *)(iVar5 + 0x4c);
                }
                else {
                  uVar4 = *(uint *)(iVar5 + 0x48);
                }
              }
              else if (uVar4 == 5) {
                uVar4 = *(uint *)(iVar5 + 0x44);
              }
              else {
                uVar4 = *(uint *)(iVar5 + uVar4 * 4 + 0x40);
              }
              if ((int)uVar4 < 1) {
                uVar4 = 1;
              }
            }
          }
          *(uint *)(param_1 + 0x14) = uVar4;
          if (uVar4 == 0) {
            *(float *)(param_1 + 0x18) = fVar10;
          }
          else {
            fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
            *(float *)(param_1 + 0x18) = fVar11 / fVar9;
          }
          *(undefined4 *)(param_1 + 0x10) = 0;
          if (uVar4 != 0) {
            *(undefined4 *)(param_1 + 0x10) = 1;
          }
          iVar5 = *(char *)(param_1 + 0x38) + 1;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (2 < iVar5) {
            iVar5 = 2;
          }
          *(char *)(param_1 + 0x38) = (char)iVar5;
          return 0;
        }
        if (uVar4 == 0) {
          return 0;
        }
        *(int *)(param_1 + 8) = iVar5;
        iVar8 = *(int *)(iVar5 + 0xa0);
      }
      else {
        if (uVar4 == 0) {
          return 0;
        }
        *(int *)(param_1 + 8) = iVar5;
        iVar8 = *(int *)(iVar5 + 0xa0);
      }
      if (iVar8 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(undefined4 **)(iVar5 + 0xa8);
      }
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      return func_00660CE8((undefined4 *)(param_1 + 100),8);
    }
    if (bVar2 == false) {
      if (uVar4 != 0) {
        func_00115C54((float *)(param_1 + 0x3c),(float *)(param_1 + 0x3c),(float *)(param_1 + 0x48))
        ;
        fVar9 = DAT_00274c20;
        iVar5 = *(int *)(param_1 + 4);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar5 + 0xc);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar5 + 0x10);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0x14);
        func_00115D70((float *)(param_1 + 0x48),(float *)(param_1 + 0x48),fVar9);
        *(float *)(param_1 + 0x2c) = fVar10;
        return func_00660CE8((undefined4 *)(param_1 + 100),8);
      }
    }
    else {
      func_00115C54((float *)(param_1 + 0x3c),(float *)(param_1 + 0x3c),(float *)(param_1 + 0x48));
      iVar5 = *(int *)(param_1 + 4);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0x14);
      *(float *)(param_1 + 0x2c) = fVar10;
      func_00660CE8((undefined4 *)(param_1 + 100),7);
    }
  }
  return 0;
}

