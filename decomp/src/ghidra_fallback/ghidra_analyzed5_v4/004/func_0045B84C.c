#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00459A84(int param_1,uint param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_0045bb00;
extern int DAT_0045bb04;
extern int *DAT_0045bb08;
extern char s_SE_S_FILE_DECIDE_0045bb20[];
extern char s_SE_S_FILE_SELECT_0045bb0c[];

// USA 0045B84C <- EU 0045B824 (Ghidra, non-matching)
// GLOBAL DAT_0045bb00 int *
// GLOBAL DAT_0045bb04 int
// GLOBAL DAT_0045bb08 int *
// GLOBAL s_SE_S_FILE_DECIDE_0045bb20 string
// GLOBAL s_SE_S_FILE_SELECT_0045bb0c string

void func_0045B84C(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  iVar3 = DAT_0045bb04;
  piVar2 = DAT_0045bb00;
  uVar4 = 0;
  while( true ) {
    piVar6 = (int *)(param_1 + 0x1e4);
    if (uVar4 < 3) {
      piVar6 = piVar6 + uVar4;
    }
    if ((*(ushort *)(*(int *)(*piVar6 + 0x14) + 0x16) & 8) != 0) {
      *(uint *)(param_1 + 0x210) = uVar4;
      *(undefined1 *)(param_1 + 0x224) = 0;
    }
    piVar6 = (int *)(param_1 + 0x1e4);
    if (uVar4 < 3) {
      piVar6 = piVar6 + uVar4;
    }
    if ((*(ushort *)(*(int *)(*piVar6 + 0x14) + 0x16) & 0x10) != 0) break;
    piVar6 = (int *)(param_1 + 0x1e4);
    if (uVar4 < 3) {
      piVar6 = piVar6 + uVar4;
    }
    uVar4 = uVar4 + 1;
    if ((*(ushort *)(*(int *)(*piVar6 + 0x14) + 0x16) & 0x20) != 0) {
      *(undefined1 *)(param_1 + 0x224) = 1;
    }
    piVar6 = DAT_0045bb08;
    if (2 < (int)uVar4) {
      if (*(char *)(param_1 + 0x224) != '\0') {
        if ((*(uint *)(*DAT_0045bb08 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x220000) !=
            0) {
          uVar4 = *(int *)(param_1 + 0x210) + 1;
          if (2 < (int)uVar4) {
            uVar4 = 0;
          }
          func_00459A84(param_1,uVar4);
          local_2c = s_SE_S_FILE_SELECT_0045bb0c;
          local_30 = iVar3;
          func_00587F74(*piVar2,&local_30,0);
        }
        if ((*(uint *)(*piVar6 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x110000) != 0) {
          uVar4 = *(int *)(param_1 + 0x210) - 1;
          if ((int)uVar4 < 0) {
            uVar4 = 2;
          }
          func_00459A84(param_1,uVar4);
          local_2c = s_SE_S_FILE_SELECT_0045bb0c;
          local_30 = iVar3;
          func_00587F74(*piVar2,&local_30,0);
        }
        if ((*(uint *)(*piVar6 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 1) != 0) {
          *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x210);
          func_0066D544((undefined4 *)(param_1 + 0x17c),'\x01');
LAB_0045badc:
          local_2c = s_SE_S_FILE_DECIDE_0045bb20;
          local_30 = iVar3;
          func_00587F74(*piVar2,&local_30,0);
        }
      }
      return;
    }
  }
  *(uint *)(param_1 + 0x214) = uVar4;
  iVar5 = (int)*(char *)(param_1 + 0x180);
  if (iVar5 != -1) {
    iVar8 = *(int *)(param_1 + 0x19c);
    pcVar7 = *(code **)(iVar8 + iVar5 * 8);
    if ((pcVar7 != (code *)0x0) ||
       ((uVar4 = *(uint *)(iVar8 + iVar5 * 8 + 4), (uVar4 & 1) != 0 && (uVar4 != 0)))) {
      uVar4 = *(uint *)(iVar8 + iVar5 * 8 + 4);
      piVar6 = (int *)(*(int *)(param_1 + 400) + ((int)uVar4 >> 1));
      if ((uVar4 & 1) != 0) {
        pcVar7 = *(code **)(pcVar7 + *piVar6);
      }
      (*pcVar7)(piVar6,2);
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x180);
  *(undefined1 *)(param_1 + 0x180) = 2;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x181) = uVar1;
  if (*(int *)(param_1 + 0x18c) != 0) {
    if (*(uint *)(param_1 + 0x184) < 3) {
      piVar6 = *(int **)(param_1 + 0x188);
    }
    else {
      piVar6 = (int *)(*(int *)(param_1 + 0x188) + 0x48);
    }
    (**(code **)(*piVar6 + 8))(piVar6);
    local_24 = piVar6[1];
    local_28 = iVar3;
    func_0010BEB4(*(int *)(param_1 + 0x18c),&local_28);
  }
  iVar8 = (int)*(char *)(param_1 + 0x180);
  iVar5 = *(int *)(param_1 + 0x194);
  pcVar7 = *(code **)(iVar5 + iVar8 * 8);
  if ((pcVar7 != (code *)0x0) ||
     ((uVar4 = *(uint *)(iVar5 + iVar8 * 8 + 4), (uVar4 & 1) != 0 && (uVar4 != 0)))) {
    uVar4 = *(uint *)(iVar5 + iVar8 * 8 + 4);
    if ((uVar4 & 1) != 0) {
      pcVar7 = *(code **)(pcVar7 + *(int *)(*(int *)(param_1 + 400) + ((int)uVar4 >> 1)));
    }
    (*pcVar7)((int)(*(int *)(param_1 + 400)) + ((int)uVar4 >> 1));
  }
  goto LAB_0045badc;
}

