#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00111A64(uint *param_1);
extern int func_002D0444(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841D8(int param_1,undefined4 param_2);
extern undefined4 *DAT_0024e72c;
extern int *DAT_0024e730;
extern int *DAT_0024e734;
extern undefined4 DAT_0024e738;
extern uint *DAT_0024e73c;
extern undefined4 *DAT_0024e740;

// USA 0024E5BC <- EU 0024E5BC (Ghidra, non-matching)
// GLOBAL DAT_0024e72c undefined4 *
// GLOBAL DAT_0024e730 int *
// GLOBAL DAT_0024e734 int *
// GLOBAL DAT_0024e738 undefined4
// GLOBAL DAT_0024e73c uint *
// GLOBAL DAT_0024e740 undefined4 *

void func_0024E5BC(int param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  piVar1 = DAT_0024e730;
  iVar7 = 0;
  uVar4 = func_005841D8(*DAT_0024e730,*DAT_0024e72c);
  uVar3 = DAT_0024e738;
  piVar2 = DAT_0024e734;
  bVar8 = uVar4 < *(uint *)(*(int *)(*piVar1 + 0x3dbe8) + 4);
  do {
    uVar4 = *(uint *)(param_1 + iVar7 * 4);
    if (uVar4 != 0) {
      puVar5 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar4);
      if (((*DAT_0024e73c & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0024e73c), iVar6 != 0)) {
        *DAT_0024e740 = uVar3;
      }
      if (puVar5 == (undefined4 *)0x0) {
LAB_0024e690:
        puVar5 = (undefined4 *)0x0;
      }
      else {
        param_3 = *(undefined **)*puVar5;
        iVar6 = (*(code *)param_3)(puVar5,DAT_0024e740);
        if (iVar6 == 0) goto LAB_0024e690;
      }
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = func_00111A64((uint *)(*piVar2 + 0x660));
        if ((uint)((ulonglong)uVar4 * 100 >> 0x20) < 5) {
          func_002D0444((int)puVar5,1,param_3,param_4);
        }
        else {
          func_002D0444((int)puVar5,0,param_3,param_4);
          if ((bVar8) &&
             (uVar4 = func_00111A64((uint *)(*piVar2 + 0x660)),
             (uint)((ulonglong)uVar4 * 100 >> 0x20) < 5)) {
            bVar8 = false;
            *(undefined1 *)((int)puVar5 + 0x4d1) = 1;
          }
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 6) {
      return;
    }
  } while( true );
}

