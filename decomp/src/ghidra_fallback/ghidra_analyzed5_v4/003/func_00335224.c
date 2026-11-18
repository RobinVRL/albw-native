#include "ghidra_types.h"

extern int func_001507A8(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_00335294;
extern int *DAT_00335298;
extern float DAT_0033529c;

// USA 00335224 <- EU 00335200 (Ghidra, non-matching)
// GLOBAL DAT_00335294 int *
// GLOBAL DAT_00335298 int *
// GLOBAL DAT_0033529c float

bool func_00335224(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = func_0052FBA0(*DAT_00335294 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if ((iVar2 != 0) && (iVar2 = func_00588BE4(iVar2), iVar2 == *DAT_00335298)) {
    fVar3 = *(float *)(param_2 + 4);
    if (fVar3 <= DAT_0033529c) {
      fVar3 = -fVar3;
    }
    if (fVar3 == DAT_0033529c) {
      fVar3 = *(float *)(param_2 + 0xc);
      if (fVar3 <= DAT_0033529c) {
        fVar3 = -fVar3;
      }
      if (fVar3 == DAT_0033529c) goto LAB_00335284;
    }
    return false;
  }
LAB_00335284:
  bVar1 = func_001507A8(param_1,param_2);
  return bVar1;
}

