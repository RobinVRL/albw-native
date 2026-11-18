#include "ghidra_types.h"

extern int func_0011E840(int param_1,int param_2);
extern int func_00582328(int param_1,int *param_2,undefined4 param_3,uint param_4);
extern int func_00691568(int *param_1,int *param_2);
extern int *DAT_0030cdfc;
extern int DAT_0030ce00;
extern int DAT_0030ce04;
extern undefined DAT_0030ce10;
extern undefined1 *DAT_0030ce14;
extern char s__mstxt_0030ce08[];
extern char s_cf_0030ce08[];

// USA 0030CC80 <- EU 0030CC5C (Ghidra, non-matching)
// GLOBAL DAT_0030cdfc int *
// GLOBAL DAT_0030ce00 int
// GLOBAL DAT_0030ce04 int
// GLOBAL DAT_0030ce10 undefined
// GLOBAL DAT_0030ce14 undefined1 *
// GLOBAL s_cf_0030ce08 string

undefined4 func_0030CC80(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(int *)(albw_frame + 0xc))
  #define local_70 (*(int *)(albw_frame + 0x10))
  #define local_6c (*(char * *)(albw_frame + 0x14))
  #define local_68 (*(int *)(albw_frame + 0x18))
  #define local_64 (*(undefined * *)(albw_frame + 0x1c))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define local_5c (*(undefined1 * *)(albw_frame + 0x24))
  #define local_58 (*(int *)(albw_frame + 0x28))
  #define local_54 ((undefined1 *)(albw_frame + 0x2c))
  #define uStack_23 (*(undefined1 *)(albw_frame + 0x5d))
  piVar2 = DAT_0030cdfc;
  puVar7 = (undefined1 *)(uint)*(ushort *)(*(int *)(param_1 + 0xf0) + 10);
  puVar8 = *(undefined1 **)(*(int *)(*DAT_0030cdfc + 0x18) + 0x20);
  if (puVar7 < puVar8) {
    local_74 = func_0011E840(*(int *)(*(int *)(*DAT_0030cdfc + 0x18) + 4),(int)puVar7);
  }
  else {
    local_74 = 0;
  }
  iVar4 = DAT_0030ce00;
  local_5c = local_54;
  local_78 = DAT_0030ce00;
  local_58 = 0x32;
  uStack_23 = 0;
  local_54[0] = 0;
  local_60 = DAT_0030ce04;
  local_6c = s__mstxt_0030ce08;
  local_70 = DAT_0030ce00;
  iVar3 = func_00691568(&local_78,&local_70);
  if (-1 < iVar3) {
    local_64 = &DAT_0030ce10;
    local_68 = iVar4;
    iVar4 = func_00691568(&local_78,&local_68);
    iVar3 = iVar3 - iVar4;
    if (0 < iVar3) {
      puVar8 = (undefined1 *)(iVar4 + iVar3);
      iVar9 = iVar4 + 1;
      if (iVar9 < (int)puVar8) {
        do {
          (**(code **)(local_78 + 8))(&local_78);
          iVar5 = 0;
          do {
            if (*(char *)(local_74 + iVar5) == '\0') {
              if (iVar5 < 0x40001) goto LAB_0030cd54;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x40001);
          iVar5 = 0;
LAB_0030cd54:
          puVar7 = DAT_0030ce14;
          if (-1 < iVar9 && iVar9 <= iVar5) {
            puVar7 = (undefined1 *)(local_74 + iVar9);
          }
          uVar1 = *puVar7;
          (**(code **)(local_60 + 8))(&local_60);
          iVar5 = 0;
          do {
            puVar8 = (undefined1 *)(uint)(byte)local_5c[iVar5];
            if (puVar8 == (undefined1 *)0x0) {
              if (iVar5 < 0x40001) goto LAB_0030cdac;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x40001);
          iVar5 = 0;
LAB_0030cdac:
          if (iVar5 < local_58 + -1) {
            puVar8 = local_5c + iVar5;
            local_5c[iVar5] = uVar1;
            puVar8[1] = 0;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar4 + iVar3);
      }
    }
  }
  uVar6 = func_00582328(*piVar2,&local_60,puVar8,param_4);
  *(undefined4 *)(*(int *)(*piVar2 + 0x60) + 0x10) = uVar6;
  return 1;
}

