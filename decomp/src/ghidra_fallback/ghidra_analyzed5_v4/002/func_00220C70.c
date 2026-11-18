#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0036C42C(int param_1);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern undefined4 DAT_00220efc;
extern int DAT_00220f00;
extern undefined4 DAT_00220f04;

// USA 00220C70 <- EU 00220C70 (Ghidra, non-matching)
// GLOBAL DAT_00220efc undefined4
// GLOBAL DAT_00220f00 int
// GLOBAL DAT_00220f04 undefined4

uint func_00220C70(int *param_1,uint param_2,int param_3)

{
  _Alignas(8) unsigned char albw_frame[0x30]; /* entry_sp - 0x30 .. entry_sp + 0x0 */
#define stack0xffffffd8 (*(undefined4 *)(albw_frame + 0x8))
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  if (((char)param_1[0x231] == '\x0f' || (char)param_1[0x231] == '\x10') &&
     ((short)param_1[0x142] < 1)) {
    func_004FC78C((int)param_1,1);
    *(undefined1 *)((int)param_1 + 0xafe) = 1;
  }
  iVar2 = DAT_00220f00;
  uVar3 = param_2 & 0xff;
  uVar4 = (param_2 & 0xff) - 0xe;
  bVar6 = 0x1d < uVar3;
  bVar5 = uVar3 == 0x1e;
  if (!bVar5) {
    bVar6 = 2 < uVar4;
  }
  cVar1 = *(char *)(param_3 + 0x24);
  if (!bVar6 || (bVar5 || uVar4 == 3)) {
    uVar3 = 1;
  }
  if (bVar6 && (!bVar5 && uVar4 != 3)) {
    uVar3 = 0;
  }
  if (((short)param_1[0x142] < 1) && (uVar3 != 0)) {
    param_1[0x167] = param_1[0x167] | 0x4000;
    func_0036C42C((int)(param_1 + 0x23a));
    return 0;
  }
  if (*(byte *)(param_1 + 0x239) < 2) {
    if ((char)param_1[0x2bf] == '\0') {
      uVar3 = (uint)(char)param_1[0x231];
      if (uVar3 != 0xf && uVar3 != 0x10) {
        bVar6 = uVar3 != 0x13;
        bVar5 = uVar3 != 0x14;
        if (bVar6 && bVar5) {
          uVar3 = (uint)*(byte *)(param_3 + 0x27);
        }
        if ((bVar6 && bVar5) && uVar3 != 0) {
          *(undefined1 *)(param_1 + 0x2bf) = 1;
          param_1[0x29e] = 100;
          param_1[0x29f] = iVar2;
          param_1[0x29d] = 0;
        }
      }
    }
    else {
      if ((uint)param_1[0x29e] <= (uint)param_1[0x29d]) {
        return 0x21;
      }
      param_1[0x29d] = param_1[0x29d] + 1;
    }
  }
  uVar3 = param_2 & 0xff;
  bVar6 = 0x1d < uVar3;
  if (uVar3 != 0x1e) {
    bVar6 = 2 < uVar4;
  }
  if ((bVar6 && (uVar3 != 0x1e && uVar4 != 3)) || ((short)param_1[0x142] < 1)) {
    if (cVar1 == '\n' || cVar1 == '\t') {
      func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
      return 0x21;
    }
    if (cVar1 == '\x10') {
      if ((char)param_1[0x231] == '\x0f' || (char)param_1[0x231] == '\x10') {
        return 0xe;
      }
    }
    else if (cVar1 == '\x02') {
      if ((char)param_1[0x231] == '\x0f' || (char)param_1[0x231] == '\x10') {
        return 0xe;
      }
    }
    else if (param_2 == 10) {
      cVar1 = (char)param_1[0x231];
      if (cVar1 == '\x0f' || cVar1 == '\x10') {
        return 0;
      }
      if (cVar1 == '\x13') {
        return 0;
      }
    }
    else {
      if (param_2 != 0xb) {
        if (param_2 == 3) {
          return 0;
        }
        return param_2;
      }
      if ((char)param_1[0x231] == '\x0f' || (char)param_1[0x231] == '\x10') {
        return 0xe;
      }
    }
  }
  else {
    cVar1 = (char)param_1[0x231];
    if ((cVar1 == '\x17') && (0x77 < param_1[0x2ac] - (int)(short)param_1[0x142])) {
      func_004FC78C((int)param_1,(short)param_1[0x2ac] + -0x78);
      return 0x21;
    }
    if (cVar1 == '\x0f' || cVar1 == '\x10') {
      return 0xe;
    }
  }
  func_00150A84(param_1,(int *)&stack0xffffffd8,0);
  return 0xe;
}

