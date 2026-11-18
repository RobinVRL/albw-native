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

// USA 0045E4B4 <- EU 0045E48C (Ghidra, non-matching)
// GLOBAL DAT_0045e590 int *
// GLOBAL DAT_0045e594 undefined4
// GLOBAL DAT_0045e598 float

undefined4 func_0045E4B4(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar4 = DAT_0045e594;
  piVar3 = DAT_0045e590;
  cVar1 = *(char *)(param_1 + 0xd);
  bVar7 = cVar1 == '\x03';
  if (bVar7) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  bVar8 = bVar7 && cVar1 == '\x03';
  if (bVar7 && cVar1 == '\x03') {
    bVar8 = *(byte *)(param_1 + 0x168) == param_2;
  }
  if (!bVar8) {
    *(char *)(param_1 + 0x168) = (char)param_2;
    iVar2 = (int)(short)param_2 * (int)(short)uVar4;
    bVar7 = func_0054D224((int *)(*piVar3 + 0x9cc + iVar2 * 4));
    if ((bVar7) && (bVar7 = func_0054D240((short *)(*piVar3 + iVar2 * 4 + 0x172c)), bVar7)) {
      if (*(char *)(param_1 + 0x9c) == '\x01' || *(char *)(param_1 + 0x9c) == '\x02') {
        uVar6 = 3;
        puVar5 = (undefined4 *)(param_1 + 0x98);
LAB_0045e588:
        return func_0066D78C(puVar5,uVar6);
      }
    }
    else {
      if (*(char *)(param_1 + 0x9c) != '\x01' && *(char *)(param_1 + 0x9c) != '\x02') {
        func_0045DCB0(param_1);
        return func_0066D78C((undefined4 *)(param_1 + 0x98),1);
      }
      *(char *)(param_1 + 0x168) = (char)param_2;
      if (*(char *)(param_1 + 0x78) == '\0') {
        uVar6 = 1;
        puVar5 = (undefined4 *)(param_1 + 0x74);
        goto LAB_0045e588;
      }
      if (*(char *)(param_1 + 0x78) == '\x02') {
        func_002317C0((undefined2 *)(param_1 + 0x110),DAT_0045e598);
        func_0023194C(param_1 + 0x110,4);
        return func_0045DCB0(param_1);
      }
    }
  }
  return 0;
}

