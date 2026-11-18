#include "ghidra_types.h"

extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern uint *DAT_002c21b4;
extern int *DAT_002c21b8;

// USA 002C1E4C <- EU 002C1E28 (Ghidra, non-matching)
// GLOBAL DAT_002c21b4 uint *
// GLOBAL DAT_002c21b8 int *

undefined4 func_002C1E4C(undefined4 param_1,uint param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((int *)(albw_frame + 0x0))
  #define local_58 ((int *)(albw_frame + 0x8))
  #define local_4c (*(uint *)(albw_frame + 0x14))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_38 (*(char * *)(albw_frame + 0x28))
  #define local_2c (*(int * *)(albw_frame + 0x34))
  if (5 < param_2) {
    return 0;
  }
  if ((*DAT_002c21b4 & 1) == 0) {
    local_40 = *DAT_002c21b8;
    iVar6 = *(int *)(local_40 + 0x37b48);
    iVar2 = *(int *)(local_40 + 0x37b4c);
    if (iVar6 != 0) {
      puVar3 = func_003CC1E4((undefined4 *)*param_3,(*param_3 - param_3[2] & 0xfffffffcU) + 0x18);
      *param_3 = (int)puVar3;
      puVar3 = func_003CC230(puVar3,local_58,iVar6,iVar2 << 2);
      *param_3 = (int)puVar3;
      if ((uint *)param_3[3] != (uint *)0x0) {
        *(uint *)param_3[3] = (uint)((int)puVar3 - param_3[2]) >> 3;
      }
      param_3[2] = *param_3;
      param_3[3] = local_58[0];
      if (param_3[4] == 0) {
        param_3[4] = *param_3 - param_3[1] & 0xfffffffc;
      }
    }
    uVar9 = 0;
    local_38 = (char *)(local_40 + 0x37c88);
    do {
      pcVar4 = local_38;
      if (uVar9 < 3) {
        pcVar4 = local_38 + uVar9 * 6;
      }
      if (param_2 < 6) {
        pcVar4 = pcVar4 + param_2;
      }
      if (*pcVar4 != '\0') {
        if (param_2 == 0) {
          iVar2 = local_40 + uVar9 * 0x1c;
          puVar3 = (uint *)(iVar2 + 0x37af4);
          bVar1 = true;
          uVar7 = 0;
          if (0 < (int)*puVar3) {
            local_2c = (int *)(local_40 + uVar9 * 8 + 0x37b50);
            do {
              if (((uVar7 < *puVar3) &&
                  (piVar8 = *(int **)(*(int *)(iVar2 + 0x37afc) + uVar7 * 4), piVar8 != (int *)0x0))
                 && ((*(byte *)((int)piVar8 + 0x12) & 1) != 0)) {
                if (bVar1) {
                  iVar6 = *local_2c;
                  local_4c = local_2c[1] << 2;
                  if (iVar6 != 0) {
                    puVar5 = func_003CC1E4((undefined4 *)*param_3,
                                           (*param_3 - param_3[2] & 0xfffffffcU) + 0x18);
                    *param_3 = (int)puVar5;
                    puVar5 = func_003CC230(puVar5,local_58,iVar6,local_4c);
                    *param_3 = (int)puVar5;
                    if ((uint *)param_3[3] != (uint *)0x0) {
                      *(uint *)param_3[3] = (uint)((int)puVar5 - param_3[2]) >> 3;
                    }
                    param_3[2] = *param_3;
                    param_3[3] = local_58[0];
                    if (param_3[4] == 0) {
                      param_3[4] = *param_3 - param_3[1] & 0xfffffffc;
                    }
                  }
                  bVar1 = false;
                }
                (**(code **)(*piVar8 + 0xc))(piVar8,param_3);
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < (int)*puVar3);
          }
        }
        else if (param_2 == 1) {
          iVar2 = local_40 + uVar9 * 0x1c;
          puVar3 = (uint *)(iVar2 + 0x37af4);
          bVar1 = true;
          uVar7 = 0;
          if (0 < (int)*puVar3) {
            local_2c = (int *)(local_40 + uVar9 * 8 + 0x37b50);
            do {
              if (((uVar7 < *puVar3) &&
                  (piVar8 = *(int **)(*(int *)(iVar2 + 0x37afc) + uVar7 * 4), piVar8 != (int *)0x0))
                 && ((*(byte *)((int)piVar8 + 0x12) & 2) != 0)) {
                if (bVar1) {
                  iVar6 = *local_2c;
                  local_4c = local_2c[1] << 2;
                  if (iVar6 != 0) {
                    puVar5 = func_003CC1E4((undefined4 *)*param_3,
                                           (*param_3 - param_3[2] & 0xfffffffcU) + 0x18);
                    *param_3 = (int)puVar5;
                    puVar5 = func_003CC230(puVar5,local_60,iVar6,local_4c);
                    *param_3 = (int)puVar5;
                    if ((uint *)param_3[3] != (uint *)0x0) {
                      *(uint *)param_3[3] = (uint)((int)puVar5 - param_3[2]) >> 3;
                    }
                    param_3[2] = *param_3;
                    param_3[3] = local_60[0];
                    if (param_3[4] == 0) {
                      param_3[4] = *param_3 - param_3[1] & 0xfffffffc;
                    }
                  }
                  bVar1 = false;
                }
                (**(code **)(*piVar8 + 0x14))(piVar8,param_3);
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < (int)*puVar3);
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 3);
  }
  return 1;
}

