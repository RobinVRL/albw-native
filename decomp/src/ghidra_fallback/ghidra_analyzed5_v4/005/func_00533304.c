#include "ghidra_types.h"

extern int DAT_005333d4;

// USA 00533304 <- EU 005332DC (Ghidra, non-matching)
// GLOBAL DAT_005333d4 int

undefined4 func_00533304(int param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  iVar2 = DAT_005333d4;
  puVar3 = *(undefined4 **)(param_1 + 0xdc);
  puVar4 = puVar3 + *(int *)(param_1 + 0xd4);
  do {
    if (puVar3 == puVar4) {
      return 0;
    }
    if (*(byte *)((int)*(int **)*puVar3 + 5) == param_3) {
      local_2c = **(int **)*puVar3;
      local_30 = iVar2;
      (**(code **)(*param_2 + 8))(param_2);
      (**(code **)(*param_2 + 8))(param_2);
      iVar5 = param_2[1];
      (**(code **)(local_30 + 8))(&local_30);
      if (iVar5 != local_2c) {
        iVar5 = 0;
        do {
          if (*(char *)(param_2[1] + iVar5) != *(char *)(local_2c + iVar5)) break;
          if (*(char *)(param_2[1] + iVar5) == '\0') goto LAB_005333b4;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x40001);
        goto LAB_0053339c;
      }
LAB_005333b4:
      bVar1 = true;
    }
    else {
LAB_0053339c:
      bVar1 = false;
    }
    if (bVar1) {
      return *puVar3;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

