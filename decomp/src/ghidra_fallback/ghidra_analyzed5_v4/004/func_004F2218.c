#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern float func_004FB1F8(void);
extern int func_00521078(int param_1);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_00589F28(int param_1,float fparam_0);
extern int func_0058A880(int param_1);
extern int func_0066ACA4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004f2370;
extern undefined4 DAT_004f2374;
extern int DAT_004f2378;
extern float DAT_004f237c;
extern undefined4 DAT_004f2380;
extern float DAT_004f2384;

// USA 004F2218 <- EU 004F21F0 (Ghidra, non-matching)
// GLOBAL DAT_004f2370 int *
// GLOBAL DAT_004f2374 undefined4
// GLOBAL DAT_004f2378 int
// GLOBAL DAT_004f237c float
// GLOBAL DAT_004f2380 undefined4
// GLOBAL DAT_004f2384 float

undefined4 func_004F2218(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  float fVar6;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar3 = func_00588BE4(param_1);
  if ((iVar3 == *DAT_004f2370) && (iVar3 = func_0058A880(param_1), iVar3 != 0)) {
    local_1c = DAT_004f2374;
    local_20 = DAT_004f2378;
    uVar4 = func_00584C14(*(int *)(param_1 + 0x40c),&local_20);
    func_004CEA18(*(int *)(param_1 + 0x40c),0,uVar4);
  }
  fparam_0 = DAT_004f237c;
  if (*(float *)(param_1 + 0x914) <= DAT_004f237c) {
    *(undefined4 *)(param_1 + 0x904) = DAT_004f2380;
  }
  fVar6 = func_004FB1F8();
  fVar1 = DAT_004f2384;
  puVar5 = (undefined4 *)(param_1 + 0x8d4);
  fVar6 = DAT_004f2384 + (*(float *)(param_1 + 0x910) - *(float *)(param_1 + 0x908)) * fVar6;
  *(float *)(param_1 + 0x4f0) = fVar6;
  if (fVar6 < fVar1) {
    *(float *)(param_1 + 0x4f0) = fVar1;
  }
  if (((*(float *)(param_1 + 0x3d4) < *(float *)(param_1 + 0x910)) ||
      (bVar2 = func_00521078(param_1), !bVar2)) || (*(int *)(param_1 + 0x8d4) < 1)) {
    if ((*(short *)(param_1 + 0x2e) != 2) && (iVar3 = func_00589F28(param_1,fparam_0), iVar3 != 0))
    {
      if ((*(float *)(param_1 + 0x910) <= *(float *)(param_1 + 0x3d4)) &&
         (bVar2 = func_00521078(param_1), bVar2)) {
        return func_0066ACA4(puVar5,0);
      }
      return func_0066ACA4(puVar5,4);
    }
  }
  else {
    func_0066ACA4(puVar5,3);
  }
  return 0;
}

