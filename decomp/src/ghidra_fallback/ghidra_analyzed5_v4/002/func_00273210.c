#include "ghidra_types.h"

extern int func_0016B5B8(int param_1,int param_2,float fparam_0);
extern int func_00271AB8(int param_1);
extern int func_00271D94(int param_1);
extern int func_00272C20(int param_1);
extern int func_0027355C(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004ACC38(int param_1);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int *DAT_00273578;
extern int DAT_0027357c;
extern int *DAT_00273580;

// USA 00273210 <- EU 00273238 (Ghidra, non-matching)
// GLOBAL DAT_00273578 int *
// GLOBAL DAT_0027357c int
// GLOBAL DAT_00273580 int *

undefined4 func_00273210(int param_1,short *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  short *extraout_r1;
  short *psVar6;
  short *extraout_r1_00;
  short *psVar7;
  int iVar8;
  uint in_r3;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  bool bVar12;
  uint in_fpscr;
  float fparam_0;
  float in_s1;
  float in_s2;
  
  bVar1 = false;
  iVar3 = *DAT_00273578;
  psVar6 = param_2;
  if (iVar3 != 0) {
    bVar1 = func_005822A0(iVar3,1,4);
    psVar6 = extraout_r1;
  }
  piVar11 = (int *)(param_1 + 0x7cb8);
  if (*piVar11 == 0) {
LAB_00273308:
    psVar4 = (short *)0x0;
    while( true ) {
      bVar2 = bVar1 == false;
      if (!bVar2) {
        psVar6 = *(short **)(param_1 + 0x1c);
      }
      if (bVar2 || (int)psVar6 <= (int)psVar4) break;
      if (bVar2 || psVar6 <= psVar4) {
        iVar8 = *(int *)(param_1 + 0x24);
      }
      else {
        in_r3 = (int)psVar4 * 0x11;
        iVar8 = *(int *)(param_1 + 0x24) + (int)psVar4 * 0x620;
      }
      if (-1 < *(char *)(iVar8 + 0x578)) {
        if (psVar4 < psVar6) {
          iVar8 = *(int *)(param_1 + 0x24) + (int)psVar4 * 0x620;
        }
        else {
          iVar8 = *(int *)(param_1 + 0x24);
        }
        bVar2 = func_005822A0(iVar3,(uint)*(ushort *)(iVar8 + 0x576),(uint)*(byte *)(iVar8 + 0x578))
        ;
        psVar6 = extraout_r1_00;
        if (*(char *)(iVar8 + 0x581) == '\x03') {
          psVar7 = *(short **)(iVar8 + 0x5d4);
          psVar6 = psVar7;
          if (0 < (int)psVar7) {
            psVar6 = *(short **)(iVar8 + 0x5dc);
            in_r3 = *(uint *)(iVar8 + 0x5d4);
          }
          uVar9 = 0;
          if (0 < (int)psVar7) {
            do {
              psVar7 = psVar6;
              if (uVar9 < in_r3) {
                psVar7 = psVar6 + uVar9;
              }
              if (*psVar7 == *(short *)(param_1 + 0x7cb0)) goto LAB_002733d4;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)in_r3);
          }
        }
        else {
LAB_002733d4:
          uVar9 = (uint)*(byte *)(iVar8 + 0x584);
          bVar12 = uVar9 == 0;
          if (bVar12) {
            uVar9 = (uint)*(char *)(iVar8 + 0x579);
          }
          if (bVar12 && uVar9 == bVar2) {
            *(undefined1 *)(iVar8 + 0x584) = 1;
            iVar8 = *piVar11;
            psVar6 = (short *)(int)(short)psVar4;
            if (iVar8 < *(int *)(param_1 + 0x7cbc)) {
              in_r3 = iVar8 * 2;
              *piVar11 = iVar8 + 1;
              *(short *)(*(int *)(param_1 + 0x7cc0) + in_r3) = (short)psVar4;
            }
          }
        }
      }
      psVar4 = (short *)((int)psVar4 + 1);
    }
    if (*piVar11 == 0) {
      uVar9 = 0xffffffff;
      goto LAB_0027344c;
    }
  }
  else {
    psVar6 = (short *)0xfffffffe;
    psVar4 = (short *)(int)*(short *)(*(int *)(param_1 + 0x7cc0) + *piVar11 * 2 + -2);
    if ((int)psVar4 < 0) goto LAB_00273308;
    if (bVar1 != false) {
      psVar6 = *(short **)(param_1 + 0x1c);
      if (psVar4 < psVar6) {
        psVar6 = *(short **)(param_1 + 0x24);
        psVar4 = psVar6 + (int)psVar4 * 0x310;
      }
      else {
        psVar4 = *(short **)(param_1 + 0x24);
      }
      if (-1 < (char)psVar4[700]) {
        bVar2 = func_005822A0(iVar3,(uint)(ushort)psVar4[699],(uint)*(byte *)(psVar4 + 700));
        psVar6 = (short *)(int)*(char *)((int)psVar4 + 0x579);
        if (psVar6 != (short *)(uint)bVar2) {
          *(undefined1 *)(psVar4 + 0x2c2) = 0;
          if (0 < *piVar11) {
            *piVar11 = *piVar11 + -1;
          }
        }
      }
      goto LAB_00273308;
    }
  }
  uVar9 = (uint)*(short *)(*(int *)(param_1 + 0x7cc0) + *piVar11 * 2 + -2);
LAB_0027344c:
  puVar10 = (uint *)(param_1 + 0x7cac);
  uVar5 = *puVar10;
  if (uVar5 != uVar9) {
    if ((int)uVar5 < 0) {
      iVar3 = 0;
    }
    else if (uVar5 < *(uint *)(param_1 + 0x1c)) {
      iVar3 = *(int *)(param_1 + 0x24) + uVar5 * 0x620;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x24);
    }
    if ((int)uVar9 < 0) {
      iVar8 = 0;
    }
    else if (uVar9 < *(uint *)(param_1 + 0x1c)) {
      iVar8 = *(int *)(param_1 + 0x24) + uVar9 * 0x620;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x24);
    }
    *puVar10 = uVar9;
    if (param_2 != (short *)0x0) {
      if ((iVar8 == 0) || (*(char *)(iVar8 + 0x578) < '\0')) {
        if ((iVar3 == 0) || (*(char *)(iVar3 + 0x578) < '\0')) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)*(short *)(iVar3 + 0x574);
        }
      }
      else {
        iVar3 = (int)*(short *)(iVar8 + 0x574);
      }
      *(int *)(DAT_0027357c + param_1) = iVar3;
      iVar8 = func_004ACC38(*DAT_00273578);
      if (iVar8 != 0) {
        *(char *)(iVar8 + 0x3fc) = (char)uVar9;
      }
      piVar11 = DAT_00273580;
      *puVar10 = uVar9;
      fparam_0 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      func_0016B5B8(*piVar11,uVar9,fparam_0);
      func_0027355C(param_1,fparam_0,in_s1,in_s2);
      func_00271AB8(param_1);
      func_00271D94(param_1);
      return func_00272C20(param_1);
    }
  }
  return 0;
}

