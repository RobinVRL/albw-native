#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004F4A68();
extern float func_004F944C(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int DAT_00674778;
extern int DAT_0067477c;
extern int DAT_00674780;
extern int *DAT_00674784;
extern uint *DAT_00674788;
extern undefined4 *DAT_0067478c;
extern undefined4 DAT_00674790;
extern float DAT_00674794;

// USA 006745B0 <- EU 00674588 (Ghidra, non-matching)
// GLOBAL DAT_00674778 int
// GLOBAL DAT_0067477c int
// GLOBAL DAT_00674780 int
// GLOBAL DAT_00674784 int *
// GLOBAL DAT_00674788 uint *
// GLOBAL DAT_0067478c undefined4 *
// GLOBAL DAT_00674790 undefined4
// GLOBAL DAT_00674794 float

int func_006745B0(int param_1,int param_2)

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
     (DAT_00674778 < *(int *)(param_2 + 8))) {
    fVar7 = func_004F944C();
    *(float *)(param_1 + 0x3e0) = fVar7;
  }
  if ((((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x78U) != 0) &&
      (*(int *)(param_2 + 8) < DAT_0067477c)) || (*(int *)(param_2 + 8) < DAT_00674780)) {
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
    puVar5 = (undefined4 *)func_0052FBA0(*DAT_00674784 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (((*DAT_00674788 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00674788), iVar3 != 0)) {
      *DAT_0067478c = DAT_00674790;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar5)(puVar5,DAT_0067478c), iVar3 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if ((puVar5 != (undefined4 *)0x0) &&
       (fStack_24 = ALBW_AS_F32(puVar5[0xf5]), *(float *)(param_1 + 0x3d4) - DAT_00674794 <= fStack_24)) {
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

