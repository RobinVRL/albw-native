#include "ghidra_types.h"

extern int func_004FB064(int param_1);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00521058(void);
extern int func_00656B60(undefined4 *param_1,undefined1 param_2);
extern float DAT_0012b6c4;
extern float DAT_0012b6c8;
extern undefined4 DAT_0012b6cc;
extern int DAT_0012b6d0;

// USA 0012B608 <- EU 0012B608 (Ghidra, non-matching)
// GLOBAL DAT_0012b6c4 float
// GLOBAL DAT_0012b6c8 float
// GLOBAL DAT_0012b6cc undefined4
// GLOBAL DAT_0012b6d0 int

undefined4 func_0012B608(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fVar4;
  
  func_004FB064(param_1);
  iVar1 = DAT_0012b6d0;
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) != '\0') {
    fVar4 = *(float *)(param_1 + 0x3e0) - DAT_0012b6c4;
    if (fVar4 < DAT_0012b6c8) {
      fVar4 = DAT_0012b6c8;
    }
    *(float *)(param_1 + 0x3e0) = fVar4;
    return func_004FB0D8(param_1,(float *)(param_1 + 0x3e0));
  }
  *(undefined4 *)(param_1 + 0x4f0) = DAT_0012b6cc;
  puVar3 = (undefined4 *)(param_1 + 0x8bc);
  if (*(short *)(iVar1 + param_1) < 1) {
    return func_00656B60(puVar3,6);
  }
  if (*(int *)(param_1 + 0x3a0) == *(int *)(param_1 + 0x8e0)) {
    return func_00656B60(puVar3,2);
  }
  uVar2 = func_00521058();
  *(undefined4 *)(param_1 + 0x8f8) = uVar2;
  return func_00656B60(puVar3,0);
}

