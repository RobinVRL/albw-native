/* USA 0016739C (EU 001673A0 + its fall-through body EU 001673D4): create a layout holder
 * (0x74 bytes, 00168434) at this+0x1C, copy the name, new nw::lyt::Layout (0x34), get
 * "<name>.bflyt" from the accessor at (*DAT_00167714)+0x54, Layout::Build, then set up panes.
 * Native fix of the generated Ghidra text: Build (004045A8) takes a 5th, stack argument
 * (EU 00167524..00167530: [sp] = param_3, or when NULL the address of a default object on the
 * stack whose first word is vtable 006EF5F8 = uStack_2c); Ghidra dropped it. Rest unchanged.
 * Confidence: high. */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0012F08C(int param_1,int *param_2);
extern int func_0012F1DC(int param_1,undefined4 param_2);
extern int func_001677CC(undefined4 param_1,int *param_2);
extern int func_00168434(undefined4 *param_1);
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

// USA 0016739C <- EU 001673A0 (Ghidra, non-matching)
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

void func_0016739C(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 in_r3;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define iStack_e0 (*(int *)(albw_frame + 0x0))
  #define pbStack_dc (*(byte * *)(albw_frame + 0x4))
  #define iStack_c8 (*(int *)(albw_frame + 0x18))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x24))
  #define auStack_b8 ((undefined4 *)(albw_frame + 0x28))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0xb4))
  puVar2 = (undefined4 *)func_0010BAB4(0x74);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00168434(puVar2);
  }
  *(int **)(param_1 + 0x1c) = piVar3;
  puVar11 = (uint *)piVar3[10];
  (**(code **)(*param_2 + 8))(param_2);
  uVar10 = 0;
  do {
    if (*(char *)(param_2[1] + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_00167434;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_00167434:
  if (piVar3[0xb] <= (int)uVar10) {
    uVar10 = piVar3[0xb] - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar11,(uint *)param_2[1],uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x34);
  puVar2 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar2 = (undefined4 *)func_00404C78(puVar4);
    *puVar2 = DAT_00167710;
  }
  *piVar3 = (int)puVar2;
  iVar12 = *DAT_00167714;
  (**(code **)(*param_2 + 8))(param_2);
  piVar5 = func_00689578(auStack_b8,s__s_bflyt_00167718,param_2[1],in_r3);
  (**(code **)(*piVar5 + 8))(piVar5);
  piVar13 = (int *)(iVar12 + 0x54);
  uVar6 = (**(code **)(*piVar13 + 0xc))(piVar13,DAT_00167724,piVar5[1],0);
  uStack_2c = DAT_00167728;
  func_004045A8((int *)*piVar3,uVar6,piVar13,0,param_3 != 0 ? (undefined4)param_3 : (undefined4)&uStack_2c);  /* [sp] = r9 or sp+0xc4 */
  iVar12 = DAT_00167730;
  puVar11 = DAT_0016772c;
  piVar5 = *(int **)(*piVar3 + 0x10);
  piVar13 = DAT_00167734;
joined_r0x00167550:
  if (piVar5 == (int *)0x0) {
    DAT_00167734 = piVar13;
    return;
  }
  DAT_00167734 = piVar13;
  if (piVar5 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (piVar7 == piVar13) {
        if (piVar5 != (int *)0x0) {
          func_0012F1DC((int)piVar5,*piVar3);
          bVar14 = (char)piVar5[0x52] == '\0';
          iVar8 = 0;
          if (!bVar14) {
            iVar8 = piVar5[0x2a];
          }
          if ((bVar14 || iVar8 == 0) ||
             ((piVar5 != (int *)0xffffff67 && (*(char *)((int)piVar5 + 0x99) == '@'))))
          goto LAB_00167670;
          iStack_c8 = 0;
          uStack_c4 = 0;
          uStack_bc = 0xffffffff;
          uStack_c0 = 0;
          pbStack_dc = (byte *)piVar5[0x2a];
          iStack_e0 = iVar12;
          if (*pbStack_dc == 0) goto LAB_001676dc;
          (**(code **)(iVar12 + 8))(&iStack_e0);
          iVar8 = 0;
          goto LAB_00167618;
        }
        break;
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar13 = DAT_00167738;
  if (piVar5 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (piVar7 == piVar13) {
        if (piVar5 != (int *)0x0) {
          func_001677CC(piVar3,piVar5);
        }
        break;
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  goto LAB_00167670;
  while (iVar8 = iVar8 + 1, iVar8 < 0x40001) {
LAB_00167618:
    if (pbStack_dc[iVar8] == 0) {
      iVar1 = iVar8 + -0x40000;
      if (iVar8 < 0x40001) {
        iVar1 = iVar8;
      }
      pbVar9 = DAT_0016773c;
      if (iVar1 < 0 != (iVar8 >= 0x40001 && SBORROW4(iVar8,0x40000))) goto LAB_001676ac;
      break;
    }
  }
  pbVar9 = pbStack_dc;
LAB_001676ac:
  uVar10 = (uint)*pbVar9;
  bVar14 = uVar10 == 0x40;
  if (!bVar14) {
    uVar10 = *puVar11;
  }
  if (bVar14 || uVar10 == 0) {
LAB_001676dc:
    iVar8 = 0;
  }
  else {
    iVar8 = func_005826A4(uVar10,&iStack_c8,param_2,&iStack_e0);
  }
  if (iVar8 != 0) {
    func_0012F08C((int)piVar5,&iStack_c8);
  }
LAB_00167670:
  piVar5 = (int *)func_003FD6F4((int)piVar5);
  piVar13 = DAT_00167734;
  goto joined_r0x00167550;
}

