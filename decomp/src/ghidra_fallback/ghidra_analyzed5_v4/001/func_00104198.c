#include "ghidra_types.h"


// USA 00104198 <- EU 00104198 (Ghidra, non-matching)

void * func_00104198(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)coproc_movefrom_User_R_Thread_and_Process_ID();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return puVar1;
}

