#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00223FD0(int param_1,short param_2);
extern int func_002917D4(int param_1,undefined4 param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_002AE72C(int param_1,undefined4 *param_2);
extern int func_002B1740(int *param_1,int param_2,float *param_3);
extern int func_0034CA24(undefined4 *param_1);
extern int func_004F9874(int param_1,int param_2,int param_3);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern uint DAT_00227004;
extern float DAT_00227018;
extern int *DAT_0022701c;
extern char s_SE_EN_DAMAGE_00227008[];

// USA 00226D70 <- EU 00226D70 (Ghidra, non-matching)
// GLOBAL DAT_00227004 uint
// GLOBAL DAT_00227018 float
// GLOBAL DAT_0022701c int *
// GLOBAL s_SE_EN_DAMAGE_00227008 string

/* WARNING: Variable defined which should be unmapped: objStack_28 */

undefined4 func_00226D70(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  bool bVar6;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  func_0034CA24((undefined4 *)param_1[0x10d]);
  objStack_28[0] = 0;
  objStack_28[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x166],param_1 + 0x109,0x1600,0,0);
  piVar5 = (int *)param_1[0x10d];
  if (*piVar5 == 0) {
    *(undefined1 *)(param_1 + 0x1d4) = 0;
    return 0;
  }
  cVar1 = *(char *)((int)piVar5 + 0x21);
  bVar6 = cVar1 == '\x01';
  if (bVar6) {
    cVar1 = (char)param_1[0x1d1];
  }
  if (bVar6 && cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x1d4) = 0;
  }
  if ((char)param_1[0x1d4] == '\x01') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1d4) = 1;
  uVar2 = DAT_00227004;
  cVar1 = *(char *)((int)piVar5 + 0x21);
  if ((cVar1 == '\v') && ((char)param_1[0x1cf] == '\0')) {
    return func_0065E774(param_1 + 0x11a,6);
  }
  if ((cVar1 != '\x05' && cVar1 != '\b') && cVar1 != '\x0e') {
    if (((cVar1 != '\x0f' && cVar1 != '\a') && (cVar1 != '\x01' && cVar1 != '\f')) &&
       (cVar1 != '\x06' && cVar1 != '\r')) {
      return 0;
    }
    if ((char)param_1[0x1cf] == '\0') {
      return 0;
    }
    if ((char)param_1[0x11b] != '\x05') {
      return 0;
    }
    sVar4 = (short)piVar5[0xc];
    if (cVar1 != '\x01') {
      if (cVar1 == '\f') {
        sVar4 = 0xc;
      }
      else if (cVar1 == '\a') {
        sVar4 = 8;
      }
    }
    iVar3 = func_00223FD0((int)param_1,sVar4);
    if (iVar3 == 0) {
      return 0;
    }
    objStack_28[1] = (uint)s_SE_EN_DAMAGE_00227008;
    objStack_28[0] = uVar2;
    return func_00150A84(param_1,(int *)objStack_28,0);
  }
  cVar1 = (char)param_1[0x11b];
  bVar6 = true;
  if (cVar1 == '\x0f') {
LAB_00226efc:
    bVar6 = false;
  }
  else if (cVar1 == '\x04') {
    if ((char)param_1[0x1cf] == '\0') goto LAB_00226f7c;
    goto LAB_00226efc;
  }
  if (((char)param_1[0x1cf] != '\0') && (cVar1 == '\x05')) {
    iVar3 = func_00223FD0((int)param_1,(short)piVar5[0xc]);
    if (iVar3 != 0) {
      if (*(char *)(param_1[0x10d] + 0x21) == '\b') {
        objStack_28[1] = (uint)s_SE_EN_DAMAGE_00227008;
        objStack_28[0] = uVar2;
        func_00150A84(param_1,(int *)objStack_28,0);
      }
      func_002B1740(param_1,param_1[0x10d],(float *)0x0);
    }
    if (0x13 < *(ushort *)(param_1 + 0x1d0)) {
      return 0;
    }
  }
  if (!bVar6) {
    return 0;
  }
LAB_00226f7c:
  piVar5 = DAT_0022701c;
  cVar1 = *(char *)(param_1[0x10d] + 0x21);
  if (cVar1 == '\x05') {
    return func_002917D4(*DAT_0022701c,0,DAT_00227018);
  }
  if (cVar1 != '\x0e') {
    return 0;
  }
  fparam_0 = DAT_00227018;
  if ((char)param_1[0x1cf] == '\0') {
    func_002AE72C((int)param_1,(undefined4 *)(param_1[0x10d] + 0x14));
    func_004F9874((int)*(char *)(param_1[0x10d] + 0x21),(int)param_1,0);
  }
  return func_00291FE0(*piVar5,param_1 + 0xf4,fparam_0);
}

