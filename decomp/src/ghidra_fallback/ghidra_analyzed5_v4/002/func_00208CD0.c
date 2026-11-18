#include "ghidra_types.h"

extern float DAT_00208e40;
extern float DAT_00208e44;
extern undefined4 DAT_00208e48;

// USA 00208CD0 <- EU 00208CD0 (Ghidra, non-matching)
// GLOBAL DAT_00208e40 float
// GLOBAL DAT_00208e44 float
// GLOBAL DAT_00208e48 undefined4

float func_00208CD0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = DAT_00208e44;
  if (*(char *)(param_1 + 0xba4) == '\0') {
    if (((((*(char *)(param_2 + 0x21) != '\x10') && (*(char *)(param_2 + 0x21) != '\x12')) &&
         (*(uint *)(param_1 + 0xbb4) <= *(uint *)(param_1 + 0xbb0))) &&
        ((*(char *)(param_1 + 0x8c0) != '\n' && (*(char *)(param_1 + 0x4b5) == '\0')))) &&
       (*(uint *)(param_1 + 0xa74) <= *(uint *)(param_1 + 0xa70))) {
      uVar2 = *(int *)(param_1 + 0xbac) + 1;
      *(uint *)(param_1 + 0xbac) = uVar2;
      uVar1 = DAT_00208e48;
      if ((uVar2 != 0) && ((uVar2 & 1) == 0)) {
        *(undefined4 *)(param_1 + 0xbb4) = 600;
        *(undefined4 *)(param_1 + 3000) = uVar1;
        *(undefined4 *)(param_1 + 0xbb0) = 0;
        return fVar3;
      }
      return fVar3;
    }
  }
  else if (*(char *)(param_1 + 0x4b5) == '\0') {
    if (*(char *)(param_2 + 0x21) != '\x02') {
      return fVar3;
    }
  }
  else {
    switch(*(undefined1 *)(param_1 + 0x8c0)) {
    case 0x10:
    case 0x11:
    case 0x14:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1d:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
      if ((*(char *)(param_1 + 0x8c0) != '\"') || (*(char *)(param_1 + 0xd18) != '\0')) {
        *(int *)(param_1 + 0xb90) = *(int *)(param_1 + 0xb90) + 1;
        return fVar3;
      }
    }
  }
  return DAT_00208e40;
}

