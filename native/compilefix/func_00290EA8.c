/* compilefix: USA 00290EA8 (EU 00290ED0): three lost SafeString stack objects restored (BOOT_LOG 153). */
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00165F3C(int *param_1,int param_2);
extern int func_0029218C(int param_1,int param_2,int param_3,undefined1 param_4,undefined4 param_5);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002FD59C(int *param_1);
extern int func_002FD5E4(int *param_1,int param_2,int param_3);
extern int func_002FD784(int *param_1,float *param_2,float *param_3,int param_4);
extern int func_002FDB40(int *param_1,int param_2);
extern int func_004CDDEC(int param_1,int *param_2,int param_3);
extern int func_0053FD30(int param_1,int param_2);
extern int func_005416A0(int param_1);
extern int func_00581C5C(int param_1);
extern int func_005821B4(int param_1,int param_2);
extern int func_00584A38(int param_1,int param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0068C690(float *param_1);
extern int *DAT_00291308;
extern undefined4 DAT_0029130c;
extern undefined4 DAT_00291320;
extern int *DAT_00291324;
extern int *DAT_00291328;
extern int *DAT_0029132c;
extern undefined4 DAT_002914c4;

// USA 00290EA8 <- EU 00290ED0 (Ghidra, non-matching)
// GLOBAL DAT_00291308 int *
// GLOBAL DAT_0029130c undefined4
// GLOBAL DAT_00291320 undefined4
// GLOBAL DAT_00291324 int *
// GLOBAL DAT_00291328 int *
// GLOBAL DAT_0029132c int *
// GLOBAL DAT_002914c4 undefined4

void func_00290EA8(int param_1,undefined4 param_2)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x40 .. entry_sp + 0x0 */
#define stack0xffffffc8 (*(undefined4 *)(albw_frame + 0x8))
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ushort uVar7;
  uint extraout_r1;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar9 = *(int *)(param_1 + 0x48);
  iVar4 = param_1;
  if (iVar9 != 0) {
    iVar4 = (int)*(short *)(iVar9 + 4);
  }
  if (iVar9 != 0 && iVar4 != -2) {
    return;
  }
  iVar4 = *DAT_00291308;
  piVar5 = *(int **)(param_1 + 0x74);
  if ((*(int **)(iVar4 + 0x44) != (int *)0x0) && (*(int **)(iVar4 + 0x44) == piVar5)) {
    return;
  }
  if (*(char *)(param_1 + 0xbc) != '\0') {
    cVar3 = func_004CDDEC(iVar4,*(int **)(param_1 + 0x70),0);
    if (cVar3 == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0xbc) = 0;
    return;
  }
  bVar1 = true;
  if (*(int *)(param_1 + 0xd4) != 0) {
    *(undefined1 *)(param_1 + 0xbe) = 0;
  }
  if (*(char *)(param_1 + 0xbe) != '\0') {
    if (((char)piVar5[0x9d] == '\0') && (*(char *)(param_1 + 0xbf) != '\0')) {
      *(undefined1 *)((int)piVar5 + 0x275) = 0;
      iVar4 = func_00165F3C(piVar5,0);
      if (iVar4 != 0) {
        *(undefined1 *)(param_1 + 0xbe) = 0;
        *(undefined1 *)(param_1 + 0xbf) = 0;
      }
      return;
    }
    *(undefined1 *)((int)piVar5 + 0x275) = 0;
    iVar4 = func_00165F3C(piVar5,0);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0xbe) = 0;
      *(undefined1 *)(param_1 + 0xbf) = 1;
    }
    return;
  }
  if (*(char *)(param_1 + 0xbd) != '\0') {
    if (*(int *)(iVar4 + 0x44) != 0) {
      return;
    }
    iVar4 = func_00584A38(iVar4,*(int *)(param_1 + 0x68));
    if (iVar4 == 0) {
      return;
    }
    { extern char data_006F5988[]; *(int *)(albw_frame + 0x8) = (int)(intptr_t)data_006F5988;
      *(const char **)(albw_frame + 0xc) = "GameOver_Ver2"; }   /* EU 291000: lost stores (BOOT_LOG 153) */
    iVar4 = (**(code **)(**(int **)(param_1 + 0x68) + 0x4c))
                      (*(int **)(param_1 + 0x68),&stack0xffffffc8,0);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0xbd) = 0;
    }
    return;
  }
  uVar11 = DAT_00291320;
  if ((*(char *)(param_1 + 0xd8) != '\0') && (iVar4 = func_002D55D0(iVar9,0x5f), iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x110);
    cVar3 = *(char *)(param_1 + 0xd9);
    iVar4 = func_0053FD30(param_1,0);
    if (iVar4 != 0) {
      func_002FD784(*(int **)(param_1 + 0x70),(float *)(param_1 + 0xdc),(float *)(param_1 + 0x104),
                    (int)cVar3);
    }
    *(undefined1 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xd9) = 0;
    *(undefined1 *)(param_1 + 0xdb) = 0;
    *(undefined1 *)(param_1 + 0xda) = 0;
    *(undefined4 *)(param_1 + 0x110) = uVar11;
    return;
  }
  piVar2 = DAT_00291328;
  piVar5 = DAT_00291324;
  if (*(char *)(param_1 + 0x114) != '\0') {
    iVar4 = func_00581C5C(*DAT_00291328);
    iVar9 = func_005821B4(*piVar2,(int)*(short *)(param_1 + 0x136));
    uVar8 = extraout_r1;
    if (0 < *(int *)(iVar4 + 0x304)) {
      uVar8 = *(uint *)(iVar4 + 0x304);
    }
    uVar6 = 0;
    if (0 < *(int *)(iVar4 + 0x304)) {
      do {
        if (uVar6 < uVar8) {
          iVar10 = *(int *)(*(int *)(iVar4 + 0x30c) + uVar6 * 4);
        }
        else {
          iVar10 = 0;
        }
        if (*(short *)(iVar10 + 0x70) == *(short *)(iVar9 + 0x70)) goto LAB_00291140;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar8);
    }
    bVar1 = false;
LAB_00291140:
    if (*(short *)(param_1 + 0x42) != 8 || bVar1) {
      iVar4 = 0;
      if (((char)*(undefined4 *)(*piVar5 + 0x18) == '\v' && !bVar1) &&
         (*(int *)(iVar9 + 0x3c0) == 3)) {
        iVar4 = 1;
      }
      iVar9 = func_0053FD30(param_1,1);
      if (iVar9 != 0) {
        if (*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) == 0x3f800000) {
          func_002FD5E4(*(int **)(param_1 + 0x70),param_1 + 0x118,iVar4);
        }
        else {
          func_002FDB40(*(int **)(param_1 + 0x70),param_1 + 0x118);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x114) = 0;
    *(undefined1 *)(param_1 + 0x115) = 0;
    *(undefined1 *)(param_1 + 0x117) = 0;
    *(undefined1 *)(param_1 + 0x116) = 0;
    *(undefined4 *)(param_1 + 0x14c) = uVar11;
    return;
  }
  iVar4 = *(int *)(param_1 + 0xd4);
  if (iVar4 != 0) {
    if ((*(char *)(*DAT_00291324 + 0x18) == (char)*(undefined2 *)(iVar4 + 0x30)) ||
       ((*(ushort *)(iVar4 + 0x2e) & 0xff) != 5)) {
      uVar7 = *(ushort *)(iVar4 + 0x2e) & 0xff;
      if (uVar7 == 2) {
        if (*(short *)(param_1 + 0x42) != 99) {
          { extern char data_006F5988[]; *(int *)(albw_frame + 0x8) = (int)(intptr_t)data_006F5988;
            *(const char **)(albw_frame + 0xc) = "SE_S_STAIR_UP"; }   /* EU 2912D0 / 29134C: lost stores (BOOT_LOG 153) */
          func_00587F74(*DAT_0029132c,(int *)&stack0xffffffc8,0);
          iVar4 = func_002D55D0(*(int *)(param_1 + 0x48),99);
joined_r0x00291300:
          if (iVar4 != 0) {
            *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x2cc);
            *(undefined4 *)(param_1 + 0xd4) = 0;
            return;
          }
        }
      }
      else if (uVar7 == 3) {
        if (*(short *)(param_1 + 0x42) != 100) {
          { extern char data_006F5988[]; *(int *)(albw_frame + 0x8) = (int)(intptr_t)data_006F5988;
            *(const char **)(albw_frame + 0xc) = "SE_S_STAIR_DOWN"; }   /* EU 2912D0 / 29134C: lost stores (BOOT_LOG 153) */
          func_00587F74(*DAT_0029132c,(int *)&stack0xffffffc8,0);
          iVar4 = func_002D55D0(*(int *)(param_1 + 0x48),100);
          goto joined_r0x00291300;
        }
      }
      else {
        iVar4 = func_005416A0(iVar4);
        if (iVar4 == 1) {
          uVar7 = *(ushort *)(*(int *)(param_1 + 0xd4) + 0x2e) & 0xff;
          if (uVar7 == 1) {
            uVar8 = 0x5d;
          }
          else if (uVar7 == 3) {
            uVar8 = 100;
          }
          else if (uVar7 == 4) {
            uVar8 = 0x5e;
          }
          else {
            uVar8 = 0x5c;
          }
          iVar4 = func_002D55D0(*(int *)(param_1 + 0x48),uVar8);
          if (iVar4 != 0) {
            *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x2cc);
            *(char *)(param_1 + 0x7e) = (char)*(undefined2 *)(*(int *)(param_1 + 0xd4) + 0x2e);
            *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(int *)(param_1 + 0xd4) + 1000);
            *(undefined4 *)(param_1 + 0x8c) = uVar11;
            goto LAB_00291450;
          }
        }
        else if ((iVar4 == 2) && (iVar4 = func_002D55D0(*(int *)(param_1 + 0x48),0x5f), iVar4 != 0))
        {
          func_00115C70((float *)&stack0xffffffc8,(float *)(*(int *)(param_1 + 0xd4) + 0x3d0),
                        (float *)(*(int *)(param_1 + 0x10) + 0x3d0));
          iVar4 = func_0068C690((float *)&stack0xffffffc8);
          uVar11 = DAT_002914c4;
          *(int *)(param_1 + 0x88) = iVar4;
          *(undefined4 *)(param_1 + 0x8c) = uVar11;
          goto LAB_00291450;
        }
      }
    }
    else if (((*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) != 0x3f800000) &&
             (iVar4 = func_0053FD30(param_1,0), iVar4 != 0)) &&
            (iVar4 = func_002D55D0(*(int *)(param_1 + 0x48),0x62), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0xd4);
      func_002FD59C(*(int **)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
  }
  if (*(byte *)(param_1 + 0x150) != 0) {
    iVar4 = func_0029218C(param_1,(uint)*(byte *)(param_1 + 0x150),0,0,0);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x150) = 0;
    }
    return;
  }
  piVar5 = *(int **)(param_1 + 0x48);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x18))(piVar5,param_2);
  }
LAB_00291450:
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return;
}

