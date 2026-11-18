#include "ghidra_types.h"

extern int func_002B55C8(int param_1,int param_2);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_004EA17C(int param_1,int *param_2,undefined4 *param_3);
extern int func_00542D84(int param_1);
extern int DAT_003b3ab4;
extern int *DAT_003b3ab8;
extern char s_SE_PL_DASH_003b3aa8[];
extern char s_SE_SL_DASH_WAIT_003b3abc[];

// USA 003B3A00 <- EU 003B39DC (Ghidra, non-matching)
// GLOBAL DAT_003b3ab4 int
// GLOBAL DAT_003b3ab8 int *
// GLOBAL s_SE_PL_DASH_003b3aa8 string
// GLOBAL s_SE_SL_DASH_WAIT_003b3abc string

undefined4 func_003B3A00(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1[0x12] + 0xb3f) = 1;
  func_002B55C8(param_1[0x12],*(int *)(param_1[0x12] + 0xa20));
  bVar3 = func_00542D84(param_1[0x12]);
  piVar2 = DAT_003b3ab8;
  iVar1 = DAT_003b3ab4;
  if (bVar3) {
    func_003ABB24(*(int **)(param_1[0x12] + 0x93c),1,1);
  }
  else {
    local_14 = s_SE_PL_DASH_003b3aa8;
    local_18 = DAT_003b3ab4;
    func_004EA17C(*DAT_003b3ab8,&local_18,(undefined4 *)0x0);
    local_14 = s_SE_SL_DASH_WAIT_003b3abc;
    local_18 = iVar1;
    func_004EA17C(*piVar2,&local_18,(undefined4 *)0x0);
    puVar4 = (uint *)(**(code **)(*param_1 + 0xd4))(param_1);
    if (0x1d < *puVar4) {
      return (**(code **)(*param_1 + 0x138))(param_1,1);
    }
  }
  return 0;
}

