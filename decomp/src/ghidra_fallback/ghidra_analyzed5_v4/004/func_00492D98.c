#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern int func_00115E38(byte *param_1,int param_2);
extern int func_00489F28(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
extern int func_0048A08C(int *param_1,int param_2);
extern int func_0048A1AC(int param_1,int param_2,uint param_3);
extern int func_0048E59C(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
extern int func_004929F0(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004A1520();
extern int func_0058FA08();
extern undefined4 DAT_00493204;
extern undefined4 DAT_00493208;
extern int *DAT_0049320c;
extern byte *DAT_00493210;
extern int DAT_00493214;
extern int DAT_00493218;
extern uint *DAT_0049321c;
extern undefined4 *DAT_00493220;
extern undefined4 DAT_00493224;

// USA 00492D98 <- EU 00492D70 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00493204 undefined4
// GLOBAL DAT_00493208 undefined4
// GLOBAL DAT_0049320c int *
// GLOBAL DAT_00493210 byte *
// GLOBAL DAT_00493214 int
// GLOBAL DAT_00493218 int
// GLOBAL DAT_0049321c uint *
// GLOBAL DAT_00493220 undefined4 *
// GLOBAL DAT_00493224 undefined4

byte * func_00492D98(int param_1,int *param_2,int *param_3,uint *param_4,uint *param_5,int param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 ((undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(int * *)(albw_frame + 0x20))
  #define local_48 (*(byte * *)(albw_frame + 0x48))
  #define local_44 (*(int *)(albw_frame + 0x4c))
  #define local_40 (*(uint *)(albw_frame + 0x50))
  #define local_3c (*(undefined1 *)(albw_frame + 0x54))
  #define local_3b (*(undefined1 *)(albw_frame + 0x55))
  #define local_3a (*(undefined1 *)(albw_frame + 0x56))
  #define local_39 (*(undefined1 *)(albw_frame + 0x57))
  #define local_38 (*(undefined2 *)(albw_frame + 0x58))
  #define local_36 (*(undefined1 *)(albw_frame + 0x5a))
  #define iStack_34 (*(int *)(albw_frame + 0x5c))
  #define piStack_30 (*(int * *)(albw_frame + 0x60))
  #define local_2c (*(int * *)(albw_frame + 0x64))
  #define local_28 (*(uint * *)(albw_frame + 0x68))
  local_48 = (byte *)param_2[3];
  iStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (local_48 == (byte *)0x0) {
    local_48 = (byte *)func_0010DB90();
  }
  puVar3 = func_0010CE7C(local_84);
  uVar2 = DAT_00493208;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *puVar3 = uVar2;
  puVar3[0xe] = 0;
  if ((int *)param_2[9] == (int *)0x0) {
    iVar4 = func_0048E59C(*DAT_0049320c,(int)local_84,param_2,0,param_2[10]);
  }
  else {
    iVar4 = func_00489F28((int *)param_2[9],(int)local_84,param_2,0,param_2[10]);
  }
  if ((iVar4 != 0) &&
     ((pbVar9 = *(byte **)(param_1 + 0x50), pbVar9 != (byte *)0x0 ||
      (pbVar9 = (byte *)func_0010CEE0(*(undefined4 *)(param_1 + 0x4c),(int *)local_48,0xffffffe0),
      pbVar9 != (byte *)0x0)))) {
    uVar5 = func_0048A1AC((int)local_84,(int)pbVar9,*(uint *)(param_1 + 0x4c));
    if (0xf < uVar5) {
      local_44 = DAT_00493214 + (uint)*DAT_00493210 * 4;
      uVar6 = (**(code **)(local_44 + 0x10))(*(undefined4 *)(pbVar9 + 4));
      local_40 = (**(code **)(local_44 + 0x10))(*(undefined4 *)(pbVar9 + 8));
      piVar11 = local_2c;
      uVar7 = param_2[7];
      if ((uVar7 < uVar6) && (uVar7 != 0)) {
        uVar6 = uVar7;
      }
      pbVar10 = (byte *)param_2[6];
      uVar7 = uVar6 + 0x1f & 0xffffffe0;
      bVar1 = false;
      if (pbVar10 == (byte *)0x0) {
        if (((*DAT_0049321c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0049321c), iVar4 != 0))
        {
          *DAT_00493220 = DAT_00493224;
        }
        if ((piVar11 == (int *)0x0) ||
           (iVar4 = (**(code **)*piVar11)(piVar11,DAT_00493220), iVar4 == 0)) {
          piVar11 = (int *)0x0;
        }
        if (piVar11 == (int *)0x0) {
          if (param_2[4] < 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = 1;
          }
          iVar4 = iVar4 * -0x20;
        }
        else {
          iVar4 = param_2[5];
          if (iVar4 == 0) {
            uVar8 = local_40;
            if (local_40 == 0) {
              uVar8 = (**(code **)(*piVar11 + 0x14))(piVar11);
            }
            if (param_2[4] < 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            if ((int)uVar8 < 0x21) {
              uVar8 = 0x20;
            }
            iVar4 = iVar4 * uVar8;
          }
          else if (iVar4 < 0x21) {
            iVar4 = 0x20;
          }
        }
        pbVar10 = (byte *)func_0010CEE0(uVar7,(int *)local_48,iVar4);
        if (pbVar10 == (byte *)0x0) {
          if (*(int *)(param_1 + 0x50) == 0) {
            func_0058FA08((int)pbVar9);
          }
          goto joined_r0x004930e0;
        }
        bVar1 = true;
      }
      uVar8 = uVar7;
      if (uVar5 < *(uint *)(param_1 + 0x4c)) {
        iVar4 = (**(code **)(local_44 + 0x10))(*(undefined4 *)pbVar9);
        if (((iVar4 != DAT_00493218) ||
            (uVar5 = (**(code **)(local_44 + 0x10))(*(undefined4 *)(pbVar9 + 4)), uVar7 < uVar5)) ||
           (uVar5 = func_00115E38(pbVar10,(int)pbVar9), (int)uVar5 < 0)) {
          if (bVar1) {
            func_0058FA08((int)pbVar10);
          }
          if (*(int *)(param_1 + 0x50) == 0) {
            func_0058FA08((int)pbVar9);
          }
          goto joined_r0x004930e0;
        }
      }
      else {
        local_3c = 0;
        local_3b = 0;
        local_36 = 0x10;
        local_3a = 0;
        local_44 = 0;
        local_39 = 0;
        local_38 = 0;
        local_48 = pbVar10;
        local_40 = uVar6;
        do {
          uVar5 = func_004929F0(&local_48,pbVar9,uVar5);
          if (uVar5 == 0) break;
          if ((int)uVar5 < 0) {
            if (bVar1) {
              func_0058FA08((int)pbVar10);
            }
            if (*(int *)(param_1 + 0x50) == 0) {
              func_0058FA08((int)pbVar9);
            }
            goto joined_r0x004930e0;
          }
          uVar5 = func_0048A1AC((int)local_84,(int)pbVar9,*(uint *)(param_1 + 0x4c));
        } while (uVar5 != 0);
      }
      if (*(int *)(param_1 + 0x50) == 0) {
        func_0058FA08((int)pbVar9);
      }
      if (local_28 != (uint *)0x0) {
        *local_28 = uVar6;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar8;
      }
      if (param_6 != 0) {
        *(bool *)param_6 = bVar1;
      }
      local_84[0] = uVar2;
      if (local_70 != (int *)0x0) {
        func_0048A08C(local_70,(int)local_84);
      }
      func_004A1520(local_84);
      return pbVar10;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      func_0058FA08((int)pbVar9);
    }
  }
joined_r0x004930e0:
  local_84[0] = uVar2;
  if (local_70 != (int *)0x0) {
    func_0048A08C(local_70,(int)local_84);
  }
  func_004A1520(local_84);
  return (byte *)0x0;
}

