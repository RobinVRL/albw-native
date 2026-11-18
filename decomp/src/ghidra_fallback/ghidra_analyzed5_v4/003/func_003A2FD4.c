#include "ghidra_types.h"

extern int func_003974A0(int param_1,undefined4 param_2);
extern int func_003A3584(int param_1);

// USA 003A2FD4 <- EU 003A2FB0 (Ghidra, non-matching)

undefined4 func_003A2FD4(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  if (*param_1 == param_2) {
    return 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(int **)(param_1 + 4));
  }
  *param_1 = (byte)param_2;
  switch(param_2) {
  default:
    goto switchD_003a2fe8_caseD_0;
  case 1:
  case 0xc:
    pbVar1 = param_1 + 0xc;
    pbVar2 = param_1 + 0x1f0;
    break;
  case 2:
    pbVar1 = param_1 + 0x1f0;
    pbVar2 = param_1 + 0xc;
    break;
  case 3:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x2cc;
    break;
  case 4:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x30c;
    break;
  case 5:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x8b0;
    break;
  case 6:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x358;
    break;
  case 7:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x394;
    break;
  case 8:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x414;
    break;
  case 9:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x3d4;
    break;
  case 10:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x454;
    break;
  case 0xb:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x554;
    break;
  case 0xd:
    *(byte **)(param_1 + 4) = param_1 + 0x5e8;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*(int *)(param_1 + 0x5e8) + 0x10))(param_1 + 0x5e8,0);
    goto switchD_003a2fe8_caseD_0;
  case 0xe:
    *(byte **)(param_1 + 4) = param_1 + 0x6f8;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*(int *)(param_1 + 0x6f8) + 0x10))(param_1 + 0x6f8,0);
    goto switchD_003a2fe8_caseD_0;
  case 0xf:
    *(byte **)(param_1 + 4) = param_1 + 0x834;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*(int *)(param_1 + 0x834) + 0x10))(param_1 + 0x834,0);
    goto switchD_003a2fe8_caseD_0;
  case 0x11:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 1;
    goto LAB_003a3288;
  case 0x12:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 3;
    goto LAB_003a3288;
  case 0x13:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 4;
    goto LAB_003a3288;
  case 0x14:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 2;
    goto LAB_003a3288;
  case 0x15:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 7;
    goto LAB_003a3288;
  case 0x16:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 5;
    goto LAB_003a3288;
  case 0x17:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 6;
    goto LAB_003a3288;
  case 0x18:
  case 0x19:
    pbVar2 = (byte *)0x0;
    pbVar1 = param_1 + 0x870;
    break;
  case 0x1a:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 8;
    goto LAB_003a3288;
  case 0x1b:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 9;
    goto LAB_003a3288;
  case 0x1c:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 10;
    goto LAB_003a3288;
  case 0x1d:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 0xb;
    goto LAB_003a3288;
  case 0x1e:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 0xc;
LAB_003a3288:
    func_003974A0((int)(param_1 + 0x598),uVar3);
    goto switchD_003a2fe8_caseD_0;
  case 0x1f:
    *(byte **)(param_1 + 4) = param_1 + 0x598;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    func_003974A0((int)(param_1 + 0x598),0xd);
    goto switchD_003a2fe8_caseD_0;
  }
  *(byte **)(param_1 + 4) = pbVar1;
  *(byte **)(param_1 + 8) = pbVar2;
switchD_003a2fe8_caseD_0:
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4));
  return func_003A3584((int)param_1);
}

