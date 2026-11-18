#include "ghidra_types.h"

extern int func_0014D604(int param_1);
extern int func_004C6D68(int param_1,int param_2);
extern int *DAT_00245d7c;
extern int *DAT_00245d80;

// USA 00245D38 <- EU 00245D38 (Ghidra, non-matching)
// GLOBAL DAT_00245d7c int *
// GLOBAL DAT_00245d80 int *

undefined4 func_00245D38(int param_1)

{
  if (*(char *)(param_1 + 0x964) == '\x02') {
    if (*DAT_00245d7c != 0) {
      func_004C6D68(*DAT_00245d7c,(int)*(short *)(param_1 + 0x32));
    }
    return func_0014D604(*(int *)(*DAT_00245d80 + 300));
  }
  return 0;
}

