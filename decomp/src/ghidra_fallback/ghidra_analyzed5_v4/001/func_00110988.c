#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00110EE8(int param_1,undefined4 param_2,byte *param_3,undefined4 param_4);
extern int func_00110FA0(int param_1);
extern int *DAT_00110abc;

// USA 00110988 <- EU 00110988 (Ghidra, non-matching)
// GLOBAL DAT_00110abc int *

void func_00110988(int *param_1,int param_2,byte *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(byte * *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  local_30 = (byte *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  puVar1 = *(undefined4 **)(*(int *)(param_2 + 8) + 0x24);
  if ((puVar1 == (undefined4 *)0x0) ||
     (local_30 = param_3, local_2c = param_2, iVar2 = (**(code **)*puVar1)(puVar1,&local_30),
     iVar2 == 0)) {
    if (*(char *)(param_2 + 0x38) == '\0') {
      iVar2 = *(int *)(param_3 + 4);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        iVar2 = *(int *)(param_3 + 8);
      }
      if (!bVar6 || iVar2 != 0) {
        iVar4 = func_00110FA0(*(int *)(param_2 + 8));
        piVar3 = DAT_00110abc;
        iVar2 = 0;
        if (iVar4 != 0) {
          func_00110EE8(iVar4,param_2,param_3,*DAT_00110abc);
          func_0010F1DC((int *)(param_2 + 0x3c),(int *)(*(int *)(param_2 + 0x48) + iVar4));
          *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
          iVar5 = *piVar3;
          *piVar3 = iVar5 + 1;
          iVar2 = iVar4;
          if (iVar5 + 1 == 0) {
            *piVar3 = 1;
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
      piVar3 = (int *)(**(code **)**(undefined4 **)(param_2 + 0x10))();
      iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,param_3);
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

