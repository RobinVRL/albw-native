#include "ghidra_types.h"

extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_00584B94(int param_1,int param_2);
extern int DAT_004c6728;
extern int *DAT_004c672c;
extern int *DAT_004c6730;
extern int DAT_004c6734;

// USA 004C66D8 <- EU 004C66B0 (Ghidra, non-matching)
// GLOBAL DAT_004c6728 int
// GLOBAL DAT_004c672c int *
// GLOBAL DAT_004c6730 int *
// GLOBAL DAT_004c6734 int

undefined4 func_004C66D8(undefined4 param_1,float *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  piVar2 = DAT_004c672c;
  iVar1 = DAT_004c6728;
  bVar3 = func_00584B94(*DAT_004c672c,DAT_004c6728);
  if ((!bVar3) &&
     (fVar4 = *param_2 - **(float **)(*DAT_004c6730 + 0x1c),
     fVar5 = param_2[2] - (*(float **)(*DAT_004c6730 + 0x1c))[2],
     (int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5)) <= DAT_004c6734)) {
    return func_004CDF40(*piVar2,iVar1,1);
  }
  return 0;
}

