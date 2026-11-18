#include "ghidra_types.h"

extern int func_00102794(void);
extern int func_00102AA8(void);
extern int func_00104788(undefined4 param_1);
extern int func_001047C4(undefined4 param_1);
extern int func_001049A8(void);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// USA 0010145C <- EU 0010145C (Ghidra, non-matching)

undefined4 func_0010145C(void)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 in_r2;
  
  iVar1 = func_00102AA8();
  if ((iVar1 != 0) && (uVar2 = func_001049A8(), uVar2 == 0)) {
    iVar1 = func_00102794();
                    /* WARNING: Subroutine does not return */
    if (-(iVar1 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar1 >> 0x1f),extraout_r1,in_r2);
    }
    func_001047C4(0xf);
    return func_00104788(6);
  }
  return 0;
}

