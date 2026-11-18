#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern float DAT_00467f10;
extern float DAT_00467f14;
extern uint DAT_00467f18;

// USA 00467DC4 <- EU 00467D9C (Ghidra, non-matching)
// GLOBAL DAT_00467f10 float
// GLOBAL DAT_00467f14 float
// GLOBAL DAT_00467f18 uint

void func_00467DC4(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fparam_0;
  float fparam_0_00;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar5 = (ulonglong)DAT_00467f18;
  fparam_0 = DAT_00467f10;
  fparam_0_00 = DAT_00467f14;
  do {
    piVar1 = (int *)(param_1 + 0x108);
    if (uVar3 < 4) {
      piVar1 = piVar1 + uVar3;
    }
    if (*piVar1 != 0) {
      piVar1 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar1 = piVar1 + uVar3;
      }
      iVar2 = 0;
      if (*(int *)(*piVar1 + 0xb0) == (int)*(char *)(param_1 + 0x129)) {
        piVar1 = (int *)(param_1 + 0x108);
        if (uVar3 < 4) {
          piVar1 = piVar1 + uVar3;
        }
        if (*(int *)(*piVar1 + 0xb0) == (int)*(char *)(param_1 + 0x12a)) {
          iVar2 = 3;
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        piVar1 = (int *)(param_1 + 0x108);
        if (uVar3 < 4) {
          piVar1 = piVar1 + uVar3;
        }
        if (*(int *)(*piVar1 + 0xb0) == (int)*(char *)(param_1 + 0x12a)) {
          iVar2 = 2;
        }
      }
      piVar1 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar1 = piVar1 + uVar3;
      }
      iVar4 = *piVar1;
      if (iVar2 == 0) {
        func_00167E04(*(int *)(iVar4 + 0x1c),*(int *)(iVar4 + 0xac),0);
      }
      else if (iVar2 == 1) {
        func_00167E04(*(int *)(iVar4 + 0x1c),*(int *)(iVar4 + 0xac),1);
        func_002316CC(iVar4 + 0x5c,fparam_0);
      }
      else if (iVar2 == 2) {
        func_00167E04(*(int *)(iVar4 + 0x1c),*(int *)(iVar4 + 0xac),1);
        func_002316CC(iVar4 + 0x5c,fparam_0_00);
      }
      else if (iVar2 == 3) {
        func_00167E04(*(int *)(iVar4 + 0x1c),*(int *)(iVar4 + 0xac),1);
        func_002316CC(iVar4 + 0x5c,ALBW_AS_F32(uVar5));
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  return;
}

