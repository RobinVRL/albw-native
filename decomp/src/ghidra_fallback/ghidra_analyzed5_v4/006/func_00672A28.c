#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004F4A68();
extern float func_004F944C(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int DAT_00672bf0;
extern int DAT_00672bf4;
extern int DAT_00672bf8;
extern int *DAT_00672bfc;
extern uint *DAT_00672c00;
extern undefined4 *DAT_00672c04;
extern undefined4 DAT_00672c08;
extern float DAT_00672c0c;

// USA 00672A28 <- EU 00672A00 (Ghidra, non-matching)
// GLOBAL DAT_00672bf0 int
// GLOBAL DAT_00672bf4 int
// GLOBAL DAT_00672bf8 int
// GLOBAL DAT_00672bfc int *
// GLOBAL DAT_00672c00 uint *
// GLOBAL DAT_00672c04 undefined4 *
// GLOBAL DAT_00672c08 undefined4
// GLOBAL DAT_00672c0c float

int func_00672A28(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  iVar2 = func_004F4A68(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 7U) != 0) ||
     (DAT_00672bf0 < *(int *)(param_2 + 8))) {
    fVar7 = func_004F944C();
    *(float *)(param_1 + 0x3e0) = fVar7;
  }
  if ((((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x78U) != 0) &&
      (*(int *)(param_2 + 8) < DAT_00672bf4)) || (*(int *)(param_2 + 8) < DAT_00672bf8)) {
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_2 + 0xc);
    cVar1 = *(char *)(param_1 + 0x98d);
    bVar6 = cVar1 != '\0';
    if (!bVar6) {
      cVar1 = *(char *)(param_1 + 0x910);
    }
    if (bVar6 || cVar1 != '\x01') {
      return iVar2;
    }
    iVar3 = func_004904CC(*(float *)(param_2 + 4),*(float *)(param_2 + 0xc));
    local_28 = ALBW_AS_F32((*(int *)(param_1 + 0x8dc) - iVar3));
    uVar4 = func_0058E2B8((int *)&local_28);
    if (0x5fffffff < uVar4) {
      *(undefined1 *)(param_1 + 0x98d) = 1;
      return iVar2;
    }
  }
  cVar1 = *(char *)(param_1 + 0x98d);
  bVar6 = cVar1 == '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x910);
  }
  if (bVar6 && cVar1 == '\x01') {
    puVar5 = (undefined4 *)func_0052FBA0(*DAT_00672bfc + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (((*DAT_00672c00 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00672c00), iVar3 != 0)) {
      *DAT_00672c04 = DAT_00672c08;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar5)(puVar5,DAT_00672c04), iVar3 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if ((puVar5 != (undefined4 *)0x0) &&
       (fStack_24 = ALBW_AS_F32(puVar5[0xf5]), *(float *)(param_1 + 0x3d4) - DAT_00672c0c <= fStack_24)) {
      local_28 = ALBW_AS_F32(puVar5[0xf4]);
      local_20 = ALBW_AS_F32(puVar5[0xf6]);
      func_00115C70(&local_28,&local_28,(float *)(param_1 + 0x3d0));
      iVar3 = func_004904CC(local_28,local_20);
      *(bool *)(param_1 + 0x98d) =
           iVar3 + 0x20000000U >> 0x1e == *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e;
    }
  }
  return iVar2;
}

