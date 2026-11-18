#include "ghidra_types.h"

extern int func_004C07D8(int param_1);
extern int func_0060E480(int param_1,int param_2,undefined1 param_3);
extern int DAT_0060ee70;

// USA 0060EE28 <- EU 0060EE00 (Ghidra, non-matching)
// GLOBAL DAT_0060ee70 int

undefined4 func_0060EE28(int *param_1)

{
  if ((char)param_1[0x259] == '\x02') {
    *(undefined1 *)(param_1 + 0x262) = 1;
    if (*(char *)((int)param_1 + 0x85f) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0060ee6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x855),0xffffffff);
    }
  }
  else {
    param_1[0xeb] = DAT_0060ee70;
    func_004C07D8((int)param_1);
    *(undefined1 *)((int)param_1 + 0x861) = 1;
    func_0060E480((int)param_1,2,0);
  }
  return 0;
}

