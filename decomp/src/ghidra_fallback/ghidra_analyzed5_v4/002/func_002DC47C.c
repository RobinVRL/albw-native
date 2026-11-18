#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_002dc564;
extern uint *DAT_002dc568;
extern undefined4 *DAT_002dc56c;
extern undefined4 DAT_002dc570;

// USA 002DC47C <- EU 002DC458 (Ghidra, non-matching)
// GLOBAL DAT_002dc564 int *
// GLOBAL DAT_002dc568 uint *
// GLOBAL DAT_002dc56c undefined4 *
// GLOBAL DAT_002dc570 undefined4

void func_002DC47C(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined4 *)(albw_frame + 0x1c))
  if (*(uint *)(param_1 + 0x70) == 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x44);
  }
  else {
    piVar2 = (int *)func_0052FBA0(*DAT_002dc564 + 0x3dbbc,*(uint *)(param_1 + 0x70));
    if (((*DAT_002dc568 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_002dc568), iVar3 != 0)) {
      *DAT_002dc56c = DAT_002dc570;
    }
    if ((piVar2 == (int *)0x0) || (iVar3 = (**(code **)*piVar2)(piVar2,DAT_002dc56c), iVar3 == 0)) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      iVar3 = *(int *)(param_1 + 0x2c);
      local_28 = *(undefined4 *)(iVar3 + 0x28);
      local_24 = *(int *)(iVar3 + 0x2c);
      uStack_20 = *(undefined4 *)(iVar3 + 0x30);
      uStack_1c = *(undefined4 *)(iVar3 + 0x34);
      uStack_18 = *(undefined4 *)(iVar3 + 0x38);
      local_14 = *(undefined4 *)(param_1 + 0x74);
      iVar3 = (**(code **)(*piVar2 + 0x50))(piVar2,&local_28);
      if (iVar3 == 4 || iVar3 == 5) {
        if (local_24 == 0) {
          local_24 = piVar2[0xb3];
        }
        **(int **)(param_1 + 0x44) = local_24;
      }
      else {
        **(undefined4 **)(param_1 + 0x44) = 0;
      }
      return;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x44);
  }
  *puVar1 = 0;
  return;
}

