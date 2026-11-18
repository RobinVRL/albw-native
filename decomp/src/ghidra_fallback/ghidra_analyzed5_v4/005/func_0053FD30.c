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

// USA 0053FD30 <- EU 0053FD08 (Ghidra, non-matching)
// GLOBAL DAT_0053fea0 int
// GLOBAL DAT_0053fea4 int *
// GLOBAL DAT_0053fea8 int *
// GLOBAL DAT_0053feac uint *
// GLOBAL DAT_0053feb0 undefined4
// GLOBAL DAT_0053feb4 undefined4 *
// GLOBAL DAT_0053feb8 uint *
// GLOBAL DAT_0053febc undefined4 *

undefined4 func_0053FD30(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar2 = DAT_0053fea8;
  iVar5 = DAT_0053fea0;
  if (*(char *)(DAT_0053fea0 + *(short *)(param_1 + 0x42) * 0x10) == '\x13') {
    return 0;
  }
  if (*(short *)(*(int *)(param_1 + 0x48) + 4) == 0x7b) {
    return 0;
  }
  if ((*(char *)(*DAT_0053fea4 + 0x18) != '\a' && *(char *)(*DAT_0053fea4 + 0x18) != '%') &&
     (iVar4 = func_004B083C(), uVar3 = DAT_0053feb0, iVar4 == 0)) {
    piVar6 = *(int **)(*piVar2 + 0x44);
    if (((*DAT_0053feac & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0053feac), iVar4 != 0)) {
      *DAT_0053feb4 = uVar3;
    }
    if ((piVar6 == (int *)0x0) ||
       (iVar4 = (**(code **)(*piVar6 + 8))(piVar6,DAT_0053feb4), iVar4 == 0)) {
      piVar6 = *(int **)(*piVar2 + 0x44);
      if (((*DAT_0053feb8 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0053feb8), iVar4 != 0)) {
        *DAT_0053febc = uVar3;
      }
      if ((piVar6 != (int *)0x0) &&
         (iVar4 = (**(code **)(*piVar6 + 8))(piVar6,DAT_0053febc), iVar4 != 0)) {
        bVar1 = false;
        goto LAB_0053fe3c;
      }
      bVar1 = false;
      if ((*(uint *)(iVar5 + *(short *)(param_1 + 0x42) * 0x10 + 4) & 1) == 0) goto LAB_0053fe3c;
    }
  }
  bVar1 = true;
LAB_0053fe3c:
  if (param_2 != 0) {
    bVar1 = (bool)(bVar1 | (*(uint *)(iVar5 + *(short *)(param_1 + 0x42) * 0x10 + 4) & 0x40000) != 0
                  );
  }
  if ((((*(int *)(param_1 + 0xd4) != 0) &&
       ((*(ushort *)(*(int *)(param_1 + 0xd4) + 0x2e) & 0xff) == 1)) || (bVar1)) &&
     (iVar5 = func_00584A38(*piVar2,*(int *)(param_1 + 0x70)), iVar5 != 0)) {
    return 1;
  }
  return 0;
}

