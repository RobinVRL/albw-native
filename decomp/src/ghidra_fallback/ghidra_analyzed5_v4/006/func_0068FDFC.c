#include "ghidra_types.h"

extern float func_003FD364(int param_1,float *param_2,uint param_3,undefined2 param_4,float fparam_0);
extern float func_005670D8(int param_1,int param_2,float fparam_0);

// USA 0068FDFC <- EU 0068FDD4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *

void func_0068FDFC(int param_1,int *param_2,int *param_3,int *param_4,float *param_5,float fparam_0,
                  float fparam_1)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 ((float *)(albw_frame + 0x0))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(int * *)(albw_frame + 0x20))
  #define local_2c (*(int * *)(albw_frame + 0x24))
  #define local_28 (*(int * *)(albw_frame + 0x28))
  uVar11 = 0;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      uVar3 = (uint)*(ushort *)(*local_2c + uVar11 * 2);
      if (uVar3 != 0xffff) {
        iVar12 = *local_30 + uVar3 * 0x154;
        iVar9 = *(int *)(*(int *)(local_34 + 0xc) + uVar11 * 4);
        sVar1 = *(short *)(iVar9 + 6);
        if (sVar1 == 0) {
          fparam_0 = *param_5;
          if ((*(uint *)(iVar9 + 8) & 0x100) == 0) {
            if ((*(uint *)(iVar9 + 8) & 1) == 0) {
              fparam_0 = func_005670D8(*(int *)(iVar9 + 0xc),(int)ALBW_AS_U32(param_5[1]),fparam_0);
              fparam_1 = fparam_0;
            }
            else {
              fparam_1 = *(float *)(iVar9 + 0xc);
            }
          }
          sVar1 = *(short *)(iVar9 + 4);
          if (sVar1 == 0x14) {
            *(float *)(iVar12 + 0xf4) = fparam_1;
          }
          else {
            if (sVar1 == 0x17) {
              iVar12 = iVar12 + 0x6c;
            }
            else {
              if (sVar1 != 0x1a) goto switchD_0068ffb4_caseD_14;
              iVar12 = iVar12 + 0x84;
            }
            *(float *)(iVar12 + 0xa0) = fparam_1;
          }
        }
        else if (sVar1 == 2) {
          switch(*(undefined2 *)(iVar9 + 4)) {
          case 0x13:
            pfVar5 = (float *)(iVar12 + 0xec);
            break;
          default:
            pfVar5 = (float *)0x0;
            break;
          case 0x15:
            pfVar5 = (float *)(iVar12 + 0xf8);
            break;
          case 0x16:
            pfVar5 = (float *)(iVar12 + 0x104);
            break;
          case 0x18:
            pfVar5 = (float *)(iVar12 + 0x110);
            break;
          case 0x19:
            pfVar5 = (float *)(iVar12 + 0x11c);
            break;
          case 0x1b:
            pfVar5 = (float *)(iVar12 + 0x128);
          }
          local_50[0] = *pfVar5;
          local_50[1] = pfVar5[1];
          uVar3 = 0;
          fVar10 = param_5[1];
          uVar14 = (ulonglong)(uint)ALBW_AS_U32(*param_5);
          do {
            if ((*(uint *)(iVar9 + 8) & 0x100 << (uVar3 & 0xff)) == 0) {
              iVar4 = iVar9 + uVar3 * 4;
              if ((*(uint *)(iVar9 + 8) & 1 << (uVar3 & 0xff)) == 0) {
                fparam_0 = func_005670D8(*(int *)(iVar4 + 0xc),(int)ALBW_AS_U32(fVar10),ALBW_AS_F32(uVar14));
              }
              else {
                fparam_0 = *(float *)(iVar4 + 0xc);
              }
              local_50[uVar3] = fparam_0;
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 2);
          switch(*(undefined2 *)(iVar9 + 4)) {
          case 0x13:
            pfVar5 = (float *)(iVar12 + 0xec);
            break;
          default:
            goto switchD_0068ffb4_caseD_14;
          case 0x15:
            pfVar5 = (float *)(iVar12 + 0xf8);
            break;
          case 0x16:
            pfVar5 = (float *)(iVar12 + 0x104);
            break;
          case 0x18:
            pfVar5 = (float *)(iVar12 + 0x110);
            break;
          case 0x19:
            pfVar5 = (float *)(iVar12 + 0x11c);
            break;
          case 0x1b:
            pfVar5 = (float *)(iVar12 + 0x128);
          }
          *pfVar5 = local_50[0];
          pfVar5[1] = local_50[1];
        }
        else if (sVar1 == 5) {
          uVar3 = 0;
          fVar10 = param_5[1];
          uVar14 = (ulonglong)(uint)ALBW_AS_U32(*param_5);
          do {
            if ((*(uint *)(iVar9 + 8) & 0x100 << (uVar3 & 0xff)) == 0) {
              iVar4 = iVar9 + uVar3 * 4;
              if ((*(uint *)(iVar9 + 8) & 1 << (uVar3 & 0xff)) == 0) {
                fparam_0 = func_005670D8(*(int *)(iVar4 + 0xc),(int)ALBW_AS_U32(fVar10),ALBW_AS_F32(uVar14));
              }
              else {
                fparam_0 = *(float *)(iVar4 + 0xc);
              }
              local_50[uVar3] = fparam_0;
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 4);
          fparam_0 = func_003FD364(iVar12,local_50,~(*(uint *)(iVar9 + 8) & 0xf00) << 8,
                                   *(undefined2 *)(iVar9 + 4),fparam_0);
        }
        else if (sVar1 == 6) {
          fparam_1 = *param_5;
          if ((*(uint *)(iVar9 + 8) & 0x100) == 0) {
            if ((*(uint *)(iVar9 + 8) & 1) == 0) {
              fparam_0 = func_005670D8(*(int *)(iVar9 + 0xc),(int)ALBW_AS_U32(param_5[1]),fparam_1);
            }
            else {
              fparam_0 = *(float *)(iVar9 + 0xc);
            }
          }
          fparam_0 = ALBW_AS_F32((int)fparam_0);
          sVar1 = *(short *)(iVar9 + 4);
          puVar6 = *(undefined4 **)(*local_28 + (int)ALBW_AS_U32(fparam_0) * 4);
          if (sVar1 == 0xd) {
            cVar7 = *(char *)(puVar6 + 6);
            uVar8 = *puVar6;
            bVar13 = cVar7 != '\f';
            if (bVar13) {
              cVar7 = '\0';
            }
            *(undefined4 *)(iVar12 + 0x140) = puVar6[1];
            *(undefined4 *)(iVar12 + 0x13c) = uVar8;
            if (!bVar13) {
              cVar7 = '\x01';
            }
            if (cVar7 == '\0') {
              bVar2 = *(byte *)(iVar12 + 2) & 0xfe;
            }
            else {
              bVar2 = *(byte *)(iVar12 + 2) | 1;
            }
          }
          else if (sVar1 == 0xf) {
            cVar7 = *(char *)(puVar6 + 6);
            uVar8 = puVar6[2];
            bVar13 = cVar7 != '\f';
            if (bVar13) {
              cVar7 = '\0';
            }
            *(undefined4 *)(iVar12 + 0x148) = puVar6[3];
            *(undefined4 *)(iVar12 + 0x144) = uVar8;
            if (!bVar13) {
              cVar7 = '\x01';
            }
            if (cVar7 == '\0') {
              bVar2 = *(byte *)(iVar12 + 2) & 0xfd;
            }
            else {
              bVar2 = *(byte *)(iVar12 + 2) | 2;
            }
          }
          else {
            if (sVar1 != 0x11) goto switchD_0068ffb4_caseD_14;
            cVar7 = *(char *)(puVar6 + 6);
            uVar8 = puVar6[4];
            bVar13 = cVar7 != '\f';
            if (bVar13) {
              cVar7 = '\0';
            }
            *(undefined4 *)(iVar12 + 0x150) = puVar6[5];
            *(undefined4 *)(iVar12 + 0x14c) = uVar8;
            if (!bVar13) {
              cVar7 = '\x01';
            }
            if (cVar7 == '\0') {
              bVar2 = *(byte *)(iVar12 + 2) & 0xfb;
            }
            else {
              bVar2 = *(byte *)(iVar12 + 2) | 4;
            }
          }
          *(byte *)(iVar12 + 2) = bVar2;
        }
      }
switchD_0068ffb4_caseD_14:
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(local_34 + 0x10));
  }
  return;
}

