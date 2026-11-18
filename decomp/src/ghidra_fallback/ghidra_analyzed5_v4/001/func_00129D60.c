#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int *DAT_00129ed0;
extern int DAT_00129ed4;
extern int DAT_00129ed8;
extern float DAT_00129edc;
extern undefined4 DAT_00129ee0;

// USA 00129D60 <- EU 00129D60 (Ghidra, non-matching)
// GLOBAL DAT_00129ed0 int *
// GLOBAL DAT_00129ed4 int
// GLOBAL DAT_00129ed8 int
// GLOBAL DAT_00129edc float
// GLOBAL DAT_00129ee0 undefined4

void func_00129D60(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar5 = DAT_00129edc;
  piVar2 = (int *)(param_1 + 0x904);
  uVar6 = DAT_00129ee0;
  switch(*(undefined1 *)(param_1 + 0x974)) {
  case 0:
    iVar4 = func_0051D2F4(piVar2,-*DAT_00129ed0,DAT_00129ed8,DAT_00129ed4,DAT_00129edc);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x974) = 1;
      *(undefined4 *)(param_1 + 0x960) = 0xf;
LAB_00129e6c:
      *(undefined4 *)(param_1 + 0x964) = uVar6;
      *(undefined4 *)(param_1 + 0x95c) = 0;
      return;
    }
    break;
  case 1:
    uVar3 = *(uint *)(param_1 + 0x95c);
    if (*(uint *)(param_1 + 0x960) <= uVar3) {
      if (*(uint *)(param_1 + 0x96c) <= *(uint *)(param_1 + 0x968)) {
LAB_00129e38:
        *(undefined1 *)(param_1 + 0x974) = 4;
        return;
      }
      *(uint *)(param_1 + 0x968) = *(uint *)(param_1 + 0x968) + 1;
      uVar1 = 2;
LAB_00129e2c:
      *(undefined1 *)(param_1 + 0x974) = uVar1;
      return;
    }
    goto LAB_00129dfc;
  case 2:
    iVar4 = func_0051D2F4(piVar2,*DAT_00129ed0,DAT_00129ed8,DAT_00129ed4,DAT_00129edc);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x974) = 3;
      *(undefined4 *)(param_1 + 0x960) = 0xf;
      goto LAB_00129e6c;
    }
    break;
  case 3:
    uVar3 = *(uint *)(param_1 + 0x95c);
    if (*(uint *)(param_1 + 0x960) <= uVar3) {
      if (*(uint *)(param_1 + 0x96c) <= *(uint *)(param_1 + 0x968)) goto LAB_00129e38;
      *(uint *)(param_1 + 0x968) = *(uint *)(param_1 + 0x968) + 1;
      uVar1 = 0;
      goto LAB_00129e2c;
    }
LAB_00129dfc:
    *(uint *)(param_1 + 0x95c) = uVar3 + 1;
    break;
  case 4:
    fVar5 = DAT_00129edc;
    iVar4 = func_0051D2F4(piVar2,0,DAT_00129ed8,DAT_00129ed4,DAT_00129edc);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x974) = 5;
    }
    return;
  }
  return;
}

