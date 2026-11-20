/* compilefix: USA 0067F8D4, from the Ghidra text with 2 cast(s) fixed: the counts at +0x8 / +0xC are integers (EU 67F8AC ldr r2, [r0, #0xc]; ldr r3, [r0, #8]; cmp r2, r3) but were compared as converted float values (every small count became 0).
 * Same class as 0032F024 (BOOT_LOG 160ar): an integer word read through a float * parameter must be
 * taken by its bits (ALBW_AS_U32), not converted by value. */
#include "ghidra_types.h"


// USA 0067F8D4 <- EU 0067F8AC (Ghidra, non-matching)

void func_0067F8D4(float *param_1,float param_2,float fparam_0)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  if ((int)ALBW_AS_U32(param_1[3]) < (int)ALBW_AS_U32(param_1[2])) {
    fVar2 = (float)VectorSignedToFloat(ALBW_AS_U32(param_1[3]),(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat(ALBW_AS_U32(param_1[2]),(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = ((fVar1 - *param_1) * fVar2) / fVar3 + *param_1;
  }
  *param_1 = fVar1;
  param_1[1] = fparam_0;
  param_1[2] = param_2;
  param_1[3] = 0.0;
  return;
}

