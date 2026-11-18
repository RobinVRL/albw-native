#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_0016BAF8(int param_1,int param_2,int param_3);
extern int *DAT_0035ade4;

// USA 0035ADBC <- EU 0035AD98 (Ghidra, non-matching)
// GLOBAL DAT_0035ade4 int *

undefined4 func_0035ADBC(int param_1,int param_2)

{
  func_0014E138(param_1,param_2);
  if ((*(char *)(param_1 + 0x410) != '\x02') &&
     ((*(char *)(param_1 + 0x410) != '\x03' || (*(char *)(param_1 + 0x440) != '\x02')))) {
    return 0;
  }
  return func_0016BAF8(*DAT_0035ade4,2,(int)*(short *)(param_1 + 0x54));
}

