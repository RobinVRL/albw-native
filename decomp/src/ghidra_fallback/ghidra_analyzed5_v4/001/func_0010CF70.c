#include "ghidra_types.h"


// USA 0010CF70 <- EU 0010CF70 (Ghidra, non-matching)

int func_0010CF70(void)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return iVar1 + 0x5c;
}

