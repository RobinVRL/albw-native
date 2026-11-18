#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DB90(void);
extern int func_0014D328(int param_1);
extern int func_0043B614(int param_1);
extern int func_0043BA8C(undefined4 *param_1);
extern int func_0043C870(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern int func_0043FC58(int param_1);
extern int func_004445BC(undefined4 *param_1);
extern int func_0044E87C(undefined4 *param_1);
extern int func_0045020C(undefined4 *param_1);
extern int func_00454A60(undefined4 *param_1);
extern int func_004552E0(undefined4 *param_1);
extern int func_0046081C(undefined4 *param_1);
extern int func_0047152C(undefined4 *param_1);
extern int func_00472090(undefined4 *param_1);
extern int func_00472C94(undefined4 *param_1);
extern int func_0047412C(int param_1);
extern int func_00474334(undefined4 *param_1);
extern int func_00480498(undefined4 *param_1);
extern int func_0048155C(undefined4 *param_1,int param_2);
extern int func_00481E90(undefined4 *param_1);
extern int func_00485748(int *param_1);
extern int func_00485A0C(undefined4 *param_1);
extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_004B083C(void);
extern int func_004B3B10(void);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_00503CA4(int param_1,uint param_2,int param_3);
extern int *DAT_0051a710;
extern undefined4 *DAT_0051a714;
extern undefined4 DAT_0051a724;
extern int *DAT_0051a728;
extern int *DAT_0051a754;
extern char s_UIMgrGameBtmShare_0051a72c[];
extern char s_UIMgrGameTopShare_0051a740[];
extern char s_UIMgrGame_0051a718[];

// USA 0051A350 <- EU 0051A328 (Ghidra, non-matching)
// GLOBAL DAT_0051a710 int *
// GLOBAL DAT_0051a714 undefined4 *
// GLOBAL DAT_0051a724 undefined4
// GLOBAL DAT_0051a728 int *
// GLOBAL DAT_0051a754 int *
// GLOBAL s_UIMgrGameBtmShare_0051a72c string
// GLOBAL s_UIMgrGameTopShare_0051a740 string
// GLOBAL s_UIMgrGame_0051a718 string

void func_0051A350(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  puVar2 = DAT_0051a714;
  if (*(char *)(*DAT_0051a710 + 0x25) != '\0') {
    return;
  }
  piVar5 = (int *)func_0010DB90();
  uVar3 = DAT_0051a724;
  local_34 = s_UIMgrGame_0051a718;
  uVar13 = 1;
  local_38 = DAT_0051a724;
  piVar6 = func_004A107C(0,(int)&local_38,piVar5,1,0);
  if (piVar6 == (int *)0x0) {
    iVar14 = 1;
  }
  else {
    iVar14 = func_0010983C(*puVar2,piVar6);
  }
  func_0043FC58(*(int *)(param_1 + 0xe4));
  piVar4 = DAT_0051a728;
  if ((*(char *)(*DAT_0051a728 + 0x18) != '\a' && *(char *)(*DAT_0051a728 + 0x18) != '%') &&
     (iVar7 = func_004B083C(), iVar7 == 0)) {
    local_2c = s_UIMgrGameBtmShare_0051a72c;
    local_30 = uVar3;
    piVar5 = func_0010B954(0x23000,(int)&local_30,(int *)0x0,1,0);
    *(int **)(param_1 + 0x50) = piVar5;
    *(int *)(param_1 + 0x4c) = param_1 + 0x5c;
    local_2c = s_UIMgrGameTopShare_0051a740;
    uVar13 = 1;
    piVar5 = (int *)0x0;
    local_30 = uVar3;
    piVar8 = func_0010B954(0x6000,(int)&local_30,(int *)0x0,1,0);
    *(int **)(param_1 + 0x6c) = piVar8;
    *(int *)(param_1 + 0x68) = param_1 + 0x78;
    puVar9 = (undefined4 *)func_0010BAB4(0x80);
    piVar8 = (int *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      piVar8 = func_0045020C(puVar9);
    }
    *(int **)(param_1 + 0xd8) = piVar8;
    func_004B9958((int)piVar8,4);
    puVar9 = (undefined4 *)func_0010BAB4(0xd4);
    piVar8 = (int *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      piVar8 = func_00472C94(puVar9);
    }
    *(int **)(param_1 + 0xdc) = piVar8;
    func_004B9958((int)piVar8,4);
    puVar9 = (undefined4 *)func_0010BAB4(0x128);
    piVar8 = (int *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      piVar8 = func_0046081C(puVar9);
    }
    *(int **)(param_1 + 0xe8) = piVar8;
    func_004B9958((int)piVar8,2);
    puVar9 = (undefined4 *)func_0010BAB4(0x98);
    piVar8 = (int *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      piVar8 = func_004445BC(puVar9);
    }
    *(int **)(param_1 + 0xf8) = piVar8;
    func_004B9958((int)piVar8,2);
  }
  piVar8 = DAT_0051a754;
  uVar10 = (uint)*(char *)(*piVar4 + 0x18);
  bVar16 = 4 < uVar10;
  bVar15 = uVar10 == 5;
  if (5 < uVar10) {
    bVar16 = 3 < uVar10 - 0x16;
    bVar15 = uVar10 - 0x16 == 4;
  }
  if (bVar16 && !bVar15) {
    if (uVar10 - 9 < 0xd) {
      piVar5 = (int *)0x0;
      func_00503CA4(*DAT_0051a754,5,0);
      puVar9 = (undefined4 *)func_0010BAB4(0x90);
      piVar8 = (int *)0x0;
      if (puVar9 != (undefined4 *)0x0) {
        piVar8 = func_00474334(puVar9);
      }
      *(int **)(param_1 + 0xfc) = piVar8;
      func_004B9958((int)piVar8,2);
      func_0047412C(*(int *)(param_1 + 0xfc));
      puVar9 = (undefined4 *)func_0010BAB4(0x90);
      piVar8 = (int *)0x0;
      if (puVar9 != (undefined4 *)0x0) {
        piVar8 = func_0043BA8C(puVar9);
      }
      *(int **)(param_1 + 0x100) = piVar8;
      func_004B9958((int)piVar8,2);
      if (*(char *)(param_1 + 0x33c) == '\0') {
        func_0043B614(*(int *)(param_1 + 0x100));
      }
    }
    else {
      iVar7 = func_004B083C();
      if (iVar7 == 0) {
        if ((*(char *)(*piVar4 + 0x18) == '\a') || (*(char *)(*piVar4 + 0x18) == '%')) {
          piVar5 = (int *)0x0;
          func_00503CA4(*piVar8,0xb,0);
        }
      }
      else {
        piVar5 = (int *)0x0;
        func_00503CA4(*piVar8,4,0);
        puVar9 = (undefined4 *)func_0010BAB4(0x80);
        piVar11 = (int *)0x0;
        if (puVar9 != (undefined4 *)0x0) {
          piVar11 = func_0047152C(puVar9);
        }
        *(int **)(param_1 + 0x104) = piVar11;
        func_004B9958((int)piVar11,2);
        puVar12 = (undefined4 *)func_0010BAB4(0xb8);
        puVar9 = (undefined4 *)0x0;
        if (puVar12 != (undefined4 *)0x0) {
          puVar9 = func_00485A0C(puVar12);
        }
        *(undefined4 **)(param_1 + 0x8c) = puVar9;
        func_004B9958((int)puVar9,4);
        func_00485748(*(int **)(param_1 + 0x8c));
        bVar15 = func_004B3B10();
        if (bVar15) {
          piVar5 = (int *)0x0;
          func_00503CA4(*piVar8,10,0);
        }
      }
    }
    goto LAB_0051a8c8;
  }
  func_00503CA4(*DAT_0051a754,7,0);
  puVar9 = (undefined4 *)func_0010BAB4(0xdc);
  piVar5 = (int *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar5 = func_004552E0(puVar9);
  }
  *(int **)(param_1 + 0xb0) = piVar5;
  func_004B9958((int)piVar5,4);
  uVar10 = 0;
  do {
    puVar9 = (undefined4 *)func_0010BAB4(0x94);
    if (puVar9 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = func_00481E90(puVar9);
    }
    puVar9 = (undefined4 *)(param_1 + 0xb4);
    if (uVar10 < 8) {
      puVar9 = puVar9 + uVar10;
    }
    *puVar9 = piVar5;
    piVar5 = (int *)(param_1 + 0xb4);
    if (uVar10 < 8) {
      piVar5 = piVar5 + uVar10;
    }
    func_004B9958(*piVar5,4);
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 8);
  puVar9 = (undefined4 *)func_0010BAB4(0x98);
  piVar5 = (int *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar5 = func_00454A60(puVar9);
  }
  *(int **)(param_1 + 0xd4) = piVar5;
  func_004B9958((int)piVar5,4);
  puVar9 = (undefined4 *)func_0010BAB4(0x108);
  piVar5 = (int *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar5 = func_00472090(puVar9);
  }
  *(int **)(param_1 + 0xa0) = piVar5;
  func_004B9958((int)piVar5,4);
  uVar10 = 0;
  do {
    puVar9 = (undefined4 *)func_0010BAB4(0x130);
    if (puVar9 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = func_0044E87C(puVar9);
    }
    puVar9 = (undefined4 *)(param_1 + 0xa4);
    if (uVar10 < 3) {
      puVar9 = puVar9 + uVar10;
    }
    *puVar9 = piVar5;
    piVar5 = (int *)(param_1 + 0xa4);
    if (uVar10 < 3) {
      piVar5 = piVar5 + uVar10;
    }
    func_004B9958(*piVar5,4);
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 3);
  uVar10 = 0;
  do {
    puVar9 = (undefined4 *)func_0010BAB4(0x74);
    if (puVar9 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = func_0048155C(puVar9,uVar10 & 0xff);
    }
    puVar9 = (undefined4 *)(param_1 + 0x90);
    if (uVar10 < 4) {
      puVar9 = puVar9 + uVar10;
    }
    *puVar9 = piVar5;
    piVar5 = (int *)(param_1 + 0x90);
    if (uVar10 < 4) {
      piVar5 = piVar5 + uVar10;
    }
    func_004B9958(*piVar5,4);
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 4);
  cVar1 = *(char *)(*piVar4 + 0x18);
  if (cVar1 == '\n') {
LAB_0051a7d8:
    piVar5 = (int *)0x0;
    func_00503CA4(*piVar8,9,0);
  }
  else {
    if (cVar1 < '\v') {
      if ((cVar1 == '\0' || cVar1 == '\x02') || (cVar1 == '\x04' || cVar1 == '\t'))
      goto LAB_0051a7d8;
    }
    else if ((cVar1 == '\v' || cVar1 == '\f') || (cVar1 == '\x12' || cVar1 == '\x16'))
    goto LAB_0051a7d8;
    piVar5 = (int *)0x0;
    func_00503CA4(*piVar8,3,0);
  }
  if ((int)*(char *)(*piVar4 + 0x18) - 0x18U < 3) {
    piVar5 = (int *)0x0;
    func_00503CA4(*piVar8,5,0);
    puVar9 = (undefined4 *)func_0010BAB4(0x90);
    piVar8 = (int *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      piVar8 = func_00474334(puVar9);
    }
    *(int **)(param_1 + 0xfc) = piVar8;
    func_004B9958((int)piVar8,2);
    func_0047412C(*(int *)(param_1 + 0xfc));
  }
LAB_0051a8c8:
  puVar9 = (undefined4 *)func_0010BAB4(0xd4);
  piVar8 = (int *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    piVar8 = func_00480498(puVar9);
  }
  *(int **)(param_1 + 0x10c) = piVar8;
  uVar10 = *(byte *)(param_1 + 0x340) & 0xfffffffd;
  *(char *)(param_1 + 0x340) = (char)uVar10;
  if (*(char *)(*piVar4 + 0x18) != '\a' && *(char *)(*piVar4 + 0x18) != '%') {
    func_0043C870(*(int *)(param_1 + 0x80),uVar10,piVar5,uVar13);
  }
  func_0014D328(*(int *)(param_1 + 300));
  (**(code **)(*piVar6 + 0x14))(piVar6);
  if (iVar14 != 1) {
    func_0010983C(*puVar2,iVar14);
  }
  return;
}

