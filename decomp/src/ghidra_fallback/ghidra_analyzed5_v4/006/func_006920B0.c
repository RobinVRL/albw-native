#include "ghidra_types.h"

extern int func_00114D80(uint param_1,uint param_2,uint param_3);

// USA 006920B0 <- EU 00692088 (Ghidra, non-matching)

/* WARNING: Control flow encountered bad instruction data */

undefined8 func_006920B0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = param_1 >> 0x17;
  uVar4 = param_1 << 8;
  if (uVar3 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar3 < 0) {
    if ((uint)(param_1 << 1) < 0x7f000000) {
      return 0;
    }
  }
  else {
    bVar5 = uVar3 < 0xbf;
    iVar1 = -uVar3;
    uVar3 = iVar1 + 0xbe;
    if (bVar5) {
      if (uVar3 < 0x20) {
        uVar2 = uVar4 << (0x20 - uVar3 & 0xff);
      }
      else {
        uVar2 = uVar4 >> (iVar1 + 0x9eU & 0xff);
      }
      return CONCAT44(uVar4 >> (uVar3 & 0xff),uVar2);
    }
  }
  func_00114D80(param_1,param_2,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

