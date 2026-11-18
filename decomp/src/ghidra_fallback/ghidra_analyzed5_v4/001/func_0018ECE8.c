#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0028F268(int param_1,float *param_2,int param_3,int param_4);
extern int func_002B6240(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0018ede4;
extern uint *DAT_0018ede8;
extern int *DAT_0018edec;
extern undefined4 *DAT_0018edf0;
extern undefined4 DAT_0018edf4;

// USA 0018ECE8 <- EU 0018ECE8 (Ghidra, non-matching)
// GLOBAL DAT_0018ede4 int *
// GLOBAL DAT_0018ede8 uint *
// GLOBAL DAT_0018edec int *
// GLOBAL DAT_0018edf0 undefined4 *
// GLOBAL DAT_0018edf4 undefined4

undefined4 func_0018ECE8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint in_r3;
  
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  if (param_2 != 0) {
    if (*(uint *)(param_1 + 0x57c) == 0) {
      uVar3 = 0;
      if (param_3 != 0) {
        in_r3 = (uint)*(byte *)(param_1 + 0x558);
        uVar3 = (uint)*(byte *)(param_1 + 0x4e4);
      }
      if (param_3 == 0) {
        uVar3 = 0;
        in_r3 = uVar3;
      }
      return func_0028F268(*DAT_0018edec,param_1 + 0x3d0,uVar3,in_r3);
    }
    puVar1 = (undefined4 *)func_0052FBA0(*DAT_0018ede4 + 0x3dbbc,*(uint *)(param_1 + 0x57c));
    if (((*DAT_0018ede8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0018ede8), iVar2 != 0)) {
      *DAT_0018edf0 = DAT_0018edf4;
    }
    if ((puVar1 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0018edf0), iVar2 == 0)) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return func_002B6240((int)puVar1);
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return 0;
}

