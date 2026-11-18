#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_002a6b28;
extern int DAT_002a6b2c;

// USA 002A6890 <- EU 002A686C (Ghidra, non-matching)
// GLOBAL DAT_002a6b28 int
// GLOBAL DAT_002a6b2c int

void func_002A6890(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  if ((*(char *)(param_1 + 0x9e4) != '\0') || (bVar1 = func_00588BF0(param_1,0), bVar1)) {
    uVar4 = 0;
    do {
      iVar6 = param_1 + uVar4 * 8;
      if (*(int *)(param_1 + 0xb28) == 0x3f800000) {
        iVar2 = *(int *)(iVar6 + 0xba4);
        piVar5 = (int *)(iVar6 + 0xba4);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) != *(int *)(iVar6 + 0xba8))) {
LAB_002a6954:
          bVar1 = false;
LAB_002a6958:
          if (!bVar1) goto LAB_002a6960;
        }
        else {
          if ((*(uint *)(iVar2 + 0x3c) & 4) != 0 || (*(uint *)(iVar2 + 0x3c) & 0x40) != 0) {
            bVar1 = true;
            goto LAB_002a6958;
          }
          iVar3 = *(int *)(iVar2 + 0x20);
          if ((iVar3 == 0) || (*(int *)(iVar2 + 0x24) != *(int *)(iVar3 + 0xc))) goto LAB_002a6954;
          if (0 < *(int *)(iVar3 + 4)) goto LAB_002a6b14;
LAB_002a6960:
          piVar7 = (int *)(DAT_002a6b28 + uVar4 * 8);
          (**(code **)(*piVar7 + 8))(piVar7);
          puVar8 = (uint *)piVar7[1];
          if (*(int *)(param_1 + 0x344) == 0) {
            *piVar5 = 0;
            *(undefined4 *)(iVar6 + 0xba8) = 0;
          }
          else {
            iVar2 = *piVar5;
            if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(iVar6 + 0xba8))) {
              func_00110848(iVar2);
            }
            func_004A1B9C(&local_30,*(int *)(param_1 + 0x344),puVar8);
            *piVar5 = local_30;
            *(undefined4 *)(iVar6 + 0xba8) = uStack_2c;
          }
          iVar2 = *(int *)(iVar6 + 0xbcc);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(iVar6 + 0xbd0))) {
            iVar6 = *(int *)(iVar2 + 0x20);
            if ((iVar6 != 0) && (*(int *)(iVar2 + 0x24) == *(int *)(iVar6 + 0xc))) {
              iVar3 = *(int *)(iVar6 + 4);
              goto joined_r0x002a6a0c;
            }
            goto LAB_002a6b04;
          }
        }
      }
      else {
        iVar2 = *(int *)(iVar6 + 0xbcc);
        piVar5 = (int *)(iVar6 + 0xbcc);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) != *(int *)(iVar6 + 0xbd0))) {
LAB_002a6a48:
          bVar1 = false;
LAB_002a6a4c:
          if (bVar1) goto LAB_002a6b14;
        }
        else {
          if ((*(uint *)(iVar2 + 0x3c) & 4) != 0 || (*(uint *)(iVar2 + 0x3c) & 0x40) != 0) {
            bVar1 = true;
            goto LAB_002a6a4c;
          }
          iVar3 = *(int *)(iVar2 + 0x20);
          if ((iVar3 == 0) || (*(int *)(iVar2 + 0x24) != *(int *)(iVar3 + 0xc))) goto LAB_002a6a48;
          if (0 < *(int *)(iVar3 + 4)) goto LAB_002a6b14;
        }
        piVar7 = (int *)(DAT_002a6b2c + uVar4 * 8);
        (**(code **)(*piVar7 + 8))(piVar7);
        puVar8 = (uint *)piVar7[1];
        if (*(int *)(param_1 + 0x344) == 0) {
          *piVar5 = 0;
          *(undefined4 *)(iVar6 + 0xbd0) = 0;
        }
        else {
          iVar2 = *piVar5;
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(iVar6 + 0xbd0))) {
            func_00110848(iVar2);
          }
          func_004A1B9C(&local_30,*(int *)(param_1 + 0x344),puVar8);
          *piVar5 = local_30;
          *(undefined4 *)(iVar6 + 0xbd0) = uStack_2c;
        }
        iVar2 = *(int *)(iVar6 + 0xba4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(iVar6 + 0xba8))) {
          iVar6 = *(int *)(iVar2 + 0x20);
          if ((iVar6 != 0) && (*(int *)(iVar2 + 0x24) == *(int *)(iVar6 + 0xc))) {
            iVar3 = *(int *)(iVar6 + 4);
joined_r0x002a6a0c:
            if (0 < iVar3) {
              *(undefined1 *)(iVar6 + 0x280) = 1;
            }
          }
LAB_002a6b04:
          *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
        }
      }
LAB_002a6b14:
      uVar4 = uVar4 + 1;
    } while (uVar4 < 5);
  }
  return;
}

