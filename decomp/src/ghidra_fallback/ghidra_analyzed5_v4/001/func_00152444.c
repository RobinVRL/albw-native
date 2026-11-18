#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010EEE0(int param_1);
extern int func_003D213C(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_003D2210(undefined4 *param_1);
extern int func_004C5D80(int param_1,undefined4 param_2);
extern int func_004C5DA8(int *param_1,int param_2,uint param_3,undefined4 *param_4);
extern int func_004C6354(int *param_1,uint param_2);
extern int func_004C63C4(int *param_1,uint param_2,int param_3,int param_4);
extern int func_004C6454(int *param_1);
extern int func_004C6478(int param_1);
extern int *DAT_001525a4;
extern uint DAT_001525a8;
extern int DAT_001525ac;
extern int *DAT_001525b0;
extern int DAT_001525b4;

// USA 00152444 <- EU 00152444 (Ghidra, non-matching)
// GLOBAL DAT_001525a4 int *
// GLOBAL DAT_001525a8 uint
// GLOBAL DAT_001525ac int
// GLOBAL DAT_001525b0 int *
// GLOBAL DAT_001525b4 int

undefined4 func_00152444(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x190];
  #define auStack_188 ((undefined4 *)(albw_frame + 0x8))
  #define local_20 (*(uint * *)(albw_frame + 0x170))
  #define local_1c (*(int *)(albw_frame + 0x174))
  if (*(char *)(param_1 + 0x8e0) == '\0') {
    return 0;
  }
  func_004C5D80(param_1 + 0x20,param_1 + 0x18);
  iVar1 = *DAT_001525a4;
  func_0010C0B8(iVar1 + 0x1fb4);
  iVar2 = func_004C63C4((int *)(param_1 + 0x20),DAT_001525a8,DAT_001525ac,0);
  *(char *)(param_1 + 0xdec) = (char)iVar2;
  if (iVar2 == 0) {
    func_003D2210(auStack_188);
    iVar2 = *DAT_001525b0;
    if (*(char *)(*(int *)(iVar2 + 0x14) + 0x1600) == '\0') {
      uVar3 = (uint)*(ushort *)(iVar2 + *(int *)(iVar2 + 0x9bc) * DAT_001525b4 * 4 + 0xc2c);
    }
    else {
      uVar3 = 0;
    }
    uVar3 = func_004C6354((int *)(param_1 + 0x20),uVar3);
    iVar2 = func_004C5DA8((int *)(param_1 + 0x20),1,uVar3,auStack_188);
    *(char *)(param_1 + 0xdec) = (char)iVar2;
    if (iVar2 == 0) {
      func_003D213C((int)auStack_188,&local_20,&local_1c);
      if ((local_20 != (uint *)0x0) && (local_1c == 0x3c)) {
        func_0010E3C4((uint *)(param_1 + 0x8e4),local_20,0x3c);
      }
      iVar2 = 0;
      goto LAB_001524f4;
    }
  }
  else if ((iVar2 != 1) && (iVar2 == 2)) {
LAB_001524f4:
    *(char *)(param_1 + 0x8e0) = (char)iVar2;
    goto LAB_00152544;
  }
  *(undefined1 *)(param_1 + 0x8e0) = 3;
LAB_00152544:
  func_004C6454((int *)(param_1 + 0x20));
  func_0010EEE0(iVar1 + 0x1fb4);
  return func_004C6478(param_1 + 0x20);
}

