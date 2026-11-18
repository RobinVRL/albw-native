#include "ghidra_types.h"

extern int func_0014A998(int param_1,int param_2);
extern void func_001B6DE0(int param_1);
extern int func_00231448(int param_1);
extern int func_004B964C(int param_1);
extern int *DAT_00470950;
extern int *DAT_00470954;

// USA 004708EC <- EU 004708C4 (Ghidra, non-matching)
// GLOBAL DAT_00470950 int *
// GLOBAL DAT_00470954 int *

void func_004708EC(int param_1)

{
  int iVar1;
  int iVar2;
  
  func_001B6DE0(param_1);
  iVar2 = *(int *)(param_1 + 0x54);
  for (iVar1 = *(int *)(param_1 + 0x4c) - iVar2;
      iVar1 != (param_1 + 0x48) - *(int *)(param_1 + 0x54);
      iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
    *(undefined1 *)(iVar1 + 0xe) = 0;
  }
  func_00231448(param_1 + 0x9c);
  func_004B964C(param_1);
  if (*(char *)(param_1 + 0xee) == '\0') {
    func_0014A998(*DAT_00470950,0);
  }
  *(undefined1 *)(*DAT_00470954 + 0x1438) = 0;
  return;
}

