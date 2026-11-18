#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0015287C(int param_1,uint *param_2,int *param_3,int *param_4);
extern int func_00152A08(int param_1,undefined4 param_2,int *param_3,int *param_4);
extern int func_004C5D80(int param_1,undefined4 param_2);
extern int func_004C63C4(int *param_1,uint param_2,int param_3,int param_4);
extern int func_004C6454(int *param_1);
extern int func_004C6478(int param_1);
extern int *DAT_00152870;
extern uint DAT_00152874;
extern int *DAT_00152878;

// USA 00152798 <- EU 00152798 (Ghidra, non-matching)
// GLOBAL DAT_00152870 int *
// GLOBAL DAT_00152874 uint
// GLOBAL DAT_00152878 int *

undefined4 func_00152798(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  int *piVar4;
  int *piVar5;
  
  func_004C5D80(param_1 + 0x20,param_1 + 0x18);
  iVar2 = *DAT_00152870;
  func_0010C0B8(iVar2 + 0x1fb4);
  piVar5 = (int *)0x0;
  piVar4 = DAT_00152878;
  uVar3 = func_004C63C4((int *)(param_1 + 0x20),DAT_00152874,(int)DAT_00152878,0);
  *(char *)(param_1 + 0xdec) = (char)uVar3;
  if (uVar3 == 0) {
LAB_0015280c:
    func_0015287C(param_1,*(uint **)(param_1 + 0xde4),(int *)0x1,piVar5);
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        bVar1 = func_00152A08(param_1,extraout_r1,piVar4,piVar5);
        if (bVar1) goto LAB_0015280c;
        uVar3 = (uint)*(byte *)(param_1 + 0xdec);
        if (uVar3 == 2) {
          *(undefined1 *)(param_1 + 0xde0) = 3;
          *(undefined1 *)(param_1 + 0x8e0) = 2;
          goto LAB_00152850;
        }
      }
      if ((uVar3 & 0xff) == 6) {
        *(undefined1 *)(param_1 + 0xde0) = 2;
        goto LAB_00152850;
      }
    }
    *(undefined1 *)(param_1 + 0xde0) = 3;
  }
LAB_00152850:
  func_004C6454((int *)(param_1 + 0x20));
  func_0010EEE0(iVar2 + 0x1fb4);
  return func_004C6478(param_1 + 0x20);
}

