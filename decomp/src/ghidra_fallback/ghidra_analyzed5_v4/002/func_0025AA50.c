#include "ghidra_types.h"

extern int func_002599A4(undefined4 *param_1,int param_2);
extern int func_00259CC4(int param_1,uint param_2);
extern int func_00538F00(undefined4 param_1,int *param_2);
extern int func_00540A70(int param_1,int *param_2);
extern int DAT_0025ac18;
extern int *DAT_0025ac1c;
extern int *DAT_0025ac20;
extern int DAT_0025ac24;

// USA 0025AA50 <- EU 0025AA78 (Ghidra, non-matching)
// GLOBAL DAT_0025ac18 int
// GLOBAL DAT_0025ac1c int *
// GLOBAL DAT_0025ac20 int *
// GLOBAL DAT_0025ac24 int

undefined4 func_0025AA50(undefined4 *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar3 = DAT_0025ac24;
  piVar2 = DAT_0025ac1c;
  iVar5 = DAT_0025ac18;
  cVar1 = *(char *)(*DAT_0025ac20 + 0x18);
  if (cVar1 == '\0') {
    local_20 = DAT_0025ac24;
    local_1c = *(undefined4 *)(DAT_0025ac18 + 0x24);
    iVar4 = func_00540A70(*DAT_0025ac1c,&local_20);
    if (iVar4 != 0) {
      func_00259CC4((int)param_1,2);
      func_00259CC4((int)param_1,0xc);
    }
  }
  else if (cVar1 == '\f') {
    local_20 = DAT_0025ac24;
    local_1c = *(undefined4 *)(DAT_0025ac18 + 0x24);
    iVar4 = func_00538F00(param_1,&local_20);
    if (iVar4 != 0) {
      func_00259CC4((int)param_1,0);
    }
  }
  else if (cVar1 == '\x10') {
    local_1c = *(undefined4 *)(DAT_0025ac18 + 100);
    local_20 = DAT_0025ac24;
    iVar4 = func_00540A70(*DAT_0025ac1c,&local_20);
    if (iVar4 != 0) {
      func_00259CC4((int)param_1,0x10);
    }
  }
  iVar4 = param_1[0xf];
  if (iVar4 != 4) {
    if (iVar4 == 5) {
      local_1c = *(undefined4 *)(iVar5 + 0x10);
      local_20 = iVar3;
      iVar5 = func_00540A70(*piVar2,&local_20);
      if (iVar5 != 0) {
        func_00259CC4((int)param_1,0);
      }
      goto LAB_0025ac04;
    }
    if (iVar4 != 6) goto LAB_0025ac04;
  }
  local_1c = *(undefined4 *)(iVar5 + 0x10);
  local_20 = iVar3;
  iVar5 = func_00540A70(*piVar2,&local_20);
  if (iVar5 != 0) {
    func_00259CC4((int)param_1,0);
    func_00259CC4((int)param_1,2);
  }
LAB_0025ac04:
  return func_002599A4(param_1,param_2);
}

