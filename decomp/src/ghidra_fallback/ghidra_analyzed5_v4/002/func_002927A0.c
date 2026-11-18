#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001DD48C(int param_1,int param_2,undefined4 param_3);
extern int func_001E8A70(int param_1);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_0028FA44(int param_1);
extern int func_0028FE68(int *param_1);
extern int func_002908B8(int param_1);
extern int func_002D5320(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002FD11C(int *param_1,int param_2);
extern int func_003617F4(int param_1,int param_2,int param_3);
extern int func_00361910(int param_1);
extern int func_00362834(undefined1 *param_1);
extern int func_00377308(int param_1,int param_2);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_0052E5E4(int param_1,int param_2);
extern int func_0052E7D8(int param_1,int param_2);
extern int func_0052E8A0(int param_1);
extern int func_0052EE58(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053B3E8(int param_1,int *param_2,float *param_3);
extern int func_0053EDD8(int param_1);
extern int func_0053F2D4(int param_1,float *param_2,float *param_3,uint param_4,int param_5);
extern int func_0053F7CC(int param_1);
extern int func_0053FD30(int param_1,int param_2);
extern int func_00552FC0(uint param_1);
extern int func_005530A4(int param_1);
extern int func_005591A0(int param_1);
extern int func_00584A38(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int DAT_00292d20;
extern int *DAT_00292d24;
extern float DAT_00292d28;
extern int *DAT_00292d2c;
extern float DAT_00292d30;
extern float DAT_00293054;
extern float DAT_00293058;
extern float DAT_0029305c;
extern uint DAT_00293060;
extern int *DAT_00293064;
extern int *DAT_00293068;
extern float DAT_002933a4;
extern undefined4 DAT_002933a8;
extern int *DAT_002933ac;

// USA 002927A0 <- EU 002927C8 (Ghidra, non-matching)
// GLOBAL DAT_00292d20 int
// GLOBAL DAT_00292d24 int *
// GLOBAL DAT_00292d28 float
// GLOBAL DAT_00292d2c int *
// GLOBAL DAT_00292d30 float
// GLOBAL DAT_00293054 float
// GLOBAL DAT_00293058 float
// GLOBAL DAT_0029305c float
// GLOBAL DAT_00293060 uint
// GLOBAL DAT_00293064 int *
// GLOBAL DAT_00293068 int *
// GLOBAL DAT_002933a4 float
// GLOBAL DAT_002933a8 undefined4
// GLOBAL DAT_002933ac int *

/* WARNING: Variable defined which should be unmapped: objStack_48 */

void func_002927A0(int param_1,int param_2,float *param_3)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define iStack_30 (*(int *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  #define local_28 (*(float * *)(albw_frame + 0x28))
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  func_00362834((undefined1 *)(param_1 + 0x20));
  if (((local_28 != (float *)0x0) || (bVar4 = func_0052E8A0(*(int *)(param_1 + 0x10)), bVar4)) ||
     ((*(uint *)(DAT_00292d20 + *(short *)(param_1 + 0x42) * 0x10 + 4) & 0x1000) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x69b) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x6a7) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x6b3) = 0;
  }
  bVar4 = *(char *)(param_1 + 199) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x84);
  }
  if (((bVar4 && cVar1 != '\x0f') && (iVar7 = func_0052EE58(), iVar7 == 0)) &&
     ((*(char *)(param_1 + 0x84) != -1 &&
      (iVar7 = func_0052E5E4(*(int *)(param_1 + 0x10),(int)*(char *)(param_1 + 0x84)), iVar7 == 0)))
     ) {
    *(undefined1 *)(param_1 + 0x84) = 0xff;
  }
  if (local_28 == (float *)0x0) {
    if (*(char *)(param_1 + 0x80) == '\0') {
      if (*(char *)(param_1 + 0x7f) != '\0') {
        *(char *)(param_1 + 0x7f) = *(char *)(param_1 + 0x7f) + -1;
      }
    }
    else {
      *(char *)(param_1 + 0x80) = *(char *)(param_1 + 0x80) + -1;
    }
  }
  *(undefined1 *)(param_1 + 0xca) = 0;
  func_0028FA44(param_1);
  pfVar9 = local_28;
  if (*(short *)(*(int *)(param_1 + 0x48) + 4) != -2) goto LAB_002931a8;
  bVar4 = func_0052E8A0(*(int *)(param_1 + 0x10));
  piVar12 = DAT_00292d24;
  if ((bVar4) &&
     (sVar2 = *(short *)(param_1 + 0x42), (sVar2 != 0x28 && sVar2 != 0x58) && sVar2 != 0x5a)) {
    iVar7 = func_00584A38(*DAT_00292d24,*(int *)(param_1 + 0x68));
    if (iVar7 != 0) {
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    if (*(char *)(*(int *)(param_1 + 0x10) + 0x6c1) == '\0') {
      bVar4 = false;
      uVar8 = func_00552FC0(*(uint *)(param_1 + 0x1c));
      if (((uVar8 == 0) &&
          ((((sVar2 = *(short *)(param_1 + 0x42), sVar2 == 0 || (sVar2 == 0x3f || sVar2 == 0x29)) &&
            (*(int *)(param_1 + 0x44) - 3U < 4)) &&
           (bVar5 = func_0052E8A0(*(int *)(param_1 + 0x10)), bVar5)))) &&
         ((sVar2 = *(short *)(param_1 + 0x40), sVar2 == 0x11 || sVar2 == 0x12 ||
          (sVar2 == 0x13 || sVar2 == 0x14)))) {
        bVar4 = true;
      }
      uVar8 = func_00552FC0(*(uint *)(param_1 + 0x1c));
      if (((uVar8 != 0) || (*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) != 0x3f800000)) ||
         (bVar5 = func_005591A0(param_1 + 0x54), bVar5 || bVar4)) {
        if ((((*(int *)(*piVar12 + 0x44) != 0) &&
             (*(int *)(*piVar12 + 0x44) == *(int *)(param_1 + 0x68))) &&
            ((*(uint *)(DAT_00292d20 + *(short *)(param_1 + 0x42) * 0x10 + 4) & 0x800) != 0)) &&
           (iVar7 = func_002D55D0(*(int *)(param_1 + 0x48),0x98), iVar7 != 0)) goto LAB_002931a8;
      }
    }
  }
  fVar15 = DAT_00292d28;
  if ((pfVar9 == (float *)0x0) && (iVar7 = func_0053FD30(param_1,1), iVar7 != 0)) {
    objStack_48[0] = 0;
    bVar4 = func_0053B3E8(*(int *)(*DAT_00292d2c + 0x38),(int *)objStack_48,
                          (float *)(*(int *)(param_1 + 0x10) + 0x3d0));
    if (bVar4) {
      *(undefined1 *)(param_1 + 0x114) = 1;
      *(float *)(param_1 + 0x118) = fVar15;
      *(float *)(param_1 + 0x11c) = fVar15;
      *(float *)(param_1 + 0x120) = fVar15;
      *(float *)(param_1 + 0x124) = fVar15;
      *(float *)(param_1 + 0x128) = fVar15;
      *(float *)(param_1 + 300) = fVar15;
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined2 *)(param_1 + 0x134) = 0;
      *(short *)(param_1 + 0x136) = (short)objStack_48[0];
      *(undefined2 *)(param_1 + 0x138) = 0xffff;
      *(undefined2 *)(param_1 + 0x13a) = 0xffff;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      goto LAB_002931a8;
    }
  }
  if (((*(short *)(param_1 + 0x42) != 0x11) &&
      ((*(char *)(*(int *)(param_1 + 0x1c) + 0x4b8) != '\0' ||
       (iVar7 = func_005530A4(*(int *)(param_1 + 0x1c)), iVar7 != 0)))) &&
     (bVar4 = func_0052E8A0(*(int *)(param_1 + 0x10)), !bVar4)) {
    if (((*(int *)(*DAT_00292d24 + 0x44) == 0) ||
        (*(int *)(*DAT_00292d24 + 0x44) != *(int *)(param_1 + 0x74))) &&
       (iVar7 = (int)*(short *)(param_1 + 0x42), iVar7 != 0x7b)) {
      if (iVar7 < 0x7b) {
        if ((iVar7 != 0x28 && iVar7 != 0x29) && (iVar7 != 0x5c && iVar7 != 0x5d)) {
LAB_00292b64:
          if ((*(char *)(DAT_00292d20 + iVar7 * 0x10) != '\x15') &&
             (iVar7 = func_002D55D0(*(int *)(param_1 + 0x48),0x11), iVar7 != 0)) goto LAB_002931a8;
        }
      }
      else if ((iVar7 != 0x7c && iVar7 != 0x7d) && (iVar7 != 0xa6 && iVar7 != 0xa9))
      goto LAB_00292b64;
    }
  }
  if ((*(uint *)(DAT_00292d20 + *(short *)(param_1 + 0x42) * 0x10 + 4) & 0x100) == 0) {
    iVar7 = *(int *)(param_1 + 0x10);
    bVar4 = *(char *)(iVar7 + 0x6c6) == '\0';
    if (bVar4) {
      iVar7 = *(int *)(iVar7 + 0x5b0);
    }
    if (bVar4 && iVar7 == 0x3f800000) {
      uVar8 = func_00361910(param_2);
      bVar4 = uVar8 == 0;
      if (bVar4) {
        uVar8 = (uint)*(byte *)(param_1 + 0xb0);
      }
      if (bVar4 && uVar8 == 0) {
        sVar2 = *(short *)(param_1 + 0x42);
        if (((sVar2 == 0x3c || sVar2 == 0x3b) || (sVar2 == 0x3e || sVar2 == 7)) || (sVar2 == 0x46))
        {
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
        iVar7 = func_003617F4(param_2,1,uVar8 ^ 1);
        if (((((iVar7 != 0) && (iVar7 = *(int *)(param_1 + 0x10), *(char *)(iVar7 + 0x598) != '\0'))
             && (pfVar9 == (float *)0x0)) &&
            (((pcVar13 = *(char **)(param_2 + 0x350), pcVar13 == (char *)0x0 ||
              (pcVar13[2] != '\x03' && pcVar13[2] != '\x04')) ||
             (*(short *)(param_1 + 0x42) != 0x17)))) &&
           ((*(char *)(param_1 + 0x7f) == '\0' && (pcVar13 != (char *)0x0)))) {
          iVar11 = (int)pcVar13[2];
          if (iVar11 == -1) {
            sVar2 = *(short *)(param_1 + 0x42);
            if ((sVar2 != 0x3b && sVar2 != 0x3c) && sVar2 != 0x3e) {
              objStack_48[0] = *(uint *)(param_2 + 0x354);
              local_40 = *(undefined4 *)(param_2 + 0x35c);
              pfVar9 = (float *)(*(int *)(param_1 + 0x10) + 0x3d0);
              local_44 = fVar15;
              func_00115C54(pfVar9,pfVar9,(float *)objStack_48);
            }
          }
          else {
            fVar14 = DAT_00292d30;
            switch(iVar11) {
            default:
              fVar14 = DAT_0029305c;
              break;
            case 1:
              fVar14 = DAT_00293054;
              break;
            case 2:
            case 5:
            case 7:
              break;
            case 8:
              fVar14 = DAT_00293058;
            }
            iVar7 = func_004D80EC((float *)(iVar7 + 0x3d0),(float *)(param_2 + 0x340),
                                  *(int *)(iVar7 + 1000));
            bVar4 = false;
            if (*(float *)(param_2 + 0x360) == fVar15) {
              bVar4 = *(float *)(param_2 + 0x364) == fVar15;
            }
            bVar5 = false;
            if (bVar4) {
              bVar5 = *(float *)(param_2 + 0x368) == fVar15;
            }
            if (!bVar5) {
              iVar7 = func_0068C690((float *)(param_2 + 0x360));
              iVar7 = iVar7 + -0x80000000;
            }
            local_44 = ALBW_AS_F32((iVar7 - *(int *)(*(int *)(param_1 + 0x10) + 1000)));
            uVar8 = func_0058E2B8((int *)&local_44);
            bVar4 = DAT_00293060 < uVar8;
            if (bVar4) {
              iVar7 = iVar7 + -0x80000000;
            }
            objStack_48[0] = (uint)pcVar13;
            iVar10 = func_0053F2D4(param_1,(float *)(param_2 + 0x360),(float *)(param_2 + 0x340),
                                   *(uint *)(param_2 + 0x370),(int)pcVar13);
            if ((iVar10 != 0) && ((*(uint *)(param_2 + 0x370) & 8) == 0)) {
              iVar10 = 0;
            }
            objStack_48[0] =
                 func_0052E7D8(*(int *)(param_1 + 0x10),-(uint)*(ushort *)(pcVar13 + 0x10));
            uVar8 = 0xb;
            local_40 = 0;
            switch(iVar11) {
            case 0:
              if (bVar4) {
                uVar8 = 0xc;
              }
              else {
                uVar8 = 0xb;
              }
              break;
            case 1:
              if (bVar4) {
                uVar8 = 0xe;
              }
              else {
                uVar8 = 0xd;
              }
              break;
            case 2:
              if (bVar4) {
                uVar8 = 0x10;
              }
              else {
                uVar8 = 0xf;
              }
              break;
            case 3:
              if (bVar4) {
                iVar7 = iVar7 + -0x80000000;
              }
              uVar8 = 0x17;
              local_40 = 1;
              break;
            case 4:
              if (bVar4) {
                iVar7 = iVar7 + -0x80000000;
              }
              uVar8 = 0x17;
              break;
            case 5:
              if ((*(short *)(param_1 + 0x42) == 0x16) ||
                 ((*(short *)(param_1 + 0x42) == 0x21 && (objStack_48[0] == 0)))) goto LAB_00293184;
              uVar8 = 0x16;
              break;
            case 6:
              uVar8 = 0x15;
              break;
            case 7:
            case 8:
              if (bVar4) {
                uVar8 = 0x20;
              }
              else {
                uVar8 = 0x1f;
              }
              break;
            case 9:
              if (*(short *)(param_1 + 0x42) == 0x21) goto LAB_00293184;
              uVar8 = 0x21;
            }
            if (pcVar13[3] == '\x01') {
              iVar11 = func_0052FBA0(*DAT_00293064 + 0x3dbbc,*(uint *)(param_2 + 0x34c));
              if (iVar11 != 0) {
                if ((*(int *)(*(int *)(param_1 + 0x10) + 0x2cc) != *(int *)(iVar11 + 0x50)) &&
                   (((*pcVar13 == '\x03' && (pcVar13[1] == '\x03')) || (pcVar13[1] == '\x01')))) {
                  uVar8 = 0x18;
                }
                cVar1 = *(char *)(*DAT_00293068 + 0x18);
                bVar5 = cVar1 == '\a' || cVar1 == '%';
                if (cVar1 == '\a' || cVar1 == '%') {
                  bVar5 = pcVar13[1] == '\0';
                }
                if (bVar5) {
                  if (*pcVar13 == '\x02') {
                    uVar8 = 0x18;
                  }
                  goto LAB_00292f9c;
                }
              }
              if (pcVar13[1] == '\r') {
                if (bVar4) {
                  uVar8 = 0x20;
                }
                else {
                  uVar8 = 0x1f;
                }
              }
            }
LAB_00292f9c:
            if (((pcVar13[3] == '\x02') &&
                (iVar11 = func_0052FBA0(*DAT_00293064 + 0x3dbbc,*(uint *)(param_2 + 0x34c)),
                iVar11 != 0)) &&
               ((*(int *)(iVar11 + 0x50) != 0 && ((*pcVar13 == '\x03' && (pcVar13[1] == '\x03'))))))
            {
              if (*(short *)(param_1 + 0x42) == 0x16) goto LAB_00293184;
              uVar8 = 0x16;
            }
            else {
              cVar1 = pcVar13[1];
              if (cVar1 == '\f') {
                uVar8 = 0x19;
              }
              else if (cVar1 == '\v') {
                if (*(short *)(param_1 + 0x42) == 0x3c || *(short *)(param_1 + 0x42) == 0x3e)
                goto LAB_00293184;
                uVar8 = 0x1a;
              }
              else if (cVar1 == '\n') {
                uVar8 = 0x1c;
              }
              else if (cVar1 == '\t' && iVar10 == 0) {
                fVar14 = fVar15;
              }
            }
            if (((*(uint *)(*(int *)(param_1 + 0x1c) + 0x328) & 0x80) != 0) &&
               (*(char *)(*(int *)(param_1 + 0x1c) + 0x33c) == '\f')) {
              if (bVar4) {
                uVar8 = 0x1e;
              }
              fVar14 = fVar14 * DAT_002933a4;
              if (!bVar4) {
                uVar8 = 0x1d;
              }
            }
            if (iVar10 != 0) {
              if ((*(short *)(param_1 + 0x42) == 0x27) && (*(uint *)(param_1 + 0x44) < 9))
              goto LAB_00293184;
              uVar8 = 0x27;
            }
            (**(code **)(**(int **)(param_1 + 0x48) + 0x20))(*(int **)(param_1 + 0x48));
            if ((((iVar10 == 0) &&
                 (iVar11 = func_001DD48C(*(int *)(param_1 + 0x10),objStack_48[0],1), iVar11 != 0))
                && (bVar4 = func_0052E8A0(*(int *)(param_1 + 0x10)), bVar4)) && (uVar8 == 0x16))
            goto LAB_002931a8;
            piVar12 = (int *)func_002D55D0(*(int *)(param_1 + 0x48),uVar8);
            if (piVar12 != (int *)0x0) {
              *piVar12 = iVar7;
              uVar3 = DAT_002933a8;
              if (iVar10 != 0) {
                fVar14 = *(float *)(pcVar13 + 0x14) * fVar14;
              }
              piVar12[1] = (int)ALBW_AS_U32(fVar14);
              *(char *)(piVar12 + 2) = (char)iVar10;
              *(char *)((int)piVar12 + 9) = (char)local_40;
              *(bool *)((int)piVar12 + 10) = *(short *)(pcVar13 + 0x10) == 0;
              piVar12[3] = *(int *)(param_2 + 0x34c);
              *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xfc) = uVar3;
              goto LAB_002931a8;
            }
          }
        }
      }
    }
  }
LAB_00293184:
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x14))
            (*(int **)(param_1 + 0x48),(int)*(short *)(param_1 + 0x42),local_28);
LAB_002931a8:
  iVar7 = func_002908B8(param_1);
  if (iVar7 == 0) {
    uVar6 = *(ushort *)(DAT_00292d20 + *(short *)(param_1 + 0x42) * 0x10 + 2);
    bVar4 = uVar6 == 0;
    if (bVar4) {
      uVar6 = (ushort)*(byte *)(param_1 + 0xc5);
    }
    if ((bVar4 && uVar6 == 0) && (*(char *)(param_1 + 199) != '\0')) {
      iVar7 = *(int *)(param_1 + 0x18);
      uVar8 = func_0053F7CC(param_1);
      objStack_48[0] = 6;
      func_0028D580((uint *)(iVar7 + 0x3c),uVar8,1,1,6);
      objStack_48[0] = 6;
      func_0028D580((uint *)(iVar7 + 0x5c),uVar8,1,1,6);
    }
  }
  if ((*(short *)(*(int *)(param_1 + 0x18) + 0x52) == 0x87) &&
     (iVar7 = func_0053EDD8(*(int *)(param_1 + 0x18) + 0x3c), iVar7 != 0)) {
    *(undefined1 *)(param_1 + 0xc5) = 0;
  }
  piVar12 = *(int **)(param_1 + 0x70);
  if (((((piVar12 != (int *)0x0) && (*(int **)(*DAT_00292d24 + 0x44) != (int *)0x0)) &&
       (*(int **)(*DAT_00292d24 + 0x44) == piVar12)) &&
      ((char)piVar12[0x1f] == '\x02' || (char)piVar12[0x1f] == '\x04')) &&
     (((uVar8 = func_00552FC0(*(uint *)(param_1 + 0x1c)), uVar8 != 0 ||
       (*(char *)(*(int *)(param_1 + 0x1c) + 0x4b8) != '\0')) ||
      ((*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) != 0x3f800000 ||
       (*(short *)(param_1 + 0x42) == 0x11)))))) {
    func_002FD11C(piVar12,0);
  }
  bVar4 = *(char *)(param_1 + 0x96) != '\0';
  uVar8 = 0;
  if (bVar4) {
    uVar8 = *(uint *)(param_1 + 0x90);
  }
  if ((bVar4 && uVar8 != 0) &&
     (*(uint *)(param_1 + 0x90) = uVar8 + 1, *(byte *)(param_1 + 0x95) < uVar8)) {
    iVar7 = *(int *)(*DAT_002933ac + 0x18);
    *(uint *)(iVar7 + 0x188) = *(uint *)(iVar7 + 0x188) & 0xfffffffe;
    func_001E8A70(iVar7);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  func_0028FE68((int *)(param_1 + 0x98));
  func_00377308(param_1 + 0x54,(int)local_28);
  func_002D5320(*(int *)(param_1 + 0x48));
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_1 + 0xc1);
  *(undefined1 *)(param_1 + 0xc1) = 0;
  if (*(char *)(param_1 + 0xc4) == '\0') {
    *(bool *)(param_1 + 0xc4) =
         *(char *)(*(int *)(param_1 + 0x10) + 0x6bd) == '\0' &&
         (*(char *)(*DAT_00293068 + 0x18) != '\a' && *(char *)(*DAT_00293068 + 0x18) != '%');
  }
  return;
}

