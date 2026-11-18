#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0042DD38(int param_1,int param_2,int param_3);
extern int func_00432F74(undefined4 *param_1);
extern int func_004A97F8(int param_1,float *param_2,float *param_3,int *param_4,uint param_5);
extern int DAT_004ab318;
extern uint *DAT_004ab31c;

// USA 004AAF44 <- EU 004AAF1C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_004ab318 int
// GLOBAL DAT_004ab31c uint *

uint func_004AAF44(int param_1,float *param_2,undefined4 *param_3,uint param_4,uint param_5,
                  float fparam_0)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined4 in_s1;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define uStack_cc (*(undefined4 *)(albw_frame + 0x4))
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define local_c0 (*(float *)(albw_frame + 0x10))
  #define local_74 (*(float *)(albw_frame + 0x5c))
  #define local_70 (*(float *)(albw_frame + 0x60))
  #define local_6c (*(float *)(albw_frame + 0x64))
  #define local_68 (*(float *)(albw_frame + 0x68))
  #define local_64 (*(uint *)(albw_frame + 0x6c))
  #define afStack_60 ((float *)(albw_frame + 0x70))
  #define afStack_54 ((float *)(albw_frame + 0x7c))
  #define uStack_3c (*(undefined8 *)(albw_frame + 0x94))
  #define local_34 (*(int *)(albw_frame + 0x9c))
  #define pfStack_30 (*(float * *)(albw_frame + 0xa0))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xa4))
  #define uStack_28 (*(uint *)(albw_frame + 0xa8))
  uStack_3c = CONCAT44(in_s1,fparam_0);
  local_34 = param_1;
  pfStack_30 = param_2;
  puStack_2c = param_3;
  uStack_28 = param_4;
  func_00432F74(&uStack_cc);
  local_c8 = *param_2;
  local_c4 = param_2[1];
  local_c0 = param_2[2];
  local_74 = fparam_0;
  if (((*(uint *)(DAT_004ab318 + 0x28) & 1) == 0) &&
     (iVar2 = func_00100174((int *)(DAT_004ab318 + 0x28)), puVar1 = DAT_004ab31c, iVar2 != 0)) {
    puVar8 = DAT_004ab31c + 3;
    *DAT_004ab31c = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    func_0010B3EC(puVar1,100,(int)puVar8);
  }
  local_70 = fparam_0;
  local_6c = fparam_0;
  local_68 = fparam_0;
  func_00115C70(afStack_60,param_2,&local_70);
  func_00115C54(afStack_54,param_2,&local_70);
  iVar2 = local_34;
  local_64 = 0;
  iVar13 = local_34 + 0xbf3c;
  do {
    puVar1 = DAT_004ab31c;
    if ((param_5 & 1 << (local_64 & 0xff)) != 0) {
      *DAT_004ab31c = 0;
      func_004A97F8(local_34,afStack_60,afStack_54,(int *)puVar1,local_64);
      uVar14 = *puVar1;
      uVar12 = 0;
      if (0 < (int)uVar14) {
        do {
          if (uVar12 < *DAT_004ab31c) {
            iVar11 = *(int *)(DAT_004ab31c[2] + uVar12 * 4);
            iVar3 = *(int *)(DAT_004ab31c[2] + uVar12 * 4);
          }
          else {
            iVar11 = 0;
            iVar3 = 0;
          }
          for (iVar3 = *(int *)(iVar3 + 4); iVar3 != iVar11; iVar3 = *(int *)(iVar3 + 4)) {
            iVar9 = *(int *)(iVar3 + 8);
            bVar15 = *(char *)(iVar9 + 0x44) != '\0';
            iVar6 = 0;
            if (bVar15) {
              iVar6 = *(int *)(iVar9 + 0x18);
            }
            if (((((bVar15 && iVar6 != 0) &&
                  ((param_4 & 1 << (*(ushort *)(iVar6 + 0x28) & 0x1f)) != 0)) &&
                 (*(float *)(iVar6 + 0x34) <= local_c8 + local_74)) &&
                ((*(float *)(iVar6 + 0x3c) <= local_c0 + local_74 &&
                 (local_c8 - local_74 <= *(float *)(iVar6 + 0x40))))) &&
               ((local_c0 - local_74 <= *(float *)(iVar6 + 0x48) &&
                ((*(float *)(iVar6 + 0x38) <= local_c4 + local_74 &&
                 (local_c4 - local_74 <= *(float *)(iVar6 + 0x44))))))) {
              *(int *)(DAT_004ab318 + 8) = iVar9;
              uVar4 = func_0042DD38((int)&uStack_cc,iVar6,0);
              if (uVar4 != 0) {
                (**(code **)*param_3)(param_3,*(undefined4 *)(iVar9 + 0x18),iVar9 + 0x20);
              }
              *(undefined4 *)(DAT_004ab318 + 8) = 0;
            }
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar14);
      }
      iVar6 = *(int *)(iVar2 + 0xbf48);
      iVar11 = local_64 * 3;
      for (iVar3 = *(int *)(iVar2 + 0xbf40) - iVar6; iVar3 != iVar13 - *(int *)(iVar2 + 0xbf48);
          iVar3 = *(int *)(iVar3 + iVar6 + 4) - iVar6) {
        iVar9 = iVar3 + 0xb4;
        iVar5 = iVar3 + 0xb4;
        if (local_64 < 6) {
          iVar9 = iVar9 + iVar11 * 4;
          iVar5 = iVar3 + 0xb4 + iVar11 * 4;
        }
        for (iVar5 = *(int *)(iVar5 + 4); iVar5 != iVar9; iVar5 = *(int *)(iVar5 + 4)) {
          iVar10 = *(int *)(iVar5 + 8);
          bVar15 = *(char *)(iVar10 + 0x44) != '\0';
          iVar7 = 0;
          if (bVar15) {
            iVar7 = *(int *)(iVar10 + 0x18);
          }
          if ((((bVar15 && iVar7 != 0) && ((param_4 & 1 << (*(ushort *)(iVar7 + 0x28) & 0x1f)) != 0)
               ) && (*(float *)(iVar7 + 0x34) <= local_c8 + local_74)) &&
             (((*(float *)(iVar7 + 0x3c) <= local_c0 + local_74 &&
               (local_c8 - local_74 <= *(float *)(iVar7 + 0x40))) &&
              ((local_c0 - local_74 <= *(float *)(iVar7 + 0x48) &&
               ((*(float *)(iVar7 + 0x38) <= local_c4 + local_74 &&
                (local_c4 - local_74 <= *(float *)(iVar7 + 0x44))))))))) {
            *(int *)(DAT_004ab318 + 8) = iVar10;
            uVar12 = func_0042DD38((int)&uStack_cc,iVar7,0);
            if (uVar12 != 0) {
              (**(code **)*param_3)(param_3,*(undefined4 *)(iVar10 + 0x18),iVar10 + 0x20);
            }
            *(undefined4 *)(DAT_004ab318 + 8) = 0;
          }
        }
      }
    }
    local_64 = local_64 + 1;
  } while ((int)local_64 < 6);
  return local_64;
}

