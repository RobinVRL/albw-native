#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0011E840(int param_1,int param_2);
extern int func_0011EAA4(int param_1,int param_2);
extern int func_001E1064(int param_1,undefined4 param_2,uint param_3);
extern int func_00494104(int param_1,int param_2,undefined4 param_3);
extern int func_00494194(int param_1);
extern int func_00691568(int *param_1,int *param_2);
extern int *DAT_0030c0f8;
extern int DAT_0030c0fc;
extern int DAT_0030c100;
extern undefined DAT_0030c10c;
extern undefined1 *DAT_0030c110;
extern undefined1 DAT_0030c114;
extern int *DAT_0030c11c;
extern char s__msflow_0030c104[];
extern char s_cf_0030c104[];

// USA 0030BE08 <- EU 0030BDE4 (Ghidra, non-matching)
// GLOBAL DAT_0030c0f8 int *
// GLOBAL DAT_0030c0fc int
// GLOBAL DAT_0030c100 int
// GLOBAL DAT_0030c10c undefined
// GLOBAL DAT_0030c110 undefined1 *
// GLOBAL DAT_0030c114 undefined1
// GLOBAL DAT_0030c11c int *
// GLOBAL s_cf_0030c104 string

void func_0030BE08(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 (*(int *)(albw_frame + 0x8))
  #define local_c4 (*(undefined1 * *)(albw_frame + 0xc))
  #define local_c0 (*(int *)(albw_frame + 0x10))
  #define local_bc ((undefined1 *)(albw_frame + 0x14))
  #define uStack_59 (*(undefined1 *)(albw_frame + 0x77))
  #define local_58 (*(int *)(albw_frame + 0x78))
  #define local_54 (*(int *)(albw_frame + 0x7c))
  #define local_50 (*(int *)(albw_frame + 0x80))
  #define local_4c (*(char * *)(albw_frame + 0x84))
  #define local_48 (*(int *)(albw_frame + 0x88))
  #define local_44 (*(undefined * *)(albw_frame + 0x8c))
  #define local_40 (*(int *)(albw_frame + 0x90))
  #define local_3c (*(uint * *)(albw_frame + 0x94))
  #define local_38 (*(uint * *)(albw_frame + 0x98))
  #define iStack_30 (*(int *)(albw_frame + 0xa0))
  #define uStack_2c (*(uint *)(albw_frame + 0xa4))
  #define local_28 (*(uint *)(albw_frame + 0xa8))
  iStack_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  if (*(char *)(param_1 + 0xd9) != '\0') {
    func_00494194(param_1);
    *(undefined1 *)(param_1 + 0xd9) = 0;
  }
  piVar2 = DAT_0030c0f8;
  if (param_2 < *(uint *)(*(int *)(*DAT_0030c0f8 + 0x18) + 0x20)) {
    local_54 = func_0011E840(*(int *)(*(int *)(*DAT_0030c0f8 + 0x18) + 4),param_2);
  }
  else {
    local_54 = 0;
  }
  iVar9 = DAT_0030c0fc;
  local_c4 = local_bc;
  local_58 = DAT_0030c0fc;
  local_c0 = 100;
  uStack_59 = 0;
  local_bc[0] = 0;
  local_c8 = DAT_0030c100;
  local_4c = s__msflow_0030c104;
  local_50 = DAT_0030c0fc;
  iVar3 = func_00691568(&local_58,&local_50);
  if (-1 < iVar3) {
    local_44 = &DAT_0030c10c;
    local_48 = iVar9;
    iVar4 = func_00691568(&local_58,&local_48);
    iVar3 = iVar3 - iVar4;
    if (0 < iVar3) {
      iVar7 = iVar4 + 1;
      if (iVar7 < iVar4 + iVar3) {
        do {
          (**(code **)(local_58 + 8))(&local_58);
          iVar5 = 0;
          do {
            if (*(char *)(local_54 + iVar5) == '\0') {
              if (iVar5 < 0x40001) goto LAB_0030befc;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x40001);
          iVar5 = 0;
LAB_0030befc:
          puVar6 = DAT_0030c110;
          if (-1 < iVar7 && iVar7 <= iVar5) {
            puVar6 = (undefined1 *)(local_54 + iVar7);
          }
          uVar1 = *puVar6;
          (**(code **)(local_c8 + 8))(&local_c8);
          iVar5 = 0;
          do {
            if (local_c4[iVar5] == '\0') {
              if (iVar5 < 0x40001) goto LAB_0030bf54;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x40001);
          iVar5 = 0;
LAB_0030bf54:
          if (iVar5 < local_c0 + -1) {
            local_c4[iVar5] = uVar1;
            local_c4[iVar5 + 1] = 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar4 + iVar3);
      }
      puVar6 = local_c4;
      local_3c = (uint *)&DAT_0030c114;
      local_40 = iVar9;
      (**(code **)(local_c8 + 8))(&local_c8);
      iVar9 = 0;
      do {
        if (local_c4[iVar9] == '\0') {
          if (iVar9 < 0x40001) goto LAB_0030bfd4;
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x40001);
      iVar9 = 0;
LAB_0030bfd4:
      iVar3 = iVar9;
      if (iVar9 < 0) {
        iVar3 = 0;
      }
      (**(code **)(local_40 + 8))(&local_40);
      uVar8 = 0;
      do {
        if (*(char *)((int)local_3c + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_0030c024;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_0030c024:
      if (local_c0 - iVar3 <= (int)uVar8) {
        uVar8 = (local_c0 - iVar3) - 1;
      }
      if (0 < (int)uVar8) {
        local_38 = (uint *)(puVar6 + iVar3);
        (**(code **)(local_40 + 8))(&local_40);
        func_0010E3C4(local_38,local_3c,uVar8);
        if (iVar9 < (int)(iVar3 + uVar8)) {
          puVar6[iVar3 + uVar8] = 0;
        }
      }
    }
  }
  iVar9 = func_001E1064(*DAT_0030c11c,&local_c8,7);
  iVar9 = *(int *)(iVar9 + 0x14);
  *(int *)(param_1 + 0xe8) = iVar9;
  iVar9 = func_00494104(param_1,iVar9,*(undefined4 *)(*(int *)(*piVar2 + 100) + 0x10));
  if (iVar9 != 0) {
    *(undefined1 *)(param_1 + 0xd9) = 1;
    *(int *)(*(int *)(*piVar2 + 100) + 0x14) = param_1;
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    *(short *)(param_1 + 0xec) = (short)local_28;
    *(short *)(param_1 + 0xee) = (short)local_28;
    if (local_28 < *(uint *)(param_1 + 8)) {
      iVar9 = func_0011EAA4(*(int *)(param_1 + 4),local_28);
    }
    else {
      iVar9 = 0;
    }
    *(int *)(param_1 + 0xf0) = iVar9;
  }
  return;
}

