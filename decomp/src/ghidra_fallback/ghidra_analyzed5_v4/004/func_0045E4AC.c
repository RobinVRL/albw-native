#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0023194C(int param_1,undefined4 param_2);
extern int func_0045DCB0(int param_1);
extern int func_0054D224(int *param_1);
extern int func_0054D240(short *param_1);
extern int func_0066D78C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0045e590;
extern undefined4 DAT_0045e594;
extern float DAT_0045e598;

// USA 0045E4AC <- EU 0045E484 (Ghidra, non-matching)
// GLOBAL DAT_0045e590 int *
// GLOBAL DAT_0045e594 undefined4
// GLOBAL DAT_0045e598 float

undefined4 func_0045E4AC(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  
  uVar4 = DAT_0045e594;
  piVar3 = DAT_0045e590;
  iVar5 = *(int *)(param_1 + 0x1c);
  cVar1 = *(char *)(iVar5 + 0xd);
  bVar8 = cVar1 == '\x03';
  if (bVar8) {
    cVar1 = *(char *)(iVar5 + 0xe);
  }
  bVar9 = bVar8 && cVar1 == '\x03';
  if (bVar8 && cVar1 == '\x03') {
    bVar9 = *(byte *)(iVar5 + 0x168) == param_2;
  }
  if (!bVar9) {
    *(char *)(iVar5 + 0x168) = (char)param_2;
    iVar2 = (int)(short)param_2 * (int)(short)uVar4;
    bVar8 = func_0054D224((int *)(*piVar3 + 0x9cc + iVar2 * 4));
    if ((bVar8) && (bVar8 = func_0054D240((short *)(*piVar3 + iVar2 * 4 + 0x172c)), bVar8)) {
      if (*(char *)(iVar5 + 0x9c) == '\x01' || *(char *)(iVar5 + 0x9c) == '\x02') {
        uVar7 = 3;
        puVar6 = (undefined4 *)(iVar5 + 0x98);
LAB_0045e588:
        return func_0066D78C(puVar6,uVar7);
      }
    }
    else {
      if (*(char *)(iVar5 + 0x9c) != '\x01' && *(char *)(iVar5 + 0x9c) != '\x02') {
        func_0045DCB0(iVar5);
        return func_0066D78C((undefined4 *)(iVar5 + 0x98),1);
      }
      *(char *)(iVar5 + 0x168) = (char)param_2;
      if (*(char *)(iVar5 + 0x78) == '\0') {
        uVar7 = 1;
        puVar6 = (undefined4 *)(iVar5 + 0x74);
        goto LAB_0045e588;
      }
      if (*(char *)(iVar5 + 0x78) == '\x02') {
        func_002317C0((undefined2 *)(iVar5 + 0x110),DAT_0045e598);
        func_0023194C(iVar5 + 0x110,4);
        return func_0045DCB0(iVar5);
      }
    }
  }
  return 0;
}

