#include "ghidra_types.h"

extern int func_004288B0(int param_1,float fparam_0);
extern int func_004288EC(int param_1);
extern int func_0042892C(int param_1,float fparam_0);
extern int func_00428948(int param_1);
extern int func_00428968(int *param_1,undefined2 param_2);
extern int func_004B9660(int param_1,int param_2);
extern float DAT_004881dc;

// USA 0048817C <- EU 00488154 (Ghidra, non-matching)
// GLOBAL DAT_004881dc float

undefined4 func_0048817C(int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  float fparam_0;
  
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  uVar2 = *puVar1 & 0xfffe;
  *puVar1 = uVar2;
  *(ushort *)(*(int *)(param_1 + 0x14) + 0x16) = uVar2 | 2;
  func_004B9660(param_1,*(int *)(param_1 + 0x14));
  func_00428968((int *)(param_1 + 0x74),2);
  if (*(char *)(param_1 + 0x84) != '\0') {
    fparam_0 = DAT_004881dc;
    func_0042892C(param_1 + 0x74,DAT_004881dc);
    return func_004288B0(param_1 + 0x74,fparam_0);
  }
  func_00428948(param_1 + 0x74);
  return func_004288EC(param_1 + 0x74);
}

