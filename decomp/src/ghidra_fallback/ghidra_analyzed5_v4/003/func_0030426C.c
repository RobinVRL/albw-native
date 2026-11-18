#include "ghidra_types.h"

extern int func_001E43DC(int param_1,float fparam_0);
extern int func_001E43F8(int param_1,float fparam_0);
extern int func_00664884(undefined4 *param_1,undefined1 param_2);
extern float DAT_00304290;

// USA 0030426C <- EU 00304248 (Ghidra, non-matching)
// GLOBAL DAT_00304290 float

void func_0030426C(int param_1)

{
  float fparam_0;
  
  if (*(int *)(param_1 + 0x4c0) != 0) {
    fparam_0 = DAT_00304290;
    func_001E43F8(param_1,DAT_00304290);
    func_001E43DC(param_1,fparam_0);
    func_00664884((undefined4 *)(param_1 + 0x4c0),2);
  }
  return;
}

