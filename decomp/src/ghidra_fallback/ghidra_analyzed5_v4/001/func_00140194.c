#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0013FD5C(int *param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0034C8F0(uint *param_1,int param_2,int param_3);
extern int func_004FA8A0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_00140370;
extern int *DAT_00140374;
extern float DAT_00140378;
extern uint *DAT_0014037c;
extern undefined4 *DAT_00140380;
extern undefined4 DAT_00140384;
extern undefined DAT_00140388;
extern char s_SE_GoroIwa_BREAK_001403a8[];
extern char s__SE_GoroIwa_BREAK_HIT_ROCK_0014038b[];
extern undefined4 _DAT_00140388;

// USA 00140194 <- EU 00140194 (Ghidra, non-matching)
// GLOBAL DAT_00140370 int *
// GLOBAL DAT_00140374 int *
// GLOBAL DAT_00140378 float
// GLOBAL DAT_0014037c uint *
// GLOBAL DAT_00140380 undefined4 *
// GLOBAL DAT_00140384 undefined4
// GLOBAL DAT_00140388 undefined
// GLOBAL s_SE_GoroIwa_BREAK_001403a8 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00140194(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    return 0;
  }
  piVar4 = (int *)func_0052FBA0(*DAT_00140370 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  fVar3 = DAT_00140378;
  piVar2 = DAT_00140374;
  if (((piVar4 != (int *)0x0) && (piVar4[0xb4] != 0)) &&
     (*(int *)(piVar4[0xb4] + 8) == *DAT_00140374)) {
    if (((*DAT_0014037c & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0014037c), iVar5 != 0)) {
      *DAT_00140380 = DAT_00140384;
    }
    iVar5 = (**(code **)*piVar4)(piVar4,DAT_00140380);
    if (iVar5 == 0) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      func_0013FD5C(piVar4);
      func_0013FD5C(param_1);
      local_30 = ALBW_AS_F32(param_1[0xf4]) + (ALBW_AS_F32(piVar4[0xf4]) - ALBW_AS_F32(param_1[0xf4])) * ALBW_AS_F32(_DAT_00140388)
      ;
      local_2c = (char *)ALBW_PTR_BITS(ALBW_AS_F32(ALBW_PTR_BITS((ALBW_AS_F32(param_1[0xf5]) +
                         (ALBW_AS_F32(piVar4[0xf5]) - ALBW_AS_F32(param_1[0xf5])) * ALBW_AS_F32(_DAT_00140388)))));
      local_28 = ALBW_AS_F32(param_1[0xf6]) + (ALBW_AS_F32(piVar4[0xf6]) - ALBW_AS_F32(param_1[0xf6])) * ALBW_AS_F32(_DAT_00140388)
      ;
      local_1c = s__SE_GoroIwa_BREAK_HIT_ROCK_0014038b + 1;
      local_20 = fVar3;
      func_0014DBF4(param_1,(int *)&local_20,&local_30,0);
      return 1;
    }
  }
  if (((*(int *)(param_2 + 0x2c) == 0) || (iVar5 = func_00588BE4((int)param_1), iVar5 != *piVar2))
     || (cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1), cVar1 != '\b' && cVar1 != '\x0f')) {
    iVar5 = func_0034C8F0((uint *)param_1[0x108],param_1[0xe8],param_2);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = func_004FA8A0(param_2);
    if (iVar5 == 0) {
      return 0;
    }
  }
  else {
    func_0013FD5C(param_1);
    local_2c = s_SE_GoroIwa_BREAK_001403a8;
    local_30 = fVar3;
    func_00150A84(param_1,(int *)&local_30,0);
  }
  return 1;
}

