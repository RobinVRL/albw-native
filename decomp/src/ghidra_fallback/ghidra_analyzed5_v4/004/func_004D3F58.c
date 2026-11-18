#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_002C424C(int param_1,undefined1 param_2);
extern int func_0034CA20(undefined4 *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00539A74(int param_1,int param_2);
extern uint DAT_004d430c;
extern int *DAT_004d4310;
extern int *DAT_004d4314;
extern int DAT_004d4318;
extern undefined DAT_004d431c;
extern uint DAT_004d4338;
extern char s_Break_004d433c[];
extern char s_SE_MassFire_BURNING_004d4490[];
extern char s_SE_MassFire_BURN_004d4324[];
extern char s_SE_MassFire_OFF_004d4480[];

// USA 004D3F58 <- EU 004D3F30 (Ghidra, non-matching)
// GLOBAL DAT_004d430c uint
// GLOBAL DAT_004d4310 int *
// GLOBAL DAT_004d4314 int *
// GLOBAL DAT_004d4318 int
// GLOBAL DAT_004d431c undefined
// GLOBAL DAT_004d4338 uint
// GLOBAL s_Break_004d433c string
// GLOBAL s_SE_MassFire_BURNING_004d4490 string
// GLOBAL s_SE_MassFire_BURN_004d4324 string
// GLOBAL s_SE_MassFire_OFF_004d4480 string

/* WARNING: Variable defined which should be unmapped: objStack_78 */

void func_004D3F58(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define objStack_78 ((uint *)(albw_frame + 0x8))
  #define local_50 (*(int *)(albw_frame + 0x30))
  #define local_4c (*(char * *)(albw_frame + 0x34))
  #define local_48 (*(int * *)(albw_frame + 0x38))
  #define local_40 (*(int * *)(albw_frame + 0x40))
  #define local_38 (*(int *)(albw_frame + 0x48))
  #define local_34 (*(char * *)(albw_frame + 0x4c))
  iVar4 = DAT_004d4318;
  piVar3 = DAT_004d4314;
  piVar2 = DAT_004d4310;
  iVar12 = 0;
  iVar14 = param_1[0x189];
  iVar15 = param_1[0x188];
  if ((0 < param_1[0x11e]) && (uVar13 = 0xffffffff, iVar15 != 0)) {
    uVar16 = (ulonglong)DAT_004d430c;
    local_40 = param_1 + 0x18a;
    do {
      uVar13 = uVar13 + 1;
      if (uVar13 < (uint)param_1[0x11e]) {
        iVar6 = *(int *)(param_1[0x120] + uVar13 * 4);
      }
      else {
        iVar6 = 0;
      }
      iVar6 = func_0051E6D0(*piVar2,(float *)(iVar6 + 4),ALBW_AS_F32(uVar16));
      *(char *)(iVar14 + iVar12 * 0x20 + 0x16) = (char)iVar6;
      if (uVar13 < (uint)param_1[0x184]) {
        iVar7 = *(int *)(param_1[0x186] + uVar13 * 4);
      }
      else {
        iVar7 = 0;
      }
      func_002C424C(iVar7,iVar6 == 0);
      if (*(int *)(*piVar3 + 0x44) == 0) {
        pcVar8 = (char *)(iVar14 + iVar12 * 0x20);
        if ((*pcVar8 != '\x01') ||
           (*(short *)(pcVar8 + 0x14) = *(short *)(pcVar8 + 0x14) + -1,
           0 < *(short *)(iVar14 + iVar12 * 0x20 + 0x14))) {
LAB_004d417c:
          if (*(char *)(iVar14 + iVar12 * 0x20 + 0x16) != '\0') {
            func_0034CA20((undefined4 *)param_1[0x18a]);
            objStack_78[0] = 0;
            objStack_78[1] = 0;
            func_0014E2A0((int)param_1,*(undefined4 *)(iVar14 + iVar12 * 0x20 + 8),param_1 + 399,
                          0x1000,0,0);
            if (*(int *)*local_40 != 0) {
              cVar1 = *(char *)(*local_40 + 0x21);
              if (cVar1 != '\v') {
                if (cVar1 < '\v') {
                  if (cVar1 == '\x01') {
LAB_004d43ec:
                    pcVar8 = (char *)(iVar14 + iVar12 * 0x20);
                    if (*pcVar8 == '\x01') {
                      if (*(short *)(iVar14 + iVar12 * 0x20 + 0x14) < 2) goto LAB_004d4468;
                      pcVar8[0x14] = '\x01';
                      pcVar8[0x15] = '\0';
                    }
                    goto LAB_004d43fc;
                  }
                  if (cVar1 != '\x02') goto LAB_004d43fc;
                }
                else {
                  if (cVar1 == '\r') goto LAB_004d43ec;
                  if (cVar1 != '\x10') goto LAB_004d43fc;
                }
              }
              pcVar8 = (char *)(iVar14 + iVar12 * 0x20);
              if (*pcVar8 != '\0') goto LAB_004d4468;
              *pcVar8 = '\x01';
              *(undefined2 *)(iVar14 + iVar12 * 0x20 + 0x14) = 300;
              if (uVar13 < (uint)param_1[0x184]) {
                piVar9 = *(int **)(param_1[0x186] + uVar13 * 4);
              }
              else {
                piVar9 = (int *)0x0;
              }
              (**(code **)(*piVar9 + 0x30))(piVar9);
              iVar6 = iVar14 + iVar12 * 0x20;
              iVar7 = *(int *)(iVar6 + 0x18);
              if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1c) == *(int *)(iVar6 + 0x1c))) {
                iVar6 = *(int *)(iVar7 + 0x20);
                if ((iVar6 != 0) &&
                   ((*(int *)(iVar7 + 0x24) == *(int *)(iVar6 + 0xc) && (0 < *(int *)(iVar6 + 4)))))
                {
                  *(undefined1 *)(iVar6 + 0x280) = 1;
                }
                *(uint *)(iVar7 + 0x3c) = *(uint *)(iVar7 + 0x3c) & 0xfffffffb | 8;
              }
              *(undefined1 *)(*(int *)(iVar14 + iVar12 * 0x20 + 4) + 0x61) = 0;
              *(undefined1 *)(*(int *)(iVar14 + iVar12 * 0x20 + 0x10) + 0x44) = 0;
              (*(undefined2 *)((char *)&objStack_78[0] + 0)) = (undefined2)DAT_004d4338;
              uVar11 = DAT_004d4338 & 0xffff;
              *(undefined2 *)(*(int *)(iVar14 + iVar12 * 0x20 + 8) + 0x28) =
                   (undefined2)objStack_78[0];
              if (uVar13 < (uint)param_1[0x184]) {
                uVar11 = param_1[0x186];
              }
              if (uVar13 < (uint)param_1[0x184]) {
                objStack_78[1] = *(uint *)(uVar11 + uVar13 * 4);
              }
              else {
                objStack_78[1] = 0;
              }
              local_48 = (int *)(iVar12 * 0x20 + 0x18 + iVar14);
              objStack_78[0] = (uint)s_Break_004d433c;
              if (*(int *)(objStack_78[1] + 0x24) == 0) {
                *local_48 = 0;
                local_48[1] = 0;
              }
              else {
                iVar6 = *local_48;
                if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == local_48[1])) {
                  func_00110848(iVar6);
                }
                func_004A1B9C(&local_50,*(int *)(objStack_78[1] + 0x24),(uint *)objStack_78[0]);
                *local_48 = local_50;
                local_48[1] = (int)local_4c;
              }
              if (uVar13 < (uint)param_1[0x11e]) {
                iVar6 = *(int *)(param_1[0x120] + uVar13 * 4);
              }
              else {
                iVar6 = 0;
              }
              local_38 = iVar4;
              local_34 = s_SE_MassFire_OFF_004d4480;
              func_0014DBF4(param_1,&local_38,iVar6 + 4,0);
            }
          }
          goto LAB_004d43fc;
        }
        *(undefined2 *)(iVar14 + iVar12 * 0x20 + 0x14) = 0;
        if (uVar13 < (uint)param_1[0x11e]) {
          iVar6 = *(int *)(param_1[0x120] + uVar13 * 4);
        }
        else {
          iVar6 = 0;
        }
        if (*(short *)(iVar6 + 0x32) == 0) {
LAB_004d4070:
          *(undefined1 *)(iVar14 + iVar12 * 0x20) = 0;
          iVar7 = iVar12 * 0x20 + 0x10;
          *(undefined1 *)(*(int *)(iVar14 + iVar12 * 0x20 + 4) + 0x61) = 1;
          *(undefined1 *)(*(int *)(iVar14 + iVar7) + 0x44) = 1;
          objStack_78[0] = 0x1a5;
          iVar6 = 0x1a5;
          *(undefined2 *)(*(int *)(iVar14 + iVar12 * 0x20 + 8) + 0x28) = 0x1a5;
          if (uVar13 < (uint)param_1[0x184]) {
            iVar6 = param_1[0x186];
          }
          else {
            iVar7 = 0;
          }
          if (uVar13 < (uint)param_1[0x184]) {
            iVar7 = *(int *)(iVar6 + uVar13 * 4);
          }
          puVar10 = (uint *)(iVar12 * 0x20 + 0x18 + iVar14);
          if (*(int *)(iVar7 + 0x24) == 0) {
            *puVar10 = 0;
            puVar10[1] = 0;
          }
          else {
            uVar11 = *puVar10;
            if ((uVar11 != 0) && (*(uint *)(uVar11 + 0x1c) == puVar10[1])) {
              func_00110848(uVar11);
            }
            func_004A1B9C((int *)objStack_78,*(int *)(iVar7 + 0x24),(uint *)&DAT_004d431c);
            *puVar10 = objStack_78[0];
            puVar10[1] = objStack_78[1];
          }
          if (uVar13 < (uint)param_1[0x11e]) {
            iVar6 = *(int *)(param_1[0x120] + uVar13 * 4);
          }
          else {
            iVar6 = 0;
          }
          local_50 = iVar4;
          local_4c = s_SE_MassFire_BURN_004d4324;
          func_0014DBF4(param_1,&local_50,iVar6 + 4,0);
          goto LAB_004d417c;
        }
        if (uVar13 < (uint)param_1[0x11e]) {
          iVar6 = *(int *)(param_1[0x120] + uVar13 * 4);
        }
        else {
          iVar6 = 0;
        }
        bVar5 = func_00539A74(iVar6,0);
        if (bVar5) goto LAB_004d4070;
      }
      else {
LAB_004d43fc:
        if (*(char *)(iVar14 + iVar12 * 0x20) == '\0') {
          if (uVar13 < (uint)param_1[0x11e]) {
            iVar6 = *(int *)(param_1[0x120] + uVar13 * 4);
          }
          else {
            iVar6 = 0;
          }
          local_4c = s_SE_MassFire_BURNING_004d4490;
          objStack_78[0] = 0;
          local_50 = iVar4;
          func_00150CD0((int)param_1,&local_50,iVar6 + 4,uVar13,0);
        }
      }
LAB_004d4468:
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar15);
  }
  return;
}

