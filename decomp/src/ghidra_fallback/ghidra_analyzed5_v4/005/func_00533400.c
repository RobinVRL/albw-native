#include "ghidra_types.h"

extern int DAT_005334c4;

// USA 00533400 <- EU 005333D8 (Ghidra, non-matching)
// GLOBAL DAT_005334c4 int

int func_00533400(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  iVar2 = DAT_005334c4;
  piVar3 = *(int **)(param_1 + 0xd0);
  piVar4 = piVar3 + *(int *)(param_1 + 200);
  if (piVar3 != piVar4) {
    do {
      local_2c = *(int *)(*(int *)(*piVar3 + 8) + 0x84);
      local_30 = iVar2;
      (**(code **)(*param_2 + 8))(param_2);
      (**(code **)(*param_2 + 8))(param_2);
      iVar5 = param_2[1];
      (**(code **)(local_30 + 8))(&local_30);
      bVar1 = true;
      if (iVar5 != local_2c) {
        iVar5 = 0;
        do {
          if (*(char *)(param_2[1] + iVar5) != *(char *)(local_2c + iVar5)) break;
          if (*(char *)(param_2[1] + iVar5) == '\0') goto LAB_00533490;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x40001);
        bVar1 = false;
      }
LAB_00533490:
      if (bVar1) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar4);
  }
  return 0;
}

