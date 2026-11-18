// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00512E74(int param_1);
extern int func_00512FA4(int param_1);
extern int func_00556E64(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00514ce0;

// USA 00514B9C <- EU 00514B74 (Ghidra, non-matching)
// GLOBAL DAT_00514ce0 int *

undefined4 func_00514B9C(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  
  cVar1 = *(char *)(param_1 + 0x548);
  puVar5 = (undefined4 *)(param_1 + 0x48c);
  *(undefined1 *)(param_1 + 0x558) = 0;
  piVar2 = DAT_00514ce0;
  if (cVar1 == '\0') {
    bVar3 = func_00556EAC(*DAT_00514ce0,0xaa);
    if (bVar3) {
      return func_0066B94C(puVar5,7);
    }
    bVar3 = func_00556E64(*piVar2);
    if ((!bVar3) && (*(char *)(param_1 + 0x514) != '\0')) {
      return func_0066B94C(puVar5,2);
    }
    *(undefined1 *)(param_1 + 0x514) = 0;
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x4cc),param_1 + 0x4d4,0x4000,0,0);
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x4d0),param_1 + 0x4e4,0x1600,0,0);
    cVar1 = *(char *)(param_1 + 0x558);
  }
  else {
    if (cVar1 == '\x05') {
      iVar4 = func_00512E74(param_1);
      if (iVar4 != 0) {
        func_0066B94C(puVar5,3);
      }
      goto LAB_00514cd0;
    }
    if (cVar1 != '\x01') goto LAB_00514cd0;
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x4d0),param_1 + 0x4e4,0x1600,0,0);
    cVar1 = *(char *)(param_1 + 0x558);
  }
  if (cVar1 != '\0') {
    func_0066B94C(puVar5,6);
  }
LAB_00514cd0:
  return func_00512FA4(param_1);
}

