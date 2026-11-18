#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00547B48(int param_1,int param_2);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int func_00660CE8(undefined4 *param_1,undefined1 param_2);
extern int DAT_002758e8;
extern int *DAT_002758ec;
extern float DAT_002758f0;

// USA 00275550 <- EU 00275578 (Ghidra, non-matching)
// GLOBAL DAT_002758e8 int
// GLOBAL DAT_002758ec int *
// GLOBAL DAT_002758f0 float

undefined4 func_00275550(int *param_1)

{
  char cVar1;
  float fparam_0;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  iVar5 = DAT_002758e8;
  cVar1 = (char)param_1[7];
  if (cVar1 == '\x05' || cVar1 == '\r') {
    bVar2 = func_00547B48(param_1[0xd],0);
    if ((!bVar2) || (*(char *)(param_1[2] + 0xb0) == '\0')) {
      uVar6 = ((uint)*(ushort *)(param_1[0xd] + 0x34) + *(int *)(param_1[2] + 0x40)) - 1;
      if ((int)uVar6 < 0) {
        return 0;
      }
      bVar2 = func_005822A0(*DAT_002758ec,uVar6,(uint)*(byte *)(param_1[0xd] + 0x31));
      if (!bVar2) {
        return 0;
      }
    }
    if (*(int *)(param_1[2] + 0x94) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(param_1[2] + 0x9c);
    }
    param_1[3] = iVar5;
  }
  else {
    if ((cVar1 != '\x04' && cVar1 != '\f') && cVar1 != '\x14') {
      if ((uint)param_1[4] < (uint)param_1[5]) {
        param_1[4] = param_1[4] + 1;
        return 0;
      }
      iVar4 = param_1[2];
      if (iVar4 != 0) {
        if (*(char *)(iVar4 + 0xb1) != '\0') {
          switch(cVar1) {
          case '\0':
          case '\b':
            goto switchD_002755dc_caseD_0;
          case '\x01':
          case '\t':
            if (*(int *)(iVar4 + 0xa0) == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = **(int **)(iVar4 + 0xa8);
            }
            param_1[3] = iVar8;
            param_1[9] = iVar4;
            param_1[10] = iVar8;
            param_1[0xb] = iVar5;
            *(undefined1 *)(param_1 + 0xc) = 1;
            return func_00660CE8(param_1 + 0x19,2);
          case '\x02':
          case '\n':
            piVar7 = *(int **)(*(int *)(iVar4 + 0xac) + 0x28);
            iVar8 = 0;
            if (piVar7 != (int *)0x0) {
              if (*(int *)(*(int *)(iVar4 + 0xac) + 0x20) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *piVar7;
              }
            }
            param_1[3] = iVar8;
            param_1[9] = iVar4;
            param_1[10] = iVar8;
            param_1[0xb] = iVar5;
            *(undefined1 *)(param_1 + 0xc) = 0;
            return func_00660CE8(param_1 + 0x19,1);
          default:
            return 0;
          }
        }
        if (0 < *(int *)(iVar4 + 0x5c)) {
          if (*(int *)(iVar4 + 0x94) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = **(int **)(iVar4 + 0x9c);
          }
          param_1[3] = iVar8;
          param_1[9] = iVar4;
          param_1[10] = iVar8;
          param_1[0xb] = iVar5;
          *(undefined1 *)(param_1 + 0xc) = 0;
          return func_00660CE8(param_1 + 0x19,1);
        }
      }
switchD_002755dc_caseD_0:
      return func_00660CE8(param_1 + 0x19,4);
    }
    bVar2 = func_00547B48(param_1[0xd],0);
    cVar1 = *(char *)((int)param_1 + 0x3a);
    *(bool *)((int)param_1 + 0x3a) = bVar2;
    bVar9 = (int)cVar1 == (uint)bVar2;
    bVar2 = false;
    if ((char)param_1[7] != '\x05' && (char)param_1[7] != '\r') {
      bVar3 = func_00547B48(param_1[0xd],1);
      cVar1 = *(char *)((int)param_1 + 0x3b);
      *(bool *)((int)param_1 + 0x3b) = bVar3;
      if ((int)cVar1 != (uint)bVar3) {
        bVar2 = true;
      }
    }
    fparam_0 = DAT_002758f0;
    if ((char)param_1[7] == '\x14') {
      if (bVar9) {
        if (!bVar2) {
          return 0;
        }
        iVar5 = *param_1;
        param_1[0xf] = *(int *)(iVar5 + 0xc);
        param_1[0x10] = *(int *)(iVar5 + 0x10);
        param_1[0x11] = *(int *)(iVar5 + 0x14);
        iVar5 = param_1[1];
        param_1[0x12] = *(int *)(iVar5 + 0xc);
        param_1[0x13] = *(int *)(iVar5 + 0x10);
        param_1[0x14] = *(int *)(iVar5 + 0x14);
        func_00115D70((float *)(param_1 + 0x12),(float *)(param_1 + 0x12),fparam_0);
        goto LAB_002757fc;
      }
      iVar5 = *param_1;
      param_1[0xf] = *(int *)(iVar5 + 0xc);
      param_1[0x10] = *(int *)(iVar5 + 0x10);
      param_1[0x11] = *(int *)(iVar5 + 0x14);
      iVar5 = param_1[1];
      param_1[0x12] = *(int *)(iVar5 + 0xc);
      param_1[0x13] = *(int *)(iVar5 + 0x10);
      param_1[0x14] = *(int *)(iVar5 + 0x14);
      goto LAB_00275764;
    }
    if (bVar9) {
      if (!bVar2) {
        return 0;
      }
      if (*(int *)(param_1[2] + 0xa0) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(param_1[2] + 0xa8);
      }
      param_1[3] = iVar5;
      if (iVar5 == 0) {
        return 0;
      }
LAB_002757fc:
      return func_00660CE8(param_1 + 0x19,8);
    }
    if (*(int *)(param_1[2] + 0x94) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(param_1[2] + 0x9c);
    }
    param_1[3] = iVar5;
  }
  if (iVar5 == 0) {
    return 0;
  }
LAB_00275764:
  return func_00660CE8(param_1 + 0x19,7);
}

