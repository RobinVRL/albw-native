/* USA 001673D0 (EU 001673D4): body of the layout-holder setup that 0016739C falls into
 * (r0 = holder, r1 = name, r2 = optional object): see native/game/func_0016739C.c.
 * Native fix of the generated Ghidra text: Layout::Build (004045A8) gets its 5th, stack
 * argument ([sp] = param_3, or the default object at sp+0xc4 = local_2c, vtable 006EF5F8).
 * Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0012F08C(int param_1,int *param_2);
extern int func_0012F1DC(int param_1,undefined4 param_2);
extern int func_001677CC(undefined4 param_1,int *param_2);
extern int func_003FD6F4(int param_1);
extern int func_004045A8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
extern int func_00404C78(undefined4 *param_1);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00689578(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4);
extern undefined4 DAT_00167710;
extern int *DAT_00167714;
extern undefined4 DAT_00167724;
extern undefined4 DAT_00167728;
extern uint *DAT_0016772c;
extern int DAT_00167730;
extern int *DAT_00167734;
extern int *DAT_00167738;
extern byte *DAT_0016773c;
extern char s__s_bflyt_00167718[];

// USA 001673D0 <- EU 001673D4 (Ghidra, non-matching)
// GLOBAL DAT_00167710 undefined4
// GLOBAL DAT_00167714 int *
// GLOBAL DAT_00167724 undefined4
// GLOBAL DAT_00167728 undefined4
// GLOBAL DAT_0016772c uint *
// GLOBAL DAT_00167730 int
// GLOBAL DAT_00167734 int *
// GLOBAL DAT_00167738 int *
// GLOBAL DAT_0016773c byte *
// GLOBAL s_%s.bflyt_00167718 string

void func_001673D0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_e0 (*(int *)(albw_frame + 0x0))
  #define local_dc (*(byte * *)(albw_frame + 0x4))
  #define local_c8 (*(int *)(albw_frame + 0x18))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x24))
  #define auStack_b8 ((undefined4 *)(albw_frame + 0x28))
  #define local_2c (*(undefined4 *)(albw_frame + 0xb4))
  puVar10 = (uint *)param_1[10];
  (**(code **)(*param_2 + 8))(param_2);
  uVar9 = 0;
  do {
    if (*(char *)(param_2[1] + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_00167434;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_00167434:
  if (param_1[0xb] <= (int)uVar9) {
    uVar9 = param_1[0xb] - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar10,(uint *)param_2[1],uVar9);
  *(undefined1 *)((int)puVar10 + uVar9) = 0;
  puVar2 = (undefined4 *)func_0010BAB4(0x34);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar3 = (undefined4 *)func_00404C78(puVar2);
    *puVar3 = DAT_00167710;
  }
  *param_1 = (int)puVar3;
  iVar11 = *DAT_00167714;
  (**(code **)(*param_2 + 8))(param_2);
  piVar4 = func_00689578(auStack_b8,s__s_bflyt_00167718,param_2[1],param_4);
  (**(code **)(*piVar4 + 8))(piVar4);
  piVar12 = (int *)(iVar11 + 0x54);
  uVar5 = (**(code **)(*piVar12 + 0xc))(piVar12,DAT_00167724,piVar4[1],0);
  local_2c = DAT_00167728;
  func_004045A8((int *)*param_1,uVar5,piVar12,0,param_3 != 0 ? (undefined4)param_3 : (undefined4)&local_2c);  /* [sp] = r9 or sp+0xc4 */
  iVar11 = DAT_00167730;
  puVar10 = DAT_0016772c;
  piVar4 = *(int **)(*param_1 + 0x10);
  piVar12 = DAT_00167734;
joined_r0x00167550:
  if (piVar4 == (int *)0x0) {
    DAT_00167734 = piVar12;
    return;
  }
  DAT_00167734 = piVar12;
  if (piVar4 != (int *)0x0) {
    piVar6 = (int *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (piVar6 == piVar12) {
        if (piVar4 != (int *)0x0) {
          func_0012F1DC((int)piVar4,*param_1);
          bVar13 = (char)piVar4[0x52] == '\0';
          iVar7 = 0;
          if (!bVar13) {
            iVar7 = piVar4[0x2a];
          }
          if ((bVar13 || iVar7 == 0) ||
             ((piVar4 != (int *)0xffffff67 && (*(char *)((int)piVar4 + 0x99) == '@'))))
          goto LAB_00167670;
          local_c8 = 0;
          local_c4 = 0;
          local_bc = 0xffffffff;
          local_c0 = 0;
          local_dc = (byte *)piVar4[0x2a];
          local_e0 = iVar11;
          if (*local_dc == 0) goto LAB_001676dc;
          (**(code **)(iVar11 + 8))(&local_e0);
          iVar7 = 0;
          goto LAB_00167618;
        }
        break;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
  }
  piVar12 = DAT_00167738;
  if (piVar4 != (int *)0x0) {
    piVar6 = (int *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (piVar6 == piVar12) {
        if (piVar4 != (int *)0x0) {
          func_001677CC(param_1,piVar4);
        }
        break;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
  }
  goto LAB_00167670;
  while (iVar7 = iVar7 + 1, iVar7 < 0x40001) {
LAB_00167618:
    if (local_dc[iVar7] == 0) {
      iVar1 = iVar7 + -0x40000;
      if (iVar7 < 0x40001) {
        iVar1 = iVar7;
      }
      pbVar8 = DAT_0016773c;
      if (iVar1 < 0 != (iVar7 >= 0x40001 && SBORROW4(iVar7,0x40000))) goto LAB_001676ac;
      break;
    }
  }
  pbVar8 = local_dc;
LAB_001676ac:
  uVar9 = (uint)*pbVar8;
  bVar13 = uVar9 == 0x40;
  if (!bVar13) {
    uVar9 = *puVar10;
  }
  if (bVar13 || uVar9 == 0) {
LAB_001676dc:
    iVar7 = 0;
  }
  else {
    iVar7 = func_005826A4(uVar9,&local_c8,param_2,&local_e0);
  }
  if (iVar7 != 0) {
    func_0012F08C((int)piVar4,&local_c8);
  }
LAB_00167670:
  piVar4 = (int *)func_003FD6F4((int)piVar4);
  piVar12 = DAT_00167734;
  goto joined_r0x00167550;
}

