#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A64(uint *param_1);
extern int func_0015212C(int param_1,int param_2);
extern int func_00152360(int param_1,int param_2);
extern int func_002E21DC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00370A58(undefined4 *param_1,int *param_2);
extern int func_003C0408(uint *param_1,int param_2);
extern int func_003C04F8(uint *param_1,int param_2);
extern int func_004C397C(int param_1);
extern int func_004C3E44(int param_1,int param_2);
extern int func_005215DC(int param_1);
extern int func_00521610(int param_1);
extern int func_00548798(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00584564(int param_1);
extern int func_005845EC(int param_1,int *param_2);
extern undefined DAT_0000003c;
extern undefined DAT_00000040;
extern int *DAT_004c7684;
extern int *DAT_004c7688;
extern int *DAT_004c768c;
extern undefined *DAT_004c7690;
extern uint * *DAT_004c7694;
extern int DAT_004c7698;
extern int *DAT_004c769c;
extern int *DAT_004c76a0;
extern undefined4 *DAT_004c76a4;
extern int DAT_004c76a8;

// USA 004C6DD0 <- EU 004C6DA8 (Ghidra, non-matching)
// GLOBAL DAT_0000003c undefined
// GLOBAL DAT_00000040 undefined
// GLOBAL DAT_004c7684 int *
// GLOBAL DAT_004c7688 int *
// GLOBAL DAT_004c768c int *
// GLOBAL DAT_004c7690 undefined *
// GLOBAL DAT_004c7694 uint * *
// GLOBAL DAT_004c7698 int
// GLOBAL DAT_004c769c int *
// GLOBAL DAT_004c76a0 int *
// GLOBAL DAT_004c76a4 undefined4 *
// GLOBAL DAT_004c76a8 int
// GLOBAL EXT_00000004 undefined
// GLOBAL EXT_00000014 undefined

void func_004C6DD0(int param_1,uint **param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  uint *puVar7;
  uint **ppuVar8;
  uint uVar9;
  uint **extraout_r1;
  uint **extraout_r1_00;
  uint **extraout_r1_01;
  uint **extraout_r1_02;
  uint **extraout_r1_03;
  uint **extraout_r1_04;
  uint **extraout_r1_05;
  uint **extraout_r1_06;
  uint **extraout_r1_07;
  uint **extraout_r1_08;
  uint **ppuVar10;
  int iVar11;
  int iVar12;
  uint **ppuVar13;
  uint **unaff_r8;
  uint **ppuVar14;
  uint **ppuVar15;
  undefined1 *puVar16;
  bool bVar17;
  bool bVar18;
  _Alignas(8) unsigned char albw_frame[0x7a0];
  #define local_798 (*(uint ** *)(albw_frame + 0x8))
  #define local_794 (*(uint * *)(albw_frame + 0xc))
  #define local_790 (*(uint ** *)(albw_frame + 0x10))
  #define local_78c (*(uint ** *)(albw_frame + 0x14))
  #define local_788 (*(uint * *)(albw_frame + 0x18))
  #define local_784 (*(uint *)(albw_frame + 0x1c))
  #define local_780 (*(uint *)(albw_frame + 0x20))
  #define local_77c (*(uint *)(albw_frame + 0x24))
  #define local_778 (*(uint *)(albw_frame + 0x28))
  #define local_774 (*(uint ** *)(albw_frame + 0x2c))
  #define local_770 (*(uint ** *)(albw_frame + 0x30))
  #define local_76c (*(uint ** *)(albw_frame + 0x34))
  #define local_768 (*(uint *)(albw_frame + 0x38))
  #define local_764 (*(uint *)(albw_frame + 0x3c))
  #define local_760 (*(uint ** *)(albw_frame + 0x40))
  #define local_75c (*(uint *)(albw_frame + 0x44))
  #define local_588 (*(uint * *)(albw_frame + 0x218))
  #define local_584 (*(uint ** *)(albw_frame + 0x21c))
  #define local_580 (*(int *)(albw_frame + 0x220))
  #define local_57c (*(int *)(albw_frame + 0x224))
  #define auStack_578 ((undefined1 *)(albw_frame + 0x228))
  #define local_b4 (*(uint ** *)(albw_frame + 0x6ec))
  #define local_b0 (*(uint ** *)(albw_frame + 0x6f0))
  #define local_94 (*(int *)(albw_frame + 0x70c))
  #define uStack_90 (*(uint *)(albw_frame + 0x710))
  #define local_8b (*(undefined1 *)(albw_frame + 0x715))
  #define local_8a (*(undefined1 *)(albw_frame + 0x716))
  #define local_4c (*(int *)(albw_frame + 0x754))
  #define local_48 (*(int *)(albw_frame + 0x758))
  #define local_44 (*(undefined1 * *)(albw_frame + 0x75c))
  #define local_40 (*(int * *)(albw_frame + 0x760))
  #define local_3c (*(uint ** *)(albw_frame + 0x764))
  if (((*(char *)(*DAT_004c7684 + 0x25) == '\0') &&
      (iVar6 = func_00521610(*(int *)(param_1 + 0x518)), param_2 = extraout_r1, iVar6 != 0)) &&
     (*(int *)(param_1 + 0x598) != -1)) {
    *(int *)(param_1 + 0x598) = *(int *)(param_1 + 0x598) + 1;
  }
  local_94 = param_1 + 0x500;
  if ((*(char *)(param_1 + 0x5a0) != '\0') &&
     (iVar6 = func_004C397C(*DAT_004c7688), param_2 = extraout_r1_00, iVar6 != 0)) {
    *(undefined1 *)(param_1 + 0x5a0) = 0;
  }
  if ((*(char *)(local_94 + 0x9c) != '\0') &&
     (iVar6 = func_005215DC(*(int *)(param_1 + 0x518)), param_2 = extraout_r1_01, iVar6 != 0)) {
    *(undefined1 *)(param_1 + 0x59c) = 0;
  }
  if (((*(char *)(local_94 + 0x9d) == '\0') ||
      (iVar6 = func_005215DC(*(int *)(param_1 + 0x518)), param_2 = extraout_r1_02, iVar6 == 0)) ||
     (*(int *)(*DAT_004c768c + 0x10) != 0)) {
    if ((*(char *)(local_94 + 0x9c) == '\0') && (*(char *)(local_94 + 0x9d) == '\0')) {
      if ((*(char *)(local_94 + 0x9e) != '\0') &&
         ((iVar6 = func_005215DC(*(int *)(param_1 + 0x518)), param_2 = extraout_r1_03, iVar6 != 0 &&
          (*(int *)(*DAT_004c768c + 0x10) == 0)))) {
        iVar6 = *(int *)(param_1 + 0x518);
        local_4c = 0;
        local_588 = (uint *)0x0;
        local_584 = (uint **)0x0;
        local_580 = 0;
        local_57c = 0;
        ppuVar13 = &local_588;
        param_3 = (uint *)&DAT_0000003c;
        param_4 = (uint *)func_00100118((int)auStack_578,DAT_004c7690,0x3c,0x14);
        param_2 = (uint **)&NotUsed;
        if ((uint **)param_4 != (uint **)0x0) {
          param_3 = (uint *)0x0;
          ((uint **)param_4)[-4] = param_4;
          ((uint **)param_4)[-1] = (uint *)0x0;
          ((uint **)param_4)[-3] = (uint *)&NotUsed;
          ((uint **)param_4)[-2] = (uint *)0x0;
        }
        local_48 = 0;
        ppuVar15 = (uint **)(iVar6 + 0x920);
        if (*(int *)(iVar6 + 0x92c) == 0) {
          param_4 = *(uint **)(param_1 + 0x580);
          lVar3 = (ulonglong)*(uint *)(param_1 + 0x598) * ZEXT48(DAT_004c7694);
          param_2 = (uint **)lVar3;
          param_3 = (uint *)DAT_004c7694;
          if (param_4 < (uint **)((ulonglong)lVar3 >> 0x34)) {
            iVar11 = 0x32;
            iVar6 = func_00521610(*(int *)(param_1 + 0x518));
            if (iVar6 != 0) {
              iVar11 = func_00548798((int *)(*(int *)(param_1 + 0x518) + 0x8e4));
            }
            local_794 = (uint *)0x0;
            local_790 = (uint **)0x0;
            local_78c = (uint **)0x0;
            local_788 = (uint *)0x0;
            local_784 = 0;
            local_780 = 0;
            local_77c = 0;
            local_778 = 0;
            local_774 = (uint **)0x0;
            local_770 = (uint **)0x0;
            local_76c = (uint **)0x0;
            local_768 = 0;
            local_764 = 0;
            local_760 = (uint **)0x0;
            local_75c = 0;
            param_3 = (uint *)&local_794;
            if (*(int *)(param_1 + 0x580) == 0) {
              func_003C0408(param_3,iVar11);
            }
            else {
              func_003C04F8(param_3,(uint)(iVar11 == 999));
            }
            iVar6 = local_57c;
            param_2 = local_584;
            if (local_57c < (int)local_584) {
              local_57c = local_57c + 1;
              iVar6 = iVar6 + local_580;
              if ((int)local_584 <= iVar6) {
                iVar6 = iVar6 - (int)local_584;
              }
              puVar7 = local_588 + iVar6 * 0xf;
              *puVar7 = (uint)local_794;
              puVar7[1] = (uint)local_790;
              puVar7[2] = (uint)local_78c;
              puVar7[3] = (uint)local_788;
              puVar7[4] = local_784;
              puVar7[5] = local_780;
              puVar7[6] = local_77c;
              puVar7[7] = local_778;
              puVar7[8] = (uint)local_774;
              puVar7[9] = (uint)local_770;
              puVar7[10] = (uint)local_76c;
              puVar7[0xb] = local_768;
              puVar7[0xc] = local_764;
              puVar7[0xd] = (uint)local_760;
              puVar7[0xe] = local_75c;
              param_2 = local_774;
              param_3 = (uint *)local_770;
              param_4 = (uint *)local_76c;
              unaff_r8 = local_760;
            }
            local_48 = 1;
            ppuVar15 = ppuVar13;
            goto LAB_004c7088;
          }
        }
        else {
LAB_004c7088:
          if (0 < (int)ppuVar15[3]) {
            local_790 = (uint **)0x0;
            local_78c = (uint **)0x0;
            local_798 = &local_788;
            local_794 = (uint *)0x80;
            func_005845EC(param_1,(int *)&local_798);
            local_b4 = (uint **)0x0;
            iVar6 = 0;
            do {
              iVar11 = iVar6 * 0x40;
              iVar6 = iVar6 + 1;
              if (*(char *)(param_1 + iVar11 + 10) < '\0') {
                local_b4 = (uint **)((int)local_b4 + 1);
              }
            } while (iVar6 != 0x14);
            local_40 = (int *)(param_1 + 0x57c);
            param_3 = *(uint **)(param_1 + 0x57c);
            local_3c = (uint **)(param_1 + 0x580);
            param_4 = *(uint **)(param_1 + 0x580);
            if ((int)local_78c <= (int)local_b4) {
              local_b4 = local_78c;
            }
            local_44 = (undefined1 *)((int)param_3 + (int)param_4);
            iVar6 = 0;
            ppuVar14 = (uint **)0x0;
            local_b0 = (uint **)ppuVar15[3];
            param_2 = local_78c;
            if ((uint **)ppuVar15[3] != (uint **)0x0) {
              do {
                ppuVar8 = local_78c;
                param_2 = local_b4;
                if ((int)local_b4 <= iVar6) break;
                if ((int)local_44 < 5) {
                  param_3 = (uint *)0x0;
                  param_4 = *(uint **)(DAT_004c7698 + (int)local_44 * 0x10);
                  if (local_78c != (uint **)0x0) {
                    unaff_r8 = local_790;
                  }
                  ppuVar8 = (uint **)0x0;
                  ppuVar10 = (uint **)param_4;
                  if (local_78c != (uint **)0x0) {
                    do {
                      puVar16 = (undefined1 *)((int)unaff_r8 + (int)param_3);
                      if ((int)local_794 <= (int)puVar16) {
                        puVar16 = puVar16 + -(int)local_794;
                      }
                      ppuVar13 = local_798;
                      if (local_798[(int)puVar16] == param_4) goto LAB_004c7284;
                      param_3 = (uint *)((int)param_3 + 1);
                      ppuVar8 = (uint **)((int)ppuVar8 + 1);
                    } while ((uint **)param_3 != local_78c);
                  }
                  ppuVar8 = (uint **)0xffffffff;
                }
                else {
                  iVar11 = (int)ppuVar15[2] + (int)ppuVar14;
                  if ((int)ppuVar15[1] <= iVar11) {
                    iVar11 = iVar11 - (int)ppuVar15[1];
                  }
                  uVar9 = (*ppuVar15)[iVar11 * 0xf];
                  bVar17 = (uVar9 << 0xc) >> 0x1b != 5;
                  if (bVar17) {
                    uVar9 = uVar9 << 7;
                  }
                  if (!bVar17 || uVar9 >> 0x1b == 5) {
                    ppuVar10 = (uint **)0x0;
                    if (local_78c != (uint **)0x0) {
                      ppuVar13 = local_790;
                    }
                    iVar11 = 0;
                    if (local_78c != (uint **)0x0) {
                      do {
                        lVar3 = CONCAT44(iVar11,ppuVar10);
                        puVar16 = (undefined1 *)((int)ppuVar13 + (int)ppuVar10);
                        if ((int)local_794 <= (int)puVar16) {
                          puVar16 = puVar16 + -(int)local_794;
                        }
                        param_4 = local_798[(int)puVar16];
                        if ((uint **)param_4 == (uint **)0x39) goto LAB_004c7254;
                        ppuVar10 = (uint **)((int)ppuVar10 + 1);
                        iVar11 = iVar11 + 1;
                      } while (ppuVar10 != local_78c);
                    }
                  }
                  uVar9 = func_00111A64((uint *)(*DAT_004c769c + 0x660));
                  lVar3 = ZEXT48(ppuVar8) * (ulonglong)uVar9;
LAB_004c7254:
                  ppuVar8 = (uint **)((ulonglong)lVar3 >> 0x20);
                  param_3 = (uint *)local_798;
                  if (ppuVar8 < local_78c) {
                    param_4 = (uint *)((int)local_790 + (int)ppuVar8);
                    if ((int)local_794 <= (int)param_4) {
                      param_4 = (uint *)((int)param_4 - (int)local_794);
                    }
                    param_3 = (uint *)(local_798 + (int)param_4);
                  }
                  ppuVar10 = (uint **)*param_3;
                }
LAB_004c7284:
                if (-1 < (int)ppuVar8) {
                  bVar17 = local_78c == (uint **)0x0;
                  ppuVar13 = local_78c;
                  if (0 < (int)local_78c) {
                    ppuVar13 = (uint **)((int)local_78c - (int)ppuVar8);
                    bVar17 = local_78c == ppuVar8;
                  }
                  if (!bVar17 &&
                      (int)ppuVar13 < 0 ==
                      (0 < (int)local_78c && SBORROW4((int)local_78c,(int)ppuVar8))) {
                    if ((int)ppuVar8 < (int)((int)local_78c + -1)) {
                      do {
                        param_4 = (uint *)((int)local_790 + (int)ppuVar8);
                        if ((int)local_794 <= (int)param_4) {
                          param_4 = (uint *)((int)param_4 - (int)local_794);
                        }
                        puVar16 = (undefined1 *)((int)local_790 + (int)((int)ppuVar8 + 1));
                        if ((int)local_794 <= (int)puVar16) {
                          puVar16 = puVar16 + -(int)local_794;
                        }
                        ppuVar8 = (uint **)((int)ppuVar8 + 1);
                        local_798[(int)param_4] = local_798[(int)puVar16];
                      } while ((int)ppuVar8 < (int)((int)local_78c + -1));
                    }
                    local_78c = (uint **)((int)local_78c + -1);
                  }
                  iVar12 = 0;
                  ppuVar13 = (uint **)(param_1 + 4);
                  iVar11 = (int)ppuVar15[2] + (int)ppuVar14;
                  if ((int)ppuVar15[1] <= iVar11) {
                    iVar11 = iVar11 - (int)ppuVar15[1];
                  }
                  do {
                    param_3 = (uint *)(int)*(char *)((int)ppuVar13 + iVar12 * 0x40 + 6);
                    unaff_r8 = ppuVar10;
                    if ((int)param_3 < 0) {
                      func_00370A58(&uStack_90,(int *)(*ppuVar15 + iVar11 * 0xf));
                      local_8a = SUB41(ppuVar10,0);
                      param_4 = (uint *)(ppuVar13 + iVar12 * 0x10);
                      local_8b = 1;
                      param_3 = (uint *)&DAT_00000040;
                      func_0010E3C4(param_4,&uStack_90,0x40);
                      local_4c = local_4c + 1;
                      local_44 = local_44 + 1;
                      if (local_48 == 0) {
                        *local_40 = *(int *)(param_1 + 0x57c) + 1;
                      }
                      else {
                        *local_3c = (uint *)(*(int *)(param_1 + 0x580) + 1);
                        param_3 = (uint *)local_3c;
                      }
                      break;
                    }
                    iVar12 = iVar12 + 1;
                  } while (iVar12 != 0x14);
                }
                ppuVar14 = (uint **)((int)ppuVar14 + 1);
                iVar6 = iVar6 + 1;
                param_2 = local_b0;
              } while (ppuVar14 != local_b0);
            }
            if (0 < local_4c) {
              param_3 = *(uint **)(param_1 + 0x584);
              puVar16 = (undefined1 *)(local_4c + (int)param_3);
              *(undefined1 **)(param_1 + 0x584) = puVar16;
              if (0x14 < (int)puVar16) {
                puVar16 = (undefined1 *)0x14;
              }
              *(undefined1 **)(param_1 + 0x584) = puVar16;
              iVar6 = func_004C397C(*DAT_004c7688);
              param_2 = extraout_r1_04;
              if (iVar6 == 0) {
                *(undefined1 *)(param_1 + 0x5a0) = 1;
              }
            }
          }
        }
        *(undefined1 *)(param_1 + 0x59e) = 0;
      }
      if (((*(char *)(local_94 + 0x9f) != '\0') &&
          (iVar6 = func_005215DC(*(int *)(param_1 + 0x518)), param_2 = extraout_r1_05, iVar6 != 0))
         && (*(int *)(*DAT_004c768c + 0x10) == 0)) {
        iVar6 = func_00584564(param_1);
        param_3 = *(uint **)(param_1 + 0x518);
        func_0015212C((int)param_3,iVar6);
        param_2 = (uint **)0x1;
        *(undefined1 *)(param_1 + 0x59e) = 1;
        *(undefined1 *)(param_1 + 0x59f) = 0;
      }
    }
  }
  else {
    func_00152360(*(int *)(param_1 + 0x518),(int)extraout_r1_02);
    param_2 = (uint **)0x1;
    *(undefined1 *)(param_1 + 0x59c) = 1;
    *(undefined1 *)(param_1 + 0x59d) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x5a4);
  if (cVar1 == '\x02') {
    iVar6 = func_005215DC(*(int *)(param_1 + 0x518));
    piVar4 = DAT_004c7688;
    param_2 = extraout_r1_06;
    if ((iVar6 != 0) && (*(int *)(*DAT_004c768c + 0x10) == 0)) {
      param_2 = (uint **)&UndefinedInstruction;
      cVar1 = *(char *)(*(int *)(param_1 + 0x518) + 0xde0);
      if ((cVar1 != '\0') && (cVar1 == '\x02')) {
        uVar5 = 3;
        goto LAB_004c7508;
      }
      *(undefined1 *)(param_1 + 0x5a4) = 4;
      iVar6 = func_004C3E44(*piVar4,*(int *)(param_1 + 0x5a8));
      param_2 = extraout_r1_07;
      goto joined_r0x004c7500;
    }
  }
  else {
    if (cVar1 == '\x04') {
      iVar6 = func_004C3E44(*DAT_004c7688,*(int *)(param_1 + 0x5a8));
      param_2 = extraout_r1_08;
joined_r0x004c7500:
      if (iVar6 == 0) goto LAB_004c7548;
      uVar5 = 5;
    }
    else {
      if ((cVar1 != '\x05') || (1 < *(uint *)(*DAT_004c7688 + 0x9c0))) goto LAB_004c7548;
      uVar5 = 0;
    }
LAB_004c7508:
    *(undefined1 *)(param_1 + 0x5a4) = uVar5;
  }
LAB_004c7548:
  if (*(int *)(param_1 + 0x5b0) != 0) {
    func_002E21DC(*(int *)(param_1 + 0x5b0),param_2,param_3,(int *)param_4);
  }
  sVar2 = *(short *)(local_94 + 0xa2);
  if (sVar2 == 0) {
    return;
  }
  *(short *)(local_94 + 0xa2) = sVar2 + -1;
  piVar4 = DAT_004c76a0;
  if (sVar2 != 1) {
    return;
  }
  iVar6 = *DAT_004c76a0;
  if (iVar6 == 0) {
    return;
  }
  iVar11 = func_005841A8(iVar6,*DAT_004c76a4,*(int **)(DAT_004c76a8 + iVar6));
  iVar6 = local_94;
  if (iVar11 == *(int *)(*piVar4 + 0x3dbc8)) {
    return;
  }
  if (*(char *)(local_94 + 0xa0) != '\0') {
    return;
  }
  bVar17 = *DAT_004c7688 == 0;
  uVar9 = 0;
  if (!bVar17) {
    uVar9 = *(uint *)(*DAT_004c7688 + 0x9c0);
  }
  bVar18 = bVar17 || uVar9 == 1;
  if (bVar17 || uVar9 < 2) {
    bVar18 = *(char *)(local_94 + 0x9e) == '\0';
  }
  if (!bVar18) {
    return;
  }
  if (*(char *)(local_94 + 0x9c) != '\0') {
    iVar11 = func_005215DC(*(int *)(param_1 + 0x518));
    if (iVar11 == 0) goto LAB_004c7618;
    *(undefined1 *)(param_1 + 0x59c) = 0;
  }
  if (*(char *)(iVar6 + 0x9d) == '\0') {
    if (*(char *)(iVar6 + 0x9f) != '\0') {
      return;
    }
    iVar6 = func_005215DC(*(int *)(param_1 + 0x518));
    if ((iVar6 != 0) && (*(int *)(*DAT_004c768c + 0x10) == 0)) {
      iVar6 = func_00584564(param_1);
      func_0015212C(*(int *)(param_1 + 0x518),iVar6);
      *(undefined1 *)(param_1 + 0x59e) = 1;
      return;
    }
  }
LAB_004c7618:
  *(undefined1 *)(param_1 + 0x59f) = 1;
  return;
}

