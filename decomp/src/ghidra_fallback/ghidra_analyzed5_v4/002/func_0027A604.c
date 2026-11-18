#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0027B0F0(uint *param_1);
extern int func_0027BA50(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_003C7A70(undefined4 *param_1);
extern int func_0048C22C(undefined4 *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00560EB0(int *param_1,undefined4 param_2,uint *param_3);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern int func_0056128C(int param_1);
extern undefined DAT_0027a9e8;
extern undefined DAT_0027a9ec;
extern uint *DAT_0027a9f0;
extern undefined DAT_0027a9f4;
extern undefined *DAT_0027a9f8;
extern uint *DAT_0027acc4;
extern uint *DAT_0027acc8;
extern char s_Rails_0027a9e0[];

// USA 0027A604 <- EU 0027A62C (Ghidra, non-matching)
// GLOBAL DAT_0027a9e8 undefined
// GLOBAL DAT_0027a9ec undefined
// GLOBAL DAT_0027a9f0 uint *
// GLOBAL DAT_0027a9f4 undefined
// GLOBAL DAT_0027a9f8 undefined *
// GLOBAL DAT_0027acc4 uint *
// GLOBAL DAT_0027acc8 uint *
// GLOBAL s_Rails_0027a9e0 string

undefined4 func_0027A604(uint *param_1,int *param_2,float *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 ((uint *)(albw_frame + 0x8))
  #define local_c0 (*(uint *)(albw_frame + 0x10))
  #define local_bc (*(uint *)(albw_frame + 0x14))
  #define local_b8 (*(uint *)(albw_frame + 0x18))
  #define local_b4 (*(int *)(albw_frame + 0x1c))
  #define local_b0 ((undefined1 *)(albw_frame + 0x20))
  #define local_a0 (*(uint *)(albw_frame + 0x30))
  #define local_9c (*(uint *)(albw_frame + 0x34))
  #define local_98 (*(uint *)(albw_frame + 0x38))
  #define local_94 (*(uint *)(albw_frame + 0x3c))
  #define local_90 (*(uint *)(albw_frame + 0x40))
  #define local_8c (*(uint *)(albw_frame + 0x44))
  #define local_88 ((uint *)(albw_frame + 0x48))
  #define local_68 ((uint *)(albw_frame + 0x68))
  #define aiStack_60 ((int *)(albw_frame + 0x70))
  #define aiStack_58 ((int *)(albw_frame + 0x78))
  #define aiStack_50 ((int *)(albw_frame + 0x80))
  #define afStack_48 ((float *)(albw_frame + 0x88))
  #define aiStack_38 ((int *)(albw_frame + 0x98))
  #define puStack_30 (*(uint * *)(albw_frame + 0xa0))
  #define piStack_2c (*(int * *)(albw_frame + 0xa4))
  #define local_28 (*(float * *)(albw_frame + 0xa8))
  puStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  func_003C7A70(aiStack_58);
  bVar1 = func_00560EF8(param_2,aiStack_58,(uint *)s_Rails_0027a9e0);
  if ((!bVar1) || (local_c0 = func_0056128C((int)aiStack_58), (int)local_c0 < 1)) {
    return 1;
  }
  uVar9 = 0;
  iVar7 = 0;
  do {
    func_003C7A70(&local_b8);
    bVar1 = func_005610A8(aiStack_58,(int *)&local_b8,iVar7);
    if (!bVar1) {
      return 0;
    }
    local_c8[0] = 0;
    iVar3 = func_00560E74((int *)&local_b8,local_c8,(uint *)&DAT_0027a9e8);
    if (iVar3 == 0) {
      return 0;
    }
    iVar7 = iVar7 + 1;
    if ((int)uVar9 < (int)local_c8[0]) {
      uVar9 = local_c8[0];
    }
  } while (iVar7 < (int)local_c0);
  func_0010B380(param_1,uVar9 + 1,(int *)0x0,4);
  uVar9 = 0;
  local_b4 = 0;
  if (0 < (int)local_c0) {
    do {
      func_003C7A70(aiStack_60);
      func_005610A8(aiStack_58,aiStack_60,local_b4);
      local_68[0] = 0;
      func_00560E74(aiStack_60,local_68,(uint *)&DAT_0027a9e8);
      uVar12 = uVar9;
      do {
        puVar4 = (uint *)func_0010BAB4(0x2c);
        if (puVar4 == (uint *)0x0) {
          puVar4 = (uint *)0x0;
        }
        else {
          *puVar4 = 0xffffffff;
          *(undefined1 *)(puVar4 + 1) = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[10] = 0;
        }
        if ((int)*param_1 < (int)param_1[1]) {
          *(uint **)(param_1[2] + *param_1 * 4) = puVar4;
          *param_1 = *param_1 + 1;
        }
        *puVar4 = uVar12;
        uVar9 = uVar12 + 1;
        bVar1 = uVar12 != local_68[0];
        uVar12 = uVar9;
      } while (bVar1);
      local_b0[0] = 0;
      iVar7 = func_00560EB0(aiStack_60,local_b0,(uint *)&DAT_0027a9ec);
      if (iVar7 != 0) {
        *(undefined1 *)(puVar4 + 1) = local_b0[0];
      }
      func_003C7A70(&local_98);
      bVar1 = func_00560EF8(aiStack_60,(int *)&local_98,DAT_0027a9f0);
      if (bVar1) {
        iVar7 = 0;
        do {
          iVar3 = func_00560FA0((int)&local_98,puVar4 + iVar7 + 2,iVar7);
          if (iVar3 == 0) goto LAB_0027a84c;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 4);
        iVar7 = 0;
        do {
          iVar3 = func_00561184((int)&local_98,puVar4 + iVar7 + 6,iVar7 + 4);
          bVar1 = iVar3 != 0;
          iVar3 = 0;
          if (bVar1) {
            iVar7 = iVar7 + 1;
            iVar3 = 2 - iVar7;
          }
        } while ((bVar1 && iVar7 != 2) && iVar3 < 0 == (bVar1 && SBORROW4(2,iVar7)));
      }
LAB_0027a84c:
      func_003C7A70(aiStack_50);
      bVar1 = func_00560EF8(aiStack_60,aiStack_50,(uint *)&DAT_0027a9f4);
      if (!bVar1) {
        return 0;
      }
      local_b8 = func_0056128C((int)aiStack_50);
      func_0010B380(puVar4 + 8,local_b8,(int *)0x0,4);
      local_bc = 0;
      if (0 < (int)local_b8) {
        do {
          func_003C7A70(local_88 + 6);
          bVar1 = func_005610A8(aiStack_50,(int *)(local_88 + 6),local_bc);
          if (!bVar1) {
            func_0048C22C(puVar4 + 8);
            break;
          }
          iVar3 = func_0010BAB4(0xb4);
          iVar7 = local_b4;
          uVar12 = local_bc;
          puVar10 = (uint *)0x0;
          if (iVar3 != 0) {
            iVar3 = func_00100118(iVar3 + 0x24,DAT_0027a9f8,0xc,2);
            puVar10 = (uint *)(iVar3 + -0x24);
            *(int *)(iVar3 + 0x18) = iVar7;
            *(uint *)(iVar3 + 0x1c) = uVar12;
            *(undefined4 *)(iVar3 + 0x38) = 0;
            *(undefined4 *)(iVar3 + 0x3c) = 0;
            *(undefined4 *)(iVar3 + 0x40) = 0;
            func_0010B3EC((undefined4 *)(iVar3 + 0x38),4,iVar3 + 0x44);
            *(undefined4 *)(iVar3 + 0x54) = 0;
            *(undefined4 *)(iVar3 + 0x58) = 0;
            *(undefined4 *)(iVar3 + 0x5c) = 0;
            func_0010B3EC((undefined4 *)(iVar3 + 0x54),4,iVar3 + 0x60);
            *(undefined4 *)(iVar3 + 0x70) = 0;
            *(undefined4 *)(iVar3 + 0x74) = 0;
            *(undefined4 *)(iVar3 + 0x78) = 0;
            *(undefined4 *)(iVar3 + 0x7c) = 0;
            *(undefined4 *)(iVar3 + 0x80) = 0;
            *(undefined4 *)(iVar3 + 0x84) = 0;
            *(undefined4 *)(iVar3 + 0x88) = 0;
            *(undefined1 *)(iVar3 + 0x8c) = 0;
            *(undefined1 *)(iVar3 + 0x8d) = 0;
          }
          puVar11 = puVar4 + 8;
          if ((int)*puVar11 < (int)puVar4[9]) {
            *(uint **)(puVar4[10] + *puVar11 * 4) = puVar10;
            *puVar11 = *puVar11 + 1;
          }
          cVar2 = func_0027BA50(&local_94,&local_a0,afStack_48,(int *)(local_88 + 6));
          if (cVar2 == '\0') {
            return 0;
          }
          *puVar10 = local_94;
          puVar10[1] = local_90;
          puVar10[2] = local_8c;
          puVar10[3] = local_a0;
          puVar10[4] = local_9c;
          puVar10[5] = local_98;
          func_00115C54((float *)(puVar10 + 6),afStack_48,local_28);
          puVar10[0xf] = *puVar4;
          puVar10[0x10] = local_bc;
          puVar10[0x2b] = (uint)puVar4;
          func_003C7A70(local_88 + 4);
          bVar1 = func_00560EF8((int *)(local_88 + 6),(int *)(local_88 + 4),DAT_0027a9f0);
          if (!bVar1) {
            return 0;
          }
          iVar7 = 0;
          do {
            iVar3 = func_00560FA0((int)(local_88 + 4),puVar10 + iVar7 + 0x11,iVar7);
            if (iVar3 == 0) {
              return 0;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 4);
          iVar7 = 0;
          do {
            iVar3 = func_00561184((int)(local_88 + 4),puVar10 + iVar7 + 0x15,iVar7 + 4);
            if (iVar3 == 0) {
              return 0;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 2);
          func_003C7A70(aiStack_38);
          local_88[0] = 0;
          local_88[1] = 0;
          local_88[2] = 0;
          local_88[3] = 0;
          local_88[4] = 0;
          local_88[5] = 0;
          bVar1 = func_00560EF8((int *)(local_88 + 6),aiStack_38,DAT_0027acc4);
          if (bVar1) {
            iVar7 = 0;
            do {
              iVar3 = func_00561184((int)aiStack_38,local_88 + iVar7,iVar7);
              if (iVar3 == 0) {
                return 0;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < 6);
          }
          puVar10[9] = local_88[0];
          puVar10[10] = local_88[1];
          puVar10[0xb] = local_88[2];
          puVar10[0xc] = local_88[3];
          puVar10[0xd] = local_88[4];
          puVar10[0xe] = local_88[5];
          func_00115C54((float *)(puVar10 + 9),(float *)(puVar10 + 9),local_28);
          func_00115C54((float *)(puVar10 + 0xc),(float *)(puVar10 + 0xc),local_28);
          func_003C7A70(local_88 + 4);
          bVar1 = func_00560EF8((int *)(local_88 + 6),(int *)(local_88 + 4),DAT_0027acc8);
          if (!bVar1) {
            return 0;
          }
          uVar12 = puVar10[0x18];
          uVar5 = func_0056128C((int)(local_88 + 4));
          if ((int)uVar5 <= (int)uVar12) {
            uVar12 = uVar5;
          }
          puVar11 = puVar10;
          if (uVar12 != 0) {
            puVar11 = (uint *)0x0;
          }
          if (0 < (int)uVar12) {
            do {
              func_003C7A70(aiStack_38);
              bVar1 = func_005610A8((int *)(local_88 + 4),aiStack_38,(int)puVar11);
              if (!bVar1) {
                return 0;
              }
              local_88[0] = 0;
              iVar7 = func_00560FA0((int)aiStack_38,local_88,0);
              if (iVar7 == 0) {
                return 0;
              }
              local_88[1] = 0;
              iVar7 = func_00560FA0((int)aiStack_38,local_88 + 1,1);
              if (iVar7 == 0) {
                return 0;
              }
              puVar8 = puVar10 + (int)puVar11 * 7 + 0x17;
              puVar6 = (uint *)func_0010BAB4(8);
              if (puVar6 != (uint *)0x0) {
                *puVar6 = local_88[0];
                puVar6[1] = local_88[1];
              }
              if ((int)*puVar8 < (int)puVar8[1]) {
                *(uint **)(puVar8[2] + *puVar8 * 4) = puVar6;
                *puVar8 = *puVar8 + 1;
              }
              puVar11 = (uint *)((int)puVar11 + 1);
            } while ((int)puVar11 < (int)uVar12);
          }
          local_bc = local_bc + 1;
        } while ((int)local_bc < (int)local_b8);
      }
      local_b4 = local_b4 + 1;
    } while (local_b4 < (int)local_c0);
  }
  func_0027B0F0(param_1);
  return 1;
}

