#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010FBAC(uint *param_1,uint *param_2);
extern undefined1 DAT_00111ea0;
extern int DAT_00111ea4;

// USA 00111C58 <- EU 00111C58 (Ghidra, non-matching)
// GLOBAL DAT_00111ea0 undefined1
// GLOBAL DAT_00111ea4 int

undefined4 func_00111C58(int param_1,uint param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  uint *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  if ((*(uint *)(param_3 + 0x30) & 1 << (param_2 & 0xff)) == 0) {
    iVar4 = 0;
    do {
      pbVar6 = (byte *)(param_1 + iVar4 * 0xa0);
      uVar2 = (uint)*pbVar6;
      if (uVar2 != 0) {
        if (param_3 == 0) {
          if (uVar2 == param_2) {
            (**(code **)(*(int *)(pbVar6 + 0x50) + 8))(pbVar6 + 0x50);
            uVar2 = func_0010FBAC(*(uint **)(pbVar6 + 0x54),param_4);
joined_r0x00111d30:
            if (uVar2 == 0) {
              return 0;
            }
          }
        }
        else if (uVar2 == param_2) {
          (**(code **)(*(int *)(pbVar6 + 4) + 8))(pbVar6 + 4);
          uVar2 = func_0010FBAC(*(uint **)(pbVar6 + 8),*(uint **)(param_3 + 8));
          if (uVar2 == 0) {
            (**(code **)(*(int *)(pbVar6 + 0x50) + 8))(pbVar6 + 0x50);
            uVar2 = func_0010FBAC(*(uint **)(pbVar6 + 0x54),param_4);
            goto joined_r0x00111d30;
          }
        }
      }
      iVar1 = DAT_00111ea4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    local_2c = (uint *)0x0;
    while (pcVar5 = (char *)(param_1 + (int)local_2c * 0xa0), *pcVar5 != '\0') {
      local_2c = (uint *)((int)local_2c + 1);
      if (5 < (int)local_2c) {
        return 0;
      }
    }
    if (param_3 != 0) {
      local_2c = *(uint **)(param_3 + 8);
    }
    *pcVar5 = (char)param_2;
    if (param_3 == 0) {
      local_2c = (uint *)&DAT_00111ea0;
    }
    local_30 = iVar1;
    puVar7 = *(uint **)(pcVar5 + 8);
    (**(code **)(iVar1 + 8))(&local_30);
    uVar2 = 0;
    do {
      if (*(char *)((int)local_2c + uVar2) == '\0') {
        if ((int)uVar2 < 0x40001) goto LAB_00111dd0;
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x40001);
    uVar2 = 0;
LAB_00111dd0:
    if (*(int *)(pcVar5 + 0xc) <= (int)uVar2) {
      uVar2 = *(int *)(pcVar5 + 0xc) - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(puVar7,local_2c,uVar2);
    *(undefined1 *)((int)puVar7 + uVar2) = 0;
    local_30 = iVar1;
    puVar7 = *(uint **)(pcVar5 + 0x54);
    local_2c = param_4;
    (**(code **)(iVar1 + 8))(&local_30);
    uVar2 = 0;
    do {
      if (*(char *)((int)local_2c + uVar2) == '\0') {
        if ((int)uVar2 < 0x40001) goto LAB_00111e48;
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x40001);
    uVar2 = 0;
LAB_00111e48:
    if (*(int *)(pcVar5 + 0x58) <= (int)uVar2) {
      uVar2 = *(int *)(pcVar5 + 0x58) - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(puVar7,local_2c,uVar2);
    *(undefined1 *)((int)puVar7 + uVar2) = 0;
    pcVar5[0x9c] = '\0';
    pcVar5[0x9d] = '\0';
    pcVar5[0x9e] = '\0';
    pcVar5[0x9f] = '\0';
    puVar3 = *(undefined4 **)(param_1 + 0x3c4);
    if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00111e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)*puVar3)(puVar3,pcVar5);
    }
  }
  return 0;
}

