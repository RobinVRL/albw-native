#include "ghidra_types.h"

extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_00588BE4(int param_1);
extern int *DAT_0039c0a8;
extern undefined4 DAT_0039c0ac;
extern undefined4 DAT_0039c0b0;
extern undefined4 DAT_0039c0b4;
extern int *DAT_0039c0b8;
extern undefined4 DAT_0039c0bc;
extern undefined4 DAT_0039c0c0;
extern int *DAT_0039c0c4;
extern undefined4 DAT_0039c0c8;
extern undefined4 DAT_0039c0cc;

// USA 0039BFEC <- EU 0039BFC8 (Ghidra, non-matching)
// GLOBAL DAT_0039c0a8 int *
// GLOBAL DAT_0039c0ac undefined4
// GLOBAL DAT_0039c0b0 undefined4
// GLOBAL DAT_0039c0b4 undefined4
// GLOBAL DAT_0039c0b8 int *
// GLOBAL DAT_0039c0bc undefined4
// GLOBAL DAT_0039c0c0 undefined4
// GLOBAL DAT_0039c0c4 int *
// GLOBAL DAT_0039c0c8 undefined4
// GLOBAL DAT_0039c0cc undefined4

void func_0039BFEC(int *param_1)

{
  int iVar1;
  
  iVar1 = func_00588BE4((int)param_1);
  if (iVar1 == *DAT_0039c0a8) {
    func_004BE114(param_1,4,0,0,DAT_0039c0b4);
    *(undefined1 *)((int)param_1 + 0x911) = 3;
  }
  iVar1 = func_00588BE4((int)param_1);
  if (iVar1 == *DAT_0039c0b8) {
    func_004BE114(param_1,4,0,0,DAT_0039c0c0);
    *(undefined1 *)((int)param_1 + 0x911) = 3;
  }
  iVar1 = func_00588BE4((int)param_1);
  if (iVar1 == *DAT_0039c0c4) {
    func_004BE114(param_1,3,0,0,DAT_0039c0cc);
  }
  return;
}

