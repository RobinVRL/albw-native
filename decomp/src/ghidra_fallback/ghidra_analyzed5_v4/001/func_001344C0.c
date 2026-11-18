#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00110DF0(int *param_1,int param_2,int *param_3,int param_4,uint param_5,int param_6);
extern int func_00581010(int param_1,int *param_2,uint *param_3);
extern int DAT_00134938;
extern int DAT_0013493c;
extern undefined1 DAT_00134940;
extern undefined1 DAT_00134944;

// USA 001344C0 <- EU 001344C0 (Ghidra, non-matching)
// GLOBAL DAT_00134938 int
// GLOBAL DAT_0013493c int
// GLOBAL DAT_00134940 undefined1
// GLOBAL DAT_00134944 undefined1

void func_001344C0(uint *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int in_s16;
  uint *puVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(uint * *)(albw_frame + 0x4))
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_45 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_44 (*(uint * *)(albw_frame + 0x4c))
  #define local_40 (*(int *)(albw_frame + 0x50))
  #define local_3c (*(int *)(albw_frame + 0x54))
  #define local_34 (*(int *)(albw_frame + 0x5c))
  #define local_30 (*(int *)(albw_frame + 0x60))
  #define local_2c (*(uint * *)(albw_frame + 0x64))
  *param_1 = 0;
  if (*(int *)(param_2 + 0x344) != 0) {
    local_8c = (uint *)local_84;
    local_88 = 0x40;
    local_34 = DAT_00134938;
    iVar3 = 0;
    uStack_45 = 0;
    local_84[0] = 0;
    local_90 = DAT_0013493c;
    if (0 < (int)param_1[1]) {
      do {
        puVar8 = local_8c;
        (**(code **)(*param_3 + 8))(param_3);
        uVar5 = 0;
        do {
          if (*(char *)(param_3[1] + uVar5) == '\0') {
            if ((int)uVar5 < 0x40001) goto LAB_00134570;
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 0x40001);
        uVar5 = 0;
LAB_00134570:
        if (local_88 <= (int)uVar5) {
          uVar5 = local_88 - 1;
        }
        (**(code **)(*param_3 + 8))(param_3);
        func_0010E3C4(puVar8,(uint *)param_3[1],uVar5);
        *(undefined1 *)((int)puVar8 + uVar5) = 0;
        if (iVar3 < 10) {
          local_30 = local_34;
          local_2c = (uint *)&DAT_00134940;
          puVar8 = local_8c;
          (**(code **)(local_90 + 8))(&local_90);
          iVar1 = 0;
          do {
            if (*(char *)((int)local_8c + iVar1) == '\0') {
              if (iVar1 < 0x40001) goto LAB_0013460c;
              break;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 0x40001);
          iVar1 = 0;
LAB_0013460c:
          iVar7 = iVar1;
          if (iVar1 < 0) {
            iVar7 = 0;
          }
          (**(code **)(local_30 + 8))(&local_30);
          uVar5 = 0;
          do {
            if (*(char *)((int)local_2c + uVar5) == '\0') {
              if ((int)uVar5 < 0x40001) goto LAB_00134660;
              break;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < 0x40001);
          uVar5 = 0;
LAB_00134660:
          if (local_88 - iVar7 <= (int)uVar5) {
            uVar5 = (local_88 - iVar7) - 1;
          }
          if (0 < (int)uVar5) {
            local_44 = (uint *)((int)puVar8 + iVar7);
            (**(code **)(local_30 + 8))(&local_30);
            func_0010E3C4(local_44,local_2c,uVar5);
            if (iVar1 < (int)(iVar7 + uVar5)) {
              *(undefined1 *)((int)puVar8 + iVar7 + uVar5) = 0;
            }
          }
          cVar4 = (char)iVar3 + '0';
          (**(code **)(local_90 + 8))(&local_90);
          iVar1 = 0;
          do {
            if (*(char *)((int)local_8c + iVar1) == '\0') {
              if (iVar1 < 0x40001) goto LAB_00134700;
              break;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 0x40001);
          iVar1 = 0;
LAB_00134700:
          if (iVar1 < local_88 + -1) {
LAB_00134880:
            *(char *)((int)local_8c + iVar1) = cVar4;
            *(undefined1 *)((int)local_8c + iVar1 + 1) = 0;
          }
        }
        else if (iVar3 < 0x14) {
          local_30 = local_34;
          local_2c = (uint *)&DAT_00134944;
          puVar8 = local_8c;
          (**(code **)(local_90 + 8))(&local_90);
          iVar1 = 0;
          do {
            if (*(char *)((int)local_8c + iVar1) == '\0') {
              if (iVar1 < 0x40001) goto LAB_0013477c;
              break;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 0x40001);
          iVar1 = 0;
LAB_0013477c:
          iVar7 = iVar1;
          if (iVar1 < 0) {
            iVar7 = 0;
          }
          (**(code **)(local_30 + 8))(&local_30);
          uVar5 = 0;
          do {
            if (*(char *)((int)local_2c + uVar5) == '\0') {
              if ((int)uVar5 < 0x40001) goto LAB_001347d0;
              break;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < 0x40001);
          uVar5 = 0;
LAB_001347d0:
          if (local_88 - iVar7 <= (int)uVar5) {
            uVar5 = (local_88 - iVar7) - 1;
          }
          if (0 < (int)uVar5) {
            puVar2 = (uint *)((int)puVar8 + iVar7);
            (**(code **)(local_30 + 8))(&local_30);
            func_0010E3C4(puVar2,local_2c,uVar5);
            if (iVar1 < (int)(iVar7 + uVar5)) {
              *(undefined1 *)((int)puVar8 + iVar7 + uVar5) = 0;
            }
          }
          cVar4 = (char)iVar3 + '&';
          (**(code **)(local_90 + 8))(&local_90);
          iVar1 = 0;
          do {
            if (*(char *)((int)local_8c + iVar1) == '\0') {
              if (iVar1 < 0x40001) goto LAB_00134870;
              break;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 0x40001);
          iVar1 = 0;
LAB_00134870:
          if (iVar1 < local_88 + -1) goto LAB_00134880;
        }
        uVar5 = *param_1;
        if ((int)uVar5 < (int)param_1[1]) {
          piVar6 = (int *)(param_1[2] + uVar5 * 0x1c);
          *param_1 = uVar5 + 1;
        }
        else {
          piVar6 = (int *)0x0;
        }
        piVar6[2] = 0;
        *piVar6 = 0;
        piVar6[1] = 0;
        (**(code **)(local_90 + 8))(&local_90);
        if (*(int *)(param_2 + 0x344) != 0) {
          func_00581010(*(int *)(param_2 + 0x344),piVar6 + 2,local_8c);
        }
        if (piVar6[2] == 0) {
          if (*param_1 - 1 <= param_1[1]) {
            *param_1 = *param_1 - 1;
          }
        }
        else {
          iVar1 = *(int *)(param_2 + 0x344);
          if (iVar1 == 0) {
            local_40 = 0;
            local_3c = in_s16;
          }
          else {
            func_00110DF0(&local_40,iVar1,piVar6 + 2,*(int *)(iVar1 + 0x24),*(uint *)(iVar1 + 0x28),
                          *(int *)(iVar1 + 0x2c));
          }
          piVar6[6] = 0x1e - iVar3;
          *piVar6 = local_40;
          piVar6[1] = local_3c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[1]);
    }
  }
  return;
}

