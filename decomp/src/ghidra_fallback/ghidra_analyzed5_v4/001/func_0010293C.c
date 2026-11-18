#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_0010489C(void);
extern int func_00106358(undefined4 *param_1,undefined4 param_2);
extern uint DAT_001029cc;
extern undefined4 *DAT_001029d0;
extern int *DAT_001029d4;
extern uint DAT_001029d8;

// USA 0010293C <- EU 0010293C (Ghidra, non-matching)
// GLOBAL DAT_001029cc uint
// GLOBAL DAT_001029d0 undefined4 *
// GLOBAL DAT_001029d4 int *
// GLOBAL DAT_001029d8 uint

uint func_0010293C(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = DAT_001029cc;
  while( true ) {
    uVar2 = func_00106358(DAT_001029d0,param_1);
    if ((uVar2 & 0x80000000) == 0) {
      uVar3 = uVar2 >> 0x1b;
    }
    else {
      uVar3 = (uVar2 >> 0x1b) - 0x20;
    }
    if (uVar3 != 0xfffffffb) break;
    uVar3 = uVar2 & 0x7e00000;
    bVar4 = uVar3 == 0x800000;
    if (bVar4) {
      uVar3 = uVar2 & 0x3ff;
    }
    if (!bVar4 || uVar3 != uVar1) break;
    func_00104338(DAT_001029d8,0);
  }
  if (-1 < (int)uVar2) {
    uVar2 = func_0010489C();
    *DAT_001029d4 = *DAT_001029d4 + 1;
  }
  return uVar2;
}

