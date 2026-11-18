#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern float DAT_003acb74;
extern float DAT_003acb78;
extern float DAT_003acb7c;

// USA 003ACAB4 <- EU 003ACA90 (Ghidra, non-matching)
// GLOBAL DAT_003acb74 float
// GLOBAL DAT_003acb78 float
// GLOBAL DAT_003acb7c float

void func_003ACAB4(int param_1,float fparam_0)

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
  uVar5 = VectorFloatToUnsigned(fparam_0 * DAT_003acb74,3);
  uVar6 = (ulonglong)(uint)ALBW_AS_U32(((DAT_003acb78 - fparam_0) * DAT_003acb7c));
  uVar1 = *(uint *)(param_1 + 0x604);
  if (0 < (int)uVar1) {
    do {
      if (uVar4 < uVar1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x60c) + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      puVar3 = (undefined4 *)func_00584CA8(iVar2,*(int *)(param_1 + 0x630),3);
      local_20 = CONCAT13((char)uVar5,(int3)*puVar3);
      if (uVar4 < *(uint *)(param_1 + 0x604)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x60c) + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_004CF5DC(iVar2,*(int *)(param_1 + 0x630),3,&local_20);
      if (uVar4 < *(uint *)(param_1 + 0x604)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x60c) + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar4 = uVar4 + 1;
      *(int *)(**(int **)(iVar2 + 0x20) + *(int *)(param_1 + 0x630) * 0x154 + 0x114) = (int)uVar6;
      uVar1 = *(uint *)(param_1 + 0x604);
    } while ((int)uVar4 < (int)uVar1);
  }
  return;
}

