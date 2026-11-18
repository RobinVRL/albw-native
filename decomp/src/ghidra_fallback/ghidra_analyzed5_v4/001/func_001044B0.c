#include "ghidra_types.h"

extern int func_00104368(void);
extern int func_00108534(void);
extern int func_001085B0(void);
extern undefined4 DAT_00104514;

// USA 001044B0 <- EU 001044B0 (Ghidra, non-matching)
// GLOBAL DAT_00104514 undefined4

undefined4 func_001044B0(undefined1 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = func_00104368();
  if ((uVar1 & 0x80000000) == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = func_00108534();
    if ((int)uVar1 < 0) {
      uVar1 = func_001085B0();
      uVar2 = DAT_00104514;
      if ((uVar1 & 0x80000000) == 0) {
        *param_1 = 2;
        uVar2 = 0;
      }
      return uVar2;
    }
    *param_1 = 1;
  }
  return 0;
}

