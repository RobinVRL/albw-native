#include "ghidra_types.h"

extern int func_00114D80(uint param_1,uint param_2,uint param_3);
extern undefined4 DAT_00692084;

// USA 00692084 <- EU 0069205C (Ghidra, non-matching)
// GLOBAL DAT_00692084 undefined4

undefined4 func_00692084(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint in_r12;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 in_CY;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  UNRECOVERED_JUMPTABLE_00 = (code *)0x692064;
  uVar1 = func_00114D80(param_1,param_2,param_3);
  if (!(bool)in_CY) {
    coprocessor_function(0xf,0xf,7,in_cr15,in_cr15,in_cr13);
  }
  if ((in_r12 & extraout_r1 >> 7) != 0) {
    if ((uVar1 & 0x7fffffff) != 0) {
      uVar1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00692078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE_00)(uVar1);
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00692080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(DAT_00692084);
  return uVar2;
}

