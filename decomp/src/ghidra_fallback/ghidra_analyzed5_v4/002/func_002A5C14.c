#include "ghidra_types.h"

extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int func_00520EF0(int param_1,int *param_2);
extern undefined DAT_002a5d78;
extern int DAT_002a5d8c;
extern char s__SE_EN_DAMAGE_002a5d7b[];
extern undefined4 _DAT_002a5d78;

// USA 002A5C14 <- EU 002A5BF0 (Ghidra, non-matching)
// GLOBAL DAT_002a5d78 undefined
// GLOBAL DAT_002a5d8c int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint func_002A5C14(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  bVar5 = 0x1c < param_2;
  bVar3 = param_2 == 0x1d;
  piVar1 = param_1;
  if (!bVar3) {
    piVar1 = (int *)(param_2 & 0xff);
    bVar5 = (int *)0x1d < piVar1;
  }
  bVar4 = piVar1 == (int *)0x1e;
  if (!bVar3 && !bVar4) {
    piVar1 = (int *)((int)piVar1 + -0xe);
    bVar5 = (int *)0x2 < piVar1;
  }
  if (!bVar5 || ((bVar3 || bVar4) || piVar1 == (int *)0x3)) {
    if ((((*(byte *)((int)param_1 + 0xb92) < 3) && ((char)param_1[0x279] != '\r')) &&
        ((uint)param_1[0x2d5] < (uint)param_1[0x2d6])) && ((char)param_1[0x2e4] != '\0')) {
      return 0xe;
    }
    if (*(char *)(param_3 + 0x24) != '\n' && *(char *)(param_3 + 0x24) != '\t') {
      local_1c = s__SE_EN_DAMAGE_002a5d7b + 1;
      local_20 = DAT_002a5d8c;
      iVar6 = _DAT_002a5d78;
      iVar2 = func_00520EF0((int)param_1,&local_20);
      if (iVar2 != 1) {
        func_004FC244(param_1,(int *)param_1[0x10f],8,1,1);
        param_1[0x2ce] = iVar6;
      }
    }
  }
  else if ((4 < (param_2 & 0xff) - 5) && (param_2 != 3 && param_2 != 10)) {
    if (param_2 != 0x12) {
      param_1[0x168] = param_1[0x168] | 0x80;
      return param_2;
    }
    if (((*(byte *)((int)param_1 + 0xb92) < 3) && ((char)param_1[0x279] != '\r')) &&
       (((uint)param_1[0x2d5] < (uint)param_1[0x2d6] && ((char)param_1[0x2e4] != '\0')))) {
      return 0xe;
    }
    param_1[0x2ce] = _DAT_002a5d78;
    func_004FC244(param_1,(int *)param_1[0x10f],8,1,1);
    return 0;
  }
  return 0;
}

