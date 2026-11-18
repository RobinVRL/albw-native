#include "ghidra_types.h"

extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_002dbb64;
extern undefined4 DAT_002dbb68;
extern undefined4 DAT_002dbb6c;
extern undefined4 DAT_002dbb70;
extern float DAT_002dbb74;

// USA 002DBAF4 <- EU 002DBAD0 (Ghidra, non-matching)
// GLOBAL DAT_002dbb64 undefined4
// GLOBAL DAT_002dbb68 undefined4
// GLOBAL DAT_002dbb6c undefined4
// GLOBAL DAT_002dbb70 undefined4
// GLOBAL DAT_002dbb74 float

undefined4 func_002DBAF4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  puVar3 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar1 = DAT_002dbb64;
  *puVar3 = DAT_002dbb68;
  *(undefined1 *)(puVar3 + 0x1c) = 0;
  *(undefined1 *)((int)puVar3 + 0x71) = 0;
  puVar3[0x1d] = 0;
  uVar2 = DAT_002dbb6c;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = uVar1;
  uVar1 = DAT_002dbb70;
  puVar3[0x21] = uVar2;
  puVar3[0x22] = uVar1;
  puVar3[0x20] = 0;
  fVar4 = (float)VectorUnsignedToFloat(*(undefined4 *)puVar3[0xf],(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = DAT_002dbb74;
  puVar3 = func_0014D9B4(puVar3 + 0x23,fVar4 * DAT_002dbb74);
  fVar4 = (float)VectorUnsignedToFloat(*(undefined4 *)puVar3[-0x14],(byte)(in_fpscr >> 0x15) & 3);
  puVar3[2] = ALBW_AS_U32(fVar4 * fVar5);
  fVar4 = (float)VectorUnsignedToFloat(*(undefined4 *)puVar3[-0x14],(byte)(in_fpscr >> 0x15) & 3);
  puVar3[3] = ALBW_AS_U32(fVar4 * fVar5);
  puVar3[4] = 0;
  return (undefined4)param_1;
}

