#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_003249B4(int param_1);
extern int func_00453C78(int param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004C6B5C(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int iRam0023e62c;
extern undefined4 *puRam0023e610;
extern int *DAT_0023e60c;
extern char s_SE_CrossBoard_DISAPPEAR_0023e614[];

// USA 0023E570 <- EU 0023E570 (Ghidra, non-matching)
// GLOBAL DAT_0023e60c int *
// GLOBAL UNK_0023e610 undefined4 *
// GLOBAL UNK_0023e62c int
// GLOBAL s_SE_CrossBoard_DISAPPEAR_0023e614 string

undefined4 func_0023E570(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_0023e60c;
  *(undefined1 *)(param_1 + 2000) = 0;
  if (*piVar1 != 0) {
    func_004C6B5C(*piVar1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x7b0) + 0x44) = 0;
  func_004CF478(*(int *)(param_1 + 0x7c4),0);
  func_00151148(*(int *)(param_1 + 0x7cc),0);
  func_004A8304(*puRam0023e610,*(int *)(param_1 + 0x7b0));
  func_003249B4(param_1);
  if (*(int *)(param_1 + 0x7d4) != 0) {
    func_00453C78(*(int *)(param_1 + 0x7d4));
  }
  pcStack_14 = s_SE_CrossBoard_DISAPPEAR_0023e614;
  iStack_18 = iRam0023e62c;
  return func_00150A84((int *)param_1,&iStack_18,0);
}

