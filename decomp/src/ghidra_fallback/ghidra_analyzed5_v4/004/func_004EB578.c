#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004EBC10(int param_1,int *param_2);
extern int func_00688F58(undefined4 *param_1,int *param_2);
extern int DAT_004eb5bc;
extern char s_SE_PL_HIT_HEAD_004eb5ac[];

// USA 004EB578 <- EU 004EB550 (Ghidra, non-matching)
// GLOBAL DAT_004eb5bc int
// GLOBAL s_SE_PL_HIT_HEAD_004eb5ac string

void func_004EB578(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_60 ((int *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x50))
  #define local_c (*(char * *)(albw_frame + 0x54))
  if (*(int *)(param_1 + 0x58) != 0) {
    local_c = s_SE_PL_HIT_HEAD_004eb5ac;
    local_10 = DAT_004eb5bc;
    func_00688F58(aiStack_60,&local_10);
    func_004EBC10(param_1,aiStack_60);
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      func_00150A84(*(int **)(param_1 + 0x58),aiStack_60,0);
    }
  }
  return;
}

