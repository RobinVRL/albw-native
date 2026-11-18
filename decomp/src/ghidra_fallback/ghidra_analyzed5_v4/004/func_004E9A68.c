// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014A098(int param_1);
extern int func_0014A0FC(int param_1);
extern int func_00294E2C(int param_1);
extern int func_002974A0(int param_1);
extern int func_002DE9CC(int param_1,undefined4 param_2);
extern int func_002DEA2C(int param_1,undefined4 param_2);
extern int func_00407AF4(int param_1,int param_2,undefined4 param_3);
extern int func_00409F74(int param_1,uint param_2);
extern int func_0048CE10(int param_1);
extern int func_0048CE44(int param_1,undefined4 param_2);
extern int func_0048EAC0(int param_1,undefined4 param_2);
extern int func_0048EE5C(int param_1,undefined4 param_2);
extern int func_00556E64(int param_1);
extern int *DAT_004e9bc0;

// USA 004E9A68 <- EU 004E9A40 (Ghidra, non-matching)
// GLOBAL DAT_004e9bc0 int *

void func_004E9A68(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x79) == '\0') {
    if (*(char *)(iVar3 + 0x148) == '\0') {
      iVar3 = *(int *)(param_1 + 0x3c);
      if (*(char *)(param_1 + 0x7a) == '\0') {
        if (*(char *)(iVar3 + 0x34) != '\0') {
          func_002DE9CC(iVar3,0x1e);
          func_002974A0(*(int *)(param_1 + 0x38));
        }
      }
      else if (*(char *)(iVar3 + 0x34) == '\0') {
        func_002DEA2C(iVar3,0);
      }
    }
    else {
      func_0048EAC0(iVar3,0x1e);
      if ((*(char *)(param_1 + 0x7a) != '\0') &&
         (*(char *)(*(int *)(param_1 + 0x3c) + 0x34) != '\0')) {
        func_002DEA2C(*(int *)(param_1 + 0x3c),0);
      }
      func_002974A0(*(int *)(param_1 + 0x38));
      func_00294E2C(*(int *)(param_1 + 0x4c));
      func_0048CE10(*(int *)(param_1 + 0x30));
    }
  }
  else if (*(char *)(iVar3 + 0x148) == '\0') {
    func_0048EE5C(iVar3,0);
    iVar3 = func_00409F74(*(int *)(param_1 + 0x24) + 4,0x4000002);
    func_00407AF4(iVar3,0,0);
    func_0048CE44(*(int *)(param_1 + 0x30),0);
  }
  if ((-1 < (int)(*(uint *)(param_1 + 0x60) << 0x1d)) && (*(int *)(param_1 + 0x58) != 0)) {
    if ((*(uint *)(param_1 + 0x60) & 1) == 0) {
      bVar1 = func_00556E64(*DAT_004e9bc0);
      if (bVar1) {
        return;
      }
      func_0014A0FC(*(int *)(param_1 + 0x34));
      uVar2 = *(uint *)(param_1 + 0x60) | 1;
    }
    else {
      bVar1 = func_00556E64(*DAT_004e9bc0);
      if (!bVar1) {
        return;
      }
      func_0014A098(*(int *)(param_1 + 0x34));
      uVar2 = *(uint *)(param_1 + 0x60) & 0xfffffffe;
    }
    *(uint *)(param_1 + 0x60) = uVar2;
  }
  return;
}

