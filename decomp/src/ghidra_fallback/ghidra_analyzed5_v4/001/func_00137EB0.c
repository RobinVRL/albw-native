#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int func_00657070(undefined4 *param_1,undefined1 param_2);
extern float DAT_00137f4c;
extern float DAT_00137f50;

// USA 00137EB0 <- EU 00137EB0 (Ghidra, non-matching)
// GLOBAL DAT_00137f4c float
// GLOBAL DAT_00137f50 float

void func_00137EB0(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x434) + 0x14);
  fVar3 = *(float *)(iVar2 + 0x10) - DAT_00137f4c;
  if (fVar3 < DAT_00137f50) {
    fVar3 = DAT_00137f50;
  }
  *(float *)(iVar2 + 0x10) = fVar3;
  if (((*(short *)(param_1 + 0x36) == 0) ||
      ((*(char *)(param_1 + 0x448) == '\0' && (bVar1 = func_00588BF0(param_1,0), bVar1)))) ||
     ((*(char *)(param_1 + 0x448) == '\x01' && (bVar1 = func_00588BF0(param_1,0), !bVar1)))) {
    func_00657070((undefined4 *)(param_1 + 0x40c),1);
  }
  return;
}

