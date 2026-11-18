#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_00658C58(undefined4 *param_1,undefined1 param_2);
extern float DAT_00174ea8;
extern float DAT_00174eac;

// USA 00174DB4 <- EU 00174DB4 (Ghidra, non-matching)
// GLOBAL DAT_00174ea8 float
// GLOBAL DAT_00174eac float

void func_00174DB4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  func_00169A80(*(int **)(param_1 + 0x434),param_2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
  func_004CEAF0(*(int *)(param_1 + 0x430));
  fVar2 = DAT_00174ea8;
  if (*(int *)(param_1 + 0x43c) != 0) {
    local_30 = DAT_00174ea8;
    local_2c = *(float *)(*(int *)(param_1 + 0x43c) + 0x5c) * DAT_00174eac;
    local_28 = DAT_00174ea8;
    iVar1 = *(int *)(param_1 + 0x43c);
    func_00115C54(&local_24,(float *)(param_1 + 0x3d0),&local_30);
    *(float *)(iVar1 + 4) = local_24;
    *(undefined4 *)(iVar1 + 8) = uStack_20;
    *(undefined4 *)(iVar1 + 0xc) = uStack_1c;
    func_004356B4(*(int **)(param_1 + 0x43c));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x434) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < fVar2) {
      if (fVar2 < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    func_00658C58((undefined4 *)(param_1 + 0x40c),2);
  }
  return;
}

