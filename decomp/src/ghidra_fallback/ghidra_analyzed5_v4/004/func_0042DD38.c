#include "ghidra_types.h"

extern int func_0042A260(int param_1,int param_2,int param_3);
extern int func_0042A9F0(int param_1,int param_2,int param_3);
extern int func_0042AD18(int param_1,int param_2,int param_3);
extern int func_0042ADDC(int param_1,int param_2,int param_3);
extern int func_0042B128(int param_1,int param_2,int param_3);
extern int func_0042B5DC(int param_1,int param_2,int param_3);
extern int func_0042B834(int param_1,int param_2,int param_3);
extern int func_0042B9C8(int param_1,int param_2,int param_3);
extern int func_0042BB2C(int param_1,int param_2,int param_3);
extern int func_0042C2DC(int param_1,int param_2,int param_3);
extern int func_0042C7B8(int param_1,int param_2,int param_3);
extern int func_0042CBE4(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0042D064(int param_1,int param_2,int param_3);
extern int func_0042D668(int param_1,float *param_2,int param_3);
extern int func_0042D784(int param_1,float *param_2,int param_3);
extern int func_0042E170(int param_1,int param_2,int param_3);
extern int func_0042E2E8(int param_1,int param_2,int param_3);
extern int func_004363B4(int param_1);
extern float DAT_0042e14c;

// USA 0042DD38 <- EU 0042DD18 (Ghidra, non-matching)
// GLOBAL DAT_0042e14c float

/* WARNING: Type propagation algorithm not settling */

uint func_0042DD38(int param_1,int param_2,int param_3)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  switch(*(undefined2 *)(param_1 + 0x54)) {
  default:
LAB_0042e0e0:
    return 0;
  case 1:
    sVar1 = *(short *)(param_2 + 0x54);
    if (sVar1 == 6) {
      iVar5 = func_0042D668(param_2,(float *)(param_1 + 4),param_3);
    }
    else {
      if (sVar1 != 7) {
        if (sVar1 != 8) {
          return 0;
        }
        iVar5 = func_0042CBE4(param_2,(float *)(param_1 + 4),param_3,DAT_0042e14c);
        break;
      }
      iVar5 = func_0042D784(param_2,(float *)(param_1 + 4),param_3);
    }
joined_r0x0042e050:
    if (iVar5 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
    goto LAB_0042dec0;
  case 5:
    sVar1 = *(short *)(param_2 + 0x54);
    if (sVar1 == 6) {
      iVar5 = func_0042AD18(param_2,param_1,param_3);
    }
    else {
      if (sVar1 != 7) {
        if (sVar1 == 8) {
          iVar5 = func_0042E2E8(param_2,param_1,param_3);
        }
        else {
          if (sVar1 != 9) {
            return 0;
          }
          iVar5 = func_0042ADDC(param_2,param_1,param_3);
        }
        goto joined_r0x0042e050;
      }
      iVar5 = func_0042B834(param_2,param_1,param_3);
    }
    break;
  case 6:
    switch(*(undefined2 *)(param_2 + 0x54)) {
    default:
      return 0;
    case 1:
      uVar4 = func_0042D668(param_1,(float *)(param_2 + 4),param_3);
      return uVar4;
    case 5:
      uVar4 = func_0042AD18(param_1,param_2,param_3);
      return uVar4;
    case 6:
      uVar4 = func_0042B5DC(param_1,param_2,param_3);
      return uVar4;
    case 7:
      uVar4 = func_0042C2DC(param_1,param_2,param_3);
      return uVar4;
    case 8:
      uVar4 = func_0042A260(param_1,param_2,param_3);
      return uVar4;
    case 9:
      uVar4 = func_0042B9C8(param_1,param_2,param_3);
      return uVar4;
    }
  case 7:
    switch(*(undefined2 *)(param_2 + 0x54)) {
    default:
      goto LAB_0042e0e0;
    case 1:
      uVar4 = func_0042D784(param_1,(float *)(param_2 + 4),param_3);
      return uVar4;
    case 5:
      uVar4 = func_0042B834(param_1,param_2,param_3);
      return uVar4;
    case 6:
      iVar5 = func_0042C2DC(param_2,param_1,param_3);
      break;
    case 7:
      uVar4 = func_0042D064(param_1,param_2,param_3);
      return uVar4;
    case 8:
      uVar4 = func_0042B128(param_1,param_2,param_3);
      return uVar4;
    case 9:
      iVar5 = func_0042C7B8(param_2,param_1,param_3);
    }
    break;
  case 8:
    switch(*(undefined2 *)(param_2 + 0x54)) {
    default:
      goto LAB_0042e0e0;
    case 1:
      uVar4 = func_0042CBE4(param_1,(float *)(param_2 + 4),param_3,DAT_0042e14c);
      return uVar4;
    case 5:
      uVar4 = func_0042E2E8(param_1,param_2,param_3);
      return uVar4;
    case 6:
      iVar5 = func_0042A260(param_2,param_1,param_3);
      break;
    case 7:
      iVar5 = func_0042B128(param_2,param_1,param_3);
      break;
    case 8:
      uVar4 = func_0042E170(param_1,param_2,param_3);
      return uVar4;
    case 9:
      cVar2 = func_0042A9F0(param_2,param_1,param_3);
      if (cVar2 == '\0') {
        return 0;
      }
      goto joined_r0x0042df44;
    }
    break;
  case 9:
    switch(*(undefined2 *)(param_2 + 0x54)) {
    case 5:
      uVar4 = func_0042ADDC(param_1,param_2,param_3);
      return uVar4;
    case 6:
      iVar5 = func_0042B9C8(param_2,param_1,param_3);
      break;
    case 7:
      uVar4 = func_0042C7B8(param_1,param_2,param_3);
      return uVar4;
    case 8:
      bVar3 = func_0042A9F0(param_1,param_2,param_3);
      return (uint)bVar3;
    case 9:
      uVar4 = func_0042BB2C(param_1,param_2,param_3);
      return uVar4;
    default:
      goto LAB_0042e0e0;
    }
  }
  if (iVar5 == 0) {
    return 0;
  }
joined_r0x0042df44:
  if (param_3 != 0) {
LAB_0042dec0:
    func_004363B4(param_3);
  }
  return 1;
}

