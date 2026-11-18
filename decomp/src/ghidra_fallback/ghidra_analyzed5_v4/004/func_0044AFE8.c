#include "ghidra_types.h"

extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_0051ADD4(int param_1);
extern int *DAT_0044b0a8;
extern int DAT_0044b0ac;
extern undefined DAT_0044b0b0;

// USA 0044AFE8 <- EU 0044AFC0 (Ghidra, non-matching)
// GLOBAL DAT_0044b0a8 int *
// GLOBAL DAT_0044b0ac int
// GLOBAL DAT_0044b0b0 undefined

void func_0044AFE8(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int in_r3;
  int *piVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(undefined2 * *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 ((undefined2 *)(albw_frame + 0xc))
  #define local_16 (*(undefined2 *)(albw_frame + 0x2a))
  cVar2 = *(char *)(param_1 + 0x208);
  *(undefined1 *)(param_1 + 0x208) = 0;
  uVar3 = 0;
  do {
    if (uVar3 < *(uint *)(param_1 + 0x1ac)) {
      in_r3 = *(int *)(param_1 + 0x1b4);
      iVar4 = *(int *)(in_r3 + uVar3 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (*(char *)(iVar4 + 0x6c) == '\0') {
      *(char *)(param_1 + 0x208) = *(char *)(param_1 + 0x208) + '\x01';
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x14);
  iVar4 = func_0051ADD4(*DAT_0044b0a8);
  cVar1 = *(char *)(param_1 + 0x208) - (char)iVar4;
  iVar4 = (int)cVar1;
  bVar6 = iVar4 != cVar2;
  *(char *)(param_1 + 0x208) = cVar1;
  if (bVar6) {
    iVar4 = *(int *)(param_1 + 0x228);
  }
  if (bVar6 && iVar4 != 0) {
    local_3c = local_34;
    uStack_38 = 0x10;
    local_16 = 0;
    local_34[0] = 0;
    local_40 = DAT_0044b0ac;
    func_004994FC((int)&local_40,&DAT_0044b0b0,(int)*(char *)(param_1 + 0x208),in_r3);
    piVar5 = *(int **)(param_1 + 0x228);
    (**(code **)(local_40 + 8))(&local_40);
    (**(code **)(*piVar5 + 0x60))(piVar5,local_3c,0,2);
  }
  return;
}

