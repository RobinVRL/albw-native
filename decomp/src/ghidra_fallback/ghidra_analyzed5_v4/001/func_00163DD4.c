// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0028AA74(int param_1);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_00521184();
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00163e84;
extern int DAT_00163e88;

// USA 00163DD4 <- EU 00163DD8 (Ghidra, non-matching)
// GLOBAL DAT_00163e84 int *
// GLOBAL DAT_00163e88 int

undefined4 func_00163DD4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = func_0052FBA0(*DAT_00163e84 + 0x3dbbc,*(uint *)(param_1 + 0x8f8));
  if (iVar2 != 0) {
    if (((param_2 == 0) ||
        (fVar4 = *(float *)(iVar2 + 0x3d0) - *(float *)(param_1 + 0x3d0),
        fVar5 = *(float *)(iVar2 + 0x3d8) - *(float *)(param_1 + 0x3d8),
        DAT_00163e88 <= (int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5)))) ||
       (bVar1 = func_0028AA74(iVar2), !bVar1)) {
      iVar2 = func_004D80EC((float *)(param_1 + 0x3d0),(float *)(iVar2 + 0x3d0),
                            *(int *)(param_1 + 1000));
      *(int *)(param_1 + 0x904) = iVar2;
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  uVar3 = func_00521184(param_1);
  *(undefined4 *)(param_1 + 0x904) = uVar3;
  return 0;
}

