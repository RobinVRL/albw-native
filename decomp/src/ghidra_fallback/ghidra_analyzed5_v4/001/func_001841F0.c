#include "ghidra_types.h"

extern int func_00183A34(int param_1);
extern int func_00184440(void);
extern int func_00184538(int param_1);
extern int func_001846B0(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,float fparam_0);
extern int func_00184B1C(int param_1,float *param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00611198(int param_1,int param_2,undefined1 param_3);
extern byte *DAT_00184390;
extern undefined4 DAT_00184394;
extern int DAT_00184398;
extern int DAT_0018439c;
extern int DAT_001843a0;
extern float DAT_001843a4;
extern int *DAT_001843a8;
extern float DAT_001843ac;

// USA 001841F0 <- EU 001841F0 (Ghidra, non-matching)
// GLOBAL DAT_00184390 byte *
// GLOBAL DAT_00184394 undefined4
// GLOBAL DAT_00184398 int
// GLOBAL DAT_0018439c int
// GLOBAL DAT_001843a0 int
// GLOBAL DAT_001843a4 float
// GLOBAL DAT_001843a8 int *
// GLOBAL DAT_001843ac float

undefined4 func_001841F0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  byte *pbVar10;
  
  bVar1 = *(byte *)(param_1 + 0x9f8);
  pbVar10 = (byte *)(param_1 + 0x9f8);
  if (3 < bVar1) {
    return func_00611198(param_1,6,0);
  }
  iVar9 = param_1 + 0x900;
  if (*(short *)(param_1 + 0x9f0) == 0) {
    if (*(int *)(param_1 + 0x9d0) == *(int *)(param_1 + 0x9d4)) {
      bVar3 = bVar1 + 1;
      *pbVar10 = bVar3;
      pbVar2 = DAT_00184390;
      if ((bVar3 & 1) != 0) {
        *(short *)(param_1 + 0x9f0) =
             (short)*(undefined4 *)(DAT_00184390 + (uint)*(byte *)(param_1 + 0x9fb) * 4);
        pbVar10 = pbVar2;
      }
      iVar5 = DAT_00184398;
      if (3 < (byte)(bVar1 + 1)) {
        return 0;
      }
      if ((byte)(bVar1 + 1) == 3) {
        *(undefined4 *)(param_1 + 0x9d4) = *(undefined4 *)(param_1 + 0x9e8);
        *(undefined4 *)(param_1 + 0x9e4) =
             *(undefined4 *)(DAT_0018439c + (uint)*(byte *)(param_1 + 0x9fb) * 4);
      }
      else {
        *(undefined4 *)(param_1 + 0x9e4) = DAT_00184394;
        iVar9 = *(int *)(param_1 + 0x9e8);
        iVar5 = *(int *)(iVar5 + (uint)*(byte *)(param_1 + 0x9fb) * 4);
        if ((bVar3 & 1) != 0) {
          iVar5 = -iVar5;
        }
        *(int *)(param_1 + 0x9d4) = iVar5 + iVar9;
      }
    }
    else {
      pbVar10 = *(byte **)(param_1 + 0x9e4);
      iVar9 = *(int *)(DAT_001843a0 + (uint)*(byte *)(param_1 + 0x9fb) * 4);
      func_0051D2F4((int *)(param_1 + 0x9d0),*(int *)(param_1 + 0x9d4),iVar9,(int)pbVar10,
                    DAT_001843a4);
    }
  }
  else {
    *(short *)(param_1 + 0x9f0) = *(short *)(param_1 + 0x9f0) + -1;
  }
  func_00183A34(param_1);
  iVar6 = *DAT_001843a8;
  iVar5 = 0;
  if (iVar6 != 0) {
    iVar5 = *(int *)(iVar6 + 0x44);
  }
  if (((iVar6 == 0 || iVar5 == 0) && (iVar5 = func_00184538(param_1), iVar5 != 0)) &&
     (iVar5 = func_00184440(), iVar5 != 0)) {
    puVar7 = (undefined4 *)func_00520FC0();
    bVar4 = func_001846B0(param_1,puVar7,iVar9,(uint)pbVar10,DAT_001843ac);
    if (!bVar4) {
      if (*(char *)(param_1 + 0x9f9) != '\b') {
        pfVar8 = (float *)func_00520FC0();
        iVar9 = func_00184B1C(param_1,pfVar8);
        if (iVar9 == 0) {
          return 0;
        }
      }
      return func_00611198(param_1,8,0);
    }
  }
  return 0;
}

