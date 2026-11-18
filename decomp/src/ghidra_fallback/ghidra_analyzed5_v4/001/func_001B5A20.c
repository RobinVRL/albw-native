#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_005291BC(int param_1,float *param_2,float fparam_0);
extern int func_005292FC(int param_1);
extern int func_0065B29C(undefined4 *param_1,undefined1 param_2);
extern float DAT_001b5af0;

// USA 001B5A20 <- EU 001B5A20 (Ghidra, non-matching)
// GLOBAL DAT_001b5af0 float

undefined4 func_001B5A20(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fparam_0;
  
  puVar4 = (undefined4 *)(param_1 + 0x8bc);
  if (*(uint *)(param_1 + 0x934) <= *(uint *)(param_1 + 0x930)) {
    *(uint *)(param_1 + 0x954) = *(int *)(param_1 + 1000) + 0x20000000U & 0xc0000000;
    return func_0065B29C(puVar4,1);
  }
  *(uint *)(param_1 + 0x930) = *(uint *)(param_1 + 0x930) + 1;
  pfVar1 = (float *)func_00520FC0();
  fparam_0 = DAT_001b5af0;
  iVar2 = func_005291BC(param_1,pfVar1,DAT_001b5af0);
  if (iVar2 == 0) {
    puVar3 = func_005292FC(param_1);
    if ((puVar3 != (undefined4 *)0x0) &&
       (iVar2 = func_005291BC(param_1,(float *)(puVar3 + 0xf4),fparam_0), iVar2 != 0)) {
      return func_0065B29C(puVar4,4);
    }
  }
  else {
    func_0065B29C(puVar4,2);
  }
  return 0;
}

