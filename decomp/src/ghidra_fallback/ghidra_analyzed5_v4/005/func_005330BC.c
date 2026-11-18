#include "ghidra_types.h"

extern int DAT_00533184;

// USA 005330BC <- EU 00533094 (Ghidra, non-matching)
// GLOBAL DAT_00533184 int

int func_005330BC(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  iVar2 = DAT_00533184;
  iVar4 = 0;
  piVar3 = *(int **)(param_1 + 0xd0);
  piVar5 = piVar3 + *(int *)(param_1 + 200);
  if (piVar3 != piVar5) {
    do {
      local_2c = *(int *)(*(int *)(*piVar3 + 8) + 0x84);
      local_30 = iVar2;
      (**(code **)(*param_2 + 8))(param_2);
      (**(code **)(*param_2 + 8))(param_2);
      iVar6 = param_2[1];
      (**(code **)(local_30 + 8))(&local_30);
      bVar1 = true;
      if (iVar6 != local_2c) {
        iVar6 = 0;
        do {
          if (*(char *)(param_2[1] + iVar6) != *(char *)(local_2c + iVar6)) break;
          if (*(char *)(param_2[1] + iVar6) == '\0') goto LAB_0053314c;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x40001);
        bVar1 = false;
      }
LAB_0053314c:
      if (bVar1) {
        return iVar4;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (piVar3 != piVar5);
  }
  return -1;
}

