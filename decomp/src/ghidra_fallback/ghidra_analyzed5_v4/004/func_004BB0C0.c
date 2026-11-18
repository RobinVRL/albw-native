#include "ghidra_types.h"

extern int func_0014D9D8(int param_1,uint *param_2,int param_3);
extern int func_001507A8(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_004bb114;
extern int *DAT_004bb118;

// USA 004BB0C0 <- EU 004BB098 (Ghidra, non-matching)
// GLOBAL DAT_004bb114 int *
// GLOBAL DAT_004bb118 int *

bool func_004BB0C0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x180) {
    func_0014D9D8(param_1,(uint *)(param_1 + 0x39c),param_2);
    bVar1 = true;
  }
  else {
    iVar2 = func_0052FBA0(*DAT_004bb114 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if ((iVar2 == 0) || (iVar2 = func_00588BE4(iVar2), iVar2 != *DAT_004bb118)) {
      bVar1 = func_001507A8(param_1,param_2);
      return bVar1;
    }
    bVar1 = false;
  }
  return bVar1;
}

