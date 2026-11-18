#include "ghidra_types.h"


// USA 003FA02C <- EU 003FA00C (Ghidra, non-matching)

int func_003FA02C(ushort *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((char)param_1[5] != '\0') {
    iVar1 = (uint)param_1[1] * 0x448 + (param_1[3] + 0xf & 0xfffffff0) * 4 + 100;
  }
  iVar1 = (*param_1 + 1) * 0x6c + (uint)param_1[1] * 0x278 + (uint)param_1[2] * 0x218 + iVar1;
  if ((char)param_1[4] != '\0') {
    iVar1 = iVar1 + 0x1d0;
  }
  return iVar1;
}

