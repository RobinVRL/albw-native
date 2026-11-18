#include "ghidra_types.h"

extern int DAT_00101408;

// USA 001013F8 <- EU 001013F8 (Ghidra, non-matching)
// GLOBAL DAT_00101408 int

void * func_001013F8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)coproc_movefrom_User_R_Thread_and_Process_ID();
  *(void **)(DAT_00101408 + 4) = pvVar1;
  return pvVar1;
}

