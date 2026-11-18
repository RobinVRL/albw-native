#include "ghidra_types.h"


// USA 00114D80 <- EU 00114D80 (Ghidra, non-matching)

uint func_00114D80(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *in_lr;
  bool bVar2;
  
  if ((((int)*in_lr < 0) || (param_3 = param_2 * 2, param_3 < 0xff000001)) &&
     (param_1 * 2 < 0xff000001)) {
    if (param_1 * 2 == 0xff000000) {
      uVar1 = ((int)param_1 >> 0x1f) * -3 + 2;
      if (param_3 == 0xff000000) {
        uVar1 = (uVar1 - ((int)param_2 >> 0x1f)) + 1;
      }
    }
    else {
      uVar1 = param_2 >> 0x1f;
    }
  }
  else {
    uVar1 = 8;
  }
  uVar1 = *in_lr >> uVar1 * 3 & 7;
  switch(uVar1) {
  case 4:
    param_1 = param_2;
    break;
  case 5:
    break;
  case 6:
  case 7:
    return 0x7fc00000;
  default:
                    /* WARNING: Could not recover jumptable at 0x00114de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(in_lr + uVar1 + 1))();
    return uVar1;
  }
  bVar2 = SUB41(param_1 >> 0x1f,0);
  uVar1 = param_1 * 2;
  if (uVar1 != 0) {
    bVar2 = uVar1 < 0x1000001;
  }
  if (bVar2 && (uVar1 != 0 && uVar1 != 0x1000000)) {
    param_1 = 0;
  }
  return param_1;
}

