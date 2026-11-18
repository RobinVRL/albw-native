#include "ghidra_types.h"

extern int func_00120A64(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
extern int func_00520FC0(void);
extern int func_005839C4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_00524e90;

// USA 00524E28 <- EU 00524E00 (Ghidra, non-matching)
// GLOBAL DAT_00524e90 int

undefined4 func_00524E28(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_r2;
  uint in_r3;
  
  if ((*(short *)(param_1 + 0x36) != 0) && (bVar2 = func_00588BF0(param_1,0), !bVar2)) {
    uVar5 = func_005839C4(param_1);
    return uVar5;
  }
  puVar3 = (undefined4 *)func_00520FC0();
  iVar4 = func_00120A64((undefined4 *)(param_1 + 0x3d0),puVar3,in_r2,in_r3);
  if (iVar4 == 0) {
    cVar1 = *(char *)(DAT_00524e90 + param_1);
    if ((cVar1 == '\0' || cVar1 == '\v') || cVar1 == '\a') {
      return 0x16;
    }
    if (cVar1 == '\x05') {
      return 0x17;
    }
  }
  return 0;
}

