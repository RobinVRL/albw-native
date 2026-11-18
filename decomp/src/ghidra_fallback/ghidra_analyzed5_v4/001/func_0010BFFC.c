#include "ghidra_types.h"

extern int func_0010BE9C(void);
extern undefined4 DAT_0010c0b4;

// USA 0010BFFC <- EU 0010BFFC (Ghidra, non-matching)
// GLOBAL DAT_0010c0b4 undefined4

void func_0010BFFC(int *param_1)

{
  bool bVar1;
  
  do {
    while (*param_1 < 0) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = *param_1 + -1;
        do {
          func_0010BE9C();
          while (0 < *param_1) {
            bVar1 = (bool)hasExclusiveAccess(param_1);
            if (bVar1) {
              *param_1 = 1 - *param_1;
              return;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
    }
    ClearExclusiveLocal();
    while (0 < *param_1) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = -*param_1;
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}

