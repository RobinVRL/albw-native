#include "ghidra_types.h"

extern int func_FE6533C4();
extern int func_FE6D27C8();
extern int func_FE6D67CC();
extern int func_FEADFFF6();
extern int func_FEAE0002();

// USA 005FC9BC <- EU 005FC994 (Ghidra, function missing from the decomp table)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 func_005FC9BC(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 in_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr6;
  
  *param_3 = unaff_r4;
  param_3[1] = unaff_r7;
  param_3[2] = unaff_r10;
  param_3[3] = in_r12;
  param_3[4] = in_lr;
  param_3[5] = 0x5fc99c;
                    /* WARNING: Could not recover jumptable at 0x005fc998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_NG != in_OV) {
    return (*(code *)(param_3 + -0x1ffffff8))();
  }
  *param_3 = unaff_r4;
  param_3[1] = unaff_r7;
  param_3[2] = unaff_r9;
  param_3[3] = in_lr;
  param_3[4] = 0x5fc9a8;
                    /* WARNING: Could not recover jumptable at 0x005fc9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_NG == in_OV) {
    if (!(bool)in_NG) {
      param_1 = func_FE6533C4(param_1);
    }
    if (!(bool)in_OV) {
      param_1 = func_FE6D27C8();
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      param_1 = func_FE6D67CC();
    }
    uVar1 = func_FEADFFF6(param_1);
    if (in_NG == in_OV) {
      coprocessor_load(0xe,in_cr6,uVar1);
    }
    func_FEAE0002(uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return (*(code *)(param_3 + -0x1ffffff8))();
}

