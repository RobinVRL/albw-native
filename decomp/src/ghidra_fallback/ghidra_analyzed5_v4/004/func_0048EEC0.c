#include "ghidra_types.h"

extern int func_0040C55C(undefined4 *param_1);
extern int func_0049116C(undefined4 *param_1);
extern int func_0058FA08();
extern int DAT_0048ef4c;

// USA 0048EEC0 <- EU 0048EE98 (Ghidra, non-matching)
// GLOBAL DAT_0048ef4c int

int func_0048EEC0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0048ef4c;
  param_1[1] = DAT_0048ef4c + 0x44;
  *param_1 = iVar1;
  param_1[0x47] = iVar1 + 0x5c;
  if (param_1[0x48] != 0) {
    func_0058FA08(param_1[0x48]);
    param_1[0x48] = 0;
  }
  if (param_1[0x4a] != 0) {
    func_0058FA08(param_1[0x4a]);
    param_1[0x4a] = 0;
  }
  if (param_1[0x4e] != 0) {
    func_0058FA08(param_1[0x4e]);
    param_1[0x4e] = 0;
  }
  if ((int *)param_1[0x51] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x51] + 4))((int *)param_1[0x51]);
    param_1[0x51] = 0;
  }
  if ((int *)param_1[0x50] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x50] + 4))((int *)param_1[0x50]);
    param_1[0x50] = 0;
  }
  puVar2 = func_0049116C(param_1 + 0x53);
  puVar2 = func_0040C55C(puVar2 + -0x52);
  return (int)(puVar2 + -1);
}

