#include "ghidra_types.h"

extern int func_003DDBD0(char *param_1,int param_2,int param_3);
extern char *DAT_003dcb34;

// USA 003DCB3C <- EU 003DCB1C (Ghidra, non-matching)
// GLOBAL DAT_003dcb34 char *

undefined4 func_003DCB3C(char *param_1,int param_2,int param_3)

{
  if (*param_1 != '\0') {
    return func_003DDBD0(DAT_003dcb34,param_2,param_3);
  }
  return 0;
}

