#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00161178(undefined4 *param_1);
extern int func_001DDCC4(int param_1,undefined1 param_2);
extern int func_00293F34(int param_1);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int func_0058A468(int param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00160850;
extern int DAT_00160854;
extern int *DAT_00160858;
extern undefined *DAT_0016085c;
extern int *DAT_001608a4;
extern int *DAT_001608a8;
extern int DAT_001608ac;
extern float DAT_001608b0;
extern char s_SE_EN_BOSS_LAST_DAMAGE_0016088c[];
extern char s_SE_EN_DAMAGE_0016087c[];
extern char s_SE_Medium_PL_ATTACK_MISS_00160860[];

// USA 00160534 <- EU 00160538 (Ghidra, non-matching)
// GLOBAL DAT_00160850 int
// GLOBAL DAT_00160854 int
// GLOBAL DAT_00160858 int *
// GLOBAL DAT_0016085c undefined *
// GLOBAL DAT_001608a4 int *
// GLOBAL DAT_001608a8 int *
// GLOBAL DAT_001608ac int
// GLOBAL DAT_001608b0 float
// GLOBAL s_SE_EN_BOSS_LAST_DAMAGE_0016088c string
// GLOBAL s_SE_EN_DAMAGE_0016087c string
// GLOBAL s_SE_Medium_PL_ATTACK_MISS_00160860 string

int func_00160534(int *param_1,int param_2,int param_3)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)((int)param_1 + 0xe4e) = 0;
  iVar4 = DAT_001608ac;
  iVar9 = DAT_00160850;
  if (param_2 == 3) {
    return 0;
  }
  uVar3 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
  iVar6 = -1;
  if (((uVar3 < 4) && (1 < uVar3)) && (-1 < (int)(uVar3 - 2))) {
    iVar4 = func_0058A468((int)param_1);
    func_004FC78C((int)param_1,(short)iVar4);
    func_0065836C(param_1 + 0x22f,0x16);
    iVar4 = DAT_00160854;
    param_1[0x38d] = param_1[0xf4];
    param_1[0x38e] = param_1[0xf5];
    param_1[0x38f] = param_1[0xf6];
    param_1[0x391] = 0xe;
    param_1[0x392] = iVar4;
    piVar2 = DAT_00160858;
    param_1[0x390] = 0;
    func_0052FD7C(*piVar2 + 0x3dbbc,DAT_0016085c,param_1);
    local_2c = s_SE_Medium_PL_ATTACK_MISS_00160860;
    local_30 = iVar9;
    func_00150A84(param_1,&local_30,0);
    puVar5 = func_00161178(param_1);
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    uVar3 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
    if ((uVar3 < 4) && (1 < uVar3)) {
      iVar6 = uVar3 - 2;
    }
    puVar5 = func_00161178(param_1);
    puVar5[0x3e6] = iVar6;
    return 0;
  }
  if (param_2 == 0) {
LAB_001606dc:
    if (*(char *)((int)param_1 + 0xf9d) == '\0') {
      if ((short)param_1[0x143] < 1) {
        param_1[0x19d] = 0x16;
        param_1[0x19e] = iVar4;
        param_1[0x19c] = 0;
        sVar1 = (short)param_1[0x142];
        goto joined_r0x001607c4;
      }
    }
    else {
      if (*(char *)((int)param_1 + 0xf9d) == '\x03') {
        iVar9 = DAT_001608ac;
        func_004FC78C((int)param_1,*(short *)((int)param_1 + 0xdee) + -0x10);
        param_1[0x19d] = 0x16;
        param_1[0x19e] = iVar9;
        param_1[0x19c] = 0;
        sVar1 = (short)param_1[0x142];
joined_r0x001607c4:
        if (sVar1 < 1) {
          func_0065836C(param_1 + 0x22f,0x14);
        }
        return 0;
      }
      fVar8 = (float)VectorSignedToFloat((int)(short)param_1[0x142] -
                                         (int)*(short *)((int)param_1 + 0xdee),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if (fVar8 <= DAT_001608b0) {
        fVar8 = -fVar8;
      }
      if (0xf < (short)(int)fVar8) {
        iVar9 = DAT_001608ac;
        func_004FC78C((int)param_1,*(short *)((int)param_1 + 0xdee) + -0x10);
        if ((short)param_1[0x142] == (short)param_1[0x143]) {
          param_1[0x19d] = 0x16;
          param_1[0x19e] = iVar9;
          param_1[0x19c] = 0;
          sVar1 = (short)param_1[0x142];
          goto joined_r0x001607c4;
        }
        *(undefined1 *)((int)param_1 + 0xf9d) = 3;
      }
    }
  }
  else {
    if (0 < (short)param_1[0x142]) {
      if (param_2 == 10) goto LAB_0016083c;
      goto LAB_001606dc;
    }
    local_2c = s_SE_EN_DAMAGE_0016087c;
    local_30 = DAT_00160850;
    func_001509A4((int)param_1,&local_30,0);
    local_2c = s_SE_EN_BOSS_LAST_DAMAGE_0016088c;
    local_30 = iVar9;
    func_00150A84(param_1,&local_30,0);
    func_00293F34(*DAT_001608a4);
    func_001DDCC4(*DAT_001608a8,0);
  }
  uVar3 = (uint)*(char *)(param_3 + 0x24);
  if (uVar3 != 10 && uVar3 != 0xb) {
    bVar7 = uVar3 != 9;
    if (bVar7) {
      uVar3 = (uint)*(byte *)(param_3 + 0x25);
    }
    if (bVar7 && uVar3 != 2) {
      param_1[0x168] = param_1[0x168] | 0x80;
      return param_2;
    }
  }
LAB_0016083c:
  *(undefined1 *)((int)param_1 + 0xe4e) = 1;
  return 0xf;
}

