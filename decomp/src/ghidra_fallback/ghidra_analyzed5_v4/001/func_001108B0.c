#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00110EE8(int param_1,undefined4 param_2,byte *param_3,undefined4 param_4);
extern int func_00110FA0(int param_1);
extern int *DAT_00110abc;

// USA 001108B0 <- EU 001108B0 (Ghidra, non-matching)
// GLOBAL DAT_00110abc int *

void func_001108B0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define iStack_2c (*(int *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  if (*(char *)(param_2 + 0x38) != '\0') {
    piVar1 = (int *)(**(code **)**(undefined4 **)(param_2 + 0x10))();
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_3);
    param_1[1] = iVar2;
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(param_3 + 4);
  bVar6 = iVar2 == 0;
  if (bVar6) {
    iVar2 = *(int *)(param_3 + 8);
  }
  if (bVar6 && iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  for (iVar2 = *(int *)(param_2 + 0x40); iVar2 = iVar2 - *(int *)(param_2 + 0x48),
      iVar2 != (param_2 + 0x3c) - *(int *)(param_2 + 0x48);
      iVar2 = *(int *)(iVar2 + *(int *)(param_2 + 0x48) + 4)) {
    if ((*(int *)(param_3 + 4) == *(int *)(iVar2 + 0xc)) &&
       (*(int *)(param_3 + 8) == *(int *)(iVar2 + 0x10))) {
      *(undefined4 *)(iVar2 + 0x38) = 1;
      *param_1 = iVar2;
      param_1[1] = 0;
      return;
    }
  }
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  puVar3 = *(undefined4 **)(*(int *)(param_2 + 8) + 0x24);
  if ((puVar3 == (undefined4 *)0x0) ||
     (iStack_30 = param_3, iStack_2c = param_2, iVar2 = (**(code **)*puVar3)(puVar3,&iStack_30),
     iVar2 == 0)) {
    if (*(char *)(param_2 + 0x38) == '\0') {
      iVar2 = *(int *)(param_3 + 4);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        iVar2 = *(int *)(param_3 + 8);
      }
      if (!bVar6 || iVar2 != 0) {
        iVar4 = func_00110FA0(*(int *)(param_2 + 8));
        piVar1 = DAT_00110abc;
        iVar2 = 0;
        if (iVar4 != 0) {
          func_00110EE8(iVar4,param_2,(byte *)param_3,*DAT_00110abc);
          func_0010F1DC((int *)(param_2 + 0x3c),(int *)(*(int *)(param_2 + 0x48) + iVar4));
          *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
          iVar5 = *piVar1;
          *piVar1 = iVar5 + 1;
          iVar2 = iVar4;
          if (iVar5 + 1 == 0) {
            *piVar1 = 1;
          }
        }
        *param_1 = iVar2;
        param_1[1] = 0;
        return;
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      piVar1 = (int *)(**(code **)**(undefined4 **)(param_2 + 0x10))();
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_3);
      param_1[1] = iVar2;
      *param_1 = 0;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

