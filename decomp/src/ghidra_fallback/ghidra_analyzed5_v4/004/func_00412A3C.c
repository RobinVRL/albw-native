#include "ghidra_types.h"

extern int func_00412C8C(int *param_1,int param_2);
extern int func_00412D94(int param_1,uint param_2);
extern int func_0067629C(int *param_1,undefined4 *param_2);
extern int func_00676530(int *param_1);

// USA 00412A3C <- EU 00412A1C (Ghidra, non-matching)

int func_00412A3C(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int * *)(albw_frame + 0x0))
  local_20 = in_r3;
  iVar1 = func_00412D94((int)param_1,param_2);
  if (iVar1 == 0) {
    while (iVar1 = func_0067629C(param_1 + 0x2d,&local_20), iVar1 != 0) {
      param_1[0x5e] = local_20[2];
      piVar5 = local_20;
      if (local_20 != (int *)0x0) {
        do {
          piVar2 = piVar5;
          piVar5 = (int *)*piVar2;
        } while (piVar5 != (int *)0x0);
        iVar1 = piVar2[3];
        param_1[0x62] = iVar1;
        *(undefined1 *)(param_1 + 99) = 0;
        if (param_1[0x61] == iVar1) {
          param_1[0x62] = 0;
          param_1[0x61] = 0;
        }
      }
    }
    iVar1 = func_00412D94((int)param_1,param_2);
joined_r0x00412aa4:
    if (iVar1 == 0) {
      do {
        do {
          iVar1 = func_00412C8C(param_1,1);
          do {
            piVar2 = (int *)func_00676530(param_1 + 0x2d);
            param_1[0x5e] = piVar2[2];
            piVar5 = piVar2;
            if (piVar2 != (int *)0x0) {
              do {
                piVar3 = piVar5;
                piVar5 = (int *)*piVar3;
              } while (piVar5 != (int *)0x0);
              iVar4 = piVar3[3];
              param_1[0x62] = iVar4;
              *(undefined1 *)(param_1 + 99) = 0;
              if (param_1[0x61] == iVar4) {
                param_1[0x62] = 0;
                param_1[0x61] = 0;
              }
            }
          } while (piVar2[2] != iVar1);
          iVar1 = 0;
        } while ((char)param_1[99] != '\0');
        uVar6 = param_1[0x61];
        uVar7 = param_1[0x62];
        if (uVar6 < uVar7) {
          if (uVar7 < uVar6 + param_2) goto joined_r0x00412aa4;
LAB_00412b50:
          param_1[0x61] = uVar6 + param_2;
          iVar1 = param_1[0x5f] + uVar6 * 4;
        }
        else {
          if (uVar6 + param_2 <= (uint)param_1[0x60]) goto LAB_00412b50;
          if (uVar7 < param_2) goto joined_r0x00412aa4;
          param_1[0x61] = param_2;
          iVar1 = param_1[0x5f];
        }
      } while (iVar1 == 0);
      if (param_1[0x61] == param_1[0x62]) {
        *(undefined1 *)(param_1 + 99) = 1;
      }
      goto joined_r0x00412aa4;
    }
  }
  return iVar1;
}

