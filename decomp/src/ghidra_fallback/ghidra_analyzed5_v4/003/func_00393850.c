#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern void func_00249920(int param_1,int param_2);
extern int func_00255484(int param_1,int param_2,undefined4 param_3);
extern int func_002904E4(int param_1);
extern int func_002924D0(int param_1,undefined1 param_2);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int *DAT_003939a4;
extern int *DAT_003939a8;
extern uint *DAT_003939ac;
extern undefined4 *DAT_003939b0;
extern undefined4 DAT_003939b4;
extern undefined4 DAT_003939b8;
extern int *DAT_003939bc;
extern undefined4 DAT_003939c0;
extern undefined4 DAT_003939c4;
extern undefined4 DAT_003939c8;

// USA 00393850 <- EU 0039382C (Ghidra, non-matching)
// GLOBAL DAT_003939a4 int *
// GLOBAL DAT_003939a8 int *
// GLOBAL DAT_003939ac uint *
// GLOBAL DAT_003939b0 undefined4 *
// GLOBAL DAT_003939b4 undefined4
// GLOBAL DAT_003939b8 undefined4
// GLOBAL DAT_003939bc int *
// GLOBAL DAT_003939c0 undefined4
// GLOBAL DAT_003939c4 undefined4
// GLOBAL DAT_003939c8 undefined4

undefined4 func_00393850(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float in_s0;
  undefined4 uVar5;
  
  piVar2 = DAT_003939a4;
  if (*(char *)(param_1 + 0xb3c) == '\0') {
    func_002924D0(*DAT_003939a4,0);
    *(undefined1 *)(param_1 + 0xb3c) = 1;
  }
  else if (*(char *)(param_1 + 0xb3c) == '\x01') {
    if (*(int *)(param_1 + 0xb5c) == 0x15e) {
      func_00255484(*DAT_003939a4,0,0);
      func_00255484(*piVar2,0x24,0);
      func_002904E4(*piVar2);
      puVar3 = (undefined4 *)func_0052FBDC(*DAT_003939a8 + 0x3dbbc,*(int *)(param_1 + 0xb40),0);
      if (puVar3 != (undefined4 *)0x0) {
        if (((*DAT_003939ac & 1) == 0) && (iVar4 = func_00100174((int *)DAT_003939ac), iVar4 != 0))
        {
          *DAT_003939b0 = DAT_003939b4;
        }
        iVar4 = (**(code **)*puVar3)(puVar3,DAT_003939b0);
        if (iVar4 == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        func_00249920((int)puVar3,DAT_003939b8);
      }
    }
    if (*(int *)(param_1 + 0xb5c) == 700) {
      func_004AD9E8(*DAT_003939bc,3,0,1,in_s0);
    }
    if (*(uint *)(param_1 + 0xb60) <= *(uint *)(param_1 + 0xb5c)) {
      uVar5 = DAT_003939c8;
      uVar1 = DAT_003939c0;
      if (*(char *)(param_1 + 0xbba) != '\0') {
        uVar5 = DAT_003939c4;
        uVar1 = 600;
      }
      *(undefined4 *)(param_1 + 0xb6c) = uVar1;
      *(undefined4 *)(param_1 + 0xb70) = uVar5;
      *(undefined4 *)(param_1 + 0xb68) = 0;
      return 1;
    }
    *(uint *)(param_1 + 0xb5c) = *(uint *)(param_1 + 0xb5c) + 1;
  }
  return 0;
}

