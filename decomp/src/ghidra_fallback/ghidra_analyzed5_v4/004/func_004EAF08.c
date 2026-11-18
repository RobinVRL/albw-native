#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int DAT_004eaf50;
extern char s_SE_OBJ_PL_LIFT_004eaf40[];
extern char s_SE_PV_LIFT_S_004eaf54[];

// USA 004EAF08 <- EU 004EAEE0 (Ghidra, non-matching)
// GLOBAL DAT_004eaf50 int
// GLOBAL s_SE_OBJ_PL_LIFT_004eaf40 string
// GLOBAL s_SE_PV_LIFT_S_004eaf54 string

void func_004EAF08(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_004eaf50;
  local_1c = s_SE_OBJ_PL_LIFT_004eaf40;
  local_20 = DAT_004eaf50;
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    func_00150A84(*(int **)(param_1 + 0x58),&local_20,0);
  }
  if (param_2 != 0) {
    local_14 = s_SE_PV_LIFT_S_004eaf54;
    local_18 = iVar1;
    func_004EAF8C(param_1,&local_18,0);
  }
  return;
}

