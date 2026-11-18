#include "ghidra_types.h"

extern int func_0049116C(undefined4 *param_1);
extern undefined4 DAT_00133464;
extern int DAT_00133468;

// USA 00133410 <- EU 00133410 (Ghidra, non-matching)
// GLOBAL DAT_00133464 undefined4
// GLOBAL DAT_00133468 int

int func_00133410(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00133464;
  (**(code **)(**(int **)(DAT_00133468 + (int)param_1) + 0x20))
            (*(int **)(DAT_00133468 + (int)param_1),0);
  puVar1 = func_0049116C(param_1 + 0xaf2);
  puVar1 = func_0049116C(puVar1 + -7);
  return (int)(puVar1 + -0xaeb);
}

