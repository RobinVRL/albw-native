#include "ghidra_types.h"

extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern float DAT_002aea6c;
extern float DAT_002aea70;
extern float DAT_002aea74;

// USA 002AEA54 <- EU 002AEA30 (Ghidra, non-matching)
// GLOBAL DAT_002aea6c float
// GLOBAL DAT_002aea70 float
// GLOBAL DAT_002aea74 float

void func_002AEA54(int param_1)

{
  char cVar1;
  float fparam_0;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x34) + 0x895);
  if ((cVar1 == '\x01') ||
     ((fparam_0 = DAT_002aea70, cVar1 != '\x04' && (fparam_0 = DAT_002aea6c, cVar1 == '\x05')))) {
    fparam_0 = DAT_002aea74;
  }
  func_002B0D7C(param_1,0x12,0xc,0,fparam_0);
  return;
}

