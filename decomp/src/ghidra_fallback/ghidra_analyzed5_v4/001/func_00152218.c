#include "ghidra_types.h"

extern int func_004C5D80(int param_1,undefined4 param_2);
extern int func_004C63C4(int *param_1,uint param_2,int param_3,int param_4);
extern int func_004C6454(int *param_1);
extern int func_004C6478(int param_1);
extern int func_004C6584(int *param_1);
extern uint DAT_001522b8;
extern int DAT_001522bc;

// USA 00152218 <- EU 00152218 (Ghidra, non-matching)
// GLOBAL DAT_001522b8 uint
// GLOBAL DAT_001522bc int

undefined4 func_00152218(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x514);
  func_004C5D80(iVar1 + 0x20,iVar1 + 0x18);
  iVar2 = func_004C63C4((int *)(iVar1 + 0x20),DAT_001522b8,DAT_001522bc,0);
  *(char *)(iVar1 + 0xdec) = (char)iVar2;
  if (iVar2 == 0) {
    func_004C6584((int *)(iVar1 + 0x20));
    *(undefined1 *)(iVar1 + 0x8e0) = 1;
    *(undefined4 *)(iVar1 + 0x8e4) = 0;
    *(undefined4 *)(iVar1 + 0x8e8) = 0;
    *(undefined4 *)(iVar1 + 0x8ec) = 0;
    *(undefined4 *)(iVar1 + 0x8f0) = 0;
    *(undefined4 *)(iVar1 + 0x8f4) = 0;
    *(undefined4 *)(iVar1 + 0x8f8) = 0;
    *(undefined4 *)(iVar1 + 0x8fc) = 0;
    *(undefined4 *)(iVar1 + 0x900) = 0;
    *(undefined4 *)(iVar1 + 0x904) = 0;
    *(undefined4 *)(iVar1 + 0x908) = 0;
    *(undefined4 *)(iVar1 + 0x90c) = 0;
    *(undefined4 *)(iVar1 + 0x910) = 0;
    *(undefined4 *)(iVar1 + 0x914) = 0;
    *(undefined4 *)(iVar1 + 0x918) = 0;
    *(undefined4 *)(iVar1 + 0x91c) = 0;
  }
  func_004C6454((int *)(iVar1 + 0x20));
  return func_004C6478(iVar1 + 0x20);
}

