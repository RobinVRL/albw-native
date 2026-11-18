#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_004CF478(int param_1,int param_2);
extern int func_00513148(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int *DAT_00280b6c;
extern uint *DAT_00280b70;
extern uint *DAT_00280b74;
extern uint DAT_00280b78;
extern uint DAT_00280b7c;
extern int *DAT_00280b80;
extern undefined4 *DAT_00280b84;
extern undefined4 DAT_00280b88;

// USA 002809C4 <- EU 002809EC (Ghidra, non-matching)
// GLOBAL DAT_00280b6c int *
// GLOBAL DAT_00280b70 uint *
// GLOBAL DAT_00280b74 uint *
// GLOBAL DAT_00280b78 uint
// GLOBAL DAT_00280b7c uint
// GLOBAL DAT_00280b80 int *
// GLOBAL DAT_00280b84 undefined4 *
// GLOBAL DAT_00280b88 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_20 */

undefined4 func_002809C4(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_20 ((uint *)(albw_frame + 0x0))
  cVar1 = *(char *)(param_1 + 0x454);
  iVar4 = *DAT_00280b6c;
  if (cVar1 == '\0') {
    if (*(short *)(param_1 + 0x32) == 1) {
      objStack_20[1] = *DAT_00280b74;
      objStack_20[0] = DAT_00280b78;
      objStack_20[4] = *(uint *)(param_1 + 0x10);
      objStack_20[2] = *(uint *)(param_1 + 8);
      objStack_20[3] = *(uint *)(param_1 + 0xc);
      objStack_20[5] = DAT_00280b7c;
      piVar5 = *(int **)(iVar4 + 0x3dbc8);
      piVar3 = func_0052FCA4(iVar4 + 0x3dbbc,objStack_20,*(int **)(iVar4 + 0x3dbc0));
      if ((piVar3 != piVar5) && (*piVar3 != 0)) {
        func_00513148(*piVar3);
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      objStack_20[0] = 0xffffffff;
      return func_001D6FD0((undefined4 *)(param_1 + 0x464),(uint)*(byte *)(param_1 + 0x455),0,DAT_00280b80,
                    -1);
    }
    if ((cVar1 == '\x02') && (*(uint *)(param_1 + 0x470) != 0)) {
      puVar2 = (undefined4 *)func_0052FBA0(iVar4 + 0x3dbbc,*(uint *)(param_1 + 0x470));
      if (((*DAT_00280b70 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00280b70), iVar4 != 0)) {
        *DAT_00280b84 = DAT_00280b88;
      }
      if ((puVar2 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar2)(puVar2,DAT_00280b84), iVar4 == 0)) {
        puVar2 = (undefined4 *)0x0;
      }
      if ((puVar2[0x107] != 0) && (*(char *)((int)puVar2 + 0x41a) != '\0')) {
        return func_004CF478(puVar2[0x107],1);
      }
    }
  }
  return 0;
}

