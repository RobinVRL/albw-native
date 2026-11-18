#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014F0B0(int param_1);
extern int func_001507A8(int param_1,int param_2);
extern int func_004B06FC(int param_1);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_0052107C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00547AE8(int param_1);
extern int func_00588BE4(int param_1);
extern int DAT_002481c0;
extern uint DAT_002481c4;
extern int *DAT_002481c8;
extern int *DAT_002481cc;
extern int *DAT_002481d0;
extern int *DAT_002481d4;
extern int *DAT_002481d8;
extern int *DAT_002481dc;
extern int *DAT_002481e0;
extern uint *DAT_002481e4;
extern undefined4 *DAT_002481e8;
extern undefined4 DAT_002481ec;

// USA 00247F58 <- EU 00247F58 (Ghidra, non-matching)
// GLOBAL DAT_002481c0 int
// GLOBAL DAT_002481c4 uint
// GLOBAL DAT_002481c8 int *
// GLOBAL DAT_002481cc int *
// GLOBAL DAT_002481d0 int *
// GLOBAL DAT_002481d4 int *
// GLOBAL DAT_002481d8 int *
// GLOBAL DAT_002481dc int *
// GLOBAL DAT_002481e0 int *
// GLOBAL DAT_002481e4 uint *
// GLOBAL DAT_002481e8 undefined4 *
// GLOBAL DAT_002481ec undefined4

bool func_00247F58(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  puVar4 = (ushort *)func_004B06FC((*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
  if ((*puVar4 & 8) != 0) {
    return false;
  }
  if ((uint)(*(int *)(param_2 + 8) + DAT_002481c0) < DAT_002481c4) {
    *(undefined1 *)(param_1 + 0x4dc) = 1;
    func_00115D70(&local_24,(float *)(param_2 + 4),-*(float *)(param_2 + 0x1c));
    local_30 = local_24;
    uStack_2c = local_20;
    uStack_28 = uStack_1c;
    func_00115C70(&local_24,(float *)(param_1 + 0x3d0),&local_30);
    *(float *)(param_1 + 0x4c4) = local_24;
    *(undefined4 *)(param_1 + 0x4c8) = local_20;
    *(undefined4 *)(param_1 + 0x4cc) = uStack_1c;
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0xc);
  }
  puVar5 = (undefined4 *)func_0052FBA0(*DAT_002481c8 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar5 != (undefined4 *)0x0) {
    iVar6 = func_00588BE4((int)puVar5);
    if ((iVar6 == *DAT_002481cc) || (iVar6 == *DAT_002481d0)) {
      *(undefined1 *)(param_1 + 0x4c0) = 1;
      return false;
    }
    if (iVar6 == *DAT_002481d4) {
      return false;
    }
    if (iVar6 == *DAT_002481d8) {
      return false;
    }
    if (iVar6 == *DAT_002481dc) {
      return false;
    }
    if (iVar6 == *DAT_002481e0) {
      return false;
    }
    if (((*DAT_002481e4 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002481e4), iVar6 != 0)) {
      *DAT_002481e8 = DAT_002481ec;
    }
    iVar6 = (**(code **)*puVar5)(puVar5,DAT_002481e8);
    if (iVar6 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    if ((puVar5 != (undefined4 *)0x0) && (iVar6 = func_00547AE8((int)(puVar5 + 1)), iVar6 == 0)) {
      func_00520F54((int)puVar5,(float *)(param_1 + 0x4a4),param_1 + 0x3d0);
    }
  }
  func_0014F0B0(param_1);
  bVar2 = func_001507A8(param_1,param_2);
  if (bVar2) {
    bVar3 = func_0052107C(param_1);
    cVar1 = '\0';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x392);
    }
    if (bVar3 && cVar1 != '\f') {
      *(undefined1 *)(param_1 + 0x4c0) = 1;
      *(undefined1 *)(param_1 + 0x4c1) = 1;
      func_00115D70(&local_24,(float *)(param_2 + 4),-*(float *)(param_2 + 0x1c));
      local_30 = local_24;
      uStack_2c = local_20;
      uStack_28 = uStack_1c;
      func_00115C70(&local_24,(float *)(param_1 + 0x3d0),&local_30);
      *(undefined4 *)(param_1 + 0x4bc) = local_20;
      return true;
    }
  }
  return bVar2;
}

