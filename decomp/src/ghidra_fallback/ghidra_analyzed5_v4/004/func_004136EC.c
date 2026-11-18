#include "ghidra_types.h"

extern float DAT_004136e0;
extern float DAT_004136e4;

// USA 004136EC <- EU 004136CC (Ghidra, non-matching)
// GLOBAL DAT_004136e0 float
// GLOBAL DAT_004136e4 float

void func_004136EC(float fparam_0)

{
  float fVar1;
  
  fVar1 = DAT_004136e0;
  if (0x3effffff < (int)ALBW_AS_U32(fparam_0)) {
    fVar1 = DAT_004136e4;
  }
  return;
}

