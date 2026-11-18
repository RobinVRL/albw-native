#include "ghidra_types.h"

extern int func_00114D80(uint param_1,uint param_2,uint param_3);

// USA 00114608 <- EU 00114608 (Ghidra, non-matching)

/* WARNING: Control flow encountered bad instruction data */

undefined8 func_00114608(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = (int)param_1 >> 0x17;
  uVar4 = param_1 << 8;
  if (uVar2 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar2 < 0) {
    if (param_1 < 0xdf000001) {
      iVar1 = -(uVar2 & 0xff);
      uVar3 = iVar1 + 0xbe;
      if ((uVar2 & 0xff) == 0) {
        uVar4 = uVar4 & 0x7fffffff;
      }
      if (uVar3 < 0x20) {
        uVar2 = uVar4 << (0x20 - uVar3 & 0xff);
      }
      else {
        uVar2 = uVar4 >> (iVar1 + 0x9eU & 0xff);
      }
      return CONCAT44(-((uVar4 >> (uVar3 & 0xff)) + (uint)(uVar2 != 0)),-uVar2);
    }
  }
  else {
    bVar5 = uVar2 < 0xbf;
    iVar1 = -uVar2;
    uVar2 = iVar1 + 0xbe;
    if (bVar5 && uVar2 != 0) {
      if (uVar2 < 0x20) {
        uVar3 = uVar4 << (0x20 - uVar2 & 0xff);
      }
      else {
        uVar3 = uVar4 >> (iVar1 + 0x9eU & 0xff);
      }
      return CONCAT44(uVar4 >> (uVar2 & 0xff),uVar3);
    }
  }
  func_00114D80(param_1,param_2,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

