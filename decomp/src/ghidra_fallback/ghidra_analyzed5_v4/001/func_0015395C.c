#include "ghidra_types.h"

extern int func_002906A4(int param_1,int param_2,undefined4 param_3,int param_4,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_00153a14;
extern int *DAT_00153a18;

// USA 0015395C <- EU 00153960 (Ghidra, non-matching)
// GLOBAL DAT_00153a14 float
// GLOBAL DAT_00153a18 int *

int func_0015395C(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if ((param_2 != 3) &&
     ((cVar1 = *(char *)(param_3 + 0x24), cVar1 != '\x0f' ||
      (*(int *)(param_1 + 0x904) != *(int *)(param_1 + 0x3a0))))) {
    if ((*(int *)(param_1 + 0x904) != *(int *)(param_1 + 0x3a0)) ||
       ((cVar1 != '\t' && cVar1 != '\n' && (cVar1 != '\a' && cVar1 != '\x06')))) {
      if (*(int *)(param_1 + 0x904) != *(int *)(param_1 + 0x3a0) || cVar1 != '\x05') {
        *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x80;
        return param_2;
      }
      iVar2 = func_0068C690((float *)(*(int *)(param_1 + 0x43c) + 8));
      func_002906A4(*DAT_00153a18,0,iVar2,-(uint)*(ushort *)(*(int *)(param_1 + 0x420) + 0x30),
                    DAT_00153a14);
      return 0;
    }
  }
  return 0;
}

