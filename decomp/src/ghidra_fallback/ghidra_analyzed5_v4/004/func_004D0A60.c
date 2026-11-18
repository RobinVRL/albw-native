#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00232C04(int param_1,uint param_2);
extern int func_00233370(int param_1,uint param_2);
extern int func_004A1520();
extern int func_004CE4C8(int param_1,uint param_2,uint param_3);
extern int func_004CF118(int param_1,uint param_2);
extern int func_004CF294(int param_1,uint param_2);
extern undefined4 func_004CF864(int param_1,uint param_2,uint param_3,float fparam_0);
extern undefined4 DAT_004d0c30;
extern int *DAT_004d0c34;

// USA 004D0A60 <- EU 004D0A38 (Ghidra, non-matching)
// GLOBAL DAT_004d0c30 undefined4
// GLOBAL DAT_004d0c34 int *

undefined4 func_004D0A60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float in_s0;
  float fparam_0;
  
  *param_1 = DAT_004d0c30;
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13] = 0;
    *(undefined1 *)(param_1[0x13] + 4) = 1;
    param_1[0x13] = 0;
  }
  uVar2 = param_1[0x4f];
  if (-1 < (int)uVar2) {
    if ((param_1[0x59] & 0x2000000) == 0) {
      if ((param_1[0x59] & 0x4000000) != 0) {
        func_00233370(*DAT_004d0c34,uVar2);
      }
    }
    else {
      func_00232C04(*DAT_004d0c34,uVar2);
    }
    param_1[0x4f] = 0xffffffff;
    param_1[0x59] = param_1[0x59] & 0xf9ffffff;
  }
  iVar3 = param_1[7];
  if (iVar3 != 0) {
    param_1[7] = 0;
    func_0010F1F8(param_1 + 4,in_s0);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
  }
  iVar3 = param_1[0x12];
  if (iVar3 != 0) {
    param_1[0x12] = 0;
    func_0010F1F8(param_1 + 0xf,in_s0);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
  }
  func_004CE4C8((int)param_1,0,0xffffffff);
  func_004CF864((int)param_1,0,0xffffffff,in_s0);
  fparam_0 = in_s0;
  func_004CF294((int)param_1,0);
  func_004CF118((int)param_1,0);
  uVar2 = 0;
  if (0 < (int)param_1[0x17]) {
    do {
      uVar4 = 0;
      if (uVar2 < (uint)param_1[0x17]) {
        iVar3 = *(int *)(param_1[0x19] + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      do {
        piVar1 = (int *)(iVar3 + 4);
        if (uVar4 < 7) {
          piVar1 = piVar1 + uVar4 * 4;
        }
        iVar5 = piVar1[3];
        if (iVar5 != 0) {
          piVar1[3] = 0;
          func_0010F1F8(piVar1,fparam_0);
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -1;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 7);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)param_1[0x17]);
  }
  uVar2 = 0;
  if (0 < (int)param_1[0x1a]) {
    do {
      uVar4 = 0;
      if (uVar2 < (uint)param_1[0x1a]) {
        iVar3 = *(int *)(param_1[0x1c] + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      do {
        piVar1 = (int *)(iVar3 + 4);
        if (uVar4 < 7) {
          piVar1 = piVar1 + uVar4 * 4;
        }
        iVar5 = piVar1[3];
        if (iVar5 != 0) {
          piVar1[3] = 0;
          func_0010F1F8(piVar1,fparam_0);
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -1;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 7);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)param_1[0x1a]);
  }
  return func_004A1520(param_1);
}

