#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00120024(undefined4 *param_1,int param_2);
extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BECAC(int param_1,int param_2);
extern int func_002BF2BC(int param_1);
extern int func_002C0FA4(undefined4 *param_1);
extern int func_0043C520(int param_1,float fparam_0);
extern int func_0044AF94(int param_1);
extern int func_0044BB94(undefined4 *param_1);
extern int func_00465A64(int param_1,int *param_2,undefined4 param_3,uint param_4);
extern int func_00468DB8(undefined4 *param_1);
extern int func_00478068(int param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_0051AC40(int param_1,undefined4 *param_2);
extern int func_0055696C(int param_1,int param_2);
extern undefined1 DAT_0043cb50;
extern int DAT_0043cb58;
extern int DAT_0043cb5c;
extern int DAT_0043cb60;
extern int *DAT_0043cb64;
extern undefined1 DAT_0043cb68;
extern undefined4 DAT_0043cdec;
extern int *DAT_0043cdf0;
extern undefined4 DAT_0043cdf4;
extern int *DAT_0043cdf8;
extern float DAT_0043cdfc;
extern float DAT_0043ce00;
extern float DAT_0043ce04;

// USA 0043C870 <- EU 0043C850 (Ghidra, non-matching)
// GLOBAL DAT_0043cb50 undefined1
// GLOBAL DAT_0043cb58 int
// GLOBAL DAT_0043cb5c int
// GLOBAL DAT_0043cb60 int
// GLOBAL DAT_0043cb64 int *
// GLOBAL DAT_0043cb68 undefined1
// GLOBAL DAT_0043cdec undefined4
// GLOBAL DAT_0043cdf0 int *
// GLOBAL DAT_0043cdf4 undefined4
// GLOBAL DAT_0043cdf8 int *
// GLOBAL DAT_0043cdfc float
// GLOBAL DAT_0043ce00 float
// GLOBAL DAT_0043ce04 float

undefined4 func_0043C870(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_d0 (*(int *)(albw_frame + 0x0))
  #define local_cc (*(uint * *)(albw_frame + 0x4))
  #define local_c8 (*(int *)(albw_frame + 0x8))
  #define local_c4 ((uint *)(albw_frame + 0xc))
  #define uStack_45 (*(undefined1 *)(albw_frame + 0x8b))
  #define local_44 (*(uint * *)(albw_frame + 0x8c))
  #define local_40 (*(int *)(albw_frame + 0x90))
  #define local_3c (*(uint * *)(albw_frame + 0x94))
  #define local_38 (*(int *)(albw_frame + 0x98))
  #define local_34 (*(uint * *)(albw_frame + 0x9c))
  iVar10 = DAT_0043cb58;
  local_34 = (uint *)&DAT_0043cb50;
  local_38 = DAT_0043cb58;
  local_c8 = 0x80;
  uStack_45 = 0;
  local_d0 = DAT_0043cb5c;
  local_cc = local_c4;
  (**(code **)(DAT_0043cb58 + 8))(&local_38);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_34 + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_0043c8d8;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_0043c8d8:
  if (local_c8 <= (int)uVar6) {
    uVar6 = local_c8 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  uVar5 = uVar6;
  func_0010E3C4(local_c4,local_34,uVar6);
  local_d0 = DAT_0043cb60;
  *(undefined1 *)((int)local_c4 + uVar6) = 0;
  func_00120024(&local_40,(int)*(char *)(*DAT_0043cb64 + 0x18));
  puVar2 = local_cc;
  (**(code **)(local_d0 + 8))(&local_d0);
  iVar9 = 0;
  do {
    if (*(char *)((int)local_cc + iVar9) == '\0') {
      if (iVar9 < 0x40001) goto LAB_0043c970;
      break;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x40001);
  iVar9 = 0;
LAB_0043c970:
  iVar8 = iVar9;
  if (iVar9 < 0) {
    iVar8 = 0;
  }
  (**(code **)(local_40 + 8))(&local_40);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_3c + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_0043c9c0;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_0043c9c0:
  if (local_c8 - iVar8 <= (int)uVar6) {
    uVar6 = (local_c8 - iVar8) - 1;
  }
  if (0 < (int)uVar6) {
    local_44 = (uint *)((int)puVar2 + iVar8);
    (**(code **)(local_40 + 8))(&local_40);
    uVar5 = uVar6;
    func_0010E3C4(local_44,local_3c,uVar6);
    if (iVar9 < (int)(iVar8 + uVar6)) {
      *(undefined1 *)((int)puVar2 + iVar8 + uVar6) = 0;
    }
  }
  puVar2 = local_cc;
  local_3c = (uint *)&DAT_0043cb68;
  local_40 = iVar10;
  (**(code **)(local_d0 + 8))(&local_d0);
  iVar10 = 0;
  do {
    if (*(char *)((int)local_cc + iVar10) == '\0') {
      if (iVar10 < 0x40001) goto LAB_0043ca60;
      break;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x40001);
  iVar10 = 0;
LAB_0043ca60:
  iVar9 = iVar10;
  if (iVar10 < 0) {
    iVar9 = 0;
  }
  (**(code **)(local_40 + 8))(&local_40);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_3c + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_0043cab0;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_0043cab0:
  if (local_c8 - iVar9 <= (int)uVar6) {
    uVar6 = (local_c8 - iVar9) - 1;
  }
  if (0 < (int)uVar6) {
    (**(code **)(local_40 + 8))(&local_40);
    uVar5 = uVar6;
    func_0010E3C4((uint *)((int)puVar2 + iVar9),local_3c,uVar6);
    if (iVar10 < (int)(iVar9 + uVar6)) {
      *(undefined1 *)((int)puVar2 + iVar9 + uVar6) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x148) == 0) && (iVar10 = *DAT_0043cb64, iVar10 != 0)) {
    uVar6 = (uint)*(char *)(iVar10 + 0x18);
    if (uVar6 - 9 < 0xd) {
      puVar3 = (undefined4 *)func_0010BAB4(0x450);
      iVar10 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        iVar10 = func_00468DB8(puVar3);
      }
      *(int *)(param_1 + 0x150) = iVar10;
      func_00465A64(iVar10,&local_d0,uVar5,param_4);
      iVar10 = *(int *)(param_1 + 0x150);
      *(int *)(param_1 + 0x148) = iVar10;
    }
    else {
      bVar12 = 4 < uVar6;
      bVar11 = uVar6 == 5;
      if (5 < uVar6) {
        bVar12 = 3 < uVar6 - 0x16;
        bVar11 = uVar6 - 0x16 == 4;
      }
      if ((bVar12 && !bVar11) || (uVar6 == 7 || uVar6 == 0x25)) goto LAB_0043cc84;
      puVar3 = (undefined4 *)func_0010BAB4(DAT_0043cdec);
      piVar4 = (int *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        piVar4 = func_0044BB94(puVar3);
      }
      *(int **)(param_1 + 0x154) = piVar4;
      func_0044AF94((int)piVar4);
      iVar10 = (int)*(char *)(iVar10 + 0x18);
      uVar6 = iVar10 - 2;
      bVar12 = 2 < uVar6;
      bVar11 = uVar6 == 3;
      if (3 < uVar6) {
        bVar12 = iVar10 != 0x16;
        bVar11 = iVar10 == 0x17;
      }
      if (bVar12 && !bVar11) {
        bVar12 = 1 < iVar10 - 0x18U;
        bVar11 = iVar10 - 0x18U == 2;
      }
      if (!bVar12 || bVar11) {
        func_0051AC40(*DAT_0043cdf0,(undefined4 *)(param_1 + 0x160));
      }
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x154);
      puVar3 = (undefined4 *)func_0010BAB4(DAT_0043cdf4);
      iVar10 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        iVar10 = func_002C0FA4(puVar3);
      }
      *(int *)(param_1 + 0x15c) = iVar10;
      func_004B948C(param_1,iVar10);
      iVar10 = *(int *)(param_1 + 0x148);
    }
    if ((iVar10 != 0) &&
       ((uVar6 = (uint)*(char *)(param_1 + 0xd), uVar6 == 1 ||
        ((uVar6 == 3 && (*(char *)(param_1 + 0xe) == '\x03')))))) {
      cVar1 = *(char *)(iVar10 + 0xd);
      bVar11 = cVar1 == '\0';
      if (bVar11) {
        cVar1 = *(char *)(iVar10 + 0xe);
      }
      if (bVar11 && cVar1 == '\0') {
        bVar11 = uVar6 == 3;
        if (bVar11) {
          uVar6 = (uint)*(byte *)(param_1 + 0xe);
        }
        bVar12 = bVar11 && uVar6 == 3;
        if (bVar11 && uVar6 == 3) {
          bVar12 = *(char *)(param_1 + 0x78) == '\x04';
        }
        if ((!bVar12) && (*(char *)(param_1 + 0x78) != '\x05')) {
          *(undefined1 *)(iVar10 + 0xe) = 1;
        }
        func_004B948C(param_1,*(int *)(param_1 + 0x148));
      }
    }
  }
LAB_0043cc84:
  func_00478068(*(int *)(param_1 + 0x158));
  iVar10 = func_0055696C(*DAT_0043cdf8,0xf);
  pbVar7 = (byte *)(param_1 + 0x176);
  if (iVar10 == 0) {
    func_002BF2BC(*(int *)(param_1 + 0x120));
    *pbVar7 = *pbVar7 & 0xfe;
    fVar13 = DAT_0043ce00;
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x116) = 6;
    *(undefined2 *)(param_1 + 0x114) = 0;
    func_0043C520(param_1,fVar13);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x126) = 0xb;
    *(undefined2 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x136) = 0xf;
    *(undefined2 *)(param_1 + 0x134) = 0;
  }
  else {
    func_002BECAC(*(int *)(param_1 + 0x120),1);
    *pbVar7 = *pbVar7 | 1;
    fVar13 = DAT_0043cdfc;
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x116) = 7;
    *(undefined2 *)(param_1 + 0x114) = 0;
    func_0043C520(param_1,fVar13);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x126) = 9;
    *(undefined2 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x136) = 0xd;
    *(undefined2 *)(param_1 + 0x134) = 0;
  }
  fVar13 = DAT_0043ce04;
  func_002317C0((undefined2 *)(param_1 + 0x114),DAT_0043ce04);
  func_00231340((short *)(param_1 + 0x114));
  func_002317C0((undefined2 *)(param_1 + 0x124),fVar13);
  func_00231340((short *)(param_1 + 0x124));
  func_002317C0((undefined2 *)(param_1 + 0x134),fVar13);
  return func_00231340((short *)(param_1 + 0x134));
}

