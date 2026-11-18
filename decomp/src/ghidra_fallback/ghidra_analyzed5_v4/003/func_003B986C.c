#include "ghidra_types.h"

extern int func_002B5608(int param_1);
extern int func_003840A0(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern float DAT_003b9988;
extern char s_Kime2_003b998c[];

// USA 003B986C <- EU 003B9848 (Ghidra, non-matching)
// GLOBAL DAT_003b9988 float
// GLOBAL s_Kime2_003b998c string

void func_003B986C(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define aiStack_10 ((int *)(albw_frame + 0x0))
  *(undefined2 *)(*(int *)(param_1 + 0x48) + 0xaf4) = 2;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x918) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  bVar1 = func_003840A0(*(int *)(param_1 + 0x48) + 0x8c0,0x89);
  if (((!bVar1) && (bVar1 = func_003840A0(*(int *)(param_1 + 0x48) + 0x8c0,0x93), !bVar1)) &&
     (bVar1 = func_003840A0(*(int *)(param_1 + 0x48) + 0x8c0,0x94), !bVar1)) {
    return;
  }
  func_002B5608(*(int *)(param_1 + 0x48));
  bVar1 = func_003840A0(*(int *)(param_1 + 0x48) + 0x8c0,0x89);
  if (!bVar1) {
    return;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8dc) + 0x14);
  fVar3 = *(float *)(iVar2 + 0xc);
  if (*(float *)(iVar2 + 8) < fVar3) {
    if (((fVar3 < *(float *)(iVar2 + 0x14)) && (fVar3 < DAT_003b9988)) &&
       (DAT_003b9988 <= *(float *)(iVar2 + 0x14))) goto LAB_003b996c;
  }
  else if (DAT_003b9988 <= fVar3) {
    return;
  }
  if (*(float *)(iVar2 + 8) < DAT_003b9988) {
    return;
  }
LAB_003b996c:
  iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 0x344);
  if (iVar2 != 0) {
    func_004A1B9C(aiStack_10,iVar2,(uint *)s_Kime2_003b998c);
  }
  return;
}

