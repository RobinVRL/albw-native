#include "ghidra_types.h"

extern int func_002CABDC(int *param_1);
extern int func_0034C8F0(uint *param_1,int param_2,int param_3);
extern int func_004FA8A0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_002cad5c;
extern int *DAT_002cad60;

// USA 002CACF0 <- EU 002CACCC (Ghidra, non-matching)
// GLOBAL DAT_002cad5c int *
// GLOBAL DAT_002cad60 int *

undefined4 func_002CACF0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = func_0052FBA0(*DAT_002cad5c + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (((iVar2 == 0) || (iVar2 = func_00588BE4(iVar2), iVar2 != *DAT_002cad60)) &&
     ((*(int *)(param_2 + 0x2c) == 0 ||
      (cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1), cVar1 != '\b' && cVar1 != '\x0f')))) {
    iVar2 = func_0034C8F0((uint *)param_1[0x106],param_1[0xe8],param_2);
    if (iVar2 != 0) {
      func_004FA8A0(param_2);
    }
    return 1;
  }
  func_002CABDC(param_1);
  return 1;
}

