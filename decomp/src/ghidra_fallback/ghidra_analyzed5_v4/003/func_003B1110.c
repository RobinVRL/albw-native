#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7CAC(int param_1,uint param_2,int param_3);
extern int func_0058A7D4(void);
extern float DAT_003b1150;
extern int DAT_003b1154;

// USA 003B1110 <- EU 003B10EC (Ghidra, non-matching)
// GLOBAL DAT_003b1150 float
// GLOBAL DAT_003b1154 int

undefined4 func_003B1110(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  puVar1 = (uint *)func_0058A7D4();
  iVar4 = *(int *)(param_1 + 0x48);
  uVar2 = func_00111A64(puVar1);
  fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  if (DAT_003b1154 < (int)ALBW_AS_U32((fVar5 * DAT_003b1150 * *(float *)(iVar4 + 0xb4c)))) {
    uVar3 = func_002B7CAC(*(int *)(param_1 + 0x48),(uint)*(byte *)(*(int *)(param_1 + 0x48) + 0xb5b)
                          ,0);
    return uVar3;
  }
  return 0;
}

