#include "ghidra_types.h"

extern int func_00112354(int *param_1,int param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_003E6600(int *param_1,int param_2,uint param_3,int *param_4);
extern int func_003FD69C(int *param_1,int param_2);
extern int func_003FF898(int param_1,int param_2);
extern int func_00400540(undefined4 *param_1,int param_2,int *param_3);
extern int DAT_004049d4;
extern uint DAT_004049d8;
extern int DAT_004049dc;
extern int DAT_004049e0;
extern int DAT_004049e4;
extern int DAT_004049e8;
extern int DAT_004049ec;
extern int DAT_004049f0;
extern int DAT_004049f4;
extern int DAT_00404c50;
extern undefined4 *DAT_00404c54;

// USA 00404664 <- EU 00404644 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// GLOBAL DAT_004049d4 int
// GLOBAL DAT_004049d8 uint
// GLOBAL DAT_004049dc int
// GLOBAL DAT_004049e0 int
// GLOBAL DAT_004049e4 int
// GLOBAL DAT_004049e8 int
// GLOBAL DAT_004049ec int
// GLOBAL DAT_004049f0 int
// GLOBAL DAT_004049f4 int
// GLOBAL DAT_00404c50 int
// GLOBAL DAT_00404c54 undefined4 *

undefined4 func_00404664(int *param_1,int *param_2,int param_3,int param_4,uint *param_5)

{
  char cVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d4 (*(uint *)(albw_frame + 0xc))
  #define local_d0 (*(uint *)(albw_frame + 0x10))
  #define local_cc (*(int *)(albw_frame + 0x14))
  #define local_c8 (*(int *)(albw_frame + 0x18))
  #define local_c4 (*(int * *)(albw_frame + 0x1c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_bc (*(int * *)(albw_frame + 0x24))
  #define local_b8 (*(int ** *)(albw_frame + 0x28))
  #define local_b4 (*(int ** *)(albw_frame + 0x2c))
  #define local_b0 (*(ushort *)(albw_frame + 0x30))
  #define local_ae (*(ushort *)(albw_frame + 0x32))
  #define local_ac (*(int *)(albw_frame + 0x34))
  #define local_a8 (*(uint *)(albw_frame + 0x38))
  #define local_a4 (*(int * *)(albw_frame + 0x3c))
  #define local_a0 (*(int * *)(albw_frame + 0x40))
  #define local_9c (*(int *)(albw_frame + 0x44))
  #define local_98 (*(uint *)(albw_frame + 0x48))
  #define local_94 (*(int *)(albw_frame + 0x4c))
  #define local_90 (*(int * *)(albw_frame + 0x50))
  #define uStack_8c (*(uint *)(albw_frame + 0x54))
  #define local_88 (*(int * *)(albw_frame + 0x58))
  #define ppiStack_84 (*(int ** *)(albw_frame + 0x5c))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(int * *)(albw_frame + 0x68))
  #define local_6c (*(int * *)(albw_frame + 0x74))
  #define local_68 (*(int * *)(albw_frame + 0x78))
  #define local_64 (*(int * *)(albw_frame + 0x7c))
  #define iStack_60 (*(int *)(albw_frame + 0x80))
  #define local_5c (*(int * *)(albw_frame + 0x84))
  #define local_54 (*(int *)(albw_frame + 0x8c))
  #define local_34 (*(int * *)(albw_frame + 0xac))
  #define piStack_30 (*(int * *)(albw_frame + 0xb0))
  #define iStack_2c (*(int *)(albw_frame + 0xb4))
  #define iStack_28 (*(int *)(albw_frame + 0xb8))
  iVar9 = DAT_004049d4;
  param_1[9] = param_3;
  local_34 = param_1;
  piStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  func_003E6600(param_2,iVar9,0x3000000,(int *)0x1);
  local_6c = (int *)0x0;
  local_68 = (int *)0x0;
  local_64 = (int *)0x0;
  local_5c = local_34;
  if (param_5 == (uint *)0x0) {
    local_d4 = DAT_004049d8;
    local_d0 = DAT_004049d8;
    local_b4 = (int **)0x0;
  }
  else {
    local_d4 = param_5[5];
    local_d0 = param_5[6];
    local_b4 = (int **)param_5[4];
  }
  local_c4 = *(int **)(param_4 + 0x10);
  local_9c = 0;
  local_80 = 0.0;
  local_54 = 0;
  local_c0 = *(undefined4 *)(param_4 + 0x14);
  local_b0 = 0;
  iVar9 = 0;
  local_bc = local_34;
  local_b8 = &local_6c;
  local_a8 = 0;
  local_cc = DAT_004049dc;
  local_c8 = DAT_004049dc;
  piVar8 = (int *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
  iStack_60 = param_3;
  if ((short)param_2[4] != 0) {
    do {
      iVar10 = *piVar8;
      iVar6 = iVar10 - DAT_004049e0;
      fVar2 = ALBW_AS_F32(local_a8);
      piVar7 = local_6c;
      piVar3 = local_68;
      if (iVar10 == DAT_004049e0) {
        if (local_54 == 0) {
          local_54 = 1;
          puVar5 = (undefined4 *)
                   (**(code **)(*(int *)*DAT_00404c54 + 8))((int *)*DAT_00404c54,0xc,4);
          if (puVar5 != (undefined4 *)0x0) {
            puVar5[1] = puVar5 + 1;
            *puVar5 = 0;
            puVar5[2] = puVar5 + 1;
          }
          local_34[5] = (int)puVar5;
          fVar2 = ALBW_AS_F32(local_a8);
          piVar7 = local_6c;
          piVar3 = local_68;
        }
        else if ((local_34[5] != 0) && (local_9c == 1)) {
          piVar11 = (int *)local_34[4];
          puVar5 = (undefined4 *)
                   (**(code **)(*(int *)*DAT_00404c54 + 8))((int *)*DAT_00404c54,0x34,4);
          fVar2 = ALBW_AS_F32(local_a8);
          piVar7 = local_6c;
          piVar3 = local_68;
          if ((puVar5 != (undefined4 *)0x0) &&
             (puVar5 = func_00400540(puVar5,(int)piVar8,piVar11), fVar2 = ALBW_AS_F32(local_a8),
             piVar7 = local_6c, piVar3 = local_68, puVar5 != (undefined4 *)0x0)) {
            func_00112354((int *)local_34[5],(int)puVar5);
            fVar2 = ALBW_AS_F32(local_a8);
            piVar7 = local_6c;
            piVar3 = local_68;
          }
        }
      }
      else if (iVar10 < DAT_004049e0) {
        iVar6 = DAT_004049e0 + -0xb0000;
        if (iVar10 == iVar6) {
          local_9c = local_9c + -1;
        }
        else if (iVar6 < iVar10) {
          iVar6 = DAT_004049e8 + (iVar10 - iVar6);
          piVar3 = piVar8;
          if (((iVar6 != 0) && (piVar7 = piVar8, piVar3 = local_68, iVar6 != 0xa0e)) &&
             (piVar7 = local_6c, iVar6 == 0x1f30a)) goto LAB_00404880;
        }
        else {
          iVar6 = DAT_004049e4 + iVar10;
          bVar13 = iVar6 == 0;
          if (!bVar13) {
            iVar6 = iVar6 + -0x104f2;
            bVar13 = iVar6 == 0;
          }
          if (!bVar13) {
            bVar13 = iVar6 == 0x15;
          }
          if (bVar13) {
LAB_00404880:
            local_b0 = 0;
            local_ae = 0;
            local_ac = 0;
            local_a4 = (int *)0x0;
            local_98 = 0;
            local_a0 = (int *)0x0;
            piVar11 = piVar8;
            if ((iVar9 + 1 < (int)(uint)*(ushort *)(param_2 + 4)) &&
               (piVar7 = (int *)(piVar8[1] + (int)piVar8), *piVar7 == DAT_004049f4)) {
              iVar9 = iVar9 + 1;
              piVar11 = piVar7;
              local_a4 = piVar7;
            }
            local_78 = piVar8;
            if (param_5 == (uint *)0x0) {
LAB_00404a04:
              local_98 = (**(code **)(*local_34 + 0x3c))(local_34,iVar10,piVar8,local_a0,&local_d4);
              piVar8 = piVar11;
              fVar2 = ALBW_AS_F32(local_a8);
              piVar7 = local_6c;
              piVar3 = local_68;
              if (local_98 == 0) goto LAB_00404c2c;
            }
            else {
              if (local_34[4] == 0) {
                local_98 = param_5[2];
              }
              else {
                uVar12 = 0;
                if (*param_5 == 0) goto LAB_00404a04;
                do {
                  iVar6 = 0;
                  while (cVar1 = *(char *)((int)piVar8 + iVar6 + 0xc),
                        cVar1 == *(char *)(param_5[1] + uVar12 * 0x28 + iVar6)) {
                    if ((cVar1 == '\0') || (iVar6 = iVar6 + 1, 0x17 < iVar6)) {
                      iVar6 = param_5[1] + uVar12 * 0x28;
                      if (iVar6 == 0) goto LAB_00404a04;
                      if (*(int *)(iVar6 + 0x1c) == 0) {
                        local_a0 = (int *)0x0;
                      }
                      else {
                        local_a0 = (int *)(param_5[3] + *(int *)(iVar6 + 0x1c));
                      }
                      local_b0 = (ushort)*(byte *)(iVar6 + 0x18);
                      local_ae = (ushort)*(byte *)(iVar6 + 0x19);
                      local_ac = *(int *)(iVar6 + 0x24);
                      if (local_ac != 0) {
                        local_ac = local_ac + param_5[3];
                      }
                      if (*(int *)(iVar6 + 0x20) == 0) goto LAB_004049f8;
                      piVar7 = (int *)(*(int *)(iVar6 + 0x20) + param_5[3]);
                      if (piVar7 != (int *)0x0) {
                        local_a4 = piVar7;
                      }
                      goto LAB_00404a04;
                    }
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *param_5);
              }
LAB_004049f8:
              if (local_98 == 0) goto LAB_00404a04;
            }
            if (local_34[4] == 0) {
              local_34[4] = local_98;
            }
            if (local_a8 != 0) {
              func_003FF898(local_a8,local_98);
            }
            uVar12 = local_98;
            if (iVar10 == DAT_00404c50) {
              ppiStack_84 = local_b4;
              local_88 = local_a0;
              if (local_a0 == (int *)0x0) {
                ppiStack_84 = &local_6c;
                local_88 = local_78;
              }
              local_94 = local_88[0x15];
              local_90 = local_88 + 0x18;
              uStack_8c = local_98;
              local_80 = (*(float *)(local_98 + 0x3c) / ALBW_AS_F32(local_78[0x13])) *
                         ALBW_AS_F32(local_88[0x16]);
              local_7c = (*(float *)(local_98 + 0x40) / ALBW_AS_F32(local_78[0x14])) *
                         ALBW_AS_F32(local_88[0x17]);
              iVar6 = (**(code **)(*local_34 + 0x40))
                                (local_34,local_88 + local_88[0x15] * 10 + 0x18,&local_94,&local_d4)
              ;
              if (iVar6 != 0) {
                *(int *)(uVar12 + 0xac) = iVar6;
                func_00112364(local_34 + 10,(int)(local_34 + 0xb),(int *)(uVar12 + 0xa4));
              }
            }
            local_80 = ALBW_AS_F32(local_98);
            piVar8 = piVar11;
            fVar2 = ALBW_AS_F32(local_a8);
            piVar7 = local_6c;
            piVar3 = local_68;
          }
          else if (iVar6 == 0xf30e) {
            local_80 = ALBW_AS_F32(local_a8);
            fVar2 = ALBW_AS_F32(*(uint *)(local_a8 + 0xc));
          }
        }
      }
      else if (iVar6 == DAT_004049ec) {
        if (local_c4 != (int *)0x0) {
          func_003FD69C((int *)&local_98,(int)piVar8);
          (**(code **)(*local_c4 + 8))(local_c4,&local_98,local_34);
          fVar2 = ALBW_AS_F32(local_a8);
          piVar7 = local_6c;
          piVar3 = local_68;
        }
      }
      else if (iVar6 < DAT_004049ec) {
        iVar6 = DAT_004049f0 + iVar6;
        fVar2 = local_80;
        if (iVar6 != 0) {
          if (iVar6 == 0x10f7) {
            local_9c = local_9c + 1;
            fVar2 = ALBW_AS_F32(local_a8);
          }
          else {
            fVar2 = ALBW_AS_F32(local_a8);
            if (iVar6 == 0xfffd) {
              local_64 = piVar8;
            }
          }
        }
      }
      else {
        bVar13 = iVar6 - DAT_004049ec == 0x40d;
        iVar4 = 0;
        if (!bVar13) {
          iVar4 = (iVar6 - DAT_004049ec) + -0xa11;
          bVar13 = iVar4 == 0;
        }
        if (bVar13) goto LAB_00404880;
        if (iVar4 == 0xf8) {
          local_34[6] = piVar8[3];
          local_34[7] = piVar8[4];
          local_34[8] = (int)(piVar8 + 7);
          local_cc = piVar8[5];
          local_c8 = piVar8[6];
        }
      }
LAB_00404c2c:
      local_68 = piVar3;
      local_6c = piVar7;
      local_a8 = (uint)ALBW_AS_U32(fVar2);
      iVar9 = iVar9 + 1;
      piVar8 = (int *)((int)piVar8 + piVar8[1]);
    } while (iVar9 < (int)(uint)*(ushort *)(param_2 + 4));
  }
  return 1;
}

