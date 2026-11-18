#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B083C(void);
extern int func_00584A38(int param_1,int param_2);
extern int DAT_0053fea0;
extern int *DAT_0053fea4;
extern int *DAT_0053fea8;
extern uint *DAT_0053feac;
extern undefined4 DAT_0053feb0;
extern undefined4 *DAT_0053feb4;
extern uint *DAT_0053feb8;
extern undefined4 *DAT_0053febc;

// USA 0053FD24 <- EU 0053FCFC (Ghidra, non-matching)
// GLOBAL DAT_0053fea0 int
// GLOBAL DAT_0053fea4 int *
// GLOBAL DAT_0053fea8 int *
// GLOBAL DAT_0053feac uint *
// GLOBAL DAT_0053feb0 undefined4
// GLOBAL DAT_0053feb4 undefined4 *
// GLOBAL DAT_0053feb8 uint *
// GLOBAL DAT_0053febc undefined4 *

/* WARNING: Removing unreachable block (ram,0x0053fe44) */
/* WARNING: Removing unreachable block (ram,0x0053fe54) */
/* WARNING: Removing unreachable block (ram,0x0053fe58) */

undefined4 func_0053FD24(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = DAT_0053fea8;
  iVar6 = DAT_0053fea0;
  iVar4 = *(int *)(param_1 + 0x14);
  if (*(char *)(DAT_0053fea0 + *(short *)(iVar4 + 0x42) * 0x10) == '\x13') {
    return 0;
  }
  if (*(short *)(*(int *)(iVar4 + 0x48) + 4) == 0x7b) {
    return 0;
  }
  if ((*(char *)(*DAT_0053fea4 + 0x18) != '\a' && *(char *)(*DAT_0053fea4 + 0x18) != '%') &&
     (iVar5 = func_004B083C(), uVar2 = DAT_0053feb0, iVar5 == 0)) {
    piVar7 = *(int **)(*piVar1 + 0x44);
    if (((*DAT_0053feac & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0053feac), iVar5 != 0)) {
      *DAT_0053feb4 = uVar2;
    }
    if ((piVar7 == (int *)0x0) ||
       (iVar5 = (**(code **)(*piVar7 + 8))(piVar7,DAT_0053feb4), iVar5 == 0)) {
      piVar7 = *(int **)(*piVar1 + 0x44);
      if (((*DAT_0053feb8 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0053feb8), iVar5 != 0)) {
        *DAT_0053febc = uVar2;
      }
      if ((piVar7 != (int *)0x0) &&
         (iVar5 = (**(code **)(*piVar7 + 8))(piVar7,DAT_0053febc), iVar5 != 0)) {
        bVar3 = false;
        goto LAB_0053fe3c;
      }
      bVar3 = false;
      if ((*(uint *)(iVar6 + *(short *)(iVar4 + 0x42) * 0x10 + 4) & 1) == 0) goto LAB_0053fe3c;
    }
  }
  bVar3 = true;
LAB_0053fe3c:
  if ((((*(int *)(iVar4 + 0xd4) != 0) && ((*(ushort *)(*(int *)(iVar4 + 0xd4) + 0x2e) & 0xff) == 1))
      || (bVar3)) && (iVar6 = func_00584A38(*piVar1,*(int *)(iVar4 + 0x70)), iVar6 != 0)) {
    return 1;
  }
  return 0;
}

