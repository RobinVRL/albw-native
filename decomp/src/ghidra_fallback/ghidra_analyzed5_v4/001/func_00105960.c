// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_00108AE8(void *param_1);
extern int func_00108B98(void);
extern int func_00108BA8(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,int param_4, undefined4 *param_5,int *param_6,int param_7);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_0010AF24(void);
extern int func_0010AF34(void);
extern int func_0010AFEC(void);
extern int func_0010B1B4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, int param_5,undefined4 *param_6,undefined4 *param_7);
extern uint *DAT_00105c0c;
extern uint *DAT_00105c10;
extern int DAT_00105c14;
extern int DAT_00105c18;
extern uint DAT_00105c1c;
extern uint DAT_00105c20;

// USA 00105960 <- EU 00105960 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 int *
// PARAM param_7 Stack[0x8]:4 uint
// PARAM param_8 Stack[0xc]:4 uint
// GLOBAL DAT_00105c0c uint *
// GLOBAL DAT_00105c10 uint *
// GLOBAL DAT_00105c14 int
// GLOBAL DAT_00105c18 int
// GLOBAL DAT_00105c1c uint
// GLOBAL DAT_00105c20 uint

int func_00105960(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,int param_4,
                 undefined4 *param_5,int *param_6,uint param_7,uint param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  bool bVar13;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(uint *)(albw_frame + 0x0))
  #define local_50 (*(uint *)(albw_frame + 0x10))
  #define local_4c (*(int *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define auStack_40 ((undefined1 *)(albw_frame + 0x20))
  #define auStack_3c ((undefined4 *)(albw_frame + 0x24))
  #define puStack_34 (*(undefined4 * *)(albw_frame + 0x2c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x30))
  #define puStack_2c (*(undefined1 * *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  puStack_34 = param_1;
  puStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  if (param_7 == *DAT_00105c0c && param_8 == DAT_00105c0c[1]) {
    iVar2 = func_00108BA8(param_1,param_2,param_3,param_4,param_5,param_6,0);
    return iVar2;
  }
  if (*DAT_00105c10 != param_7 || DAT_00105c10[1] != param_8) {
    local_60 = param_8 ^ DAT_00105c0c[1];
    local_50 = param_7 ^ *DAT_00105c0c | local_60;
    if (local_50 != 0) {
      software_interrupt(0x28);
      goto LAB_00105a08;
    }
  }
  local_50 = 0;
  local_60 = 0;
LAB_00105a08:
  while( true ) {
    iVar2 = local_28;
    iVar3 = func_0010AFEC();
    iVar4 = DAT_00105c14;
    if (iVar3 != 0) {
      iVar4 = func_0010AF24();
      if (iVar4 == 0) {
        puVar6 = param_1;
        if (param_1 == (undefined4 *)0x0) {
          puVar6 = &uStack_48;
        }
        puVar7 = param_2;
        if (param_2 == (undefined4 *)0x0) {
          puVar7 = &uStack_44;
        }
        if (param_3 == (undefined1 *)0x0) {
          iVar2 = 0;
        }
        puVar8 = param_3;
        if (param_3 == (undefined1 *)0x0 || iVar2 == 0) {
          puVar8 = auStack_40;
        }
        puVar11 = param_5;
        if (param_5 == (undefined4 *)0x0) {
          puVar11 = auStack_3c;
        }
        local_4c = 0;
        piVar12 = param_6;
        if (param_6 == (int *)0x0) {
          piVar12 = &local_4c;
        }
        func_00108DF8();
        uVar5 = func_00108B98();
        iVar4 = func_0010B1B4(puVar6,uVar5,puVar7,puVar8,iVar2,puVar11,piVar12);
        func_00108F4C();
        if (local_4c != 0) {
          software_interrupt(0x23);
        }
      }
      else {
        uVar5 = func_0010AF24();
        *param_2 = uVar5;
        func_00108AE8(0);
        func_0010AF34();
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 0;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 0;
        }
        iVar4 = 0;
        if (param_6 != (int *)0x0) {
          *param_6 = *(int *)(DAT_00105c18 + 8);
        }
      }
      func_0010AF34();
    }
    if (-1 < iVar4) break;
    if (iVar4 == DAT_00105c14) {
      if (param_8 == DAT_00105c10[1] && param_7 == *DAT_00105c10) {
        return iVar4;
      }
      uVar9 = param_8 ^ DAT_00105c0c[1] | param_7 ^ *DAT_00105c0c;
      if (uVar9 != 0) {
        software_interrupt(0x28);
        uVar10 = (param_7 ^ *DAT_00105c0c) - (local_60 + (uVar9 < local_50));
        lVar1 = (ulonglong)(uVar9 - local_50) * 3 +
                ((ulonglong)
                 (((int)uVar10 >> 0x1f) * DAT_00105c1c +
                 (int)((ulonglong)DAT_00105c1c * (ulonglong)uVar10 >> 0x20)) << 0x20 |
                (ulonglong)DAT_00105c1c * (ulonglong)uVar10 & 0xffffffff) +
                CONCAT44(uVar10 * 3,
                         (int)((ulonglong)DAT_00105c1c * (ulonglong)(uVar9 - local_50) >> 0x20));
        iVar2 = (int)((ulonglong)lVar1 >> 0x20);
        bVar13 = param_7 < (uint)lVar1;
        if ((int)(param_8 - (iVar2 + (uint)bVar13)) < 0 !=
            (SBORROW4(param_8,iVar2) != SBORROW4(param_8 - iVar2,(uint)bVar13))) {
          return iVar4;
        }
      }
    }
    func_00104338((uint)((ulonglong)DAT_00105c20 * 10),(int)((ulonglong)DAT_00105c20 * 10 >> 0x20));
  }
  return iVar4;
}

