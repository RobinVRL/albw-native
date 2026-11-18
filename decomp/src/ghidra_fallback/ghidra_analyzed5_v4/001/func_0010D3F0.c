#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010E2A4(undefined4 param_1,undefined4 param_2);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int *DAT_0010d5a8;
extern int DAT_0010d5ac;
extern undefined4 DAT_0010d5b0;
extern undefined4 DAT_0010d5b4;
extern undefined4 DAT_0010d5b8;
extern undefined4 DAT_0010d5bc;
extern undefined4 DAT_0010d5c0;
extern undefined1 DAT_0010d5c4;

// USA 0010D3F0 <- EU 0010D3F0 (Ghidra, non-matching)
// GLOBAL DAT_0010d5a8 int *
// GLOBAL DAT_0010d5ac int
// GLOBAL DAT_0010d5b0 undefined4
// GLOBAL DAT_0010d5b4 undefined4
// GLOBAL DAT_0010d5b8 undefined4
// GLOBAL DAT_0010d5bc undefined4
// GLOBAL DAT_0010d5c0 undefined4
// GLOBAL DAT_0010d5c4 undefined1

int func_0010D3F0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(uint * *)(albw_frame + 0xc))
  iVar1 = param_1 + 0x10;
  *(int *)(param_1 + 0x14) = iVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(int *)(param_1 + 0x2c) = param_1 + 0x28;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x28) = param_1 + 0x28;
  piVar2 = DAT_0010d5a8;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*piVar2 != 0) {
    piVar2 = func_0010E2A4(*piVar2,param_1);
    puVar3 = (undefined4 *)func_0010CF28(0x4c,piVar2,4);
    local_28 = DAT_0010d5ac;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = puVar3;
      puVar3[7] = 0;
      puVar3 = func_0010CE7C(puVar3);
      *puVar3 = DAT_0010d5b0;
      puVar3[9] = puVar3 + 0xb;
      puVar3[10] = 0x20;
      *(undefined1 *)(puVar3[9] + 0x1f) = 0;
      *(undefined1 *)puVar3[9] = 0;
      puVar3[8] = DAT_0010d5bc;
      *puVar3 = DAT_0010d5c0;
    }
    *(undefined4 **)(param_1 + 0x34) = puVar3;
    local_24 = (uint *)&DAT_0010d5c4;
    puVar5 = (uint *)puVar3[9];
    (**(code **)(local_28 + 8))(&local_28);
    uVar4 = 0;
    do {
      if (*(char *)((int)local_24 + uVar4) == '\0') {
        if ((int)uVar4 < 0x40001) goto LAB_0010d51c;
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x40001);
    uVar4 = 0;
LAB_0010d51c:
    if ((int)puVar3[10] <= (int)uVar4) {
      uVar4 = puVar3[10] - 1;
    }
    (**(code **)(local_28 + 8))(&local_28);
    func_0010E3C4(puVar5,local_24,uVar4);
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = puVar3 + 4;
    }
    *(undefined1 *)((int)puVar5 + uVar4) = 0;
    iVar1 = piVar2[3];
    if (iVar1 != 0) {
      piVar2[3] = 0;
      func_0010F1F8(piVar2,in_s0);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
    }
    piVar2[3] = param_1 + 0x10;
    func_0010F1DC((int *)(param_1 + 0x10),piVar2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return param_1;
}

