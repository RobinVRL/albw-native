#include "ghidra_types.h"

extern int func_00410840(int *param_1,int *param_2);
extern int func_005696BC(int param_1,uint param_2,uint *param_3);
extern int func_00569B0C(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056AA80(undefined4 *param_1,undefined4 *param_2,uint param_3);
extern int func_0056ADE8(int param_1);
extern int func_0056CBDC(int param_1);

// USA 00569DE8 <- EU 00569DC0 (Ghidra, non-matching)

int func_00569DE8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((uint *)(albw_frame + 0x0))
  #define local_4c ((uint * *)(albw_frame + 0x14))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(int *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_30 (*(uint *)(albw_frame + 0x30))
  #define local_2c (*(int *)(albw_frame + 0x34))
  local_40 = 0xffffffff;
  local_3c = -1;
  uStack_38 = 0;
  iVar1 = func_00569B0C(param_1,param_2,&local_40);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x11c);
    iVar1 = func_0056ADE8(param_1 + 0x120);
    return iVar1 + local_3c + iVar3;
  }
  uVar2 = func_0056CBDC(param_1);
  uVar6 = 0;
  if (uVar2 != 0) {
    do {
      local_60[0] = 0xffffffff;
      local_60[1] = 0;
      iVar1 = func_005696BC(param_1,uVar6 | 0x6000000,local_60);
      if (iVar1 != 0) {
        local_60[2] = 0xffffffff;
        local_60[3] = -1;
        local_60[4] = 0;
        iVar1 = func_00569B0C(param_1,local_60[0],local_60 + 2);
        if (iVar1 != 0) {
          iVar3 = *(int *)(param_1 + 0x11c);
          iVar1 = func_0056ADE8(param_1 + 0x120);
          func_00410840((int *)local_4c,(int *)(iVar3 + iVar1 + local_60[3]));
          uVar4 = 0;
          uVar5 = *local_4c[0];
          if (uVar5 != 0) {
            do {
              iVar1 = func_0056AA80(local_4c,&local_30,uVar4);
              if (((iVar1 != 0) && (local_30 == param_2)) && (local_2c != 0)) {
                return local_2c;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar5);
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return 0;
}

