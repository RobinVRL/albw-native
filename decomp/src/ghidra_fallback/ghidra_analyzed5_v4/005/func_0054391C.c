#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_001132E8(undefined4 param_1,undefined4 *param_2,int *param_3);
extern int func_00113388(int param_1,uint *param_2);
extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_00131244(int param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_00561C34(char *param_1,undefined4 *param_2,int param_3);
extern int func_00563710(uint *param_1,uint *param_2,int param_3);
extern int func_00563918(int param_1,uint *param_2);
extern int func_0057D5C4(int *param_1);
extern int *DAT_00543cc8;
extern int *DAT_00543ccc;
extern int *DAT_00543cd0;
extern int DAT_00543cd4;
extern uint DAT_00543cd8;
extern undefined4 *DAT_00543cdc;
extern undefined4 DAT_00543ce0;
extern int DAT_00543ce4;
extern int DAT_00543ce8;

// USA 0054391C <- EU 005438F4 (Ghidra, non-matching)
// GLOBAL DAT_00543cc8 int *
// GLOBAL DAT_00543ccc int *
// GLOBAL DAT_00543cd0 int *
// GLOBAL DAT_00543cd4 int
// GLOBAL DAT_00543cd8 uint
// GLOBAL DAT_00543cdc undefined4 *
// GLOBAL DAT_00543ce0 undefined4
// GLOBAL DAT_00543ce4 int
// GLOBAL DAT_00543ce8 int

void func_0054391C(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  iVar9 = *DAT_00543cc8;
  iVar11 = *(int *)(iVar9 + 0x37b48);
  iVar4 = *(int *)(iVar9 + 0x37b4c);
  local_28 = param_4;
  if (iVar11 != 0) {
    puVar5 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
    *param_2 = (int)puVar5;
    puVar5 = func_003CC230(puVar5,&local_28,iVar11,iVar4 << 2);
    *param_2 = (int)puVar5;
    if ((uint *)param_2[3] != (uint *)0x0) {
      *(uint *)param_2[3] = (uint)((int)puVar5 - param_2[2]) >> 3;
    }
    param_2[2] = *param_2;
    param_2[3] = local_28;
    if (param_2[4] == 0) {
      param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
    }
  }
  iVar11 = *(int *)(iVar9 + 0x37b60);
  iVar4 = *(int *)(iVar9 + 0x37b64);
  if (iVar11 != 0) {
    puVar5 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
    *param_2 = (int)puVar5;
    puVar5 = func_003CC230(puVar5,&local_28,iVar11,iVar4 << 2);
    *param_2 = (int)puVar5;
    if ((uint *)param_2[3] != (uint *)0x0) {
      *(uint *)param_2[3] = (uint)((int)puVar5 - param_2[2]) >> 3;
    }
    param_2[2] = *param_2;
    param_2[3] = local_28;
    if (param_2[4] == 0) {
      param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
    }
  }
  iVar9 = *(int *)(*(int *)(*DAT_00543ccc + 0x1b8) + 0x18);
  iVar4 = *(int *)(*(int *)(*DAT_00543ccc + 0x1b8) + 0x1c);
  if (iVar9 != 0) {
    puVar5 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
    *param_2 = (int)puVar5;
    puVar5 = func_003CC230(puVar5,&local_28,iVar9,iVar4 << 2);
    *param_2 = (int)puVar5;
    if ((uint *)param_2[3] != (uint *)0x0) {
      *(uint *)param_2[3] = (uint)((int)puVar5 - param_2[2]) >> 3;
    }
    param_2[2] = *param_2;
    param_2[3] = local_28;
    if (param_2[4] == 0) {
      param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
    }
  }
  piVar6 = func_0057D5C4((int *)(param_1 + 0x2954));
  puVar5 = func_00131244(*DAT_00543cd0,(uint *)*param_2,(undefined4 *)(param_1 + 0x2900),piVar6);
  *param_2 = (int)puVar5;
  puVar5 = (uint *)func_00561C34((char *)(param_1 + 0x2670),puVar5,1);
  *param_2 = (int)puVar5;
  puVar5 = func_00563918(param_1 + 0x26f0,puVar5);
  iVar4 = DAT_00543cd4;
  *param_2 = (int)puVar5;
  puVar2 = DAT_00543cdc;
  uVar1 = DAT_00543cd8;
  *puVar5 = *(byte *)(*(int *)(iVar4 + param_1) + 2) | 0x80000000;
  uVar3 = DAT_00543ce0;
  puVar5[1] = uVar1;
  func_001150CC(puVar5 + 2,puVar2,uVar3);
  *param_2 = (int)(puVar5 + 0x10);
  iVar4 = 0;
  iVar9 = param_1 + *(int *)(DAT_00543ce4 + param_1) * 0x14;
  piVar6 = *(int **)(iVar9 + 0x24);
  piVar12 = piVar6 + *(int *)(iVar9 + 0x1c);
  for (; piVar6 != piVar12; piVar6 = piVar6 + 1) {
    if (*(int *)(*piVar6 + 0x15dc) != 0) {
      puVar5 = func_00563710((uint *)(param_1 + iVar4 * 0xa8 + 0x278c),(uint *)*param_2,1);
      *param_2 = (int)puVar5;
      iVar11 = *piVar6;
      piVar10 = (int *)(iVar11 + 0xe48);
      iVar9 = *piVar10;
      if (iVar9 == 0) {
        iVar9 = func_00113388((int)piVar10,(uint *)(iVar11 + 0xe4c));
        iVar9 = (iVar9 - (int)piVar10) + -4 >> 2;
        *piVar10 = iVar9;
      }
      func_00110D44(puVar5,(byte *)(iVar11 + 0xe4c),iVar9 << 2);
      iVar9 = *piVar10;
      *param_2 = (int)(puVar5 + iVar9);
      piVar10 = func_001132E8(*piVar6 + 0xe48,puVar5 + iVar9,(int *)(*piVar6 + 0x15d8));
      *param_2 = (int)piVar10;
      iVar9 = DAT_00543ce8;
      iVar8 = *piVar6;
      iVar11 = 0;
      do {
        if (*(int *)(iVar8 + 0xe48 + iVar11 * 0x70 + 0x160) == 0) {
          *piVar10 = 0;
          piVar10[1] = iVar11 * 3 + 0x205U | 0xf0000;
          piVar7 = piVar10 + 1;
        }
        else {
          *piVar10 = 0;
          piVar10[1] = iVar11 * 3 + 0x203U | 0x802f0000;
          piVar7 = piVar10 + 3;
          piVar10[2] = 0;
          *piVar7 = 0;
        }
        piVar10 = piVar7 + 1;
        if (*(char *)(iVar8 + 0xe48 + iVar11 * 0x14 + 0x6a0) != '\0') {
          *piVar10 = iVar11;
          piVar7[2] = iVar9;
          piVar7[3] = 0;
          piVar7[4] = 0;
          piVar7[5] = 0;
          piVar10 = piVar7 + 7;
          piVar7[6] = 0;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0xc);
      *param_2 = (int)piVar10;
    }
    iVar4 = iVar4 + 1;
  }
  return;
}

