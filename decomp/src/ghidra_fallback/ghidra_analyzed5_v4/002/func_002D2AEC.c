#include "ghidra_types.h"

extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_004EBD0C(int param_1,float fparam_0);
extern float DAT_002d2c50;
extern float DAT_002d2c54;
extern int *DAT_002d2c58;

// USA 002D2AEC <- EU 002D2AC8 (Ghidra, non-matching)
// GLOBAL DAT_002d2c50 float
// GLOBAL DAT_002d2c54 float
// GLOBAL DAT_002d2c58 int *

undefined4 func_002D2AEC(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x101) != '\0') {
    return 0;
  }
  if (param_2 == 0) {
LAB_002d2b40:
    iVar2 = param_1 + param_2 * 0x28;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x14);
    if (param_3 != 0xab) {
      fVar3 = DAT_002d2c54;
      iVar1 = func_00260C78(DAT_002d2c50,*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),
                            *(float *)(iVar1 + 0x14));
      if (iVar1 == 0) {
        iVar1 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x14);
        iVar1 = func_00260C78(fVar3,*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),
                              *(float *)(iVar1 + 0x14));
        if (iVar1 == 0) {
          return 0;
        }
      }
      goto LAB_002d2c24;
    }
    fVar3 = DAT_002d2c54;
    iVar1 = func_00260C78(DAT_002d2c50,*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),
                          *(float *)(iVar1 + 0x14));
    if (iVar1 != 0) goto LAB_002d2c24;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x14);
    iVar1 = func_00260C78(fVar3,*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),
                          *(float *)(iVar1 + 0x14));
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) goto LAB_002d2b40;
      if (param_2 != 3) {
        return 0;
      }
    }
    iVar2 = param_1 + param_2 * 0x28;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x14);
    fVar3 = DAT_002d2c54;
    iVar1 = func_00260C78(DAT_002d2c50,*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),
                          *(float *)(iVar1 + 0x14));
    if (iVar1 != 0) goto LAB_002d2c24;
    iVar1 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x14);
    iVar1 = func_00260C78(fVar3,*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),
                          *(float *)(iVar1 + 0x14));
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_002d2c24:
  return func_004EBD0C(*DAT_002d2c58,
                *(float *)(*(int *)(*(int *)(param_1 + param_2 * 0x28 + 0x2c) + 0x14) + 0x10));
}

