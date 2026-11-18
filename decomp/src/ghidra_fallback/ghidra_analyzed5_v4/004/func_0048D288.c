#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0048BEE8(undefined4 *param_1,undefined4 param_2);
extern int func_0048D77C(int param_1,undefined4 param_2);
extern int func_004983C0(undefined4 *param_1,undefined4 param_2);
extern uint *DAT_0048d3e4;
extern undefined4 *DAT_0048d3e8;
extern undefined4 DAT_0048d3ec;
extern undefined4 DAT_0048d3f0;

// USA 0048D288 <- EU 0048D260 (Ghidra, non-matching)
// GLOBAL DAT_0048d3e4 uint *
// GLOBAL DAT_0048d3e8 undefined4 *
// GLOBAL DAT_0048d3ec undefined4
// GLOBAL DAT_0048d3f0 undefined4

undefined4 func_0048D288(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x2c);
  if (((*DAT_0048d3e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0048d3e4), iVar1 != 0)) {
    *DAT_0048d3e8 = DAT_0048d3ec;
  }
  if ((puVar3 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar3)(puVar3,DAT_0048d3e8), iVar1 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    func_0010B380((undefined4 *)(param_1 + 0xd0),1,(int *)0x0,4);
    puVar2 = (undefined4 *)func_0010CF28(DAT_0048d3f0,(int *)0x0,4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = func_0048BEE8(puVar2,param_1);
    }
    func_0010F1DC((int *)(param_1 + 0xc0),(int *)(*(int *)(param_1 + 0xcc) + (int)puVar3));
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    iVar1 = func_0010CF28(0x15c,(int *)0x0,4);
    if (iVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = func_0048D77C(iVar1,param_1);
    }
    if (*(int *)(param_1 + 0xd0) < *(int *)(param_1 + 0xd4)) {
      *(void **)(*(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xd0) * 4) = pvVar4;
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    }
    puVar3 = (undefined4 *)func_0010CF28(0x2c,(int *)0x0,4);
    iVar1 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = func_004983C0(puVar3,pvVar4);
    }
    func_0010F1DC((int *)((int)pvVar4 + 0x13c),(int *)(*(int *)((int)pvVar4 + 0x148) + iVar1));
    *(int *)((int)pvVar4 + 0x144) = *(int *)((int)pvVar4 + 0x144) + 1;
  }
  else {
    func_0010B380((undefined4 *)(param_1 + 0xd0),puVar3[1],(int *)0x0,4);
    puVar3 = (undefined4 *)puVar3[2];
    if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048d300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)*puVar3)(puVar3,param_1);
    }
  }
  return 0;
}

