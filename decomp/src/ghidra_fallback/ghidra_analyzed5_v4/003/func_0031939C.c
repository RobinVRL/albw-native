#include "ghidra_types.h"

extern float func_003368B0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00665160(undefined4 *param_1,undefined1 param_2);
extern int *DAT_003193d0;
extern int DAT_003193d4;

// USA 0031939C <- EU 00319378 (Ghidra, non-matching)
// GLOBAL DAT_003193d0 int *
// GLOBAL DAT_003193d4 int

void func_0031939C(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (((*DAT_003193d0 != 0) &&
      (iVar1 = func_0052FBA0(*DAT_003193d0 + 0x3dbbc,*(uint *)(param_1 + 0x4c4)), iVar1 != 0)) &&
     (fVar2 = func_003368B0(iVar1), DAT_003193d4 < (int)ALBW_AS_U32(fVar2))) {
    func_00665160((undefined4 *)(param_1 + 0x49c),3);
  }
  return;
}

