#include "ghidra_types.h"

extern int func_004C07D8(int param_1);
extern int func_00618654(int param_1,int param_2,undefined1 param_3);
extern int DAT_006190e0;

// USA 00619098 <- EU 00619070 (Ghidra, non-matching)
// GLOBAL DAT_006190e0 int

undefined4 func_00619098(int *param_1)

{
  if ((char)param_1[0x259] == '\x02') {
    *(undefined1 *)(param_1 + 0x262) = 1;
    if (*(char *)((int)param_1 + 0x85f) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x006190dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x855),0xffffffff);
    }
  }
  else {
    param_1[0xeb] = DAT_006190e0;
    func_004C07D8((int)param_1);
    *(undefined1 *)((int)param_1 + 0x861) = 1;
    func_00618654((int)param_1,2,0);
  }
  return 0;
}

