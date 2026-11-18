#include "ghidra_types.h"

extern int func_001E692C(int param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BDBAC(int param_1,int param_2);
extern int func_004C06FC(int param_1,int param_2,int param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int *DAT_004bc780;
extern float DAT_004bc784;
extern int DAT_004bc788;
extern float DAT_004bc78c;

// USA 00243EC4 <- EU 00243EC4 (Ghidra, non-matching)
// GLOBAL DAT_004bc780 int *
// GLOBAL DAT_004bc784 float
// GLOBAL DAT_004bc788 int
// GLOBAL DAT_004bc78c float

undefined4 func_00243EC4(int param_1)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  float fVar5;
  
  func_004BC8D8(param_1);
  if (*(char *)(param_1 + 0x2d7) != '\0') {
    return 0;
  }
  func_001E692C(param_1);
  if (*(char *)(param_1 + 0x85a) == '\0') {
    if (*(char *)(param_1 + 0x857) == '\0') {
      func_004A879C(*DAT_004bc780,*(int *)(param_1 + 0x86c),3);
      uVar4 = 3;
    }
    else {
      func_004A7F00(*DAT_004bc780,*(int *)(param_1 + 0x86c),3);
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x85a) = uVar4;
  }
  if ((*(uint *)(param_1 + 0x8ac) & 0x40) == 0) {
    iVar2 = func_0054D89C(param_1,0);
    *(int *)(param_1 + 0x78c) = iVar2;
    func_004BDBAC(param_1,1);
  }
  (**(code **)(*(int *)param_1 + 0x94))(param_1);
  *(int *)(param_1 + 0x924) = *(int *)(param_1 + 0x840);
  puVar3 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0xc) +
                   *(int *)(param_1 + 0x840) * 0x40);
  *puVar3 = *puVar3 | 0x10;
  *(int *)(*(int *)(param_1 + 0x7a0) + 0x16c) = param_1 + 0x91c;
  if ((*(uint *)(param_1 + 0x8ac) & 0x400) == 0) {
    *(int *)(param_1 + 0x928) = *(int *)(param_1 + 0x844);
    puVar3 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0xc) +
                     *(int *)(param_1 + 0x844) * 0x40);
    *puVar3 = *puVar3 | 0x10;
    *(int *)(*(int *)(param_1 + 0x7a0) + 0x16c) = param_1 + 0x91c;
  }
  fVar1 = DAT_004bc784;
  fVar5 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
                     *(int *)(param_1 + 0x840) * 0x30 + 0x1c) - *(float *)(param_1 + 0x3d4);
  *(float *)(param_1 + 0x838) = fVar5;
  if (fVar5 < fVar1) {
    *(float *)(param_1 + 0x838) = fVar1;
  }
  else {
    if (DAT_004bc788 < (int)ALBW_AS_U32(fVar5)) {
      fVar5 = DAT_004bc78c;
    }
    *(float *)(param_1 + 0x838) = fVar5;
  }
  func_004C06FC(param_1,*(int *)(param_1 + 0x7a4),*(int *)(param_1 + 0x8fc));
  return func_004C06FC(param_1,*(int *)(param_1 + 0x7a8),*(int *)(param_1 + 0x900));
}

