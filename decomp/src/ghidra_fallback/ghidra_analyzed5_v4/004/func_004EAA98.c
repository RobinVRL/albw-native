#include "ghidra_types.h"

extern int func_0014E500(int *param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004EBC10(int param_1,int *param_2);
extern int func_00688F58(undefined4 *param_1,int *param_2);
extern int DAT_004eab00;
extern char s_SE_PL_JUMP_004eab04[];
extern char s_SE_PL_JUMP_COMMON_004eaaec[];

// USA 004EAA98 <- EU 004EAA70 (Ghidra, non-matching)
// GLOBAL DAT_004eab00 int
// GLOBAL s_SE_PL_JUMP_004eab04 string
// GLOBAL s_SE_PL_JUMP_COMMON_004eaaec string

void func_004EAA98(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_20 (*(int *)(albw_frame + 0x50))
  #define local_1c (*(char * *)(albw_frame + 0x54))
  #define local_18 (*(int *)(albw_frame + 0x58))
  #define local_14 (*(char * *)(albw_frame + 0x5c))
  iVar1 = DAT_004eab00;
  if (*(int *)(param_1 + 0x58) != 0) {
    local_1c = s_SE_PL_JUMP_COMMON_004eaaec;
    local_20 = DAT_004eab00;
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      func_0014E500(*(int **)(param_1 + 0x58),&local_20,0);
    }
    local_14 = s_SE_PL_JUMP_004eab04;
    local_18 = iVar1;
    func_00688F58(aiStack_70,&local_18);
    func_004EBC10(param_1,aiStack_70);
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      func_00150A84(*(int **)(param_1 + 0x58),aiStack_70,0);
    }
  }
  return;
}

