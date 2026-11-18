#include "ghidra_types.h"

extern int func_00110DF0(int *param_1,int param_2,int *param_3,int param_4,uint param_5,int param_6);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern float DAT_0013409c;
extern int *DAT_001340a0;

// USA 00133D34 <- EU 00133D34 (Ghidra, non-matching)
// GLOBAL DAT_0013409c float
// GLOBAL DAT_001340a0 int *

void func_00133D34(uint *param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_d8;
  int iVar13;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_60 (*(float * *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define afStack_50 ((float *)(albw_frame + 0x20))
  #define puStack_30 (*(uint * *)(albw_frame + 0x40))
  #define local_2c (*(int *)(albw_frame + 0x44))
  #define iStack_28 (*(int *)(albw_frame + 0x48))
  iVar13 = (int)((ulonglong)in_d8 >> 0x20);
  if (*param_1 != 0) {
    cVar1 = *(char *)(param_3 + 0x30);
    if ((*(uint *)(param_3 + 0x164) & 0x40000000) != 0) {
      fVar12 = *(float *)(param_3 + 0x74);
      fVar10 = *(float *)(param_3 + 0x78);
      fVar11 = *(float *)(param_3 + 0x7c);
      *(undefined4 *)(param_3 + 0xbc) = *(undefined4 *)(param_3 + 0x8c);
      *(undefined4 *)(param_3 + 0xcc) = *(undefined4 *)(param_3 + 0x9c);
      *(undefined4 *)(param_3 + 0xdc) = *(undefined4 *)(param_3 + 0xac);
      *(float *)(param_3 + 0xb0) = *(float *)(param_3 + 0x80) * fVar12;
      *(float *)(param_3 + 0xc0) = *(float *)(param_3 + 0x90) * fVar12;
      *(float *)(param_3 + 0xd0) = *(float *)(param_3 + 0xa0) * fVar12;
      *(float *)(param_3 + 0xb4) = *(float *)(param_3 + 0x84) * fVar10;
      *(float *)(param_3 + 0xc4) = *(float *)(param_3 + 0x94) * fVar10;
      *(float *)(param_3 + 0xd4) = *(float *)(param_3 + 0xa4) * fVar10;
      *(float *)(param_3 + 0xb8) = *(float *)(param_3 + 0x88) * fVar11;
      *(float *)(param_3 + 200) = *(float *)(param_3 + 0x98) * fVar11;
      *(float *)(param_3 + 0xd8) = *(float *)(param_3 + 0xa8) * fVar11;
      *(uint *)(param_3 + 0x164) = *(uint *)(param_3 + 0x164) & 0xbfffffff;
    }
    piVar3 = DAT_001340a0;
    local_60 = (float *)(param_3 + 0xb0);
    uVar4 = *param_1;
    uVar8 = 0;
    fVar10 = DAT_0013409c;
    puStack_30 = param_1;
    local_2c = param_2;
    iStack_28 = param_3;
    if (0 < (int)uVar4) {
      do {
        if (uVar8 < uVar4) {
          piVar9 = (int *)(param_1[2] + uVar8 * 0x1c);
        }
        else {
          piVar9 = (int *)param_1[2];
        }
        iVar5 = *piVar9;
        if (cVar1 == '\0') {
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == piVar9[1])) {
            iVar6 = *(int *)(iVar5 + 0x20);
            if ((iVar6 != 0) && (*(int *)(iVar5 + 0x24) == *(int *)(iVar6 + 0xc))) {
              iVar7 = *(int *)(iVar6 + 4);
joined_r0x00133ed0:
              if (0 < iVar7) {
                *(undefined1 *)(iVar6 + 0x280) = 1;
              }
            }
LAB_0013406c:
            *(uint *)(iVar5 + 0x3c) = *(uint *)(iVar5 + 0x3c) & 0xfffffffb | 8;
          }
        }
        else {
          if ((iVar5 == 0) || (*(int *)(iVar5 + 0x1c) != piVar9[1])) {
LAB_00133f08:
            bVar2 = false;
LAB_00133f0c:
            if (bVar2) {
LAB_00133f14:
              iVar5 = piVar9[6];
              piVar9[6] = iVar5 + -1;
              if (0 < iVar5 + -1) goto LAB_0013407c;
            }
          }
          else {
            if ((*(uint *)(iVar5 + 0x3c) & 4) != 0 || (*(uint *)(iVar5 + 0x3c) & 0x40) != 0) {
              bVar2 = true;
              goto LAB_00133f0c;
            }
            iVar6 = *(int *)(iVar5 + 0x20);
            if ((iVar6 == 0) || (*(int *)(iVar5 + 0x24) != *(int *)(iVar6 + 0xc)))
            goto LAB_00133f08;
            if (0 < *(int *)(iVar6 + 4)) goto LAB_00133f14;
          }
          if (uVar8 < *param_1) {
            uVar4 = param_1[2] + uVar8 * 0x1c;
          }
          else {
            uVar4 = param_1[2];
          }
          iVar5 = *(int *)(uVar4 + 0xc);
          local_5c = *(float *)(iVar5 + 0x40);
          uStack_58 = *(undefined4 *)(iVar5 + 0x44);
          uStack_54 = *(undefined4 *)(iVar5 + 0x48);
          func_00115CA8(afStack_50,local_60,&local_5c);
          iVar6 = func_0051E6D0(*piVar3,afStack_50,fVar10);
          iVar5 = *piVar9;
          if (iVar6 == 0) {
            if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == piVar9[1])) {
              iVar6 = *(int *)(iVar5 + 0x20);
              if ((iVar6 != 0) && (*(int *)(iVar5 + 0x24) == *(int *)(iVar6 + 0xc))) {
                iVar7 = *(int *)(iVar6 + 4);
                goto joined_r0x00133ed0;
              }
              goto LAB_0013406c;
            }
          }
          else {
            if ((iVar5 == 0) || (*(int *)(iVar5 + 0x1c) != piVar9[1])) {
LAB_00133fd8:
              bVar2 = false;
LAB_00133fdc:
              if (bVar2) goto LAB_0013407c;
            }
            else {
              if ((*(uint *)(iVar5 + 0x3c) & 4) != 0 || (*(uint *)(iVar5 + 0x3c) & 0x40) != 0) {
                bVar2 = true;
                goto LAB_00133fdc;
              }
              iVar6 = *(int *)(iVar5 + 0x20);
              if ((iVar6 == 0) || (*(int *)(iVar5 + 0x24) != *(int *)(iVar6 + 0xc)))
              goto LAB_00133fd8;
              if (0 < *(int *)(iVar6 + 4)) goto LAB_0013407c;
            }
            iVar5 = *(int *)(local_2c + 0x344);
            if (iVar5 == 0) {
              local_68 = 0;
              local_64 = iVar13;
            }
            else {
              func_00110DF0(&local_68,iVar5,piVar9 + 2,*(int *)(iVar5 + 0x24),
                            *(uint *)(iVar5 + 0x28),*(int *)(iVar5 + 0x2c));
            }
            piVar9[6] = 0x1e;
            *piVar9 = local_68;
            piVar9[1] = local_64;
          }
        }
LAB_0013407c:
        uVar4 = *param_1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar4);
    }
  }
  return;
}

