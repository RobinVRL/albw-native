// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_002982c4;
extern int *DAT_002982c8;
extern undefined4 _DAT_002982cc;

// USA 0029822C <- EU 00298208 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_002982c4 int *
// GLOBAL DAT_002982c8 int *
// GLOBAL LAB_002982cc undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0029822C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ushort uVar8;
  int *piVar9;
  bool bVar10;
  
  piVar5 = DAT_002982c8;
  piVar4 = DAT_002982c4;
  uVar2 = *(ushort *)(param_1 + 0x36);
  bVar1 = *(byte *)(param_1 + 0x34);
  piVar6 = (int *)func_005841A8(*DAT_002982c4,*DAT_002982c8,*(int **)(_DAT_002982cc + *DAT_002982c4)
                               );
  bVar3 = false;
  piVar9 = *(int **)(*piVar4 + 0x3dbc8);
  do {
    if (piVar6 == piVar9) {
      return 0;
    }
    iVar7 = *piVar6;
    uVar8 = (ushort)*(byte *)(iVar7 + 0x34);
    bVar10 = uVar8 == bVar1;
    if (bVar10) {
      uVar8 = *(ushort *)(iVar7 + 0x36);
    }
    if (bVar10 && uVar8 == (uVar2 & 0xff)) {
      if (iVar7 == param_1) {
        bVar3 = true;
      }
      else if ((bVar3) || (iVar7 = func_00588BE4(param_1), iVar7 != *piVar5)) {
        return 1;
      }
    }
    piVar6 = (int *)func_005841A8(*piVar4,*piVar5,piVar6 + 1);
  } while( true );
}

