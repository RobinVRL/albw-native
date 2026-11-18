#include "ghidra_types.h"

extern int func_00103CA4(undefined4 *param_1,undefined4 param_2);
extern undefined4 *DAT_001022f0;

// USA 001022A0 <- EU 001022A0 (Ghidra, non-matching)
// GLOBAL DAT_001022f0 undefined4 *

undefined8 func_001022A0(void)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined4 *)(albw_frame + 0x14))
  local_10 = 0;
  local_c = DAT_001022f0[2];
  func_00103CA4(&local_10,*DAT_001022f0);
  software_interrupt(0x3a);
  software_interrupt(0x23);
  return CONCAT44(local_10,local_18);
}

