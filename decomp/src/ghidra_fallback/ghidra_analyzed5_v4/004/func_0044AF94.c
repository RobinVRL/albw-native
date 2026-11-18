#include "ghidra_types.h"

extern int func_00446668(int param_1);
extern int func_00446EAC(int param_1);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_0051ADD4(int param_1);
extern int *DAT_0044b0a8;
extern int DAT_0044b0ac;
extern undefined DAT_0044b0b0;

// USA 0044AF94 <- EU 0044AF6C (Ghidra, non-matching)
// GLOBAL DAT_0044b0a8 int *
// GLOBAL DAT_0044b0ac int
// GLOBAL DAT_0044b0b0 undefined

void func_0044AF94(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_40 (*(int *)(albw_frame + 0x0))
  #define puStack_3c (*(undefined2 * *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define auStack_34 ((undefined2 *)(albw_frame + 0xc))
  #define uStack_16 (*(undefined2 *)(albw_frame + 0x2a))
  func_00446EAC(param_1);
  func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
  iVar5 = 0;
  func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
  *(undefined1 *)(param_1 + 0x294) = 1;
  func_00446668(param_1);
  cVar2 = *(char *)(param_1 + 0x208);
  *(undefined1 *)(param_1 + 0x208) = 0;
  uVar3 = 0;
  do {
    if (uVar3 < *(uint *)(param_1 + 0x1ac)) {
      iVar5 = *(int *)(param_1 + 0x1b4);
      iVar4 = *(int *)(iVar5 + uVar3 * 4);
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
  bVar7 = iVar4 != cVar2;
  *(char *)(param_1 + 0x208) = cVar1;
  if (bVar7) {
    iVar4 = *(int *)(param_1 + 0x228);
  }
  if (bVar7 && iVar4 != 0) {
    puStack_3c = auStack_34;
    uStack_38 = 0x10;
    uStack_16 = 0;
    auStack_34[0] = 0;
    iStack_40 = DAT_0044b0ac;
    func_004994FC((int)&iStack_40,&DAT_0044b0b0,(int)*(char *)(param_1 + 0x208),iVar5);
    piVar6 = *(int **)(param_1 + 0x228);
    (**(code **)(iStack_40 + 8))(&iStack_40);
    (**(code **)(*piVar6 + 0x60))(piVar6,puStack_3c,0,2);
  }
  return;
}

