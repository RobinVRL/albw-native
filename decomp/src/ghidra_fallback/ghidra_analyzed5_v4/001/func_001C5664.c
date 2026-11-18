#include "ghidra_types.h"

extern int func_001C52B0(int param_1,uint param_2,undefined4 param_3);
extern int func_001C5470(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004C3E44(int param_1,int param_2);
extern int func_0051AE40(int param_1);
extern int func_0058D8F0(int param_1);
extern int func_0065BCBC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001c5798;
extern int *DAT_001c579c;

// USA 001C5664 <- EU 001C5664 (Ghidra, non-matching)
// GLOBAL DAT_001c5798 int *
// GLOBAL DAT_001c579c int *

undefined4 func_001C5664(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = *(char *)(param_1 + 0x7e0) == '\x02';
  if (!bVar4) {
    if (*(char *)(param_1 + 0x7e0) == '\x04') {
      func_001C5470(param_1,param_2,param_3,param_4);
      iVar3 = *(int *)(*(int *)(param_1 + 0x7b4) + 0x14);
      if (*(float *)(iVar3 + 8) == *(float *)(iVar3 + 0x14)) {
        func_001C52B0(param_1,1,0);
      }
    }
    else {
      iVar3 = func_001C5470(param_1,param_2,param_3,param_4);
      if (iVar3 != 0) {
        bVar4 = true;
        func_001C52B0(param_1,2,0);
      }
    }
  }
  piVar2 = DAT_001c579c;
  iVar3 = *DAT_001c5798;
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x7e2) = 2;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x7e2);
    if (cVar1 == '\0') {
      iVar3 = func_004C3E44(iVar3,*(int *)(param_1 + 0x7dc));
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x7e2) = 1;
      }
      return 0;
    }
    if (cVar1 == '\x01') {
      if (*(uint *)(iVar3 + 0x9c0) < 2) {
        *(undefined1 *)(param_1 + 0x7e2) = 2;
      }
      return 0;
    }
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        return 0;
      }
      iVar3 = func_0058D8F0(*DAT_001c579c);
      if (iVar3 != 0) {
        return 0;
      }
      return func_0065BCBC((undefined4 *)(param_1 + 0x788),3);
    }
  }
  if (!bVar4) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x7e2) = 3;
  return func_0051AE40(*piVar2);
}

