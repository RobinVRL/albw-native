#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0036BE78();
extern int func_0036C09C(undefined4 param_1,uint param_2);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern int DAT_00226b98;
extern float DAT_00226b9c;
extern int DAT_00226ba0;
extern float DAT_00226bb8;
extern char s_SE_Togegoma_LAND_00226ba4[];

// USA 00226A6C <- EU 00226A6C (Ghidra, non-matching)
// GLOBAL DAT_00226b98 int
// GLOBAL DAT_00226b9c float
// GLOBAL DAT_00226ba0 int
// GLOBAL DAT_00226bb8 float
// GLOBAL s_SE_Togegoma_LAND_00226ba4 string

void func_00226A6C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar2 = param_1 + 0x123;
  func_0036BE78((int)piVar2);
  iVar3 = param_1[0x11a];
  if (iVar3 == 0x12) {
    param_1[0x1a8] = DAT_00226b98;
  }
  if (iVar3 < 0x12) {
    fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x1a8] = (int)ALBW_AS_U32((fVar4 * DAT_00226b9c));
  }
  else if (iVar3 == 0x12) goto LAB_00226b30;
  iVar1 = DAT_00226ba0;
  if (iVar3 == 0x14) {
    local_1c = s_SE_Togegoma_LAND_00226ba4;
    local_20 = DAT_00226ba0;
    func_00150A84(param_1,&local_20,0);
    func_0036C09C(piVar2,2);
  }
  if (param_1[0x11a] == 0x46) {
    local_1c = s_SE_Togegoma_LAND_00226ba4;
    local_20 = iVar1;
    func_00150A84(param_1,&local_20,0);
    func_0036C09C(piVar2,2);
  }
LAB_00226b30:
  iVar3 = *(int *)(param_1[0x1a3] + 0x14);
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    if (*(float *)(iVar3 + 0x10) < DAT_00226bb8) {
      if (DAT_00226bb8 < *(float *)(iVar3 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar3 + 8) != *(float *)(iVar3 + 0x14)) {
      return;
    }
    func_0065E774(param_1 + 0x11a,3);
  }
  return;
}

