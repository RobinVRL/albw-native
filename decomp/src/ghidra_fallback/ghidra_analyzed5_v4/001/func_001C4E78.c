#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001C52B0(int param_1,uint param_2,undefined4 param_3);
extern int func_0034CA20(undefined4 *param_1);
extern int func_004CEAF0(int param_1);
extern int func_005568A4(int param_1);
extern int *DAT_001c5040;
extern int DAT_001c5044;
extern float DAT_001c5048;
extern int *DAT_001c504c;
extern int *DAT_001c5050;
extern int *DAT_001c5054;
extern uint DAT_001c5058;

// USA 001C4E78 <- EU 001C4E78 (Ghidra, non-matching)
// GLOBAL DAT_001c5040 int *
// GLOBAL DAT_001c5044 int
// GLOBAL DAT_001c5048 float
// GLOBAL DAT_001c504c int *
// GLOBAL DAT_001c5050 int *
// GLOBAL DAT_001c5054 int *
// GLOBAL DAT_001c5058 uint

undefined4 func_001C4E78(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  uint extraout_r1;
  int iVar3;
  uint uVar4;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  
  if (*(char *)(param_1 + 0x7e0) == '\x03') {
    iVar3 = *(int *)(*(int *)(param_1 + 0x7b4) + 0x14);
    uVar4 = (uint)*(byte *)(iVar3 + 0x1c);
    if (uVar4 == 0) {
      if (*(float *)(iVar3 + 0x10) < DAT_001c5048) {
        if (DAT_001c5048 < *(float *)(iVar3 + 8)) goto LAB_001c5014;
      }
      else if (*(float *)(iVar3 + 8) != *(float *)(iVar3 + 0x14)) goto LAB_001c5014;
      param_3 = 0;
      func_001C52B0(param_1,2,0);
      uVar4 = extraout_r1_00;
    }
  }
  else {
    func_0034CA20(*(undefined4 **)(param_1 + 0x7c0));
    param_4 = (int *)0x1000;
    param_3 = param_1 + 0x7c8;
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x7bc),param_3,0x1000,0,0);
    if (*(char *)(*(int *)(param_1 + 0x7c0) + 0x21) == '\v') {
      param_3 = 0;
      func_001C52B0(param_1,3,0);
      uVar4 = extraout_r1_01;
    }
    else {
      uVar4 = extraout_r1;
      if (*(char *)(*DAT_001c5040 + 0x25) != '\x02') {
        iVar3 = (int)((ulonglong)((longlong)DAT_001c5044 * (longlong)*(int *)(param_1 + 0x788)) >>
                     0x20);
        param_3 = iVar3 >> 5;
        iVar3 = param_3 - (iVar3 >> 0x1f);
        uVar4 = iVar3 * -0x4b;
        if (*(int *)(param_1 + 0x788) + iVar3 * -300 == 0x3c) {
          iVar3 = *DAT_001c504c;
          bVar1 = *(byte *)(iVar3 + 0x9bb);
          bVar2 = func_005568A4(*DAT_001c5050);
          if (((bVar1 == 0 || bVar1 <= bVar2) && (bVar1 != 0 && bVar2 != bVar1)) ||
             (DAT_001c5058 < (uint)(*(int *)(*DAT_001c5054 + 0x78) - *(int *)(iVar3 + 0x9c8)))) {
            param_3 = 10;
            func_001C52B0(param_1,4,10);
            uVar4 = extraout_r1_02;
          }
          else {
            param_3 = 10;
            func_001C52B0(param_1,2,10);
            uVar4 = extraout_r1_03;
          }
        }
      }
    }
  }
LAB_001c5014:
  func_00169A80(*(int **)(param_1 + 0x7b4),uVar4,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x7b4),*(int *)(param_1 + 0x7b0),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x7b0));
}

