#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00383DF8(int param_1,int param_2);
extern int func_00384090(int param_1,int param_2);
extern int func_0038428C(int param_1,undefined2 param_2,int param_3);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int DAT_003b139c;
extern int DAT_003b13a0;
extern int DAT_003b13a4;
extern char s_SE_CrossOldMan_V_FALL_003b1384[];

// USA 003B1230 <- EU 003B120C (Ghidra, non-matching)
// GLOBAL DAT_003b139c int
// GLOBAL DAT_003b13a0 int
// GLOBAL DAT_003b13a4 int
// GLOBAL s_SE_CrossOldMan_V_FALL_003b1384 string

undefined4 func_003B1230(int param_1,int param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (param_2 - 0x15U < 8) {
    func_00384090(*(int *)(param_1 + 0x48) + 0x8c0,0);
    func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x42,10,1);
    if (**(char **)(*(int *)(param_1 + 0x48) + 0x8bc) != '\0') {
      local_1c = s_SE_CrossOldMan_V_FALL_003b1384;
      local_20 = DAT_003b139c;
      func_00150A84(*(int **)(param_1 + 0x48),&local_20,0);
    }
    if (0 < *(short *)(DAT_003b13a0 + *(int *)(param_1 + 0x48))) {
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x938) = 0;
    }
LAB_003b12b4:
    if (param_2 - 5U < 5) goto LAB_003b12cc;
  }
  else if (param_2 == 0xb) {
    func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x4e,10,1);
  }
  else {
    if (param_2 != 0xd) goto LAB_003b12b4;
    func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x4d,10,1);
  }
  if (1 < param_2 - 0x12U) {
    if (*(char *)(param_3 + 0x27) == '\0') {
      return 0;
    }
    return func_0038428C(*(int *)(param_1 + 0x48) + 0x8c0,0x3c,1);
  }
LAB_003b12cc:
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x936) = 1;
  func_00383DF8(*(int *)(param_1 + 0x48) + 0x8c0,0);
  iVar1 = *(int *)(param_1 + 0x48);
  *(undefined2 *)(DAT_003b13a4 + iVar1) = 0;
  return func_0038428C(iVar1 + 0x8c0,0,1);
}

