#include "ghidra_types.h"

extern int func_002AB3E0(undefined4 *param_1);
extern int func_002AD0E4(undefined4 *param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int func_004F5494(undefined4 *param_1);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_006624F4(undefined4 *param_1,undefined1 param_2);

// USA 002ACD14 <- EU 002ACCF0 (Ghidra, non-matching)

undefined4 func_002ACD14(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1[0xd] + 0x7fc);
  if (cVar1 == '\x05') {
    param_3 = 0;
  }
  if ((cVar1 == '\0' || cVar1 == '\x05') && (7 < *(byte *)(param_1 + 1) - 0x15)) {
    func_004FB0D8(param_1[0xd],(float *)(param_1 + 0x10));
  }
  if ((uint)param_1[10] < (uint)param_1[0xb]) {
    if ((*(ushort *)(param_1 + 0xe) & 8) != 0) {
      *(uint *)(param_1[0xd] + 0x5a0) = *(uint *)(param_1[0xd] + 0x5a0) | 0x4000000;
    }
  }
  else {
    if ((param_2 != 0) && (iVar2 = func_002AD0E4(param_1,1,(float *)0x0,0,0), iVar2 != 0)) {
      return 0;
    }
    if (param_3 == 0) {
      func_004F5494(param_1 + 0x3b);
      func_006624F4(param_1,0);
    }
    else {
      func_006624F4(param_1,2);
    }
  }
  return func_002AB3E0(param_1);
}

