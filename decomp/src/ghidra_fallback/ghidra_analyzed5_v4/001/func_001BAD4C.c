#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00120024(undefined4 *param_1,int param_2);
extern int func_001BB788(int param_1,int *param_2);
extern int func_001BB924(undefined4 param_1,uint *param_2,int *param_3,int param_4);
extern ulonglong func_001BBF3C(int param_1,uint param_2);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern int func_0056128C(int param_1);
extern int func_00687F18(undefined4 param_1,int *param_2,int *param_3);
extern undefined4 * * * * *DAT_001bb26c;
extern uint DAT_001bb270;
extern int DAT_001bb28c;
extern undefined4 DAT_001bb290;
extern int *DAT_001bb294;
extern int *DAT_001bb2d8;
extern undefined DAT_001bb2dc;
extern undefined DAT_001bb2e0;
extern uint DAT_001bb690;
extern undefined4 * * * * *DAT_001bb694;
extern undefined DAT_001bb698;
extern undefined DAT_001bb69c;
extern undefined DAT_001bb6a0;
extern undefined *DAT_001bb6a4;
extern char s_Byaml_FieldDark_course_byaml_001bb2b8[];
extern char s_Byaml_FieldLight_course_byaml_001bb298[];
extern char s_Byaml__s_course_byaml_001bb274[];
extern char s_cf_001bb274[];
extern char s_cf_001bb298[];
extern char s_cf_001bb2b8[];

// USA 001BAD4C <- EU 001BAD4C (Ghidra, non-matching)
// GLOBAL DAT_001bb26c undefined4 * * * * *
// GLOBAL DAT_001bb270 uint
// GLOBAL DAT_001bb28c int
// GLOBAL DAT_001bb290 undefined4
// GLOBAL DAT_001bb294 int *
// GLOBAL DAT_001bb2d8 int *
// GLOBAL DAT_001bb2dc undefined
// GLOBAL DAT_001bb2e0 undefined
// GLOBAL DAT_001bb690 uint
// GLOBAL DAT_001bb694 undefined4 * * * * *
// GLOBAL DAT_001bb698 undefined
// GLOBAL DAT_001bb69c undefined
// GLOBAL DAT_001bb6a0 undefined
// GLOBAL DAT_001bb6a4 undefined *
// GLOBAL s_cf_001bb274 string
// GLOBAL s_cf_001bb2b8 string
// GLOBAL s_cf_001bb298 string

undefined4 func_001BAD4C(int param_1,uint param_2,int param_3)

{
  undefined4 *****pppppuVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint in_r3;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  uint *puVar14;
  uint in_r12;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 in_d8;
  uint in_s18;
  _Alignas(8) unsigned char albw_frame[0x1d0];
  #define local_1d0 (*(uint *)(albw_frame + 0x0))
  #define local_1cc (*(undefined1 * *)(albw_frame + 0x4))
  #define iStack_1c8 (*(int *)(albw_frame + 0x8))
  #define local_1c4 ((undefined1 *)(albw_frame + 0xc))
  #define local_1c0 ((uint *)(albw_frame + 0x10))
  #define local_1b4 (*(undefined4 **** *)(albw_frame + 0x1c))
  #define local_1b0 (*(char * *)(albw_frame + 0x20))
  #define local_1ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_1a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_1a4 (*(uint *)(albw_frame + 0x2c))
  #define local_1a0 (*(undefined4 **** *)(albw_frame + 0x30))
  #define local_19c (*(uint * *)(albw_frame + 0x34))
  #define local_198 ((int *)(albw_frame + 0x38))
  #define local_188 (*(undefined4 **** *)(albw_frame + 0x48))
  #define local_184 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_180 (*(undefined1 *)(albw_frame + 0x50))
  #define local_17f (*(undefined1 *)(albw_frame + 0x51))
  #define local_17e (*(undefined1 *)(albw_frame + 0x52))
  #define local_17d (*(undefined1 *)(albw_frame + 0x53))
  #define local_17c (*(undefined1 *)(albw_frame + 0x54))
  #define local_c8 ((uint * *)(albw_frame + 0x108))
  #define aiStack_c0 ((int *)(albw_frame + 0x110))
  #define local_b8 (*(undefined4 **** *)(albw_frame + 0x118))
  #define local_b4 (*(undefined1 * *)(albw_frame + 0x11c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x120))
  #define local_ac (*(undefined4 *)(albw_frame + 0x124))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x128))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x12c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x130))
  #define local_9c (*(undefined4 *)(albw_frame + 0x134))
  #define local_98 (*(undefined4 *)(albw_frame + 0x138))
  #define local_94 (*(undefined4 *)(albw_frame + 0x13c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x140))
  #define ppppuStack_8c (*(undefined4 **** *)(albw_frame + 0x144))
  #define local_88 (*(undefined4 *)(albw_frame + 0x148))
  #define local_84 (*(undefined1 *)(albw_frame + 0x14c))
  #define local_83 (*(undefined1 *)(albw_frame + 0x14d))
  #define local_82 (*(undefined1 *)(albw_frame + 0x14e))
  #define local_81 (*(undefined1 *)(albw_frame + 0x14f))
  #define local_80 (*(undefined1 *)(albw_frame + 0x150))
  #define aiStack_70 ((int *)(albw_frame + 0x160))
  #define local_68 (*(uint *)(albw_frame + 0x168))
  #define aiStack_60 ((int *)(albw_frame + 0x170))
  #define aiStack_58 ((int *)(albw_frame + 0x178))
  #define local_40 (*(int *)(albw_frame + 0x190))
  #define local_3c (*(uint *)(albw_frame + 0x194))
  func_001BBF3C(param_1,param_2);
  switch(param_2) {
  default:
    local_68 = 0;
    break;
  case 1:
  case 3:
  case 5:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    local_68 = 1;
  }
  bVar17 = 4 < param_2;
  bVar16 = param_2 == 5;
  if (5 < param_2) {
    bVar17 = 3 < param_2 - 0x16;
    bVar16 = param_2 - 0x16 == 4;
  }
  if ((0 < param_3) && (iVar2 = func_0010CEE0(param_3 * 0x6c,(int *)0x0,4), iVar2 != 0)) {
    in_r12 = param_3 - 1;
    *(int *)(param_1 + 0x100) = param_3;
    uVar11 = in_r3;
    iVar3 = iVar2;
    if (0 < (int)in_r12) {
      iVar3 = 0;
      uVar11 = in_r12;
    }
    *(int *)(param_1 + 0xf4) = iVar2;
    in_r3 = uVar11;
    if (0 < (int)in_r12) {
      do {
        uVar11 = uVar11 - 1;
        *(int *)(iVar2 + iVar3 * 4) = iVar2 + (iVar3 + 0x1b) * 4;
        iVar3 = iVar3 + 0x1b;
        in_r3 = 0;
      } while (uVar11 != 0);
    }
    *(undefined4 *)(iVar2 + in_r12 * 0x6c) = 0;
    *(int *)(param_1 + 0xf8) = iVar2;
  }
  pppppuVar1 = DAT_001bb26c;
  local_1cc = local_1c4;
  iStack_1c8 = 0x100;
  local_c8[0] = (uint *)((uint)local_c8[0] & 0xffffff);
  local_1c4[0] = 0;
  local_1d0 = DAT_001bb270;
  func_00120024(&local_40,param_2);
  (**(code **)(local_40 + 8))(&local_40);
  func_004994B0((int)&local_1d0,s_Byaml__s_course_byaml_001bb274,local_3c,in_r3);
  local_b0 = 0;
  local_b8 = pppppuVar1;
  local_ac = 0;
  local_a8 = 0x20;
  uStack_a4 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_88 = DAT_001bb290;
  local_98 = 0;
  local_94 = 0;
  uStack_90 = 0;
  ppppuStack_8c = pppppuVar1;
  local_84 = 7;
  local_81 = 0;
  local_83 = 0xff;
  local_82 = 0xf;
  local_b4 = local_1cc;
  local_80 = 1;
  puVar4 = func_001E1EDC(*DAT_001bb294,(int *)&local_b8);
  func_003C7A20(aiStack_c0,(short *)puVar4[5]);
  uVar11 = extraout_r1;
  if (!bVar17 || bVar16) {
    func_001BB788(param_1,aiStack_c0);
    local_1a8 = 0;
    local_1a4 = 0x20;
    local_1ac = 0;
    local_198[0] = 0;
    local_1b4 = pppppuVar1;
    local_184 = DAT_001bb290;
    local_1a0 = (undefined4 *****)0x0;
    local_19c = (uint *)0x0;
    local_198[1] = 0;
    local_198[2] = 0;
    local_198[3] = 0;
    local_188 = pppppuVar1;
    local_180 = 7;
    local_17d = 0;
    local_17f = 0xff;
    local_17c = 1;
    if (local_68 == 0) {
      local_1b0 = s_Byaml_FieldDark_course_byaml_001bb2b8;
    }
    else {
      local_1b0 = s_Byaml_FieldLight_course_byaml_001bb298;
    }
    local_17e = 0xf;
    puVar4 = func_001E1EDC(*DAT_001bb294,(int *)&local_1b4);
    func_003C7A20(&iStack_1c8,(short *)puVar4[5]);
    func_001BB924(param_1,(uint *)(param_1 + 0x10c),&iStack_1c8,local_68 ^ 1);
    uVar11 = extraout_r1_00;
  }
  if (0xc < param_2 - 9) goto LAB_001bb180;
  uVar15 = in_r12 & 0xffffff00;
  uVar11 = uVar11 & 0xff000000;
  uVar9 = uVar11 | 0x10000;
  uVar5 = 0x11;
  switch(param_2) {
  case 9:
    uVar5 = 0x13;
    break;
  case 10:
    uVar5 = 0x22;
    break;
  case 0xb:
    uVar11 = 3;
    uVar5 = 2;
    goto LAB_001bb118;
  case 0xd:
    uVar5 = 0x13;
    uVar15 = in_r12 & 0xffffff00 | 1;
    uVar9 = uVar11 | 0x10005;
    break;
  case 0xe:
    uVar5 = 0x20;
    uVar15 = in_r12 & 0xffffff00 | 1;
    break;
  case 0xf:
    uVar5 = 0;
    uVar15 = in_r12 & 0xffffff00 | 1;
    uVar9 = uVar11 | 0x1000a;
    break;
  case 0x10:
    uVar11 = 5;
    uVar5 = 0xf;
    uVar15 = in_r12 & 0xffffff00 | 1;
    goto LAB_001bb118;
  case 0x11:
    uVar5 = 4;
    goto LAB_001bb168;
  case 0x12:
    uVar11 = 2;
    uVar5 = 0x1e;
    goto LAB_001bb118;
  case 0x13:
    uVar11 = 6;
    uVar5 = 0x22;
    uVar15 = in_r12 & 0xffffff00 | 1;
LAB_001bb118:
    uVar9 = uVar9 | uVar11;
    break;
  case 0x14:
  case 0x15:
LAB_001bb168:
    uVar15 = in_r12 & 0xffffff00 | 1;
  }
  in_r12 = in_r12 & 0xffffff00;
  iVar2 = *DAT_001bb2d8;
  *(uint *)(iVar2 + 0x30) = uVar15;
  *(undefined4 *)(iVar2 + 0x34) = uVar5;
  *(uint *)(iVar2 + 0x38) = uVar9;
LAB_001bb180:
  func_003C7A70(aiStack_70);
  bVar16 = func_00560EF8(aiStack_c0,aiStack_70,(uint *)&DAT_001bb2dc);
  if (bVar16) {
    local_1d0 = 1;
    iVar2 = func_00560FA0((int)aiStack_70,&local_1d0,0);
    if (iVar2 != 0) {
      *(short *)(param_1 + 4) = (short)local_1d0;
    }
    iVar2 = func_00560FA0((int)aiStack_70,&local_1d0,1);
    if (iVar2 != 0) {
      *(short *)(param_1 + 6) = (short)local_1d0;
    }
    iVar2 = func_00560FA0((int)aiStack_70,&local_1d0,2);
    if (iVar2 != 0) {
      *(short *)(param_1 + 8) = (short)local_1d0;
    }
    iVar2 = func_00560FA0((int)aiStack_70,&local_1d0,3);
    if (iVar2 != 0) {
      *(short *)(param_1 + 10) = (short)local_1d0;
    }
    iVar2 = func_00560FA0((int)aiStack_70,&local_1d0,4);
    if (iVar2 != 0) {
      *(short *)(param_1 + 0xc) = (short)local_1d0;
    }
  }
  func_003C7A70(aiStack_60);
  bVar16 = func_00560EF8(aiStack_c0,aiStack_60,(uint *)&DAT_001bb2e0);
  if (bVar16) {
    local_1a4 = func_0056128C((int)aiStack_60);
    iVar2 = 0;
    if (0 < (int)local_1a4) {
      local_1b4 = DAT_001bb694;
      uVar11 = DAT_001bb690;
      do {
        func_003C7A70(local_198 + 2);
        bVar16 = func_005610A8(aiStack_60,local_198 + 2,iVar2);
        if (!bVar16) break;
        local_c8[0] = (uint *)0x0;
        iVar3 = func_00561114(local_198 + 2,(int *)local_c8,(uint *)&DAT_001bb698);
        if (iVar3 != 0) {
          func_003C7A70(local_198);
          bVar16 = func_00560EF8(local_198 + 2,local_198,(uint *)&DAT_001bb69c);
          if (bVar16) {
            local_1d0 = uVar11;
            iVar3 = func_00561184((int)local_198,&local_1d0,0);
            if (iVar3 != 0) {
              in_d8 = CONCAT44((int)((ulonglong)in_d8 >> 0x20),local_1d0);
            }
            iVar3 = func_00561184((int)local_198,&local_1d0,1);
            if (iVar3 != 0) {
              in_d8 = CONCAT44(local_1d0,(int)in_d8);
            }
            iVar3 = func_00561184((int)local_198,&local_1d0,2);
            if (iVar3 != 0) {
              in_s18 = local_1d0;
            }
          }
          iVar3 = DAT_001bb28c;
          piVar12 = (int *)(param_1 + 0xf0);
          local_1a0 = pppppuVar1;
          local_19c = local_c8[0];
          if (*(int *)(param_1 + 0xfc) < *(int *)(param_1 + 0x100)) {
            piVar13 = *(int **)(param_1 + 0xf4);
            if (piVar13 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            else {
              *(int *)(param_1 + 0xf4) = *piVar13;
              piVar13[5] = iVar3;
              piVar13[1] = 0;
              piVar13[4] = (int)pppppuVar1;
              piVar13[2] = 0;
              *(undefined1 *)(piVar13 + 3) = 1;
              *piVar13 = (int)local_1b4;
              piVar13[6] = (int)in_d8;
              piVar13[7] = (int)((ulonglong)in_d8 >> 0x20);
              piVar13[8] = in_s18;
              piVar13[9] = (int)piVar12;
              *(undefined1 *)(piVar13 + 0x1a) = 0;
              puVar14 = (uint *)(piVar13 + 10);
              local_188 = &local_1a0;
              (*(code *)pppppuVar1[2])(&local_1a0);
              uVar15 = 0;
              do {
                if (*(char *)((int)local_19c + uVar15) == '\0') {
                  if ((int)uVar15 < 0x40001) goto LAB_001bb47c;
                  break;
                }
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < 0x40001);
              uVar15 = 0;
LAB_001bb47c:
              if (0x40 < (int)uVar15) {
                uVar15 = 0x40;
              }
              (*(code *)local_1a0[2])(local_188);
              func_0010E3C4(puVar14,local_19c,uVar15);
              *(undefined1 *)((int)puVar14 + uVar15) = 0;
              piVar13[5] = (int)puVar14;
            }
            *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
            piVar13 = func_00687F18(piVar12,(int *)*piVar12,piVar13);
            *piVar12 = (int)piVar13;
            *(undefined1 *)(piVar13 + 3) = 0;
          }
          else {
            iVar3 = *piVar12;
            if (iVar3 != 0) {
LAB_001bb4f0:
              (*(code *)local_1a0[2])(&local_1a0);
              (*(code *)local_1a0[2])(&local_1a0);
              puVar14 = local_19c;
              (**(code **)(*(int *)(iVar3 + 0x10) + 8))((int *)(iVar3 + 0x10));
              puVar8 = *(uint **)(iVar3 + 0x14);
              if (puVar14 != puVar8) {
                iVar6 = 0;
                do {
                  iVar10 = (int)*(char *)((int)local_19c + iVar6);
                  if (iVar10 == 0) {
                    in_r12 = (uint)*(byte *)((int)puVar8 + iVar6);
                  }
                  if (iVar10 == 0 && in_r12 == 0) break;
                  if (iVar10 == 0) {
LAB_001bb590:
                    iVar3 = *(int *)(iVar3 + 4);
                    goto LAB_001bb59c;
                  }
                  in_r12 = (uint)*(char *)((int)puVar8 + iVar6);
                  if (in_r12 == 0) goto LAB_001bb598;
                  if (iVar10 < (int)in_r12) goto LAB_001bb590;
                  if ((int)in_r12 < iVar10) goto LAB_001bb598;
                  iVar6 = iVar6 + 1;
                  if (0x3ffff < iVar6) break;
                } while( true );
              }
              if (iVar3 == 0) goto LAB_001bb5b0;
              puVar4 = (undefined4 *)(iVar3 + 0x18);
              goto LAB_001bb5a8;
            }
LAB_001bb5a4:
            puVar4 = (undefined4 *)0x0;
LAB_001bb5a8:
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = (int)in_d8;
              puVar4[1] = (int)((ulonglong)in_d8 >> 0x20);
              puVar4[2] = in_s18;
            }
          }
        }
LAB_001bb5b0:
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)local_1a4);
    }
  }
  func_003C7A70(aiStack_58);
  bVar16 = func_00560EF8(aiStack_c0,aiStack_58,(uint *)&DAT_001bb6a0);
  if (bVar16) {
    uVar11 = func_0056128C((int)aiStack_58);
    if (0 < (int)uVar11) {
      iVar3 = func_0010CEE0(uVar11 * 4,(int *)0x0,4);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = func_00100118(iVar3,DAT_001bb6a4,4,uVar11);
      }
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x118) = iVar2;
        *(uint *)(param_1 + 0x114) = uVar11;
      }
    }
    uVar15 = 0;
    if (0 < (int)uVar11) {
      do {
        func_003C7A70(&iStack_1c8);
        bVar16 = func_005610A8(aiStack_58,&iStack_1c8,uVar15);
        if (!bVar16) break;
        local_1c0[0] = 0;
        iVar2 = func_00560FA0((int)&iStack_1c8,local_1c0,0);
        if (iVar2 != 0) {
          if (uVar15 < *(uint *)(param_1 + 0x114)) {
            puVar7 = (undefined2 *)(*(int *)(param_1 + 0x118) + uVar15 * 4);
          }
          else {
            puVar7 = *(undefined2 **)(param_1 + 0x118);
          }
          *puVar7 = (short)local_1c0[0];
        }
        iVar2 = func_00560FA0((int)&iStack_1c8,local_1c0,1);
        if (iVar2 != 0) {
          if (uVar15 < *(uint *)(param_1 + 0x114)) {
            iVar2 = *(int *)(param_1 + 0x118) + uVar15 * 4;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x118);
          }
          *(short *)(iVar2 + 2) = (short)local_1c0[0];
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar11);
    }
  }
  return func_001BB924(param_1,(uint *)(param_1 + 0x104),aiStack_c0,local_68);
LAB_001bb598:
  iVar3 = *(int *)(iVar3 + 8);
LAB_001bb59c:
  if (iVar3 == 0) goto LAB_001bb5a4;
  goto LAB_001bb4f0;
}

