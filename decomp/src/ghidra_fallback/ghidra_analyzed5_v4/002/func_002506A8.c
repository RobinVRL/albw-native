#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_00520828(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern undefined *DAT_002507ac;
extern int *DAT_002507b0;
extern uint *DAT_002507b4;
extern undefined4 *DAT_002507b8;
extern undefined4 DAT_002507bc;

// USA 002506A8 <- EU 002506A8 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_002507ac undefined *
// GLOBAL DAT_002507b0 int *
// GLOBAL DAT_002507b4 uint *
// GLOBAL DAT_002507b8 undefined4 *
// GLOBAL DAT_002507bc undefined4

undefined4 func_002506A8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((undefined4 *)(albw_frame + 0x8))
  func_00100118((int)local_58,DAT_002507ac,4,0x10);
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002507b0 + 0x3dbbc,*(uint *)(param_1 + 0x470));
  if (((*DAT_002507b4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002507b4), iVar2 != 0)) {
    *DAT_002507b8 = DAT_002507bc;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_002507b8), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 1;
    local_58[0] = *(undefined4 *)(param_1 + 0x2cc);
  }
  else {
    iVar2 = func_00520828((int)puVar1,(int)local_58);
    if (iVar2 < 1) goto LAB_00250784;
  }
  iVar3 = 0;
  do {
    func_00230610(param_2,local_58[iVar3]);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < iVar2);
LAB_00250784:
  return func_00230610(param_2,*(undefined4 *)(param_1 + 0x470));
}

