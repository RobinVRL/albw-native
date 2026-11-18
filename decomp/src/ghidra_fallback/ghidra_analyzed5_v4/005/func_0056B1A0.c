#include "ghidra_types.h"

extern int func_0056D40C(uint *param_1,uint *param_2,uint param_3);

// USA 0056B1A0 <- EU 0056B178 (Ghidra, non-matching)

uint func_0056B1A0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  uVar3 = 0xffffffff;
  local_10 = in_r3;
  switch(param_2 >> 0x18) {
  default:
    goto switchD_0056b18c_caseD_0;
  case 1:
    if (param_2 >> 0x18 != 1) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 4));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    iVar2 = func_0056D40C((uint *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 0x14),
                          &local_10,0);
    goto joined_r0x0056b2f8;
  case 2:
    if (param_2 >> 0x18 != 2) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    iVar2 = func_0056D40C((uint *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 0x18),
                          &local_10,0);
joined_r0x0056b2f8:
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    goto LAB_0056b3a4;
  case 3:
    if (param_2 >> 0x18 != 3) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    iVar2 = func_0056D40C((uint *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 0xc),
                          &local_10,0);
    break;
  case 4:
    if (param_2 >> 0x18 != 4) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x2c));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    iVar2 = func_0056D40C((uint *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 4),&local_10
                          ,0);
    break;
  case 5:
    if (param_2 >> 0x18 != 5) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x1c));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    iVar2 = func_0056D40C((uint *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 8),&local_10
                          ,0);
    break;
  case 6:
    if (param_2 >> 0x18 != 6) {
      return 0xffffffff;
    }
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x24));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    iVar2 = func_0056D40C((uint *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 4),&local_10
                          ,0);
  }
  uVar3 = 0xffffffff;
  if (iVar2 != 0) {
LAB_0056b3a4:
    uVar3 = local_10;
  }
switchD_0056b18c_caseD_0:
  return uVar3;
}

