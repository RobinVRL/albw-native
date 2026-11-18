#include "ghidra_types.h"

extern int func_001A094C(int param_1,int param_2);
extern int func_0065A330(undefined4 *param_1,undefined1 param_2);
extern int DAT_0019fdb8;
extern float DAT_0019fdbc;

// USA 0019FD08 <- EU 0019FD08 (Ghidra, non-matching)
// GLOBAL DAT_0019fdb8 int
// GLOBAL DAT_0019fdbc float

undefined4 func_0019FD08(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xa04) = 1;
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (0 < *(short *)(DAT_0019fdb8 + param_1)) {
      return func_0065A330((undefined4 *)(param_1 + 0x9d0),4);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      if (*(float *)(iVar1 + 0x10) < DAT_0019fdbc) {
        if (DAT_0019fdbc < *(float *)(iVar1 + 8)) {
          return 0;
        }
      }
      else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
        return 0;
      }
      func_001A094C(param_1,1);
      func_0065A330((undefined4 *)(param_1 + 0x9d0),6);
    }
  }
  return 0;
}

