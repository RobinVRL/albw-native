/* USA 0069021C (EU 006901F4): converted Ghidra text (build/decomp, round-3 stage 2) with one fix.
 * Animation channel evaluation: 005670A0 (curve value at a frame) returns a float in s0, which the
 * ARM stores after every call (EU 006902BC / 0069039C `vstr s0, [r0]`, 0069045C `vmov s1, s0`);
 * Ghidra typed it void and kept s0 as fparam_0 / fparam_1, so the evaluated values were lost (the
 * variables kept stale values) and on i386 every call left its float on the x87 stack (one per
 * file-select frame: boot stop 95c). The 4 calls now assign the variable Ghidra reads afterwards.
 * CLASS float return typed void (s0 read by the caller). Confidence: high. */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"

extern float func_003FD364(int param_1,float *param_2,uint param_3,undefined2 param_4,float fparam_0);
extern float func_005670A0(float *param_1,float fparam_0);

// USA 0069021C <- EU 006901F4 (Ghidra, non-matching)

void func_0069021C(int param_1,int *param_2,int *param_3,int *param_4,float fparam_0,float fparam_1)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  float *pfVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  float fparam_0_00;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((float *)(albw_frame + 0x8))
  #define uStack_3c (*(undefined8 *)(albw_frame + 0x24))
  #define local_34 (*(int *)(albw_frame + 0x2c))
  #define local_30 (*(int * *)(albw_frame + 0x30))
  #define piStack_2c (*(int * *)(albw_frame + 0x34))
  #define local_28 (*(int * *)(albw_frame + 0x38))
  uVar10 = 0;
  uStack_3c = CONCAT44(fparam_1,fparam_0);
  uVar13 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  local_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  local_28 = param_4;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      uVar3 = (uint)*(ushort *)(*param_3 + uVar10 * 2);
      if (uVar3 != 0xffff) {
        iVar11 = *local_30 + uVar3 * 0x154;
        iVar9 = *(int *)(*(int *)(local_34 + 0xc) + uVar10 * 4);
        sVar1 = *(short *)(iVar9 + 6);
        fparam_0_00 = ALBW_AS_F32(uVar13);
        if (sVar1 == 0) {
          fparam_0 = fparam_0_00;
          if ((*(uint *)(iVar9 + 8) & 0x100) == 0) {
            if ((*(uint *)(iVar9 + 8) & 1) == 0) {
              fparam_0 = func_005670A0(*(float **)(iVar9 + 0xc),fparam_0_00);
              fparam_1 = fparam_0;
            }
            else {
              fparam_1 = *(float *)(iVar9 + 0xc);
            }
          }
          sVar1 = *(short *)(iVar9 + 4);
          if (sVar1 == 0x14) {
            *(float *)(iVar11 + 0xf4) = fparam_1;
          }
          else {
            if (sVar1 == 0x17) {
              iVar11 = iVar11 + 0x6c;
            }
            else {
              if (sVar1 != 0x1a) goto switchD_006903bc_caseD_14;
              iVar11 = iVar11 + 0x84;
            }
            *(float *)(iVar11 + 0xa0) = fparam_1;
          }
        }
        else if (sVar1 == 2) {
          switch(*(undefined2 *)(iVar9 + 4)) {
          case 0x13:
            pfVar7 = (float *)(iVar11 + 0xec);
            break;
          default:
            pfVar7 = (float *)0x0;
            break;
          case 0x15:
            pfVar7 = (float *)(iVar11 + 0xf8);
            break;
          case 0x16:
            pfVar7 = (float *)(iVar11 + 0x104);
            break;
          case 0x18:
            pfVar7 = (float *)(iVar11 + 0x110);
            break;
          case 0x19:
            pfVar7 = (float *)(iVar11 + 0x11c);
            break;
          case 0x1b:
            pfVar7 = (float *)(iVar11 + 0x128);
          }
          local_58[0] = *pfVar7;
          local_58[1] = pfVar7[1];
          uVar3 = 0;
          do {
            if ((*(uint *)(iVar9 + 8) & 0x100 << (uVar3 & 0xff)) == 0) {
              iVar4 = iVar9 + uVar3 * 4;
              if ((*(uint *)(iVar9 + 8) & 1 << (uVar3 & 0xff)) == 0) {
                fparam_0 = func_005670A0(*(float **)(iVar4 + 0xc),ALBW_AS_F32(uVar13));
              }
              else {
                fparam_0 = *(float *)(iVar4 + 0xc);
              }
              local_58[uVar3] = fparam_0;
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 2);
          switch(*(undefined2 *)(iVar9 + 4)) {
          case 0x13:
            pfVar7 = (float *)(iVar11 + 0xec);
            break;
          default:
            goto switchD_006903bc_caseD_14;
          case 0x15:
            pfVar7 = (float *)(iVar11 + 0xf8);
            break;
          case 0x16:
            pfVar7 = (float *)(iVar11 + 0x104);
            break;
          case 0x18:
            pfVar7 = (float *)(iVar11 + 0x110);
            break;
          case 0x19:
            pfVar7 = (float *)(iVar11 + 0x11c);
            break;
          case 0x1b:
            pfVar7 = (float *)(iVar11 + 0x128);
          }
          *pfVar7 = local_58[0];
          pfVar7[1] = local_58[1];
        }
        else if (sVar1 == 5) {
          uVar3 = 0;
          do {
            if ((*(uint *)(iVar9 + 8) & 0x100 << (uVar3 & 0xff)) == 0) {
              iVar4 = iVar9 + uVar3 * 4;
              if ((*(uint *)(iVar9 + 8) & 1 << (uVar3 & 0xff)) == 0) {
                fparam_0 = func_005670A0(*(float **)(iVar4 + 0xc),ALBW_AS_F32(uVar13));
              }
              else {
                fparam_0 = *(float *)(iVar4 + 0xc);
              }
              local_58[uVar3] = fparam_0;
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 4);
          fparam_0 = func_003FD364(iVar11,local_58,~(*(uint *)(iVar9 + 8) & 0xf00) << 8,
                                   *(undefined2 *)(iVar9 + 4),fparam_0);
        }
        else if (sVar1 == 6) {
          if ((*(uint *)(iVar9 + 8) & 0x100) == 0) {
            if ((*(uint *)(iVar9 + 8) & 1) == 0) {
              fparam_1 = func_005670A0(*(float **)(iVar9 + 0xc),fparam_0_00);
            }
            else {
              fparam_1 = *(float *)(iVar9 + 0xc);
            }
          }
          fparam_0 = ALBW_AS_F32((int)fparam_1);
          sVar1 = *(short *)(iVar9 + 4);
          puVar5 = *(undefined4 **)(*local_28 + (int)ALBW_AS_U32(fparam_0) * 4);
          if (sVar1 == 0xd) {
            cVar6 = *(char *)(puVar5 + 6);
            uVar8 = *puVar5;
            bVar12 = cVar6 != '\f';
            if (bVar12) {
              cVar6 = '\0';
            }
            *(undefined4 *)(iVar11 + 0x140) = puVar5[1];
            *(undefined4 *)(iVar11 + 0x13c) = uVar8;
            if (!bVar12) {
              cVar6 = '\x01';
            }
            if (cVar6 == '\0') {
              bVar2 = *(byte *)(iVar11 + 2) & 0xfe;
            }
            else {
              bVar2 = *(byte *)(iVar11 + 2) | 1;
            }
          }
          else if (sVar1 == 0xf) {
            cVar6 = *(char *)(puVar5 + 6);
            uVar8 = puVar5[2];
            bVar12 = cVar6 != '\f';
            if (bVar12) {
              cVar6 = '\0';
            }
            *(undefined4 *)(iVar11 + 0x148) = puVar5[3];
            *(undefined4 *)(iVar11 + 0x144) = uVar8;
            if (!bVar12) {
              cVar6 = '\x01';
            }
            if (cVar6 == '\0') {
              bVar2 = *(byte *)(iVar11 + 2) & 0xfd;
            }
            else {
              bVar2 = *(byte *)(iVar11 + 2) | 2;
            }
          }
          else {
            if (sVar1 != 0x11) goto switchD_006903bc_caseD_14;
            cVar6 = *(char *)(puVar5 + 6);
            uVar8 = puVar5[4];
            bVar12 = cVar6 != '\f';
            if (bVar12) {
              cVar6 = '\0';
            }
            *(undefined4 *)(iVar11 + 0x150) = puVar5[5];
            *(undefined4 *)(iVar11 + 0x14c) = uVar8;
            if (!bVar12) {
              cVar6 = '\x01';
            }
            if (cVar6 == '\0') {
              bVar2 = *(byte *)(iVar11 + 2) & 0xfb;
            }
            else {
              bVar2 = *(byte *)(iVar11 + 2) | 4;
            }
          }
          *(byte *)(iVar11 + 2) = bVar2;
        }
      }
switchD_006903bc_caseD_14:
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(local_34 + 0x10));
  }
  return;
}

