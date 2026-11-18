#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004262AC(undefined4 param_1);
extern int func_00519098(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0051A960(int param_1,int param_2);
extern int func_0051ABE4(int param_1,uint param_2,int *param_3,undefined1 *param_4);
extern int func_0051AD10(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined DAT_00463f60;
extern int DAT_00463f74;
extern int *DAT_00463f78;
extern char s_SE_S_COLECT_MSG_APPEAR_00463f90[];
extern char s_SE_S_COLECT_SELECT_00463f7c[];
extern char s__N_SelectBtn_00_00463f63[];
extern undefined4 _DAT_00463f60;

// USA 00463E98 <- EU 00463E70 (Ghidra, non-matching)
// GLOBAL DAT_00463f60 undefined
// GLOBAL DAT_00463f74 int
// GLOBAL DAT_00463f78 int *
// GLOBAL s_SE_S_COLECT_MSG_APPEAR_00463f90 string
// GLOBAL s_SE_S_COLECT_SELECT_00463f7c string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00463E98(int param_1,int *param_2,undefined4 param_3,undefined1 *param_4)

{
  float fparam_0;
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  if (*(char *)(param_1 + 0x55) == '\0') {
    func_00231448(param_1 + 0x20);
    func_00231448(param_1 + 0x2c);
    fparam_0 = ALBW_AS_F32(_DAT_00463f60);
    *(undefined2 *)(param_1 + 0x38) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x38),fparam_0);
  }
  iVar1 = DAT_00463f74;
  local_24 = s__N_SelectBtn_00_00463f63 + 1;
  local_28 = DAT_00463f74;
  iVar4 = func_005229AC(*(int **)(param_1 + 0x1c),&local_28);
  piVar2 = DAT_00463f78;
  func_0051A960(*DAT_00463f78,iVar4);
  func_00519098(*piVar2,extraout_r1,param_3,(int)param_4);
  local_24 = s_SE_S_COLECT_SELECT_00463f7c;
  local_28 = iVar1;
  func_00533078(param_1,&local_28,0);
  bVar3 = func_004262AC(*(undefined4 *)(param_1 + 0x50));
  if (bVar3) {
    func_0051ABE4(*piVar2,*(uint *)(param_1 + 0x50),param_2,param_4);
    local_1c = s_SE_S_COLECT_MSG_APPEAR_00463f90;
    local_20 = iVar1;
    return func_00533078(param_1,&local_20,0);
  }
  return func_0051AD10(*piVar2);
}

