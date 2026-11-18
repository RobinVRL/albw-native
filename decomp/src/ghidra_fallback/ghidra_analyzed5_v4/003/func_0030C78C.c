#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0030A434(int *param_1);
extern int func_0030C4D0(int *param_1,int param_2);
extern int func_0030CBE4(int param_1,float *param_2);
extern uint *DAT_0030c840;
extern int *DAT_0030c844;
extern undefined4 *DAT_0030c848;
extern undefined4 DAT_0030c84c;

// USA 0030C78C <- EU 0030C768 (Ghidra, non-matching)
// GLOBAL DAT_0030c840 uint *
// GLOBAL DAT_0030c844 int *
// GLOBAL DAT_0030c848 undefined4 *
// GLOBAL DAT_0030c84c undefined4

undefined4 func_0030C78C(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = *(char *)((int)param_1 + 0xd6) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = (char)param_1[0x35];
  }
  if (bVar4 && cVar1 != '\0') {
    if (param_1[0x23] == 100) {
      func_0030CBE4((int)param_1,*(float **)(*DAT_0030c844 + 0x1c));
    }
    else {
      puVar2 = func_0030C4D0(param_1,param_1[0x23]);
      if (((*DAT_0030c840 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0030c840), iVar3 != 0)) {
        *DAT_0030c848 = DAT_0030c84c;
      }
      if ((puVar2 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar2)(puVar2,DAT_0030c848), iVar3 == 0)) {
        puVar2 = (undefined4 *)0x0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        func_0030CBE4((int)param_1,(float *)(puVar2 + 0xf4));
      }
    }
  }
  return func_0030A434(param_1);
}

