#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00110848(int param_1);
extern int func_00391558(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern undefined DAT_001c6dd4;
extern int *DAT_001c6ddc;
extern undefined4 *DAT_001c6de0;
extern int DAT_001c6de4;
extern uint *DAT_001c6de8;
extern undefined4 *DAT_001c6dec;
extern undefined4 DAT_001c6df0;

// USA 001C6CD0 <- EU 001C6CD0 (Ghidra, non-matching)
// GLOBAL DAT_001c6dd4 undefined
// GLOBAL DAT_001c6ddc int *
// GLOBAL DAT_001c6de0 undefined4 *
// GLOBAL DAT_001c6de4 int
// GLOBAL DAT_001c6de8 uint *
// GLOBAL DAT_001c6dec undefined4 *
// GLOBAL DAT_001c6df0 undefined4

undefined4 func_001C6CD0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  piVar4 = (int *)(param_1 + 0x448);
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar4 = 0;
    *(undefined4 *)(param_1 + 0x44c) = 0;
  }
  else {
    iVar1 = *piVar4;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x44c))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)&DAT_001c6dd4);
    *piVar4 = local_18;
    *(undefined4 *)(param_1 + 0x44c) = uStack_14;
  }
  puVar2 = (undefined4 *)
           func_005841A8(*DAT_001c6ddc,*DAT_001c6de0,*(int **)(DAT_001c6de4 + *DAT_001c6ddc));
  puVar2 = (undefined4 *)*puVar2;
  if (((*DAT_001c6de8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001c6de8), iVar1 != 0)) {
    *DAT_001c6dec = DAT_001c6df0;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar2)(puVar2,DAT_001c6dec), iVar1 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = func_00391558((int)puVar2);
    return uVar3;
  }
  return 0;
}

