#include "ghidra_types.h"

extern int func_0011E974(int param_1,uint param_2);
extern int func_00171E74(int param_1);
extern int func_001E3328(int param_1);
extern int func_00255484(int param_1,int param_2,undefined4 param_3);
extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_00292460(int param_1,undefined1 param_2);
extern int func_00292738(int param_1,undefined1 param_2);
extern int func_0030A200(int param_1,undefined4 *param_2,int param_3,int *param_4);
extern int func_0030C908(int *param_1,undefined1 param_2,int param_3,int param_4,int param_5);
extern int func_0030CA68(int *param_1,uint param_2,int param_3,int param_4);
extern int func_0032178C(int param_1,uint param_2,undefined4 param_3);
extern int func_00369EBC(int param_1,int param_2);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004CDA10(int param_1,uint param_2,int param_3);
extern int func_004EC4FC(int param_1,int param_2,int param_3);
extern int func_00519580(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0051C63C(int param_1,uint param_2,undefined *param_3,int param_4);
extern int func_0051C8D0(int param_1);
extern int func_0051D514(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00537C00(int param_1,uint param_2);
extern int func_00587B50(int param_1,int *param_2,int param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0058D9E0(int param_1);
extern int func_0058DA04(int param_1);
extern int func_0058DA24(int param_1);
extern uint DAT_0030aca4;
extern int *DAT_0030aca8;
extern int *DAT_0030acac;
extern uint DAT_0030acb0;
extern int *DAT_0030acb4;
extern int *DAT_0030acd0;
extern int *DAT_0030acd4;
extern int *DAT_0030acd8;
extern int DAT_0030acdc;
extern int *DAT_0030ace0;
extern int *DAT_0030b040;
extern int *DAT_0030b044;
extern float DAT_0030b0d0;
extern char s_SE_S_MAP_DEST_ICON_SET_0030acb8[];
extern char s_SE_S_TELEPATHY_0030b030[];
extern char s_SE_S_TELEPATHY_CALL_0030b01c[];

// USA 0030A5B4 <- EU 0030A590 (Ghidra, non-matching)
// GLOBAL DAT_0030aca4 uint
// GLOBAL DAT_0030aca8 int *
// GLOBAL DAT_0030acac int *
// GLOBAL DAT_0030acb0 uint
// GLOBAL DAT_0030acb4 int *
// GLOBAL DAT_0030acd0 int *
// GLOBAL DAT_0030acd4 int *
// GLOBAL DAT_0030acd8 int *
// GLOBAL DAT_0030acdc int
// GLOBAL DAT_0030ace0 int *
// GLOBAL DAT_0030b040 int *
// GLOBAL DAT_0030b044 int *
// GLOBAL DAT_0030b0d0 float
// GLOBAL s_SE_S_MAP_DEST_ICON_SET_0030acb8 string
// GLOBAL s_SE_S_TELEPATHY_0030b030 string
// GLOBAL s_SE_S_TELEPATHY_CALL_0030b01c string

/* WARNING: Variable defined which should be unmapped: objStack_18 */

undefined4 func_0030A5B4(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_r1;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint in_fpscr;
  float in_s0;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  piVar2 = DAT_0030ace0;
  iVar5 = param_1[0x3c];
  uVar10 = 0;
  switch(*(undefined2 *)(iVar5 + 10)) {
  case 0:
  case 0xe:
    func_004CDA10(*DAT_0030aca8,*(uint *)(iVar5 + 4) & 0xffff,1);
    break;
  case 1:
    func_004CDA10(*DAT_0030aca8,*(uint *)(iVar5 + 4) & 0xffff,0);
    break;
  case 2:
    if (param_1[7] == 0) {
      return 0;
    }
    objStack_18[1] = func_0011E974(param_1[1],*(uint *)(iVar5 + 4));
    objStack_18[0] = DAT_0030aca4;
    iVar5 = (**(code **)(*(int *)param_1[9] + 8))((int *)param_1[9],objStack_18);
    goto joined_r0x0030a714;
  case 3:
    puVar8 = (undefined4 *)param_1[0x4d];
    if ((puVar8 != (undefined4 *)0x0) &&
       (iVar5 = (**(code **)*puVar8)(puVar8,*(undefined4 *)(iVar5 + 4)), iVar5 == 0)) {
      return 2;
    }
    if (param_1[7] == 0) {
      return 0;
    }
    iVar5 = (*(code *)**(undefined4 **)param_1[9])
                      ((undefined4 *)param_1[9],*(undefined4 *)(param_1[0x3c] + 4));
joined_r0x0030a714:
    if (iVar5 == 0) {
      return 2;
    }
    break;
  case 8:
    param_1[0x22] = *(int *)(iVar5 + 4);
    uVar6 = *(uint *)(iVar5 + 4);
    objStack_18[0] = uVar6 >> 0x18;
    iVar7 = func_0030C908(param_1,(char)uVar6,(uVar6 << 0x10) >> 0x18,(uVar6 << 8) >> 0x18,
                          objStack_18[0]);
    iVar5 = DAT_0030acdc;
    if (iVar7 == 0) {
      return 2;
    }
    if (*(char *)((int)param_1 + 0xd6) == '\0') {
      *(undefined1 *)(param_1 + 0x35) = 0;
    }
    param_1[0x21] = iVar5;
    return 1;
  case 9:
    iVar5 = param_1[0x22];
    objStack_18[0] = 0;
    iVar5 = func_0030C908(param_1,(char)iVar5,(uint)(iVar5 << 0x10) >> 0x18,
                          (uint)(iVar5 << 8) >> 0x18,0);
    if (iVar5 == 0) {
      return 2;
    }
    if (*(char *)((int)param_1 + 0xd6) != '\0') {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x35) = 0;
    return 1;
  case 10:
    uVar6 = *(uint *)(iVar5 + 4);
    func_0030CA68(param_1,uVar6 & 0xffff,(uVar6 << 8) >> 0x18,uVar6 >> 0x18);
    return 1;
  case 0xb:
    if ((*DAT_0030acb4 != 0) && (iVar5 = func_0058DA24(*DAT_0030acb4), iVar5 == 0)) {
LAB_0030aa20:
      (**(code **)(*param_1 + 0x30))(param_1);
      return 2;
    }
    if ((char)param_1[0x36] != '\0') {
      *(undefined1 *)((int)param_1 + 0xd7) = 0;
      *(undefined1 *)(param_1 + 0x36) = 0;
      return 1;
    }
    uVar10 = 2;
    if (*(char *)((int)param_1 + 0xd7) == '\0') {
      *(undefined1 *)((int)param_1 + 0xd7) = 1;
    }
    break;
  case 0xc:
    iVar5 = *(int *)(iVar5 + 4);
    if (iVar5 == 0) {
      func_00255484(*DAT_0030ace0,0x24,0);
    }
    else if (iVar5 == 1) {
      uVar6 = 0;
      do {
        iVar5 = func_00537C00(*piVar2,uVar6);
        if (iVar5 == 0xd) {
          func_00255484(*piVar2,uVar6 + 0x12,0);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 5);
    }
    else if (iVar5 == 2) {
      func_00255484(*DAT_0030ace0,7,0);
    }
    break;
  case 0xd:
    uVar9 = 1;
    func_004CDA10(*DAT_0030aca8,*(uint *)(iVar5 + 4) & 0xffff,1);
    if (*DAT_0030acb4 != 0) {
      func_00519580(*DAT_0030acb4,extraout_r1,uVar9,param_4);
    }
    iVar5 = *(int *)(param_1[0x3c] + 4);
    if (iVar5 != 0x91) {
      if (iVar5 < 0x92) {
        if (iVar5 == 0x41 || iVar5 == 0x59) {
          return 0;
        }
      }
      else if (iVar5 == 0x129 || iVar5 == 0x169) {
        return 0;
      }
      objStack_18[1] = (uint)s_SE_S_MAP_DEST_ICON_SET_0030acb8;
      objStack_18[0] = DAT_0030aca4;
      func_00587F74(*DAT_0030acd0,(int *)objStack_18,0);
    }
    break;
  case 0xf:
    if ((uint)*(ushort *)(param_1 + 0x1f) < *(uint *)(iVar5 + 4)) {
      return 2;
    }
    break;
  case 0x10:
    if ((*DAT_0030acb4 != 0) && (iVar5 = func_0058DA24(*DAT_0030acb4), iVar5 == 0))
    goto LAB_0030aa20;
    break;
  case 0x11:
    cVar1 = *(char *)((int)param_1 + 0xd5);
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)((int)param_1 + 0xd6);
    }
    if (bVar4 && cVar1 == '\0') {
      iVar7 = *DAT_0030acd4;
      iVar5 = 0;
      if (iVar7 != 0) {
        iVar5 = *(int *)(iVar7 + 0x18);
      }
      if (iVar7 == 0 || iVar5 == 0) {
        return 2;
      }
      if (-1 < *(int *)(iVar5 + 0x10c)) {
        return 2;
      }
    }
    *(undefined1 *)((int)param_1 + 0xd5) = 0;
    break;
  case 0x12:
    uVar3 = (undefined1)*(uint *)(iVar5 + 4);
    if ((*(uint *)(iVar5 + 4) & 0xff) != 0) {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x35) = uVar3;
    break;
  case 0x13:
    if ((*(char *)((int)param_1 + 0xd6) == '\0') &&
       (iVar5 = func_0052FBA0(*DAT_0030acd8 + 0x3dbbc,param_1[0x34]), iVar5 != 0)) {
      return 2;
    }
    break;
  case 0x14:
    uVar3 = 1;
    goto LAB_0030ac54;
  case 0x15:
    uVar3 = 0;
LAB_0030ac54:
    *(undefined1 *)((int)param_1 + 0xd6) = uVar3;
    break;
  case 0x16:
    iVar7 = *DAT_0030acd4;
    iVar5 = 0;
    if (iVar7 != 0) {
      iVar5 = *(int *)(iVar7 + 0x18);
    }
    if (iVar7 == 0 || iVar5 == 0) {
      return 2;
    }
    if (-1 < *(int *)(iVar5 + 0x10c)) {
      return 2;
    }
    break;
  case 0x17:
    bVar4 = func_0051D514(*(int *)(*DAT_0030acd4 + 0x18));
    if (bVar4) {
      return 2;
    }
    break;
  case 0x18:
    func_004AD9E8(*DAT_0030acac,*(uint *)(iVar5 + 4),0,1,in_s0);
    break;
  case 0x19:
    func_004AD9E8(*DAT_0030acac,*(uint *)(iVar5 + 4),0,0,in_s0);
    break;
  case 0x1a:
    uVar6 = *(uint *)(iVar5 + 4);
    if (uVar6 - 0x3e9 < DAT_0030acb0) {
      uVar6 = uVar6 - 1000;
    }
    func_004AD9E8(*DAT_0030acac,uVar6,1,1,in_s0);
    break;
  case 0x1b:
    uVar6 = *(uint *)(iVar5 + 4);
    if (uVar6 - 0x3e9 < DAT_0030acb0) {
      uVar6 = uVar6 - 1000;
    }
    func_004AD9E8(*DAT_0030acac,uVar6,1,0,in_s0);
    break;
  case 0x1c:
    uVar6 = *(uint *)(iVar5 + 4);
    if (uVar6 - 0x7d1 < DAT_0030acb0) {
      uVar6 = uVar6 - 2000;
    }
    func_004AD9E8(*DAT_0030acac,uVar6,2,1,in_s0);
    break;
  case 0x1d:
    uVar6 = *(uint *)(iVar5 + 4);
    if (uVar6 - 0x7d1 < DAT_0030acb0) {
      uVar6 = uVar6 - 2000;
    }
    func_004AD9E8(*DAT_0030acac,uVar6,2,0,in_s0);
    break;
  case 0x1e:
    uVar6 = *(uint *)(iVar5 + 4);
    if (uVar6 - 0xbb9 < DAT_0030acb0) {
      uVar6 = uVar6 - 3000;
    }
    func_004AD9E8(*DAT_0030acac,uVar6,3,1,in_s0);
    break;
  case 0x1f:
    uVar6 = *(uint *)(iVar5 + 4);
    if (uVar6 - 0xbb9 < DAT_0030acb0) {
      uVar6 = uVar6 - 3000;
    }
    func_004AD9E8(*DAT_0030acac,uVar6,3,0,in_s0);
    break;
  case 0x20:
    if (*(char *)((int)param_1 + 0xdb) != '\0') {
      return 2;
    }
    *(undefined1 *)((int)param_1 + 0xda) = 1;
    return 2;
  case 0x21:
    uVar10 = *(undefined4 *)(iVar5 + 4);
    cVar1 = (char)((uint)uVar10 >> 0x10);
    if (*(char *)((int)param_1 + 0xdb) == '\0') {
      *(undefined1 *)((int)param_1 + 0xda) = 1;
      *(char *)(param_1 + 0x51) = (char)((uint)uVar10 >> 0x18);
      *(char *)(param_1 + 0x4e) = (char)uVar10;
      param_1[0x4f] = (int)(char)((uint)uVar10 >> 8);
      *(short *)(param_1 + 0x50) = (short)cVar1;
      *(char *)((int)param_1 + 0x142) = (cVar1 >> 7) + '\x01';
    }
    return 2;
  case 0x24:
    *(bool *)((int)param_1 + 0xd5) = *(int *)(iVar5 + 4) != 0;
    break;
  case 0x25:
    func_00255B48(*DAT_0030ace0,*(int *)(iVar5 + 4),param_3);
    break;
  case 0x26:
    iVar7 = *DAT_0030acb4;
    if (iVar7 != 0) {
      func_0051C63C(iVar7,*(uint *)(iVar5 + 4) & 0xff,(undefined *)iVar7,param_4);
    }
    break;
  case 0x27:
    if (*DAT_0030acb4 != 0) {
      func_0051C8D0(*DAT_0030acb4);
    }
    break;
  case 0x29:
    if (*(ushort *)(param_1 + 0x1f) < 0xb4) {
      objStack_18[1] = (uint)s_SE_S_TELEPATHY_CALL_0030b01c;
      objStack_18[0] = DAT_0030aca4;
      func_00587B50(*DAT_0030acd0,(int *)objStack_18,0);
      return 2;
    }
    func_00292738(*DAT_0030ace0,0);
    if (*(int *)(*DAT_0030acd4 + 0x18) != 0) {
      func_0030A200((int)param_1,(undefined4 *)(*(int *)(*DAT_0030acd4 + 0x18) + 0x1bc),0x27,
                    param_1 + 0xc);
    }
    objStack_18[1] = (uint)s_SE_S_TELEPATHY_0030b030;
    objStack_18[0] = DAT_0030aca4;
    func_00587F74(*DAT_0030acd0,(int *)objStack_18,0);
    switch(*(undefined1 *)(*DAT_0030b040 + 0x18)) {
    default:
      func_004EC4FC(*DAT_0030acd0,0xf,1);
      break;
    case 1:
    case 3:
    case 5:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
      func_004EC4FC(*DAT_0030acd0,0x3c,1);
    }
    break;
  case 0x2a:
    if ((short)param_1[0x1f] == 0) {
      func_00292460(*DAT_0030ace0,1);
    }
    if (*(ushort *)(param_1 + 0x1f) < 0xbe) {
      return 2;
    }
    break;
  case 0x2b:
    func_0032178C(*DAT_0030acd0,*(uint *)(iVar5 + 4) & 0xffff,*(uint *)(iVar5 + 4) >> 0x10);
    break;
  case 0x2c:
    iVar7 = *DAT_0030acb4;
    if (*(uint *)(iVar5 + 4) >> 0x18 == 0) {
      if ((iVar7 != 0) && (bVar4 = func_0058DA04(iVar7), !bVar4)) {
        return 2;
      }
    }
    else if ((iVar7 != 0) && (bVar4 = func_0058D9E0(iVar7), bVar4)) {
      return 2;
    }
    break;
  case 0x2d:
    if (*(uint *)(iVar5 + 4) >> 0x18 == 0) {
      if ((short)param_1[0x29] != 0) {
        return 2;
      }
      if (*(short *)((int)param_1 + 0xa6) == 0) {
        return 2;
      }
    }
    else if ((char)param_1[0x33] == '\0') {
      return 2;
    }
    break;
  case 0x2e:
    if ((*DAT_0030acb4 != 0) && (iVar5 = func_0058DA24(*DAT_0030acb4), iVar5 == 0)) {
      (**(code **)(*param_1 + 0x30))(param_1);
      return 2;
    }
    *(char *)(param_1 + 0x24) = (char)*(undefined4 *)(param_1[0x3c] + 4);
    break;
  case 0x2f:
    if (*(char *)(*DAT_0030b044 + 0x70) == '\x04') {
      func_00171E74(*DAT_0030b044);
    }
    break;
  case 0x31:
    fVar11 = (float)VectorUnsignedToFloat(*(undefined4 *)(iVar5 + 4),(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x21] = (int)ALBW_AS_U32((fVar11 * DAT_0030b0d0));
    break;
  case 0x32:
    iVar7 = *DAT_0030acb4;
    if (iVar7 != 0) {
      param_3 = *(int *)(iVar7 + 0x130);
    }
    if (iVar7 != 0 && param_3 != 0) {
      if (*(int *)(iVar5 + 4) == 0) {
        func_001E3328(param_3);
      }
      else {
        func_00369EBC(param_3,3);
      }
    }
  }
  return uVar10;
}

