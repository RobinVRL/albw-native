// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004C0FF8(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004C1088(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00556E64(int param_1);
extern int func_00583B1C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006356F4(int param_1,int param_2,undefined1 param_3);
extern float DAT_004dcf94;
extern int DAT_004dcf98;
extern int *DAT_004dcf9c;
extern float DAT_004dcfa0;
extern float DAT_004dcfa4;
extern float DAT_004dcfa8;
extern float DAT_004dcfac;
extern float DAT_004dcfb0;

// USA 004DCE20 <- EU 004DCDF8 (Ghidra, non-matching)
// GLOBAL DAT_004dcf94 float
// GLOBAL DAT_004dcf98 int
// GLOBAL DAT_004dcf9c int *
// GLOBAL DAT_004dcfa0 float
// GLOBAL DAT_004dcfa4 float
// GLOBAL DAT_004dcfa8 float
// GLOBAL DAT_004dcfac float
// GLOBAL DAT_004dcfb0 float

undefined4 func_004DCE20(int *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fparam_1;
  
  if (*(char *)((int)param_1 + 0x9c3) == '\0') {
    bVar1 = func_00588BF0((int)param_1,0);
    if (bVar1) {
      *(undefined1 *)((int)param_1 + 0x9c3) = 1;
      bVar1 = func_00588BF0((int)param_1,1);
      if (bVar1) {
LAB_004dceec:
        return func_006356F4((int)param_1,8,0);
      }
LAB_004dcf7c:
      return func_006356F4((int)param_1,6,0);
    }
  }
  else if (*(char *)((int)param_1 + 0x852) == '\x04') {
    func_004C0FF8((int)param_1,DAT_004dcf94,DAT_004dcfb0,DAT_004dcfac);
    iVar2 = func_00583B1C((int)param_1);
    if (iVar2 != 0) goto LAB_004dcf7c;
  }
  else {
    if (((*(char *)((int)param_1 + 0x852) == '\x02') && (param_1[0xfa] != 0)) &&
       (iVar2 = func_0051D2F4(param_1 + 0xfa,0,DAT_004dcf98 >> 1,DAT_004dcf98,DAT_004dcf94),
       iVar2 != 0)) {
      (**(code **)(*param_1 + 0xac))(param_1,6,0xffffffff);
    }
    bVar1 = func_00556E64(*DAT_004dcf9c);
    if (!bVar1) {
      fVar3 = DAT_004dcfa4;
      fparam_1 = DAT_004dcfa0;
      iVar2 = func_004C1088((int)param_1,0x80000000,DAT_004dcfa4,DAT_004dcfa0);
      if (iVar2 != 0) goto LAB_004dceec;
      iVar2 = func_004C1088((int)param_1,0x80000000,DAT_004dcfa8,fparam_1);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
        *(float *)(*(int *)(param_1[0x1eb] + 0x14) + 0x10) = fVar3;
      }
    }
  }
  return 0;
}

