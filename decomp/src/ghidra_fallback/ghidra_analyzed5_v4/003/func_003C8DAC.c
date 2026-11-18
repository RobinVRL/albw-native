#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern char *DAT_003c8e10;
extern uint DAT_003c8e14;

// USA 003C8DAC <- EU 003C8D88 (Ghidra, non-matching)
// GLOBAL DAT_003c8e10 char *
// GLOBAL DAT_003c8e14 uint

undefined4 func_003C8DAC(int param_1)

{
  byte bVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  pcVar3 = DAT_003c8e10;
  if (param_1 == 0) {
    uVar5 = 0x17c;
  }
  else {
    uVar5 = 100;
  }
  iVar4 = 0;
  if (*DAT_003c8e10 != '\0') {
    bVar1 = DAT_003c8e10[1];
    if ((bVar1 != 0) && (software_interrupt(0x28), (bVar1 & 0x10) != 0)) {
      uVar6 = func_00110710(uVar5,(bVar1 & 0xf) + 1);
      iVar4 = (int)uVar6;
    }
    uVar5 = *(int *)(pcVar3 + 0x18) + iVar4 & 0xffff;
    if (uVar5 != 0) {
      lVar2 = (ulonglong)DAT_003c8e14 * (ulonglong)uVar5;
      return func_00104338((uint)lVar2,(int)((ulonglong)lVar2 >> 0x20));
    }
  }
  return 0;
}

