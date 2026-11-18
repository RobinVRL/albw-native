#include "ghidra_types.h"

extern int func_002B7508(int param_1,undefined2 param_2,int param_3);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_003A3568(int param_1,undefined4 param_2);
extern float DAT_003b93d0;

// USA 003B92B4 <- EU 003B9290 (Ghidra, non-matching)
// GLOBAL DAT_003b93d0 float

undefined4 func_003B92B4(int *param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = DAT_003b93d0;
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  if ((short)param_1[0x17] == 0) {
    iVar2 = *(int *)(*(int *)(param_1[0x12] + 0x8dc) + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < fVar1) {
        if (*(float *)(iVar2 + 8) <= fVar1) goto LAB_003b9354;
      }
      else if (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14)) {
LAB_003b9354:
        func_003842C0(param_1[0x12] + 0x8c0,0x18,10,1);
        *(short *)(param_1 + 0x17) = (short)param_1[0x17] + 1;
        return 0;
      }
    }
  }
  else if ((short)param_1[0x17] == 1) {
    iVar2 = *(int *)(*(int *)(param_1[0x12] + 0x8dc) + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < fVar1) {
        if (*(float *)(iVar2 + 8) <= fVar1) goto LAB_003b9388;
      }
      else if (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14)) {
LAB_003b9388:
        *(undefined2 *)(param_1 + 0x24) = 0x2d;
        func_002B7508(param_1[0x12],0x1e,0);
        func_003A3568(param_1[0x12] + 0xbc8,1);
                    /* WARNING: Could not recover jumptable at 0x003b93cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0x138))(param_1,1);
      }
    }
  }
  return 0;
}

