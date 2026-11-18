#include "ghidra_types.h"

extern int func_0029E244(int *param_1);
extern int func_0029E454(int param_1,int param_2);
extern int func_002DF3E4(int param_1);
extern int *DAT_0029db08;
extern undefined4 DAT_0029db0c;
extern int *DAT_0029db10;

// USA 0029DAF4 <- EU 0029DAD0 (Ghidra, non-matching)
// GLOBAL DAT_0029db08 int *
// GLOBAL DAT_0029db0c undefined4
// GLOBAL DAT_0029db10 int *

undefined4 func_0029DAF4(void)

{
  func_002DF3E4(*DAT_0029db08);
  func_0029E244((int *)0x0);
  return func_0029E454(*DAT_0029db10,1);
}

