// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0052E058(int param_1,float *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_00588EEC(undefined4 param_1,float *param_2,float fparam_0);
extern int *DAT_001db1cc;
extern float DAT_001db1d0;
extern undefined4 *DAT_001db1d4;
extern uint *DAT_001db1d8;
extern undefined4 *DAT_001db1dc;
extern undefined4 DAT_001db1e0;
extern int *DAT_001db1e4;
extern int DAT_001db1e8;
extern int *DAT_001db1ec;
extern int *DAT_001db1f0;
extern undefined4 DAT_001db1f4;
extern int *DAT_001db1f8;
extern int *DAT_001db1fc;
extern int *DAT_001db200;
extern int *DAT_001db204;
extern int *DAT_001db208;
extern int *DAT_001db20c;
extern int *DAT_001db210;
extern int *DAT_001db214;
extern int *DAT_001db218;
extern int *DAT_001db21c;

// USA 001DAEEC <- EU 001DAEEC (Ghidra, non-matching)
// GLOBAL DAT_001db1cc int *
// GLOBAL DAT_001db1d0 float
// GLOBAL DAT_001db1d4 undefined4 *
// GLOBAL DAT_001db1d8 uint *
// GLOBAL DAT_001db1dc undefined4 *
// GLOBAL DAT_001db1e0 undefined4
// GLOBAL DAT_001db1e4 int *
// GLOBAL DAT_001db1e8 int
// GLOBAL DAT_001db1ec int *
// GLOBAL DAT_001db1f0 int *
// GLOBAL DAT_001db1f4 undefined4
// GLOBAL DAT_001db1f8 int *
// GLOBAL DAT_001db1fc int *
// GLOBAL DAT_001db200 int *
// GLOBAL DAT_001db204 int *
// GLOBAL DAT_001db208 int *
// GLOBAL DAT_001db20c int *
// GLOBAL DAT_001db210 int *
// GLOBAL DAT_001db214 int *
// GLOBAL DAT_001db218 int *
// GLOBAL DAT_001db21c int *

/* WARNING: Type propagation algorithm not settling */

undefined4 func_001DAEEC(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xd80U) != 0) {
    return 1;
  }
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_001db1cc + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  bVar2 = func_00588EEC(*DAT_001db1d4,(float *)(param_1 + 0x109),DAT_001db1d0);
  if (!bVar2) {
    return 0;
  }
  if (((*DAT_001db1d8 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001db1d8), iVar4 != 0)) {
    *DAT_001db1dc = DAT_001db1e0;
  }
  (**(code **)*puVar3)(puVar3,DAT_001db1dc);
  iVar5 = func_00588BE4((int)puVar3);
  iVar4 = DAT_001db1e8;
  if (((iVar5 == *DAT_001db1e4) || (iVar5 == *DAT_001db1ec)) || (iVar5 == *DAT_001db1f0)) {
    bVar2 = func_0052E058((int)param_1,(float *)(param_2 + 0x3c));
    if (!bVar2) {
      return 0;
    }
    cVar1 = *(char *)((int)param_1 + 0x2d7);
    local_1c = DAT_001db1f4;
  }
  else if (((iVar5 == *DAT_001db1f8) || (iVar5 == *DAT_001db1fc)) ||
          ((iVar5 == *DAT_001db200 || (iVar5 == *DAT_001db204)))) {
    bVar2 = func_0052E058((int)param_1,(float *)(param_2 + 0x3c));
    if (!bVar2) {
      return 0;
    }
    cVar1 = *(char *)((int)param_1 + 0x2d7);
    local_1c = DAT_001db1f4;
  }
  else if ((iVar5 == *DAT_001db208) || (iVar5 == *DAT_001db20c)) {
    bVar2 = func_0052E058((int)param_1,(float *)(param_2 + 0x3c));
    if (!bVar2) {
      return 0;
    }
    cVar1 = *(char *)((int)param_1 + 0x2d7);
    local_1c = DAT_001db1f4;
  }
  else {
    if ((iVar5 == *DAT_001db210) || (iVar5 == *DAT_001db214)) {
      bVar2 = func_0052E058((int)param_1,(float *)(param_2 + 0x3c));
joined_r0x001db118:
      if (bVar2) {
        return 1;
      }
      return 0;
    }
    if ((iVar5 == *DAT_001db218) || (iVar5 == *DAT_001db21c)) {
      bVar2 = func_0052E058((int)param_1,(float *)(param_2 + 0x3c));
      if (!bVar2) {
        return 0;
      }
      cVar1 = *(char *)((int)param_1 + 0x2d7);
      local_1c = DAT_001db1f4;
    }
    else {
      if ((uint)param_1[0x103] < 6) {
        return 0;
      }
      if ((*(int *)(param_2 + 0x34) == 0) ||
         ((*(ushort *)(*(int *)(param_2 + 0x34) + 0x1a) & 0xff) == 0)) {
        bVar2 = func_0052E058((int)param_1,(float *)(param_2 + 0x3c));
        goto joined_r0x001db118;
      }
      cVar1 = *(char *)((int)param_1 + 0x2d7);
      local_1c = DAT_001db1f4;
    }
  }
  (void) local_1c;
  if (cVar1 == '\0') {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    local_20 = iVar4;
    func_00150A84(param_1,&local_20,0);
  }
  return 1;
}

