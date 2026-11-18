#include "ghidra_types.h"


// USA 003E5228 <- EU 003E5208 (Ghidra, non-matching)

int * func_003E5228(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  switch(param_1[7]) {
  case 0:
    uVar1 = 4;
    break;
  case 1:
    uVar1 = 3;
    break;
  case 2:
  case 3:
  case 4:
    uVar1 = 2;
  }
  if (3 < uVar1) {
    uVar1 = 3;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  iVar3 = uVar1 * 0x14000;
  uVar1 = 0;
  switch(param_1[4]) {
  case 0:
    uVar1 = 4;
    break;
  case 1:
    uVar1 = 3;
    break;
  case 2:
  case 3:
  case 4:
    uVar1 = 2;
  }
  uVar2 = uVar1;
  if (3 < uVar1) {
    uVar2 = 3;
  }
  param_1[3] = iVar3;
  param_1[2] = iVar3;
  iVar3 = iVar3 + uVar2 * 0x19000;
  if ((char)param_1[1] != '\0') {
    uVar1 = 0;
    switch(param_1[4]) {
    case 0:
      uVar1 = 4;
      break;
    case 1:
      uVar1 = 3;
      break;
    case 2:
    case 3:
    case 4:
      uVar1 = 2;
    }
    uVar2 = uVar1;
    if (3 < uVar1) {
      uVar2 = 3;
    }
    param_1[3] = iVar3;
    iVar3 = iVar3 + uVar2 * 0x19000;
  }
  if (3 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = iVar3 + uVar1 * 0x7000;
  return param_1;
}

