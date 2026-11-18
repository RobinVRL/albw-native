#include "ghidra_types.h"

extern int func_003D2810(void);
extern int func_003D2A48(void);
extern int func_003DBB7C(void);
extern int func_003DCBEC(undefined4 param_1,int param_2);
extern undefined4 DAT_003de270;

// USA 003DE268 <- EU 003DE248 (Ghidra, non-matching)
// GLOBAL DAT_003de270 undefined4

undefined4 func_003DE268(void)

{
  func_003D2810();
  func_003D2A48();
  func_003DBB7C();
  return func_003DCBEC(DAT_003de270,3);
}

