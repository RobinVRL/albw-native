#include "ghidra_types.h"

extern int func_00100910(short *param_1);
extern int func_003D6A98(int *param_1,int *param_2,uint param_3,int param_4);

// USA 003D6B50 <- EU 003D6B30 (Ghidra, non-matching)

undefined4 func_003D6B50(int *param_1,int param_2,short *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  *param_1 = (int)param_3;
  local_18 = param_4;
  uVar2 = func_00100910(param_3);
  param_1[1] = uVar2;
  local_18 = *(int *)(param_2 + 4);
  cVar1 = *(char *)(local_18 + 8);
  if (cVar1 == '\0') {
    uVar4 = 1;
    for (iVar3 = *(int *)(local_18 + 4); cVar1 = *(char *)(iVar3 + 8), cVar1 == '\0';
        iVar3 = *(int *)(iVar3 + 4)) {
      uVar4 = uVar4 + 1;
    }
    if (cVar1 == '\a') {
      if (*(char *)(iVar3 + 10) != '\0') {
        return 0;
      }
      if (*(char *)(*(int *)(iVar3 + 4) + 8) != '\f') {
        return 0;
      }
      if (*(char *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 8) != '\x12') {
        return 0;
      }
      if (uVar2 < uVar4) {
        return 2;
      }
      iVar3 = func_003D6A98(param_1,&local_18,0,uVar4);
    }
    else if (cVar1 == '\x11') {
      if (*(char *)(iVar3 + 10) != '\x01') {
        return 0;
      }
      if (*(char *)(*(int *)(iVar3 + 4) + 8) != '\x12') {
        return 0;
      }
      if (uVar2 != uVar4) {
        return 2;
      }
      iVar3 = func_003D6A98(param_1,&local_18,0,uVar4);
    }
    else {
      if (cVar1 != '\x12') {
        return 0;
      }
      if (uVar2 != uVar4) {
        return 2;
      }
      iVar3 = func_003D6A98(param_1,&local_18,0,uVar4);
    }
  }
  else if (cVar1 == '\a') {
    if ((*(char *)(local_18 + 10) != '\0') || (*(char *)(*(int *)(local_18 + 4) + 8) != '\f')) {
      return 0;
    }
    uVar4 = 0;
    iVar5 = *(int *)(*(int *)(local_18 + 4) + 4);
    for (iVar3 = iVar5; cVar1 = *(char *)(iVar3 + 8), cVar1 == '\0'; iVar3 = *(int *)(iVar3 + 4)) {
      uVar4 = uVar4 + 1;
    }
    if (cVar1 == '\a') {
      if (uVar4 == 0) {
        return 0;
      }
      if (*(char *)(iVar3 + 10) != '\0') {
        return 0;
      }
      if (*(char *)(*(int *)(iVar3 + 4) + 8) != '\f') {
        return 0;
      }
      if (*(char *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 8) == '\x12') {
        uVar6 = 0;
        if (uVar2 < uVar4) {
          return 2;
        }
        do {
          local_18 = iVar5;
          iVar3 = func_003D6A98(param_1,&local_18,uVar6,uVar4);
          if (iVar3 != 0) {
            return 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 + uVar4 <= (uint)param_1[1]);
        return 2;
      }
      return 0;
    }
    if (cVar1 != '\x12') {
      return 0;
    }
    if (uVar4 == 0) {
      return 0;
    }
    if (uVar2 < uVar4) {
      return 2;
    }
    local_18 = iVar5;
    iVar3 = func_003D6A98(param_1,&local_18,uVar2 - uVar4,uVar4);
  }
  else {
    bVar7 = cVar1 == '\x11';
    if (bVar7) {
      cVar1 = *(char *)(local_18 + 10);
    }
    if (!bVar7 || cVar1 != '\0') {
      return 0;
    }
    uVar4 = 0;
    local_18 = *(int *)(local_18 + 4);
    for (iVar3 = local_18; cVar1 = *(char *)(iVar3 + 8), cVar1 == '\0'; iVar3 = *(int *)(iVar3 + 4))
    {
      uVar4 = uVar4 + 1;
    }
    if (cVar1 == '\x11') {
      if (uVar4 == 0) {
        return 0;
      }
      if (*(char *)(iVar3 + 10) != '\x01') {
        return 0;
      }
      if (*(char *)(*(int *)(iVar3 + 4) + 8) != '\x12') {
        return 0;
      }
      if (uVar2 != uVar4) {
        return 2;
      }
      iVar3 = func_003D6A98(param_1,&local_18,0,uVar4);
    }
    else {
      if (cVar1 != '\x12') {
        return 0;
      }
      if (uVar4 == 0) {
        return 0;
      }
      if (uVar2 != uVar4) {
        return 2;
      }
      iVar3 = func_003D6A98(param_1,&local_18,0,uVar4);
    }
  }
  if (iVar3 == 0) {
    return 2;
  }
  return 1;
}

