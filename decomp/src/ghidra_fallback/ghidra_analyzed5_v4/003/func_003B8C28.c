#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0058A7D4(void);
extern int DAT_003b8de0;
extern int DAT_003b8de4;
extern float DAT_003b8de8;

// USA 003B8C28 <- EU 003B8C04 (Ghidra, non-matching)
// GLOBAL DAT_003b8de0 int
// GLOBAL DAT_003b8de4 int
// GLOBAL DAT_003b8de8 float

undefined4 func_003B8C28(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  iVar1 = param_1[0x12];
  if (*(short *)(iVar1 + 0xaf0) != 0) {
    *(int *)(iVar1 + 1000) = DAT_003b8de0 + *(int *)(iVar1 + 1000);
    iVar1 = param_1[0x12];
    if (((*(short *)(iVar1 + 0xaf0) == 4) && (iVar2 = *(int *)(iVar1 + 0xd98), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x1c) == *(int *)(iVar1 + 0xd9c))) {
      iVar1 = *(int *)(iVar2 + 0x20);
      if (((iVar1 != 0) && (*(int *)(iVar2 + 0x24) == *(int *)(iVar1 + 0xc))) &&
         (0 < *(int *)(iVar1 + 4))) {
        *(undefined1 *)(iVar1 + 0x280) = 1;
      }
      *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
    }
  }
  iVar1 = param_1[0x12];
  iVar2 = *(int *)(*(int *)(iVar1 + 0x8dc) + 0x14);
  if ((((int)ALBW_AS_U32((*(float *)(iVar2 + 0x14) - *(float *)(iVar2 + 8))) <= DAT_003b8de4) &&
      (iVar2 = *(int *)(iVar1 + 0xd98), iVar2 != 0)) &&
     (*(int *)(iVar2 + 0x1c) == *(int *)(iVar1 + 0xd9c))) {
    iVar1 = *(int *)(iVar2 + 0x20);
    if (((iVar1 != 0) && (*(int *)(iVar2 + 0x24) == *(int *)(iVar1 + 0xc))) &&
       (0 < *(int *)(iVar1 + 4))) {
      *(undefined1 *)(iVar1 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  iVar1 = *(int *)(*(int *)(param_1[0x12] + 0x8dc) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_003b8de8) {
      if (*(float *)(iVar1 + 8) <= DAT_003b8de8) goto LAB_003b8d94;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_003b8d94:
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      if ((uint)((ulonglong)uVar4 * 0x65 >> 0x20) < 0x33) {
                    /* WARNING: Could not recover jumptable at 0x003b8dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0x138))(param_1,2);
      }
                    /* WARNING: Could not recover jumptable at 0x003b8ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x138))(param_1,1,1);
    }
  }
  return 0;
}

