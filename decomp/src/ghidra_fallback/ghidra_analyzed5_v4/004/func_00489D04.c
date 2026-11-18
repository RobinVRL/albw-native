#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00489F74(int *param_1,int *param_2,int param_3,int param_4,uint param_5);
extern int func_0048A218(uint *param_1);
extern int func_0058FA08();
extern undefined4 DAT_00489edc;

// USA 00489D04 <- EU 00489CDC (Ghidra, non-matching)
// GLOBAL DAT_00489edc undefined4

int func_00489D04(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_64 ((uint *)(albw_frame + 0xc))
  #define local_54 (*(int *)(albw_frame + 0x1c))
  #define local_50 (*(int * *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  #define local_28 (*(int *)(albw_frame + 0x48))
  #define local_24 ((uint *)(albw_frame + 0x4c))
  if ((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0xc) == 0)) {
    return 0;
  }
  puVar2 = func_0010CE7C(auStack_64);
  uVar1 = DAT_00489edc;
  puVar2[4] = 0;
  *puVar2 = uVar1;
  puVar2[5] = 0;
  puVar2[0xe] = 0;
  if (((char)param_1[0x13] != '\0') &&
     (local_2c = *(undefined4 *)(param_2 + 0x18),
     local_54 = (**(code **)(*param_1 + 0x2c))(param_1,auStack_64,param_2,0), local_54 != 0)) {
    local_24[0] = 0;
    local_50 = param_1;
    if ((char)param_1[0x13] != '\0') {
      iVar3 = (**(code **)(*param_1 + 0x48))(param_1,local_24,auStack_64);
      uVar4 = 0;
      if (iVar3 != 0) {
        uVar4 = local_24[0];
      }
      if (iVar3 != 0 && uVar4 != 0) {
        uVar6 = *(uint *)(param_2 + 0xc);
        bVar7 = uVar6 == 0;
        if (bVar7) {
          uVar4 = uVar4 + 0x1f;
          uVar6 = uVar4 & 0xffffffe0;
        }
        if (bVar7 || uVar4 <= uVar6) {
          iVar3 = *(int *)(param_2 + 8);
          bVar7 = false;
          if (iVar3 == 0) {
            uVar4 = *(uint *)(param_2 + 0x14);
            iVar3 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
            if ((int)uVar4 < 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = 1;
            }
            if (iVar3 < 0x21) {
              iVar3 = 0x20;
            }
            iVar3 = func_0010CEE0(uVar6,*(int **)(param_2 + 0x10),iVar5 * iVar3);
            bVar7 = true;
          }
          local_28 = 0;
          iVar5 = func_00489F74(param_1,&local_28,(int)auStack_64,iVar3,uVar6);
          if ((((iVar5 != 0) && ((char)param_1[0x13] != '\0')) &&
              (iVar5 = (**(code **)(*param_1 + 0x20))(param_1,auStack_64), iVar5 != 0)) &&
             (iVar5 = (**(code **)(*param_1 + 0x30))(param_1,auStack_64), iVar5 != 0)) {
            local_54 = 0;
            local_50 = (int *)0x0;
            *(int *)(param_2 + 0x1c) = local_28;
            *(uint *)(param_2 + 0x20) = uVar6;
            *(bool *)(param_2 + 0x24) = bVar7;
            func_0048A218(auStack_64);
            return iVar3;
          }
          if (bVar7) {
            func_0058FA08(iVar3);
          }
        }
      }
    }
  }
  func_0048A218(auStack_64);
  return 0;
}

