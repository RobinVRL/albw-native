#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern float DAT_0035a040;
extern float DAT_0035a044;
extern float DAT_0035a048;

// USA 00359F80 <- EU 00359F5C (Ghidra, non-matching)
// GLOBAL DAT_0035a040 float
// GLOBAL DAT_0035a044 float
// GLOBAL DAT_0035a048 float

void func_00359F80(int param_1,float fparam_0)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  uVar4 = 0;
  uVar5 = VectorFloatToUnsigned(fparam_0 * DAT_0035a040,3);
  uVar6 = (ulonglong)(uint)ALBW_AS_U32(((DAT_0035a044 - fparam_0) * DAT_0035a048));
  uVar1 = *(uint *)(param_1 + 0x604);
  if (0 < (int)uVar1) {
    do {
      if (uVar4 < uVar1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x60c) + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      puVar3 = (undefined4 *)func_00584CA8(iVar2,*(int *)(param_1 + 0x634),3);
      local_20 = CONCAT13((char)uVar5,(int3)*puVar3);
      if (uVar4 < *(uint *)(param_1 + 0x604)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x60c) + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_004CF5DC(iVar2,*(int *)(param_1 + 0x634),3,&local_20);
      if (uVar4 < *(uint *)(param_1 + 0x604)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x60c) + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar4 = uVar4 + 1;
      *(int *)(**(int **)(iVar2 + 0x20) + *(int *)(param_1 + 0x634) * 0x154 + 0x114) = (int)uVar6;
      uVar1 = *(uint *)(param_1 + 0x604);
    } while ((int)uVar4 < (int)uVar1);
  }
  return;
}

