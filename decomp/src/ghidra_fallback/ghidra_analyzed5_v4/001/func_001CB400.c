#include "ghidra_types.h"

extern int func_0034B268(int param_1,undefined2 param_2);
extern int func_00502FF8(int *param_1,undefined4 param_2);
extern int *DAT_001cb5b4;
extern int *DAT_001cb5b8;
extern undefined4 DAT_001cb5bc;

// USA 001CB400 <- EU 001CB400 (Ghidra, non-matching)
// GLOBAL DAT_001cb5b4 int *
// GLOBAL DAT_001cb5b8 int *
// GLOBAL DAT_001cb5bc undefined4

undefined4 func_001CB400(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  piVar4 = DAT_001cb5b4;
  iVar5 = *DAT_001cb5b4;
  switch(param_2) {
  case 0:
    cVar1 = *(char *)(*(int *)(iVar5 + 0x1130) + 0x8e);
    break;
  case 1:
    func_0034B268(*(int *)(iVar5 + 0x1130),1);
    if (*(char *)((int)*(int **)(*piVar4 + 0x1130) + 0x8e) != '\0') {
      (**(code **)(**(int **)(*piVar4 + 0x1130) + 0x44))(*(int **)(*piVar4 + 0x1130));
      return 1;
    }
    return 0;
  case 2:
    cVar1 = *(char *)(*(int *)(iVar5 + 0x1130) + 0x8e);
    break;
  case 3:
    piVar6 = (int *)(param_1 + 0x98c);
    (**(code **)(*(int *)(param_1 + 0x98c) + 8))(piVar6);
    iVar5 = 0;
    piVar4 = (int *)(param_1 + 0xa98);
    do {
      if (*(char *)(*(int *)(param_1 + 0x990) + iVar5) == '\0') {
        if ((iVar5 < 0x40001) && (0 < iVar5)) {
          piVar7 = *(int **)(param_1 + 0x770);
          (**(code **)(*piVar4 + 8))(piVar4);
          uVar2 = DAT_001cb5bc;
          local_24 = *(undefined4 *)(param_1 + 0xa9c);
          local_28 = DAT_001cb5bc;
          (**(code **)(*piVar6 + 8))(piVar6);
          local_2c = *(undefined4 *)(param_1 + 0x990);
          local_30 = uVar2;
          uVar2 = (**(code **)(*piVar7 + 0x48))(piVar7,&local_30,&local_28);
          return uVar2;
        }
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    func_00502FF8((int *)(param_1 + 0x478),piVar4);
    return 1;
  case 4:
    iVar5 = *(int *)(*DAT_001cb5b8 + 0x130);
    bVar3 = *(byte *)(iVar5 + 0x74) | 0x10;
    goto LAB_001cb5a0;
  case 5:
    iVar5 = *(int *)(*DAT_001cb5b8 + 0x130);
    bVar3 = *(byte *)(iVar5 + 0x74) & 0xef;
LAB_001cb5a0:
    *(byte *)(iVar5 + 0x74) = bVar3;
    return 1;
  default:
    return 0;
  }
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}

