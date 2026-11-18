#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00189580(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4, int param_5);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_0058A7D4(void);
extern undefined4 DAT_003b2684;
extern int DAT_003b2688;
extern int DAT_003b268c;
extern int DAT_003b2690;
extern int DAT_003b2694;

// USA 003B25C8 <- EU 003B25A4 (Ghidra, non-matching)
// GLOBAL DAT_003b2684 undefined4
// GLOBAL DAT_003b2688 int
// GLOBAL DAT_003b268c int
// GLOBAL DAT_003b2690 int
// GLOBAL DAT_003b2694 int

void func_003B25C8(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x7f,10,1);
  uVar4 = DAT_003b2684;
  iVar1 = *(int *)(param_1 + 0x48);
  iVar5 = 0;
  *(undefined4 *)(iVar1 + 0xa2c) = DAT_003b2684;
  *(undefined4 *)(iVar1 + 0xa30) = uVar4;
  *(undefined4 *)(iVar1 + 0xa34) = uVar4;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0xb3f) = 1;
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(char *)(DAT_003b2688 + iVar1) == '\x01') {
    iVar5 = (int)*(char *)(DAT_003b268c + iVar1);
  }
  else if (*(char *)(DAT_003b2690 + iVar1) == '\x01') {
    iVar5 = (int)*(char *)(DAT_003b2694 + iVar1);
  }
  uStack_14 = *(undefined4 *)(iVar1 + 0x2cc);
  iVar1 = func_00189580((undefined4 *)(iVar1 + 0x3d0),*(undefined4 *)(iVar1 + 1000),1,&uStack_14,
                        iVar5 + 1);
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  if ((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x33) {
    uVar4 = 0;
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x2cc);
  }
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  return;
}

