#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 *puRam0016f6a0;
extern uint *DAT_0016f68c;
extern undefined4 DAT_0016f690;
extern int DAT_0016f694;
extern int DAT_0016f698;
extern int *DAT_0016f69c;

// USA 0016F56C <- EU 0016F56C (Ghidra, non-matching)
// GLOBAL DAT_0016f68c uint *
// GLOBAL DAT_0016f690 undefined4
// GLOBAL DAT_0016f694 int
// GLOBAL DAT_0016f698 int
// GLOBAL DAT_0016f69c int *
// GLOBAL UNK_0016f6a0 undefined4 *

void func_0016F56C(int *param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_20 ((int *)(albw_frame + 0x0))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  if (*(char *)(param_2 + 0x37) == '\0') {
    *(undefined1 *)(param_2 + 0x35) = 0x3c;
    if ((*(char *)(param_2 + 0x3b) != '\0') &&
       (DAT_0016f698 <
        (int)ALBW_AS_U32((*(float *)(*(int *)(*DAT_0016f69c + 0x1c) + 4) - *(float *)(param_2 + 0x30))))) {
      *(undefined1 *)(param_2 + 0x34) = 3;
      func_004CF478(*(int *)(param_2 + 0x20),0);
      func_004A8304(*puRam0016f6a0,*(int *)(param_2 + 0x24));
    }
  }
  else if (*(char *)(param_2 + 0x35) == '\0') {
    *(undefined1 *)(param_2 + 0x34) = 1;
    *(undefined1 *)(param_2 + 0x35) = 0x3c;
    if ((uint)*(byte *)(param_2 + 0x36) < (uint)param_1[0x184]) {
      iVar1 = *(int *)(param_1[0x186] + (uint)*(byte *)(param_2 + 0x36) * 4);
    }
    else {
      iVar1 = 0;
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      func_004A1B9C(aiStack_20,*(int *)(iVar1 + 0x24),DAT_0016f68c);
    }
    local_14 = DAT_0016f690;
    local_18 = DAT_0016f694;
    if ((uint)*(byte *)(param_2 + 0x36) < (uint)param_1[0x11e]) {
      iVar1 = *(int *)(param_1[0x120] + (uint)*(byte *)(param_2 + 0x36) * 4);
    }
    else {
      iVar1 = 0;
    }
    func_0014DBF4(param_1,&local_18,iVar1 + 4,0);
  }
  else {
    *(char *)(param_2 + 0x35) = *(char *)(param_2 + 0x35) + -1;
  }
  *(undefined1 *)(param_2 + 0x37) = 0;
  return;
}

