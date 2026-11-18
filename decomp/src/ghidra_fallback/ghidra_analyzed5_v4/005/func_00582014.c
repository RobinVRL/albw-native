#include "ghidra_types.h"

extern int DAT_0058205c;
extern int DAT_00582060;

// USA 00582014 <- EU 00581FEC (Ghidra, non-matching)
// GLOBAL DAT_0058205c int
// GLOBAL DAT_00582060 int

undefined4 func_00582014(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 uVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  fVar3 = ALBW_AS_F32(param_3[0x56]);
  uVar2 = 0;
  if ((iVar1 != 0) && (param_2 < *(int *)(DAT_0058205c + iVar1))) {
    iVar1 = iVar1 + 0x183c + param_2 * DAT_00582060 * 4;
    uVar2 = *(undefined1 *)(iVar1 + 0x3fd);
    fVar3 = *(float *)(iVar1 + 0x3f8) * fVar3;
  }
  if (0x3f7fffff < (int)ALBW_AS_U32(fVar3)) {
                    /* WARNING: Could not recover jumptable at 0x00582050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_3 + 0x18))(param_3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00582058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_3 + 0x18))(param_3,uVar2);
}

