#include "ghidra_types.h"

extern int func_00163DD4(int param_1,int param_2);
extern int func_0028B148(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00658604(undefined4 *param_1,undefined1 param_2);
extern int DAT_0016427c;
extern float DAT_00164280;
extern int *DAT_00164284;

// USA 001641E4 <- EU 001641E8 (Ghidra, non-matching)
// GLOBAL DAT_0016427c int
// GLOBAL DAT_00164280 float
// GLOBAL DAT_00164284 int *

undefined4 func_001641E4(int param_1)

{
  bool bVar1;
  int iVar2;
  
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x904),DAT_0016427c,0x7fffffff,
                DAT_00164280);
  iVar2 = func_0052FBA0(*DAT_00164284 + 0x3dbbc,*(uint *)(param_1 + 0x8f8));
  if ((iVar2 == 0) || (bVar1 = func_0028B148(iVar2), bVar1)) {
    iVar2 = func_00163DD4(param_1,1);
    if (iVar2 == 0) {
      func_00658604((undefined4 *)(param_1 + 0x8bc),8);
      return func_004FABDC(param_1,2,0xffffffff,0);
    }
    func_00658604((undefined4 *)(param_1 + 0x8bc),4);
  }
  return 0;
}

