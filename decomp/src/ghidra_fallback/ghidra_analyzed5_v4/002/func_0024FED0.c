#include "ghidra_types.h"

extern int func_004A8304(undefined4 param_1,int param_2);
extern undefined4 *DAT_0024ff20;

// USA 0024FED0 <- EU 0024FED0 (Ghidra, non-matching)
// GLOBAL DAT_0024ff20 undefined4 *

void func_0024FED0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0024ff20;
  if (*(char *)(param_1 + 0x48e) != '\0') {
    func_004A8304(*DAT_0024ff20,*(int *)(param_1 + 0x45c));
    *(undefined1 *)(param_1 + 0x48e) = 0;
  }
  if (*(char *)(param_1 + 0x48f) != '\0') {
    func_004A8304(*puVar1,*(int *)(param_1 + 0x468));
    *(undefined1 *)(param_1 + 0x48f) = 0;
  }
  return;
}

