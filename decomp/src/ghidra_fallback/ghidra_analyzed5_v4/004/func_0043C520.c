#include "ghidra_types.h"

extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0043c624;
extern float DAT_0043c634;
extern char s_B_Btn_00_0043c628[];
extern char s_W_Btn_00_0043c618[];

// USA 0043C520 <- EU 0043C500 (Ghidra, non-matching)
// GLOBAL DAT_0043c624 int
// GLOBAL DAT_0043c634 float
// GLOBAL s_B_Btn_00_0043c628 string
// GLOBAL s_W_Btn_00_0043c618 string

void func_0043C520(int param_1,float fparam_0)

{
  int iVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar2 = DAT_0043c624;
  local_1c = s_W_Btn_00_0043c618;
  local_20 = DAT_0043c624;
  iVar1 = func_005229AC(*(int **)(*(int *)(param_1 + 0x130) + 0x1c),&local_20);
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x3c) = fparam_0;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  local_1c = s_B_Btn_00_0043c628;
  local_20 = iVar2;
  iVar1 = func_005229AC(*(int **)(*(int *)(param_1 + 0x130) + 0x1c),&local_20);
  fVar3 = DAT_0043c634;
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x3c) = fparam_0 - DAT_0043c634;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  local_1c = s_W_Btn_00_0043c618;
  local_20 = iVar2;
  iVar1 = func_005229AC(*(int **)(*(int *)(param_1 + 0x140) + 0x1c),&local_20);
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x3c) = fparam_0;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  local_1c = s_B_Btn_00_0043c628;
  local_20 = iVar2;
  iVar2 = func_005229AC(*(int **)(*(int *)(param_1 + 0x140) + 0x1c),&local_20);
  if (iVar2 != 0) {
    *(float *)(iVar2 + 0x3c) = fparam_0 - fVar3;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  return;
}

