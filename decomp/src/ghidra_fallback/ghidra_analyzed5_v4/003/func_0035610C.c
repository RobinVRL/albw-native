#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0058A404(int param_1);
extern int DAT_003561e8;
extern float DAT_003561ec;
extern int DAT_003561f0;
extern float DAT_003561f4;
extern float DAT_003561f8;
extern int DAT_003561fc;

// USA 0035610C <- EU 003560E8 (Ghidra, non-matching)
// GLOBAL DAT_003561e8 int
// GLOBAL DAT_003561ec float
// GLOBAL DAT_003561f0 int
// GLOBAL DAT_003561f4 float
// GLOBAL DAT_003561f8 float
// GLOBAL DAT_003561fc int

undefined4 func_0035610C(int *param_1)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = DAT_003561f0;
  param_1[0x163] = DAT_003561e8;
  fVar4 = DAT_003561ec;
  param_1[0x167] = param_1[0x167] | 0xb7;
  param_1[0x275] = iVar3;
  param_1[0x276] = (int)ALBW_AS_U32(fVar4);
  param_1[0x277] = (int)ALBW_AS_U32(fVar4);
  param_1[0x278] = (int)ALBW_AS_U32(fVar4);
  if (*(char *)((int)param_1 + 0xa61) == '\x04') {
    return 0;
  }
  fVar2 = func_0058A404((int)param_1);
  fVar1 = DAT_003561f8;
  iVar3 = (int)(fVar2 * DAT_003561f4 + (DAT_003561f8 - fVar2) * fVar4);
  param_1[0x288] = iVar3;
  if (iVar3 == 0) {
    param_1[0x289] = (int)ALBW_AS_U32(fVar4);
  }
  else {
    fVar2 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x289] = (int)ALBW_AS_U32((fVar1 / fVar2));
  }
  param_1[0x287] = 0;
  *(undefined2 *)(DAT_003561fc + (int)param_1) = 0;
  param_1[0xf7] = (int)ALBW_AS_U32(fVar4);
  param_1[0xf8] = (int)ALBW_AS_U32(fVar4);
  param_1[0xf9] = (int)ALBW_AS_U32(fVar4);
  *(undefined1 *)((int)param_1 + 0x9ea) = 1;
  *(undefined1 *)((int)param_1 + 0x9eb) = 0;
  func_004F88A0(param_1,(undefined2 *)param_1[0x231]);
  return func_004FABDC((int)param_1,4,0xffffffff,0);
}

