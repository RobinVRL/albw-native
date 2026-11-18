// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0012E708(int param_1,int param_2);
extern int func_0014CFA0(int param_1);
extern int func_0014CFF0(int param_1,int param_2);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_004262AC(undefined4 param_1);
extern int func_004265BC(undefined4 param_1);
extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00537B38(int param_1);
extern int func_005568D4(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556A2C(int param_1);
extern int func_00556A38(int param_1);
extern int func_00556AE0(int param_1);
extern int func_00556AEC(int param_1);
extern int *DAT_004634c8;
extern int DAT_004634cc;
extern undefined4 DAT_004634d0;
extern int *DAT_004634d4;
extern int DAT_004634ec;
extern undefined DAT_004634f0;
extern int *DAT_004634f8;
extern int *DAT_004634fc;
extern int *DAT_00463500;
extern int *DAT_00463504;
extern int *DAT_004638d0;
extern int *DAT_004638d4;
extern int *DAT_004638d8;
extern char s_P_PowerUpSword_00_004634d8[];
extern char s_SE_S_COLLECT_APPEAR_ITEM_004638dc[];

// USA 0046308C <- EU 00463064 (Ghidra, non-matching)
// GLOBAL DAT_004634c8 int *
// GLOBAL DAT_004634cc int
// GLOBAL DAT_004634d0 undefined4
// GLOBAL DAT_004634d4 int *
// GLOBAL DAT_004634ec int
// GLOBAL DAT_004634f0 undefined
// GLOBAL DAT_004634f8 int *
// GLOBAL DAT_004634fc int *
// GLOBAL DAT_00463500 int *
// GLOBAL DAT_00463504 int *
// GLOBAL DAT_004638d0 int *
// GLOBAL DAT_004638d4 int *
// GLOBAL DAT_004638d8 int *
// GLOBAL s_P_PowerUpSword_00_004634d8 string
// GLOBAL s_SE_S_COLLECT_APPEAR_ITEM_004638dc string

void func_0046308C(int param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  uint in_r3;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 ((undefined2 *)(albw_frame + 0xc))
  #define local_36 (*(undefined2 *)(albw_frame + 0x1a))
  #define local_30 (*(int *)(albw_frame + 0x20))
  #define local_2c (*(char * *)(albw_frame + 0x24))
  func_0012E708(*DAT_004634c8,0);
  iVar1 = DAT_004634cc;
  uVar11 = 0;
  do {
    piVar5 = (int *)(param_1 + 200);
    if (uVar11 < 0x1a) {
      piVar5 = piVar5 + uVar11;
    }
    iVar13 = *piVar5;
    bVar2 = func_004262AC(*(undefined4 *)(iVar13 + 0x50));
    local_50 = iVar1;
    local_4c = (char *)DAT_004634d0;
    iVar6 = func_005229AC(*(int **)(iVar13 + 0x1c),&local_50);
    if (iVar6 == 0) {
      if (bVar2) goto LAB_0046314c;
    }
    else {
      uVar7 = func_004265BC(*(undefined4 *)(iVar13 + 0x50));
      fparam_0 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      func_002316CC(iVar13 + 0x44,fparam_0);
      if (bVar2) {
        iVar13 = *(int *)(iVar13 + 0x1c);
        if ((*(byte *)(iVar6 + 0x44) & 1) == 0) {
          *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
          *(byte *)(iVar13 + 0x70) = *(byte *)(iVar13 + 0x70) | 2;
        }
LAB_0046314c:
        puVar8 = (uint *)(param_1 + 200);
        if (uVar11 < 0x1a) {
          puVar8 = puVar8 + uVar11;
        }
        uVar7 = *puVar8;
        bVar2 = *(char *)(uVar7 + 0xd) == '\0';
        if (bVar2) {
          uVar7 = (uint)*(byte *)(uVar7 + 0xe);
        }
        if (bVar2 && uVar7 == 0) {
          piVar5 = (int *)(param_1 + 200);
          if (uVar11 < 0x1a) {
            piVar5 = piVar5 + uVar11;
          }
          *(undefined1 *)(*piVar5 + 0xe) = 1;
        }
      }
      else {
        *(byte *)(*(int *)(iVar13 + 0x1c) + 0x70) = *(byte *)(*(int *)(iVar13 + 0x1c) + 0x70) | 2;
        if ((*(byte *)(iVar6 + 0x44) & 1) != 0) {
          *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
        }
      }
    }
    piVar5 = (int *)(param_1 + 200);
    if (uVar11 < 0x1a) {
      piVar5 = piVar5 + uVar11;
    }
    func_0014CFF0(param_1,*piVar5);
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x1a);
  func_0014CFA0(param_1);
  iVar6 = *DAT_004634d4;
  uVar11 = func_0055696C(iVar6,0x2c);
  if (uVar11 < 3) {
    local_4c = s_P_PowerUpSword_00_004634d8;
    local_50 = iVar1;
    iVar13 = func_005229AC(*(int **)(param_1 + 0x1c),&local_50);
    if ((iVar13 != 0) && ((*(byte *)(iVar13 + 0x44) & 1) != 0)) {
      *(byte *)(iVar13 + 0x44) = *(byte *)(iVar13 + 0x44) & 0xfe;
    }
  }
  else {
    iVar12 = *(int *)(param_1 + 0x1c);
    local_4c = s_P_PowerUpSword_00_004634d8;
    local_50 = iVar1;
    iVar13 = func_005229AC(*(int **)(param_1 + 0x1c),&local_50);
    if ((iVar13 != 0) && ((*(byte *)(iVar13 + 0x44) & 1) == 0)) {
      *(byte *)(iVar13 + 0x44) = *(byte *)(iVar13 + 0x44) & 0xfe | 1;
      *(byte *)(iVar12 + 0x70) = *(byte *)(iVar12 + 0x70) | 2;
    }
  }
  local_4c = (char *)local_44;
  uStack_48 = 8;
  local_36 = 0;
  local_44[0] = 0;
  local_50 = DAT_004634ec;
  uVar4 = func_005568D4(iVar6);
  func_004994FC((int)&local_50,&DAT_004634f0,(uint)uVar4,in_r3);
  piVar9 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),DAT_004634f8);
  piVar5 = DAT_004634fc;
  if (piVar9 != (int *)0x0) {
    piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
    do {
      if (piVar10 == piVar5) {
        if (piVar9 != (int *)0x0) {
          (**(code **)(local_50 + 8))(&local_50);
          in_r3 = 0;
          goto LAB_004632d8;
        }
        break;
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)0x0);
  }
  goto LAB_00463344;
  while (in_r3 = in_r3 + 1, (int)in_r3 < 0x40001) {
LAB_004633c0:
    if (*(short *)((int)local_4c + in_r3 * 2) == 0) {
      if ((int)in_r3 < 0x40001) goto LAB_004633fc;
      break;
    }
  }
  in_r3 = 0;
LAB_004633fc:
  in_r3 = in_r3 & 0xffff;
  (**(code **)(local_50 + 8))(&local_50);
  (**(code **)(*piVar9 + 0x60))(piVar9,local_4c,0);
  goto LAB_0046342c;
  while (in_r3 = in_r3 + 1, (int)in_r3 < 0x40001) {
LAB_004634a8:
    if (*(short *)((int)local_4c + in_r3 * 2) == 0) {
      if ((int)in_r3 < 0x40001) goto LAB_00463524;
      break;
    }
  }
  in_r3 = 0;
LAB_00463524:
  in_r3 = in_r3 & 0xffff;
  (**(code **)(local_50 + 8))(&local_50);
  (**(code **)(*piVar9 + 0x60))(piVar9,local_4c,0);
  goto LAB_00463554;
  while (in_r3 = in_r3 + 1, (int)in_r3 < 0x40001) {
LAB_004635d0:
    if (*(short *)((int)local_4c + in_r3 * 2) == 0) {
      if ((int)in_r3 < 0x40001) goto LAB_0046360c;
      break;
    }
  }
  in_r3 = 0;
LAB_0046360c:
  in_r3 = in_r3 & 0xffff;
  (**(code **)(local_50 + 8))(&local_50);
  (**(code **)(*piVar9 + 0x60))(piVar9,local_4c,0);
  goto LAB_0046363c;
  while (in_r3 = in_r3 + 1, (int)in_r3 < 0x40001) {
LAB_004636b8:
    if (*(short *)((int)local_4c + in_r3 * 2) == 0) {
      if ((int)in_r3 < 0x40001) goto LAB_004636f4;
      break;
    }
  }
  in_r3 = 0;
LAB_004636f4:
  in_r3 = in_r3 & 0xffff;
  (**(code **)(local_50 + 8))(&local_50);
  (**(code **)(*piVar9 + 0x60))(piVar9,local_4c,0);
  goto LAB_00463724;
  while (uVar11 = uVar11 + 1, (int)uVar11 < 0x40001) {
LAB_00463838:
    if (*(short *)((int)local_4c + uVar11 * 2) == 0) {
      if ((int)uVar11 < 0x40001) goto LAB_00463874;
      break;
    }
  }
  uVar11 = 0;
LAB_00463874:
  (**(code **)(local_50 + 8))(&local_50);
  (**(code **)(*piVar9 + 0x60))(piVar9,local_4c,0,uVar11 & 0xffff);
  goto LAB_004638a4;
  while (in_r3 = in_r3 + 1, (int)in_r3 < 0x40001) {
LAB_004632d8:
    if (*(short *)((int)local_4c + in_r3 * 2) == 0) {
      if ((int)in_r3 < 0x40001) goto LAB_00463314;
      break;
    }
  }
  in_r3 = 0;
LAB_00463314:
  in_r3 = in_r3 & 0xffff;
  (**(code **)(local_50 + 8))(&local_50);
  (**(code **)(*piVar9 + 0x60))(piVar9,local_4c,0);
LAB_00463344:
  bVar2 = func_004262AC(0xe);
  if (bVar2) {
    bVar3 = func_00556A2C(iVar6);
    func_004994FC((int)&local_50,&DAT_004634f0,(uint)bVar3,in_r3);
    piVar9 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),DAT_00463500);
    piVar5 = DAT_004634fc;
    if (piVar9 != (int *)0x0) {
      piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
      do {
        if (piVar10 == piVar5) {
          if (piVar9 != (int *)0x0) {
            (**(code **)(local_50 + 8))(&local_50);
            in_r3 = 0;
            goto LAB_004633c0;
          }
          break;
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)0x0);
    }
  }
LAB_0046342c:
  bVar2 = func_004262AC(0xf);
  if (bVar2) {
    bVar3 = func_00556A38(iVar6);
    func_004994FC((int)&local_50,&DAT_004634f0,(uint)bVar3,in_r3);
    piVar9 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),DAT_00463504);
    piVar5 = DAT_004634fc;
    if (piVar9 != (int *)0x0) {
      piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
      do {
        if (piVar10 == piVar5) {
          if (piVar9 != (int *)0x0) {
            (**(code **)(local_50 + 8))(&local_50);
            in_r3 = 0;
            goto LAB_004634a8;
          }
          break;
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)0x0);
    }
  }
LAB_00463554:
  bVar2 = func_004262AC(0x10);
  if (bVar2) {
    bVar3 = func_00556AEC(iVar6);
    func_004994FC((int)&local_50,&DAT_004634f0,(uint)bVar3,in_r3);
    piVar9 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),DAT_004638d0);
    piVar5 = DAT_004634fc;
    if (piVar9 != (int *)0x0) {
      piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
      do {
        if (piVar10 == piVar5) {
          if (piVar9 != (int *)0x0) {
            (**(code **)(local_50 + 8))(&local_50);
            in_r3 = 0;
            goto LAB_004635d0;
          }
          break;
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)0x0);
    }
  }
LAB_0046363c:
  bVar2 = func_004262AC(0x11);
  if (bVar2) {
    bVar3 = func_00556AE0(iVar6);
    func_004994FC((int)&local_50,&DAT_004634f0,(uint)bVar3,in_r3);
    piVar9 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),DAT_004638d4);
    piVar5 = DAT_004634fc;
    if (piVar9 != (int *)0x0) {
      piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
      do {
        if (piVar10 == piVar5) {
          if (piVar9 != (int *)0x0) {
            (**(code **)(local_50 + 8))(&local_50);
            in_r3 = 0;
            goto LAB_004636b8;
          }
          break;
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)0x0);
    }
  }
LAB_00463724:
  bVar2 = func_004262AC(0x12);
  if (!bVar2) goto LAB_004638a4;
  iVar13 = func_0055696C(iVar6,0x2b);
  uVar11 = (uint)(iVar13 != 0);
  iVar13 = func_0055696C(iVar6,0x28);
  if (iVar13 != 0) {
    uVar11 = uVar11 + 1;
  }
  iVar13 = func_0055696C(iVar6,0x2a);
  if (iVar13 != 0) {
    uVar11 = uVar11 + 1;
  }
  iVar13 = func_0055696C(iVar6,0x29);
  if (iVar13 != 0) {
    uVar11 = uVar11 + 1;
  }
  iVar13 = func_00537B38(iVar6);
  if (iVar13 == 2) {
    uVar11 = uVar11 - 2;
joined_r0x004637c0:
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
  }
  else {
    iVar6 = func_00537B38(iVar6);
    if (iVar6 == 3) {
      uVar11 = uVar11 - 4;
      goto joined_r0x004637c0;
    }
  }
  func_004994FC((int)&local_50,&DAT_004634f0,uVar11,in_r3);
  piVar9 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),DAT_004638d8);
  piVar5 = DAT_004634fc;
  if (piVar9 != (int *)0x0) {
    piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
    do {
      if (piVar10 == piVar5) {
        if (piVar9 != (int *)0x0) {
          (**(code **)(local_50 + 8))(&local_50);
          uVar11 = 0;
          goto LAB_00463838;
        }
        break;
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)0x0);
  }
LAB_004638a4:
  local_2c = s_SE_S_COLLECT_APPEAR_ITEM_004638dc;
  local_30 = iVar1;
  func_00533078(param_1,&local_30,0);
  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  return;
}

