#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int func_0065CC10(undefined4 *param_1,undefined1 param_2);

// USA 001E2934 <- EU 001E2934 (Ghidra, non-matching)

undefined4 func_001E2934(int param_1)

{
  bool bVar1;
  
  bVar1 = func_00588BF0(param_1,1);
  if (bVar1) {
    return func_0065CC10((undefined4 *)(param_1 + 0x788),2);
  }
  if (*(short *)(param_1 + 0x2e) == 0) {
    bVar1 = func_00588BF0(param_1,0);
    if (bVar1) {
      return 0;
    }
  }
  else if ((*(short *)(param_1 + 0x36) != 0) && (bVar1 = func_00588BF0(param_1,0), bVar1)) {
    return 0;
  }
  if (*(char *)(param_1 + 0xab8) == '\0') {
    *(undefined1 *)(param_1 + 0xab8) = 1;
  }
  return 0;
}

