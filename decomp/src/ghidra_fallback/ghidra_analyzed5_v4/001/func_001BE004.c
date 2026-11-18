#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_004356B4(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_001be0fc;
extern undefined4 *DAT_001be100;
extern int DAT_001be104;
extern undefined4 DAT_001be108;
extern undefined DAT_001be10c;
extern int DAT_001be124;
extern char s___SE_BoardFall_DOWN_001be10e[];
extern char s_cf_001be10e[];
extern undefined4 _DAT_001be10c;

// USA 001BE004 <- EU 001BE004 (Ghidra, non-matching)
// GLOBAL DAT_001be0fc int *
// GLOBAL DAT_001be100 undefined4 *
// GLOBAL DAT_001be104 int
// GLOBAL DAT_001be108 undefined4
// GLOBAL DAT_001be10c undefined
// GLOBAL DAT_001be124 int
// GLOBAL s_cf_001be10e string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001BE004(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar2 = DAT_001be100;
  piVar1 = DAT_001be0fc;
  piVar4 = (int *)func_005841A8(*DAT_001be0fc,*DAT_001be100,*(int **)(DAT_001be104 + *DAT_001be0fc))
  ;
  if (*(int **)(*piVar1 + 0x3dbc8) != piVar4) {
    do {
      func_00230610(param_1[0x10e],*(undefined4 *)(*piVar4 + 0x2cc));
      piVar4 = (int *)func_005841A8(*piVar1,*puVar2,piVar4 + 1);
    } while (*(int **)(*piVar1 + 0x3dbc8) != piVar4);
  }
  *(undefined1 *)(param_1 + 0x11a) = 1;
  fVar3 = ALBW_AS_F32(_DAT_001be10c);
  *(undefined4 *)(*(int *)(param_1[0x10d] + 0x14) + 0x10) = DAT_001be108;
  fVar6 = ALBW_AS_F32(param_1[0xf5]);
  iVar5 = param_1[0x10f];
  iVar7 = param_1[0xf6];
  *(int *)(iVar5 + 4) = param_1[0xf4];
  *(float *)(iVar5 + 8) = fVar6 + fVar3;
  *(int *)(iVar5 + 0xc) = iVar7;
  func_004356B4((int *)param_1[0x10f]);
  local_20 = DAT_001be124;
  *(undefined1 *)(param_1[0x113] + 0x61) = 1;
  local_1c = s___SE_BoardFall_DOWN_001be10e + 2;
  return func_00150A84(param_1,&local_20,0);
}

